#pragma once

class IndexBuffer 
{
private:
    unsigned int m_RendererID;
    unsigned int m_count;
public:
    IndexBuffer(const unsigned int* data, unsigned int count);
    ~IndexBuffer();

    void bind();
    void unBind();

};