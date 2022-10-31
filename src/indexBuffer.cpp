#include "indexBuffer.h"
#include <GL/glew.h>

IndexBuffer::IndexBuffer(const void* data, unsigned int size)
{
    glGenBuffers(1, &m_RendererID);
    glBindBuffer(GL_ARRAY_BUFFER, m_RendererID);
    glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
}

IndexBuffer::~IndexBuffer()
{
    glDeleteBuffers(1, &m_RendererID);
}

void IndexBuffer::bind()
{
    glBindBuffer(GL_ARRAY_BUFFER, m_RendererID);
}

void IndexBuffer::unBind()
{
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}