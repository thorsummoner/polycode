
PyAutoFunction_Register(Image, explicit, 1, const);
PyAutoFunction_Register(loadImage, bool, 1, const);
PyAutoFunction_Register(loadPNG, bool, 1, const);
PyAutoFunction_Register(readTokens, TokenArray, 2, cha, const);
PyAutoFunction_RegisterVoid(freeTokens, 1, TokenArray);
PyAutoFunction_Register(loadHDR, bool, 1, const);
PyAutoFunction_Register(saveImage, bool, 1, const);
PyAutoFunction_Register(savePNG, bool, 1, const);
PyAutoFunction_RegisterVoid(pasteImage, 6, Imag, int, int, int, Number, Color);
PyAutoFunction_RegisterVoid(createEmpty, 2, int, int);
PyAutoFunction_RegisterVoid(fill, 1, Color);
PyAutoFunction_RegisterVoid(setPixel, 6, int, int, Number, Number, Number, Number);
PyAutoFunction_RegisterVoid(setPixel, 3, int, int, Color);
PyAutoFunction_Register(getPixel, Color, 2, int, int);
PyAutoFunction_RegisterVoid(swap, 2, in, in);
PyAutoFunction_RegisterVoid(drawLine, 5, int, int, int, int, Color);
PyAutoFunction_RegisterVoid(moveBrushTo, 2, int, int);
PyAutoFunction_RegisterVoid(moveBrush, 2, int, int);
PyAutoFunction_RegisterVoid(drawLineTo, 3, int, int, Color);
PyAutoFunction_RegisterVoid(fillRect, 5, int, int, int, int, Color);
PyAutoFunction_RegisterVoid(perlinNoise, 2, int, bool);
PyAutoFunction_RegisterVoid(fastBlur, 1, int);
PyAutoFunction_RegisterVoid(fastBlurVert, 1, int);
PyAutoFunction_RegisterVoid(fastBlurHor, 1, int);
PyAutoFunction_Register(getBrushX, int, 2, cons, in);
PyAutoFunction_RegisterVoid(premultiplyAlpha, 0);
PyAutoFunction_Register(convertFloatToHFloat, hfloat, 1, float);
PyAutoFunction_RegisterVoid(setPixelType, 1, int);
PyAutoFunction_RegisterVoid(transformCoordinates, 2, in, in);
PyAutoFunction_RegisterVoid(transformCoordinates, 4, in, in, in, in);

