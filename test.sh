# ARG="410 92 264 314 35 303 431 60 272 24 311 310 454 214 413 226 115 490 166 32 312 289 275 473 266 68 288 114 475 129 293 38 137 348 203 458 86 191 295 103 46 368 287 356 211 466 116 222 146 63 47 270 44 149 471 359 456 56 14 258 136 96 488 12 477 21 88 333 399 378 5 174 277 343 304 286 51 108 369 18 27 320 98 139 143 172 81 370 404 479 210 249 122 467 75 16 261 322 152 170 472 238 232 194 43 357 4 396 158 281 485 271 42 37 15 242 336 255 254 195 439 113 263 176 131 332 198 373 121 432 480 434 213 192 419 34 306 451 334 199 486 212 284 422 260 209 79 499 450 22 282 300 173 235 353 85 225 444 500 197 349 385 441 66 256 380 435 292 329 133 201 408 164 106 494 465 307 251 443 427 40 269 111 125 25 70 339 102 474 327 452 185 183 354 124 184 268 224 62 344 440 71 328 330 308 498 69 291 319 161 262 420 345 483 367 29 449 495 237 231 338 496 484 223 379 200 120 65 31 157 107 411 383 321 23 181 316 112 219 446 298 257 171 61 215 476 239 361 159 469 188 126 392 236 371 247 74 162 105 423 30 7 265 337 221 163 134 252 233 412 229 110 442 426 244 351 305 147 177 150 6 84 10 151 144 299 78 294 182 64 430 491 9 216 17 117 274 217 99 301 415 204 390 243 93 429 389 179 363 228 205 67 355 155 366 400 89 331 394 455 464 318 72 168 468 350 317 437 386 417 462 87 90 403 19 424 82 128 141 296 33 388 54 445 358 50 418 220 193 377 230 11 97 49 324 340 365 461 8 73 391 95 135 279 447 407 285 169 148 290 208 463 436 91 189 48 342 39 309 364 283 453 59 459 77 387 127 302 154 401 492 416 53 26 398 341 100 80 119 36 123 186 160 253 489 493 13 402 58 326 118 478 3 140 248 259 250 395 421 45 405 481 246 375 156 482 376 428 207 109 267 280 52 153 360 227 325 352 2 165 393 278 323 57 384 41 335 347 273 425 460 76 187 297 313 55 202 138 315 382 104 276 362 180 414 142 240 94 178 20 206 346 175 409 234 241 397 470 1 190 145 28 448 438 132 457 130 372 218 433 497 487 101 245 406 374 381 196 167 83";./push_swap $ARG | ./checker_linux $ARG;valgrind --leak-check=full ./push_swap $ARG >out500

# # ARG="";./push_swap $ARG | ./checker_linux $ARG;valgrind --leak-check=full ./push_swap $ARG >out100
# ARG="2 68 86 6 66 23 7 79 65 30 28 5 50 25 78 37 46 69 75 52 55 97 94 87 63 42 40 16 26 21 38 14 19 32 98 72 11 80 90 13 31 58 73 89 95 48 84 56 36 15 60 88 34 64 1 93 29 12 67 17 71 3 9 33 20 77 54 47 96 10 82 59 45 70 85 81 39 92 27 41 62 4 22 18 51 99 8 61 100 74 24 57 49 53 91 43 35 76 83 44";./push_swap $ARG | ./checker_linux $ARG;valgrind --leak-check=full ./push_swap $ARG >out100

#!/bin/bash

echo -e "\n\ncheck error\n\n"
valgrind --leak-check=full ./push_swap a b 1
valgrind --leak-check=full ./push_swap 5a 6 7 8 9 10
valgrind --leak-check=full ./push_swap 5 6 7 8 9 9
valgrind --leak-check=full ./push_swap 2147483648 12 2323 14243 23423

echo -e "\n\nno result\n\n"
echo -e "\n\ntest1\n\n"
valgrind --leak-check=full --show-leak-kinds=all --show-reachable=yes ./push_swap 
echo -e "\n\ntest2\n\n"
valgrind --leak-check=full --show-leak-kinds=all --show-reachable=yes ./push_swap ""
echo -e "\n\ntest3\n\n"
valgrind --leak-check=full --show-leak-kinds=all --show-reachable=yes ./push_swap ''
echo -e "\n\ntest4\n\n"
valgrind --leak-check=full ./push_swap "42"
echo -e "\n\ntest5 ""\n\n"
valgrind --leak-check=full --show-reachable=yes ./push_swap "2 3"
echo -e "\n\ntest6 ""\n\n"
valgrind --leak-check=full --show-leak-kinds=all ./push_swap "0 1 2 3"
echo -e "\n\ntest7 ""\n\n"
valgrind --leak-check=full  ./push_swap 0 1 2 3 4 5 6 7 8 9
echo -e "\n\ntest8\n\n"
valgrind ./push_swap "0 1 2 3 5 7 9"
echo -e "\n\ntest9 ""\n\n"
echo -e "\n\nok\n\n"
valgrind --leak-check=full ./push_swap "2147483647 12 2323 14243 23423 23"
valgrind --leak-check=full ./push_swap "-2147483648 -12 -2323 -14243 -23423 23"
valgrind --leak-check=full ./push_swap 2147483647 12 2323 14243 23423 23
valgrind --leak-check=full ./push_swap -2147483648 -12 -2323 -14243 -23423 23
valgrind --leak-check=full ./push_swap 2 1 0 > num3-1
valgrind --leak-check=full ./push_swap 0 2 1 > num3-2
valgrind --leak-check=full ./push_swap 1 5 2 4 3 > num5-1
valgrind --leak-check=full ./push_swap "5 4 3 2 1" > num5-2