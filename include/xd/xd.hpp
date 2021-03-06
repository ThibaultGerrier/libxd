#ifndef XD_HPP
#define XD_HPP

#include "constants.hpp"
#include "pixels.hpp"
#include "utils.hpp"
#include "drawmode.hpp"
#include "mouse.hpp"
#include "keyboard.hpp"
#include "font.hpp"
#include "passthrough.hpp"
#include <glm/glm.hpp>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;
using namespace glm;

namespace xd {

extern int width, height, frameCount;
extern Pixels pixels;
extern Passthrough* passthrough;

int displayDensity();
float millis();
void size(int w, int h);

float random(float min, float max);
void randomSeed(unsigned int seed);

void loop();
void noLoop();
void pop();
void push();
void redraw();

void background(vec4 color);
void clear();
void ellipseMode(DrawMode);
void fill(vec4 color);
void noFill();
void noStroke();
void rectMode(DrawMode);
void stroke(vec4 color);
void strokeWeight(float weight);

void applyMatrix(float a, float b, float c, float d, float e, float f);
void resetMatrix();
void rotate(float angle);
void scale(float x, float y);
void translate(float x, float y);

void ellipse(float x, float y, float w, float h);
void image(Image* img, float x, float y, float w, float h);
void loadFont(Font& font);
void textFont(Font& font);
void textSize(float theSize);
void text(const string& str, float x, float y);
void line(float x1, float y1, float x2, float y2);
void point(float x, float y);
void rect(float x, float y, float w, float h);
void triangle(float x1, float y1, float x2, float y2, float x3, float y3);

void renderPass(RenderPass* thePass);

} // namespace xd

void setup();
void draw();
void destroy();

#endif /* XD_HPP */
