import pygame
import random

pygame.init()

# Set up game window
WIDTH = 288
HEIGHT = 512
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Flappy Bird")

# Load images
bg_image = pygame.image.load("wp6956942-flappy-bird-wallpapers.png").convert()
base_image = pygame.image.load("base.png").convert()
bird_images = [
    pygame.image.load("bird1.png").convert_alpha(),
    pygame.image.load("bird2.png").convert_alpha(),
    pygame.image.load("bird3.png").convert_alpha(),
]
pipe_image = pygame.image.load("pipe.png").convert_alpha()

# Define game variables
FPS = 60
clock = pygame.time.Clock()
score = 0
font = pygame.font.SysFont(None, 32)

# Define classes
class Bird(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.images = bird_images
        self.image = self.images[0]
        self.rect = self.image.get_rect(center=(50, HEIGHT//2))
        self.velocity = 0
        self.gravity = 0.5
        self.jump = -8

    def update(self):
        self.velocity += self.gravity
        self.rect.y += self.velocity
        if self.rect.bottom >= HEIGHT-90:
            self.rect.bottom = HEIGHT-90
            self.velocity = 0
        self.image = self.images[(pygame.time.get_ticks() // 150) % 3]

    def jump_up(self):
        self.velocity = self.jump

class Pipe(pygame.sprite.Sprite):
    def __init__(self, y):
        super().__init__()
        self.image = pipe_image
        self.rect = self.image.get_rect(midtop=(WIDTH+100, y))
        self.speed = -4

    def update(self):
        self.rect.x += self.speed
        if self.rect.right < 0:
            self.kill()

class Score(pygame.sprite.Sprite):
    def __init__(self, x, y):
        super().__init__()
        self.score = 0
        self.font = font
        self.color = (255, 255, 255)
        self.update_text()
        self.rect = self.image.get_rect(midtop=(x, y))

    def update(self):
        self.update_text()

    def update_text(self):
        self.image = self.font.render(f"Score: {self.score}", True, self.color)

# Create sprite groups
all_sprites = pygame.sprite.Group()
pipes = pygame.sprite.Group()
bird = Bird()
score_display = Score(WIDTH//2, 10)

# Add sprites to groups
all_sprites.add(bird)
all_sprites.add(score_display)

# Define functions
def spawn_pipe():
    gap = 140
    pipe_height = [200, 300, 400]
    y = random.choice(pipe_height)
    pipe_top = Pipe(y-gap-320)
    pipe_bottom = Pipe(y+gap)
    pipes.add(pipe_top)
    pipes.add(pipe_bottom)
    all_sprites.add(pipe_top)
    all_sprites.add(pipe_bottom)

def check_collision():
    if pygame.sprite.spritecollide(bird, pipes, False):
        return True
    if bird.rect.bottom >= HEIGHT-90 or bird.rect.top <= 0:
        return True
    return False

def update_score():
    global score
    if pygame.sprite.spritecollide(bird, pipes, False):
        score = 0
    else:
        for pipe in pipes:
            if pipe.rect.right < bird.rect.left and not pipe.scored:
                score += 1
                pipe.scored = True
       
