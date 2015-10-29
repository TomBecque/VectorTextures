#ifndef PLANEWINDOW_H
#define PLANEWINDOW_H

#include "openglwindow.h"
#include <QOpenGLShaderProgram>


class PlaneWindow : public OpenGLWindow
{
public:
    PlaneWindow();

    void initialize() Q_DECL_OVERRIDE;
    void render() Q_DECL_OVERRIDE;

private:
    GLuint loadShader(GLenum type, const char *source);

    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;

    QOpenGLShaderProgram *m_program;
    int m_frame;
};

#endif // PLANEWINDOW_H
