#version 460 core

layout(location = 0) in vec3 aPos;

uniform mat4 uLightSpaceMatrix;

void main() 
{
	gl_Position = uLightSpaceMatrix * vec4(aPos, 1.0);
}