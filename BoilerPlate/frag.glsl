#version 330 core

// Ouput data
out vec4 color;

in vec2 textureCoord;
in vec4 colorValue;

uniform sampler2D texture1;
uniform sampler2D texture2;

void main()
{
	color = texture(texture1, textureCoord) * colorValue;
}