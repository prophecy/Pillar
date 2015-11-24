#version 140

in vec2 LVertexPos2D; 

//uniform vec4 color = vec4(1.0, 0.0, 0.0, 1.0); // Color defined by program side
uniform float uVertexScale; // This is to modify shader color in realtime

out vec4 color;

void main() 
{
	color = vec4(LVertexPos2D.x + 0.5, LVertexPos2D.y + 0.5, 0.0, 1.0);
	gl_Position = vec4(LVertexPos2D.x * uVertexScale, LVertexPos2D.y, 0, 1);
}