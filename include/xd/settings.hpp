#ifndef SETTINGS_HPP
#define SETTINGS_HPP

#include "drawmode.hpp"
#include <xd/font.hpp>
#include <xd/opensans.hpp>
#include <glm/vec3.hpp>
#include <glm/mat4x4.hpp>

namespace xd {

class Settings {
public:
    glm::vec4 fillColor, strokeColor;
	int doFill, doStroke/*, doTexture*/;
	float strokeWeight;
	glm::mat4 modelMatrix;
	DrawMode rectMode;
	DrawMode ellipseMode;
    Font* font;
    float textSize;

    Settings()
        : fillColor(glm::vec4(1.0f, 1.0f, 1.0f, 1.0f))
        , strokeColor(glm::vec4(0.0f, 0.0f, 0.0f, 1.0f))
        , doFill(1)
        , doStroke(1)
        /*, doTexture(0)*/
        , strokeWeight(1.0f)
        , modelMatrix(glm::mat4(1.0f))
        , rectMode(CORNER)
        , ellipseMode(CENTER)
        , font(&opensans)
        , textSize(12.0f) {
    }
};

} // namespace xd

#endif /* SETTINGS_HPP */
