//
//  Constants.h
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/21/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#ifndef __DigitalTextAnalysis__Constants__
#define __DigitalTextAnalysis__Constants__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "Chapter.h"

using namespace std;

//Words lists

//Words that relate to knighthood

const vector<string> caballeria = {
    "merced",
    "vuestra",
    "caballero",
    "caballeros",
    "tierra",
    "nación",
    "andante",
    "escudero",
    "caballo",
    "adelante",
    "andantes",
    "vuestro",
    "armas",
    "caballería",
    "castillo",
    "rey",
    "fuerza",
    "aventura",
    "batalla",
    "batallas",
    "sangre",
    "escudero",
    "escuderos",
    "lanza",
    "lanzas",
    "encantador",
    "encantadores",
    "enemigo",
    "enemigos"
};

//Words that are considered to be valued

const vector<string> valores = {
    "buen",
    "bien",
    "buena",
    "deseo",
    "voluntad",
    "alma",
    "razón",
    "corazón",
    "amor",
    "fama",
    "famoso",
    "fe",
    "juicio",
    "libertad",
    "honra",
    "deseos",
    "valeroso",
    "virtud",
    "ánimo",
    "valiente",
    "paz",
    "verdadera",
    "justicia",
    "intención",
    "posible",
    "gana",
    "españa",
    "remedio",
    "cristiano",
    "cristianos",
    "resolución"
};

//Words that have a negative connotation

const vector<string> mala = {
    "mal",
    "mala",
    "muerte",
    "pobre",
    "lágrimas",
    "sangre",
    "peligro",
    "daño",
    "dolor",
    "risa",
    "burla",
    "miedo",
    "temor",
    "desgracia",
    "duda"
};

//Words that have to do with perception and text

const vector<string> texto = {
    "sé",
    "saber",
    "sabía",
    "digo",
    "ojos",
    "vio",
    "ver",
    "dice",
    "decir",
    "cabeza",
    "cuenta",
    "contar",
    "replicó",
    "replicar",
    "parecer",
    "respondió",
    "responder",
    "razones",
    "razón",
    "diciendo",
    "decir",
    "decía",
    "voz",
    "rostro",
    "entender",
    "entendimiento",
    "viendo",
    "ver",
    "libros",
    "palabra",
    "libro",
    "palabras",
    "preguntó",
    "preguntar",
    "pregunta",
    "preguntas",
    "voces",
    "memoria",
    "oído",
    "oír",
    "lengua",
    "creer",
    "creo",
    "mirar",
    "cuento",
    "contar",
    "cuentos",
    "juicio",
    "pensamiento",
    "pensamientos",
    "pensar",
    "leer",
    "leído",
    "poesía",
};

//Taken from Voyant-Tools
const vector<string> stopwords = {
    "al",
    "alguna",
    "algunas",
    "alguno",
    "algunos",
    "algún",
    "ambos",
    "ampleamos",
    "ante",
    "antes",
    "aquel",
    "aquellas",
    "aquellos",
    "aqui",
    "arriba",
    "atras",
    "bajo",
    "bastante",
    "bien",
    "cada",
    "cierta",
    "ciertas",
    "ciertos",
    "como",
    "con",
    "conseguimos",
    "conseguir",
    "consigo",
    "consigue",
    "consiguen",
    "consigues",
    "cual",
    "cuando",
    "de",
    "del",
    "dentro",
    "donde",
    "dos",
    "el",
    "ellas",
    "ellos",
    "empleais",
    "emplean",
    "emplear",
    "empleas",
    "empleo",
    "en",
    "encima",
    "entonces",
    "entre",
    "era",
    "eramos",
    "eran",
    "eras",
    "eres",
    "es",
    "esta",
    "estaba",
    "estado",
    "estais",
    "estamos",
    "estan",
    "estoy",
    "fin",
    "fue",
    "fueron",
    "fui",
    "fuimos",
    "gueno",
    "ha",
    "hace",
    "haceis",
    "hacemos",
    "hacen",
    "hacer",
    "haces",
    "hago",
    "incluso",
    "intenta",
    "intentais",
    "intentamos",
    "intentan",
    "intentar",
    "intentas",
    "intento",
    "ir",
    "la",
    "largo",
    "las",
    "lo",
    "los",
    "mientras",
    "mio",
    "modo",
    "muchos",
    "muy",
    "nos",
    "nosotros",
    "o",
    "otro",
    "para",
    "pero",
    "podeis",
    "podemos",
    "poder",
    "podria",
    "podriais",
    "podriamos",
    "podrian",
    "podrias",
    "por",
    "por qué",
    "porque",
    "primero desde",
    "puede",
    "pueden",
    "puedo",
    "que",
    "quien",
    "sabe",
    "sabeis",
    "sabemos",
    "saben",
    "saber",
    "sabes",
    "se",
    "ser",
    "si",
    "siendo",
    "sin",
    "sobre",
    "sois",
    "solamente",
    "solo",
    "somos",
    "soy",
    "su",
    "sus",
    "también",
    "teneis",
    "tenemos",
    "tener",
    "tengo",
    "tiempo",
    "tiene",
    "tienen",
    "todo",
    "trabaja",
    "trabajais",
    "trabajamos",
    "trabajan",
    "trabajar",
    "trabajas",
    "trabajo",
    "tras",
    "tuyo",
    "ultimo",
    "un",
    "una",
    "unas",
    "uno",
    "unos",
    "usa",
    "usais",
    "usamos",
    "usan",
    "usar",
    "usas",
    "uso",
    "va",
    "vais",
    "valor",
    "vamos",
    "van",
    "vaya",
    "verdad",
    "verdadera cierto",
    "verdadero",
    "vosotras",
    "vosotros",
    "voy",
    "y",
    "yo"
};

#endif /* defined(__DigitalTextAnalysis__Constants__) */
