/*
 * Singleton que contém as variáveis globais da engine.
 *
 * Autor: Edson Alves
 * Data: 06/04/2015
 * Licença: LGPL. Sem copyright.
 */
#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include "exception.h"
#include "video.h"
#include "canvas.h"

class Environment
{
public:
    ~Environment();

    static Environment * get_instance() throw (Exception);
    static void release_instance();

    Video *video;
    Canvas *canvas;

private:
    Environment();
    void init() throw (Exception);
};

#endif
