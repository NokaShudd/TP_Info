cmake_minimum_required(VERSION 3.5.0)
project(TP VERSION 0.1.0 LANGUAGES C)

# add_executable(TP3 tp3/tp3.c)
# add_executable(TP4 tp4/tp4.c tp4/tp4_exo.h tp4/tp4_exo.c)
# add_executable(TP5 tp5/tp5.c tp5/tp5_exo.h tp5/tp5_exo.c)
# add_executable(TP6 tp6/tp6.c tp6/tp6_exo.h tp6/tp6_exo.c)
# add_executable(TP7 tp7/tp7.c tp7/tp7_exo.h tp7/tp7_exo.c)
# add_executable(TP8 tp8/tp8.c tp8/tp8_exo.h tp8/tp8_exo.c)
# add_executable(TP9 tp9/tp9.c tp9/tp9_exo.h tp9/tp9_exo.c)

add_executable(
    TP main.c tp3/tp3.c tp3/tp3.h tp4/tp4_exo.h tp4/tp4_exo.c tp5/tp5_exo.h tp5/tp5_exo.c tp6/tp6_exo.h tp6/tp6_exo.c
    tp7/tp7_exo.h tp7/tp7_exo.c tp8/tp8_exo.h tp8/tp8_exo.c tp9/tp9_exo.h tp9/tp9_exo.c
)