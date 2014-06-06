// Copyright 2014 Huns De Troyes

#ifndef SERVER_INCLUDE_RENDU_H_
#define SERVER_INCLUDE_RENDU_H_

#include <math.h>

#include "types.h"
#include "nacl.h"
#include "textures.h"
#include "calc.h"

void GameDraw(PSContext2D_t* ctx,
			  Jeu state);
void DrawTexture(PSContext2D_t* ctx,
				 struct PP_Point origin,
				 const Texture* tex);
void DrawCircle(PSContext2D_t* ctx,
				struct PP_FloatPoint center,
				int32_t radius,
				uint32_t color);
void DrawRect(PSContext2D_t* ctx,
			  struct PP_Rect rect,
			  uint32_t color);

#endif  // SERVER_INCLUDE_RENDU_H_
