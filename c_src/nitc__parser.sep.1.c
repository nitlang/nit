#include "nitc__parser.sep.0.h"
/* method parser$Parser$build_reduce_table for (self: Parser): Array[ReduceAction] */
val* nitc__parser___Parser___build_reduce_table(val* self) {
val* var /* : Array[ReduceAction] */;
val* var1 /* : Array[ReduceAction] */;
val* var_reduce_table /* var reduce_table: Array[ReduceAction] */;
val* var2 /* : ReduceAction0 */;
val* var3 /* : ReduceAction1 */;
val* var4 /* : ReduceAction2 */;
val* var5 /* : ReduceAction3 */;
val* var6 /* : ReduceAction4 */;
val* var7 /* : ReduceAction5 */;
val* var8 /* : ReduceAction6 */;
val* var9 /* : ReduceAction7 */;
val* var10 /* : ReduceAction8 */;
val* var11 /* : ReduceAction9 */;
val* var12 /* : ReduceAction10 */;
val* var13 /* : ReduceAction11 */;
val* var14 /* : ReduceAction12 */;
val* var15 /* : ReduceAction13 */;
val* var16 /* : ReduceAction14 */;
val* var17 /* : ReduceAction15 */;
val* var18 /* : ReduceAction16 */;
val* var19 /* : ReduceAction17 */;
val* var20 /* : ReduceAction18 */;
val* var21 /* : ReduceAction19 */;
val* var22 /* : ReduceAction20 */;
val* var23 /* : ReduceAction21 */;
val* var24 /* : ReduceAction22 */;
val* var25 /* : ReduceAction23 */;
val* var26 /* : ReduceAction24 */;
val* var27 /* : ReduceAction24 */;
val* var28 /* : ReduceAction26 */;
val* var29 /* : ReduceAction27 */;
val* var30 /* : ReduceAction28 */;
val* var31 /* : ReduceAction29 */;
val* var32 /* : ReduceAction22 */;
val* var33 /* : ReduceAction31 */;
val* var34 /* : ReduceAction32 */;
val* var35 /* : ReduceAction33 */;
val* var36 /* : ReduceAction34 */;
val* var37 /* : ReduceAction35 */;
val* var38 /* : ReduceAction36 */;
val* var39 /* : ReduceAction37 */;
val* var40 /* : ReduceAction38 */;
val* var41 /* : ReduceAction39 */;
val* var42 /* : ReduceAction40 */;
val* var43 /* : ReduceAction41 */;
val* var44 /* : ReduceAction42 */;
val* var45 /* : ReduceAction43 */;
val* var46 /* : ReduceAction44 */;
val* var47 /* : ReduceAction45 */;
val* var48 /* : ReduceAction46 */;
val* var49 /* : ReduceAction47 */;
val* var50 /* : ReduceAction48 */;
val* var51 /* : ReduceAction49 */;
val* var52 /* : ReduceAction50 */;
val* var53 /* : ReduceAction51 */;
val* var54 /* : ReduceAction52 */;
val* var55 /* : ReduceAction53 */;
val* var56 /* : ReduceAction54 */;
val* var57 /* : ReduceAction55 */;
val* var58 /* : ReduceAction56 */;
val* var59 /* : ReduceAction57 */;
val* var60 /* : ReduceAction58 */;
val* var61 /* : ReduceAction59 */;
val* var62 /* : ReduceAction60 */;
val* var63 /* : ReduceAction61 */;
val* var64 /* : ReduceAction62 */;
val* var65 /* : ReduceAction63 */;
val* var66 /* : ReduceAction64 */;
val* var67 /* : ReduceAction65 */;
val* var68 /* : ReduceAction66 */;
val* var69 /* : ReduceAction67 */;
val* var70 /* : ReduceAction68 */;
val* var71 /* : ReduceAction69 */;
val* var72 /* : ReduceAction70 */;
val* var73 /* : ReduceAction71 */;
val* var74 /* : ReduceAction72 */;
val* var75 /* : ReduceAction73 */;
val* var76 /* : ReduceAction74 */;
val* var77 /* : ReduceAction74 */;
val* var78 /* : ReduceAction76 */;
val* var79 /* : ReduceAction77 */;
val* var80 /* : ReduceAction22 */;
val* var81 /* : ReduceAction76 */;
val* var82 /* : ReduceAction80 */;
val* var83 /* : ReduceAction81 */;
val* var84 /* : ReduceAction82 */;
val* var85 /* : ReduceAction83 */;
val* var86 /* : ReduceAction84 */;
val* var87 /* : ReduceAction85 */;
val* var88 /* : ReduceAction86 */;
val* var89 /* : ReduceAction87 */;
val* var90 /* : ReduceAction88 */;
val* var91 /* : ReduceAction89 */;
val* var92 /* : ReduceAction90 */;
val* var93 /* : ReduceAction91 */;
val* var94 /* : ReduceAction92 */;
val* var95 /* : ReduceAction93 */;
val* var96 /* : ReduceAction94 */;
val* var97 /* : ReduceAction95 */;
val* var98 /* : ReduceAction96 */;
val* var99 /* : ReduceAction97 */;
val* var100 /* : ReduceAction98 */;
val* var101 /* : ReduceAction99 */;
val* var102 /* : ReduceAction100 */;
val* var103 /* : ReduceAction101 */;
val* var104 /* : ReduceAction102 */;
val* var105 /* : ReduceAction103 */;
val* var106 /* : ReduceAction104 */;
val* var107 /* : ReduceAction105 */;
val* var108 /* : ReduceAction106 */;
val* var109 /* : ReduceAction107 */;
val* var110 /* : ReduceAction108 */;
val* var111 /* : ReduceAction109 */;
val* var112 /* : ReduceAction110 */;
val* var113 /* : ReduceAction111 */;
val* var114 /* : ReduceAction112 */;
val* var115 /* : ReduceAction113 */;
val* var116 /* : ReduceAction114 */;
val* var117 /* : ReduceAction39 */;
val* var118 /* : ReduceAction116 */;
val* var119 /* : ReduceAction117 */;
val* var120 /* : ReduceAction118 */;
val* var121 /* : ReduceAction119 */;
val* var122 /* : ReduceAction120 */;
val* var123 /* : ReduceAction121 */;
val* var124 /* : ReduceAction122 */;
val* var125 /* : ReduceAction123 */;
val* var126 /* : ReduceAction22 */;
val* var127 /* : ReduceAction125 */;
val* var128 /* : ReduceAction126 */;
val* var129 /* : ReduceAction126 */;
val* var130 /* : ReduceAction128 */;
val* var131 /* : ReduceAction129 */;
val* var132 /* : ReduceAction130 */;
val* var133 /* : ReduceAction131 */;
val* var134 /* : ReduceAction132 */;
val* var135 /* : ReduceAction133 */;
val* var136 /* : ReduceAction134 */;
val* var137 /* : ReduceAction135 */;
val* var138 /* : ReduceAction136 */;
val* var139 /* : ReduceAction137 */;
val* var140 /* : ReduceAction22 */;
val* var141 /* : ReduceAction139 */;
val* var142 /* : ReduceAction140 */;
val* var143 /* : ReduceAction141 */;
val* var144 /* : ReduceAction142 */;
val* var145 /* : ReduceAction143 */;
val* var146 /* : ReduceAction22 */;
val* var147 /* : ReduceAction145 */;
val* var148 /* : ReduceAction146 */;
val* var149 /* : ReduceAction147 */;
val* var150 /* : ReduceAction148 */;
val* var151 /* : ReduceAction149 */;
val* var152 /* : ReduceAction150 */;
val* var153 /* : ReduceAction151 */;
val* var154 /* : ReduceAction152 */;
val* var155 /* : ReduceAction152 */;
val* var156 /* : ReduceAction152 */;
val* var157 /* : ReduceAction22 */;
val* var158 /* : ReduceAction156 */;
val* var159 /* : ReduceAction157 */;
val* var160 /* : ReduceAction158 */;
val* var161 /* : ReduceAction159 */;
val* var162 /* : ReduceAction160 */;
val* var163 /* : ReduceAction161 */;
val* var164 /* : ReduceAction162 */;
val* var165 /* : ReduceAction163 */;
val* var166 /* : ReduceAction164 */;
val* var167 /* : ReduceAction165 */;
val* var168 /* : ReduceAction156 */;
val* var169 /* : ReduceAction159 */;
val* var170 /* : ReduceAction159 */;
val* var171 /* : ReduceAction169 */;
val* var172 /* : ReduceAction170 */;
val* var173 /* : ReduceAction171 */;
val* var174 /* : ReduceAction172 */;
val* var175 /* : ReduceAction173 */;
val* var176 /* : ReduceAction174 */;
val* var177 /* : ReduceAction175 */;
val* var178 /* : ReduceAction176 */;
val* var179 /* : ReduceAction159 */;
val* var180 /* : ReduceAction159 */;
val* var181 /* : ReduceAction159 */;
val* var182 /* : ReduceAction159 */;
val* var183 /* : ReduceAction159 */;
val* var184 /* : ReduceAction159 */;
val* var185 /* : ReduceAction159 */;
val* var186 /* : ReduceAction184 */;
val* var187 /* : ReduceAction185 */;
val* var188 /* : ReduceAction186 */;
val* var189 /* : ReduceAction187 */;
val* var190 /* : ReduceAction188 */;
val* var191 /* : ReduceAction189 */;
val* var192 /* : ReduceAction190 */;
val* var193 /* : ReduceAction191 */;
val* var194 /* : ReduceAction192 */;
val* var195 /* : ReduceAction193 */;
val* var196 /* : ReduceAction194 */;
val* var197 /* : ReduceAction195 */;
val* var198 /* : ReduceAction196 */;
val* var199 /* : ReduceAction195 */;
val* var200 /* : ReduceAction198 */;
val* var201 /* : ReduceAction199 */;
val* var202 /* : ReduceAction198 */;
val* var203 /* : ReduceAction201 */;
val* var204 /* : ReduceAction202 */;
val* var205 /* : ReduceAction203 */;
val* var206 /* : ReduceAction204 */;
val* var207 /* : ReduceAction205 */;
val* var208 /* : ReduceAction206 */;
val* var209 /* : ReduceAction207 */;
val* var210 /* : ReduceAction208 */;
val* var211 /* : ReduceAction209 */;
val* var212 /* : ReduceAction210 */;
val* var213 /* : ReduceAction211 */;
val* var214 /* : ReduceAction212 */;
val* var215 /* : ReduceAction213 */;
val* var216 /* : ReduceAction214 */;
val* var217 /* : ReduceAction215 */;
val* var218 /* : ReduceAction216 */;
val* var219 /* : ReduceAction217 */;
val* var220 /* : ReduceAction218 */;
val* var221 /* : ReduceAction219 */;
val* var222 /* : ReduceAction220 */;
val* var223 /* : ReduceAction221 */;
val* var224 /* : ReduceAction222 */;
val* var225 /* : ReduceAction223 */;
val* var226 /* : ReduceAction224 */;
val* var227 /* : ReduceAction225 */;
val* var228 /* : ReduceAction226 */;
val* var229 /* : ReduceAction227 */;
val* var230 /* : ReduceAction228 */;
val* var231 /* : ReduceAction229 */;
val* var232 /* : ReduceAction230 */;
val* var233 /* : ReduceAction231 */;
val* var234 /* : ReduceAction232 */;
val* var235 /* : ReduceAction233 */;
val* var236 /* : ReduceAction234 */;
val* var237 /* : ReduceAction235 */;
val* var238 /* : ReduceAction236 */;
val* var239 /* : ReduceAction237 */;
val* var240 /* : ReduceAction238 */;
val* var241 /* : ReduceAction239 */;
val* var242 /* : ReduceAction240 */;
val* var243 /* : ReduceAction241 */;
val* var244 /* : ReduceAction242 */;
val* var245 /* : ReduceAction243 */;
val* var246 /* : ReduceAction244 */;
val* var247 /* : ReduceAction245 */;
val* var248 /* : ReduceAction246 */;
val* var249 /* : ReduceAction247 */;
val* var250 /* : ReduceAction248 */;
val* var251 /* : ReduceAction249 */;
val* var252 /* : ReduceAction250 */;
val* var253 /* : ReduceAction251 */;
val* var254 /* : ReduceAction252 */;
val* var255 /* : ReduceAction253 */;
val* var256 /* : ReduceAction254 */;
val* var257 /* : ReduceAction255 */;
val* var258 /* : ReduceAction256 */;
val* var259 /* : ReduceAction257 */;
val* var260 /* : ReduceAction258 */;
val* var261 /* : ReduceAction259 */;
val* var262 /* : ReduceAction260 */;
val* var263 /* : ReduceAction261 */;
val* var264 /* : ReduceAction262 */;
val* var265 /* : ReduceAction263 */;
val* var266 /* : ReduceAction264 */;
val* var267 /* : ReduceAction265 */;
val* var268 /* : ReduceAction266 */;
val* var269 /* : ReduceAction267 */;
val* var270 /* : ReduceAction158 */;
val* var271 /* : ReduceAction269 */;
val* var272 /* : ReduceAction270 */;
val* var273 /* : ReduceAction271 */;
val* var274 /* : ReduceAction272 */;
val* var275 /* : ReduceAction273 */;
val* var276 /* : ReduceAction274 */;
val* var277 /* : ReduceAction275 */;
val* var278 /* : ReduceAction276 */;
val* var279 /* : ReduceAction277 */;
val* var280 /* : ReduceAction278 */;
val* var281 /* : ReduceAction279 */;
val* var282 /* : ReduceAction280 */;
val* var283 /* : ReduceAction281 */;
val* var284 /* : ReduceAction159 */;
val* var285 /* : ReduceAction283 */;
val* var286 /* : ReduceAction284 */;
val* var287 /* : ReduceAction285 */;
val* var288 /* : ReduceAction286 */;
val* var289 /* : ReduceAction287 */;
val* var290 /* : ReduceAction159 */;
val* var291 /* : ReduceAction289 */;
val* var292 /* : ReduceAction159 */;
val* var293 /* : ReduceAction291 */;
val* var294 /* : ReduceAction292 */;
val* var295 /* : ReduceAction293 */;
val* var296 /* : ReduceAction294 */;
val* var297 /* : ReduceAction159 */;
val* var298 /* : ReduceAction296 */;
val* var299 /* : ReduceAction159 */;
val* var300 /* : ReduceAction298 */;
val* var301 /* : ReduceAction299 */;
val* var302 /* : ReduceAction300 */;
val* var303 /* : ReduceAction301 */;
val* var304 /* : ReduceAction302 */;
val* var305 /* : ReduceAction303 */;
val* var306 /* : ReduceAction304 */;
val* var307 /* : ReduceAction305 */;
val* var308 /* : ReduceAction159 */;
val* var309 /* : ReduceAction307 */;
val* var310 /* : ReduceAction159 */;
val* var311 /* : ReduceAction309 */;
val* var312 /* : ReduceAction159 */;
val* var313 /* : ReduceAction311 */;
val* var314 /* : ReduceAction159 */;
val* var315 /* : ReduceAction313 */;
val* var316 /* : ReduceAction314 */;
val* var317 /* : ReduceAction159 */;
val* var318 /* : ReduceAction316 */;
val* var319 /* : ReduceAction317 */;
val* var320 /* : ReduceAction159 */;
val* var321 /* : ReduceAction319 */;
val* var322 /* : ReduceAction320 */;
val* var323 /* : ReduceAction321 */;
val* var324 /* : ReduceAction159 */;
val* var325 /* : ReduceAction323 */;
val* var326 /* : ReduceAction159 */;
val* var327 /* : ReduceAction325 */;
val* var328 /* : ReduceAction326 */;
val* var329 /* : ReduceAction327 */;
val* var330 /* : ReduceAction328 */;
val* var331 /* : ReduceAction159 */;
val* var332 /* : ReduceAction330 */;
val* var333 /* : ReduceAction331 */;
val* var334 /* : ReduceAction332 */;
val* var335 /* : ReduceAction333 */;
val* var336 /* : ReduceAction159 */;
val* var337 /* : ReduceAction335 */;
val* var338 /* : ReduceAction336 */;
val* var339 /* : ReduceAction184 */;
val* var340 /* : ReduceAction338 */;
val* var341 /* : ReduceAction185 */;
val* var342 /* : ReduceAction340 */;
val* var343 /* : ReduceAction186 */;
val* var344 /* : ReduceAction342 */;
val* var345 /* : ReduceAction187 */;
val* var346 /* : ReduceAction344 */;
val* var347 /* : ReduceAction188 */;
val* var348 /* : ReduceAction346 */;
val* var349 /* : ReduceAction189 */;
val* var350 /* : ReduceAction348 */;
val* var351 /* : ReduceAction190 */;
val* var352 /* : ReduceAction350 */;
val* var353 /* : ReduceAction191 */;
val* var354 /* : ReduceAction352 */;
val* var355 /* : ReduceAction192 */;
val* var356 /* : ReduceAction354 */;
val* var357 /* : ReduceAction193 */;
val* var358 /* : ReduceAction356 */;
val* var359 /* : ReduceAction194 */;
val* var360 /* : ReduceAction358 */;
val* var361 /* : ReduceAction359 */;
val* var362 /* : ReduceAction360 */;
val* var363 /* : ReduceAction361 */;
val* var364 /* : ReduceAction362 */;
val* var365 /* : ReduceAction363 */;
val* var366 /* : ReduceAction364 */;
val* var367 /* : ReduceAction365 */;
val* var368 /* : ReduceAction366 */;
val* var369 /* : ReduceAction367 */;
val* var370 /* : ReduceAction368 */;
val* var371 /* : ReduceAction369 */;
val* var372 /* : ReduceAction370 */;
val* var373 /* : ReduceAction159 */;
val* var374 /* : ReduceAction372 */;
val* var375 /* : ReduceAction373 */;
val* var376 /* : ReduceAction374 */;
val* var377 /* : ReduceAction375 */;
val* var378 /* : ReduceAction376 */;
val* var379 /* : ReduceAction377 */;
val* var380 /* : ReduceAction378 */;
val* var381 /* : ReduceAction379 */;
val* var382 /* : ReduceAction380 */;
val* var383 /* : ReduceAction381 */;
val* var384 /* : ReduceAction159 */;
val* var385 /* : ReduceAction159 */;
val* var386 /* : ReduceAction384 */;
val* var387 /* : ReduceAction385 */;
val* var388 /* : ReduceAction386 */;
val* var389 /* : ReduceAction387 */;
val* var390 /* : ReduceAction387 */;
val* var391 /* : ReduceAction389 */;
val* var392 /* : ReduceAction390 */;
val* var393 /* : ReduceAction391 */;
val* var394 /* : ReduceAction392 */;
val* var395 /* : ReduceAction390 */;
val* var396 /* : ReduceAction394 */;
val* var397 /* : ReduceAction274 */;
val* var398 /* : ReduceAction396 */;
val* var399 /* : ReduceAction397 */;
val* var400 /* : ReduceAction398 */;
val* var401 /* : ReduceAction399 */;
val* var402 /* : ReduceAction400 */;
val* var403 /* : ReduceAction401 */;
val* var404 /* : ReduceAction399 */;
val* var405 /* : ReduceAction400 */;
val* var406 /* : ReduceAction404 */;
val* var407 /* : ReduceAction405 */;
val* var408 /* : ReduceAction406 */;
val* var409 /* : ReduceAction407 */;
val* var410 /* : ReduceAction408 */;
val* var411 /* : ReduceAction22 */;
val* var412 /* : ReduceAction410 */;
val* var413 /* : ReduceAction411 */;
val* var414 /* : ReduceAction412 */;
val* var415 /* : ReduceAction413 */;
val* var416 /* : ReduceAction410 */;
val* var417 /* : ReduceAction411 */;
val* var418 /* : ReduceAction416 */;
val* var419 /* : ReduceAction159 */;
val* var420 /* : ReduceAction418 */;
val* var421 /* : ReduceAction419 */;
val* var422 /* : ReduceAction420 */;
val* var423 /* : ReduceAction421 */;
val* var424 /* : ReduceAction422 */;
val* var425 /* : ReduceAction423 */;
val* var426 /* : ReduceAction424 */;
val* var427 /* : ReduceAction425 */;
val* var428 /* : ReduceAction426 */;
val* var429 /* : ReduceAction427 */;
val* var430 /* : ReduceAction428 */;
val* var431 /* : ReduceAction391 */;
val* var432 /* : ReduceAction392 */;
val* var433 /* : ReduceAction390 */;
val* var434 /* : ReduceAction432 */;
val* var435 /* : ReduceAction159 */;
val* var436 /* : ReduceAction159 */;
val* var437 /* : ReduceAction435 */;
val* var438 /* : ReduceAction436 */;
val* var439 /* : ReduceAction437 */;
val* var440 /* : ReduceAction438 */;
val* var441 /* : ReduceAction439 */;
val* var442 /* : ReduceAction440 */;
val* var443 /* : ReduceAction441 */;
val* var444 /* : ReduceAction442 */;
val* var445 /* : ReduceAction441 */;
val* var446 /* : ReduceAction444 */;
val* var447 /* : ReduceAction442 */;
val* var448 /* : ReduceAction446 */;
val* var449 /* : ReduceAction447 */;
val* var450 /* : ReduceAction400 */;
val* var451 /* : ReduceAction449 */;
val* var452 /* : ReduceAction450 */;
val* var453 /* : ReduceAction451 */;
val* var454 /* : ReduceAction452 */;
val* var455 /* : ReduceAction453 */;
val* var456 /* : ReduceAction454 */;
val* var457 /* : ReduceAction455 */;
val* var458 /* : ReduceAction456 */;
val* var459 /* : ReduceAction457 */;
val* var460 /* : ReduceAction458 */;
val* var461 /* : ReduceAction459 */;
val* var462 /* : ReduceAction460 */;
val* var463 /* : ReduceAction461 */;
val* var464 /* : ReduceAction22 */;
val* var465 /* : ReduceAction463 */;
val* var466 /* : ReduceAction464 */;
val* var467 /* : ReduceAction465 */;
val* var468 /* : ReduceAction466 */;
val* var469 /* : ReduceAction467 */;
val* var470 /* : ReduceAction468 */;
val* var471 /* : ReduceAction469 */;
val* var472 /* : ReduceAction468 */;
val* var473 /* : ReduceAction471 */;
val* var474 /* : ReduceAction472 */;
val* var475 /* : ReduceAction22 */;
val* var476 /* : ReduceAction474 */;
val* var477 /* : ReduceAction475 */;
val* var478 /* : ReduceAction475 */;
val* var479 /* : ReduceAction475 */;
val* var480 /* : ReduceAction478 */;
val* var481 /* : ReduceAction479 */;
val* var482 /* : ReduceAction23 */;
val* var483 /* : ReduceAction23 */;
val* var484 /* : ReduceAction482 */;
val* var485 /* : ReduceAction482 */;
val* var486 /* : ReduceAction484 */;
val* var487 /* : ReduceAction485 */;
val* var488 /* : ReduceAction486 */;
val* var489 /* : ReduceAction486 */;
val* var490 /* : ReduceAction488 */;
val* var491 /* : ReduceAction22 */;
val* var492 /* : ReduceAction490 */;
val* var493 /* : ReduceAction491 */;
val* var494 /* : ReduceAction475 */;
val* var495 /* : ReduceAction475 */;
val* var496 /* : ReduceAction494 */;
val* var497 /* : ReduceAction48 */;
val* var498 /* : ReduceAction49 */;
val* var499 /* : ReduceAction50 */;
val* var500 /* : ReduceAction57 */;
val* var501 /* : ReduceAction58 */;
val* var502 /* : ReduceAction76 */;
val* var503 /* : ReduceAction77 */;
val* var504 /* : ReduceAction86 */;
val* var505 /* : ReduceAction87 */;
val* var506 /* : ReduceAction88 */;
val* var507 /* : ReduceAction89 */;
val* var508 /* : ReduceAction90 */;
val* var509 /* : ReduceAction91 */;
val* var510 /* : ReduceAction92 */;
val* var511 /* : ReduceAction93 */;
val* var512 /* : ReduceAction94 */;
val* var513 /* : ReduceAction95 */;
val* var514 /* : ReduceAction96 */;
val* var515 /* : ReduceAction97 */;
val* var516 /* : ReduceAction98 */;
val* var517 /* : ReduceAction99 */;
val* var518 /* : ReduceAction100 */;
val* var519 /* : ReduceAction101 */;
val* var520 /* : ReduceAction102 */;
val* var521 /* : ReduceAction103 */;
val* var522 /* : ReduceAction104 */;
val* var523 /* : ReduceAction105 */;
val* var524 /* : ReduceAction106 */;
val* var525 /* : ReduceAction107 */;
val* var526 /* : ReduceAction467 */;
val* var527 /* : ReduceAction468 */;
val* var528 /* : ReduceAction469 */;
val* var529 /* : ReduceAction468 */;
val* var530 /* : ReduceAction146 */;
val* var531 /* : ReduceAction147 */;
val* var532 /* : ReduceAction159 */;
val* var533 /* : ReduceAction289 */;
val* var534 /* : ReduceAction159 */;
val* var535 /* : ReduceAction291 */;
val* var536 /* : ReduceAction292 */;
val* var537 /* : ReduceAction293 */;
val* var538 /* : ReduceAction294 */;
val* var539 /* : ReduceAction159 */;
val* var540 /* : ReduceAction296 */;
val* var541 /* : ReduceAction159 */;
val* var542 /* : ReduceAction298 */;
val* var543 /* : ReduceAction299 */;
val* var544 /* : ReduceAction300 */;
val* var545 /* : ReduceAction301 */;
val* var546 /* : ReduceAction302 */;
val* var547 /* : ReduceAction303 */;
val* var548 /* : ReduceAction304 */;
val* var549 /* : ReduceAction305 */;
val* var550 /* : ReduceAction159 */;
val* var551 /* : ReduceAction307 */;
val* var552 /* : ReduceAction159 */;
val* var553 /* : ReduceAction309 */;
val* var554 /* : ReduceAction159 */;
val* var555 /* : ReduceAction311 */;
val* var556 /* : ReduceAction159 */;
val* var557 /* : ReduceAction313 */;
val* var558 /* : ReduceAction314 */;
val* var559 /* : ReduceAction159 */;
val* var560 /* : ReduceAction316 */;
val* var561 /* : ReduceAction317 */;
val* var562 /* : ReduceAction159 */;
val* var563 /* : ReduceAction319 */;
val* var564 /* : ReduceAction320 */;
val* var565 /* : ReduceAction321 */;
val* var566 /* : ReduceAction159 */;
val* var567 /* : ReduceAction323 */;
val* var568 /* : ReduceAction159 */;
val* var569 /* : ReduceAction325 */;
val* var570 /* : ReduceAction326 */;
val* var571 /* : ReduceAction327 */;
val* var572 /* : ReduceAction328 */;
val* var573 /* : ReduceAction159 */;
val* var574 /* : ReduceAction330 */;
val* var575 /* : ReduceAction331 */;
val* var576 /* : ReduceAction332 */;
val* var577 /* : ReduceAction333 */;
val* var578 /* : ReduceAction159 */;
val* var579 /* : ReduceAction335 */;
val* var580 /* : ReduceAction336 */;
val* var581 /* : ReduceAction184 */;
val* var582 /* : ReduceAction188 */;
val* var583 /* : ReduceAction338 */;
val* var584 /* : ReduceAction346 */;
val* var585 /* : ReduceAction185 */;
val* var586 /* : ReduceAction189 */;
val* var587 /* : ReduceAction340 */;
val* var588 /* : ReduceAction348 */;
val* var589 /* : ReduceAction186 */;
val* var590 /* : ReduceAction190 */;
val* var591 /* : ReduceAction342 */;
val* var592 /* : ReduceAction350 */;
val* var593 /* : ReduceAction187 */;
val* var594 /* : ReduceAction191 */;
val* var595 /* : ReduceAction344 */;
val* var596 /* : ReduceAction352 */;
val* var597 /* : ReduceAction192 */;
val* var598 /* : ReduceAction354 */;
val* var599 /* : ReduceAction193 */;
val* var600 /* : ReduceAction194 */;
val* var601 /* : ReduceAction356 */;
val* var602 /* : ReduceAction358 */;
val* var603 /* : ReduceAction360 */;
val* var604 /* : ReduceAction361 */;
val* var605 /* : ReduceAction362 */;
val* var606 /* : ReduceAction363 */;
val* var607 /* : ReduceAction364 */;
val* var608 /* : ReduceAction365 */;
val* var609 /* : ReduceAction366 */;
val* var610 /* : ReduceAction367 */;
val* var611 /* : ReduceAction368 */;
val* var612 /* : ReduceAction369 */;
val* var613 /* : ReduceAction370 */;
val* var614 /* : ReduceAction159 */;
val* var615 /* : ReduceAction372 */;
val* var616 /* : ReduceAction373 */;
val* var617 /* : ReduceAction374 */;
val* var618 /* : ReduceAction375 */;
val* var619 /* : ReduceAction376 */;
val* var620 /* : ReduceAction377 */;
val* var621 /* : ReduceAction378 */;
val* var622 /* : ReduceAction379 */;
val* var623 /* : ReduceAction380 */;
val* var624 /* : ReduceAction381 */;
val* var625 /* : ReduceAction159 */;
val* var626 /* : ReduceAction159 */;
val* var627 /* : ReduceAction146 */;
val* var628 /* : ReduceAction147 */;
val* var629 /* : ReduceAction148 */;
val* var630 /* : ReduceAction149 */;
val* var631 /* : ReduceAction159 */;
val* var632 /* : ReduceAction159 */;
val* var633 /* : ReduceAction169 */;
val* var634 /* : ReduceAction170 */;
val* var635 /* : ReduceAction171 */;
val* var636 /* : ReduceAction172 */;
val* var637 /* : ReduceAction173 */;
val* var638 /* : ReduceAction174 */;
val* var639 /* : ReduceAction175 */;
val* var640 /* : ReduceAction176 */;
val* var641 /* : ReduceAction159 */;
val* var642 /* : ReduceAction159 */;
val* var643 /* : ReduceAction159 */;
val* var644 /* : ReduceAction159 */;
val* var645 /* : ReduceAction159 */;
val* var646 /* : ReduceAction159 */;
val* var647 /* : ReduceAction159 */;
val* var648 /* : ReduceAction184 */;
val* var649 /* : ReduceAction185 */;
val* var650 /* : ReduceAction186 */;
val* var651 /* : ReduceAction187 */;
val* var652 /* : ReduceAction188 */;
val* var653 /* : ReduceAction189 */;
val* var654 /* : ReduceAction190 */;
val* var655 /* : ReduceAction191 */;
val* var656 /* : ReduceAction192 */;
val* var657 /* : ReduceAction193 */;
val* var658 /* : ReduceAction194 */;
val* var659 /* : ReduceAction195 */;
val* var660 /* : ReduceAction196 */;
val* var661 /* : ReduceAction195 */;
val* var662 /* : ReduceAction198 */;
val* var663 /* : ReduceAction199 */;
val* var664 /* : ReduceAction198 */;
val* var665 /* : ReduceAction201 */;
val* var666 /* : ReduceAction208 */;
val* var667 /* : ReduceAction209 */;
val* var668 /* : ReduceAction210 */;
val* var669 /* : ReduceAction211 */;
val* var670 /* : ReduceAction212 */;
val* var671 /* : ReduceAction213 */;
val* var672 /* : ReduceAction214 */;
val* var673 /* : ReduceAction215 */;
val* var674 /* : ReduceAction216 */;
val* var675 /* : ReduceAction217 */;
val* var676 /* : ReduceAction218 */;
val* var677 /* : ReduceAction219 */;
val* var678 /* : ReduceAction220 */;
val* var679 /* : ReduceAction221 */;
val* var680 /* : ReduceAction222 */;
val* var681 /* : ReduceAction223 */;
val* var682 /* : ReduceAction224 */;
val* var683 /* : ReduceAction225 */;
val* var684 /* : ReduceAction226 */;
val* var685 /* : ReduceAction227 */;
val* var686 /* : ReduceAction228 */;
val* var687 /* : ReduceAction229 */;
val* var688 /* : ReduceAction230 */;
val* var689 /* : ReduceAction231 */;
val* var690 /* : ReduceAction232 */;
val* var691 /* : ReduceAction233 */;
val* var692 /* : ReduceAction234 */;
val* var693 /* : ReduceAction235 */;
val* var694 /* : ReduceAction236 */;
val* var695 /* : ReduceAction237 */;
val* var696 /* : ReduceAction238 */;
val* var697 /* : ReduceAction239 */;
val* var698 /* : ReduceAction240 */;
val* var699 /* : ReduceAction241 */;
val* var700 /* : ReduceAction242 */;
val* var701 /* : ReduceAction243 */;
val* var702 /* : ReduceAction244 */;
val* var703 /* : ReduceAction245 */;
val* var704 /* : ReduceAction159 */;
val* var705 /* : ReduceAction289 */;
val* var706 /* : ReduceAction159 */;
val* var707 /* : ReduceAction291 */;
val* var708 /* : ReduceAction292 */;
val* var709 /* : ReduceAction293 */;
val* var710 /* : ReduceAction294 */;
val* var711 /* : ReduceAction159 */;
val* var712 /* : ReduceAction296 */;
val* var713 /* : ReduceAction159 */;
val* var714 /* : ReduceAction298 */;
val* var715 /* : ReduceAction299 */;
val* var716 /* : ReduceAction300 */;
val* var717 /* : ReduceAction301 */;
val* var718 /* : ReduceAction302 */;
val* var719 /* : ReduceAction303 */;
val* var720 /* : ReduceAction304 */;
val* var721 /* : ReduceAction305 */;
val* var722 /* : ReduceAction159 */;
val* var723 /* : ReduceAction307 */;
val* var724 /* : ReduceAction159 */;
val* var725 /* : ReduceAction309 */;
val* var726 /* : ReduceAction159 */;
val* var727 /* : ReduceAction311 */;
val* var728 /* : ReduceAction159 */;
val* var729 /* : ReduceAction313 */;
val* var730 /* : ReduceAction314 */;
val* var731 /* : ReduceAction159 */;
val* var732 /* : ReduceAction316 */;
val* var733 /* : ReduceAction317 */;
val* var734 /* : ReduceAction159 */;
val* var735 /* : ReduceAction319 */;
val* var736 /* : ReduceAction320 */;
val* var737 /* : ReduceAction321 */;
val* var738 /* : ReduceAction159 */;
val* var739 /* : ReduceAction323 */;
val* var740 /* : ReduceAction159 */;
val* var741 /* : ReduceAction325 */;
val* var742 /* : ReduceAction326 */;
val* var743 /* : ReduceAction327 */;
val* var744 /* : ReduceAction328 */;
val* var745 /* : ReduceAction159 */;
val* var746 /* : ReduceAction330 */;
val* var747 /* : ReduceAction331 */;
val* var748 /* : ReduceAction332 */;
val* var749 /* : ReduceAction333 */;
val* var750 /* : ReduceAction159 */;
val* var751 /* : ReduceAction335 */;
val* var752 /* : ReduceAction336 */;
val* var753 /* : ReduceAction184 */;
val* var754 /* : ReduceAction338 */;
val* var755 /* : ReduceAction185 */;
val* var756 /* : ReduceAction340 */;
val* var757 /* : ReduceAction186 */;
val* var758 /* : ReduceAction342 */;
val* var759 /* : ReduceAction187 */;
val* var760 /* : ReduceAction344 */;
val* var761 /* : ReduceAction188 */;
val* var762 /* : ReduceAction346 */;
val* var763 /* : ReduceAction189 */;
val* var764 /* : ReduceAction348 */;
val* var765 /* : ReduceAction190 */;
val* var766 /* : ReduceAction350 */;
val* var767 /* : ReduceAction191 */;
val* var768 /* : ReduceAction352 */;
val* var769 /* : ReduceAction192 */;
val* var770 /* : ReduceAction354 */;
val* var771 /* : ReduceAction193 */;
val* var772 /* : ReduceAction356 */;
val* var773 /* : ReduceAction194 */;
val* var774 /* : ReduceAction358 */;
val* var775 /* : ReduceAction359 */;
val* var776 /* : ReduceAction360 */;
val* var777 /* : ReduceAction361 */;
val* var778 /* : ReduceAction362 */;
val* var779 /* : ReduceAction363 */;
val* var780 /* : ReduceAction364 */;
val* var781 /* : ReduceAction365 */;
val* var782 /* : ReduceAction366 */;
val* var783 /* : ReduceAction367 */;
val* var784 /* : ReduceAction368 */;
val* var785 /* : ReduceAction369 */;
val* var786 /* : ReduceAction370 */;
val* var787 /* : ReduceAction159 */;
val* var788 /* : ReduceAction372 */;
val* var789 /* : ReduceAction373 */;
val* var790 /* : ReduceAction374 */;
val* var791 /* : ReduceAction375 */;
val* var792 /* : ReduceAction376 */;
val* var793 /* : ReduceAction377 */;
val* var794 /* : ReduceAction378 */;
val* var795 /* : ReduceAction379 */;
val* var796 /* : ReduceAction380 */;
val* var797 /* : ReduceAction381 */;
val* var798 /* : ReduceAction159 */;
val* var799 /* : ReduceAction406 */;
val* var800 /* : ReduceAction407 */;
val* var801 /* : ReduceAction408 */;
val* var802 /* : ReduceAction22 */;
val* var803 /* : ReduceAction410 */;
val* var804 /* : ReduceAction410 */;
val* var805 /* : ReduceAction391 */;
val* var806 /* : ReduceAction392 */;
val* var807 /* : ReduceAction432 */;
val* var808 /* : ReduceAction159 */;
val* var809 /* : ReduceAction159 */;
val* var810 /* : ReduceAction435 */;
val* var811 /* : ReduceAction436 */;
val* var812 /* : ReduceAction146 */;
val* var813 /* : ReduceAction147 */;
val* var814 /* : ReduceAction159 */;
val* var815 /* : ReduceAction289 */;
val* var816 /* : ReduceAction159 */;
val* var817 /* : ReduceAction291 */;
val* var818 /* : ReduceAction292 */;
val* var819 /* : ReduceAction293 */;
val* var820 /* : ReduceAction294 */;
val* var821 /* : ReduceAction159 */;
val* var822 /* : ReduceAction296 */;
val* var823 /* : ReduceAction159 */;
val* var824 /* : ReduceAction298 */;
val* var825 /* : ReduceAction299 */;
val* var826 /* : ReduceAction300 */;
val* var827 /* : ReduceAction301 */;
val* var828 /* : ReduceAction302 */;
val* var829 /* : ReduceAction303 */;
val* var830 /* : ReduceAction304 */;
val* var831 /* : ReduceAction305 */;
val* var832 /* : ReduceAction159 */;
val* var833 /* : ReduceAction307 */;
val* var834 /* : ReduceAction159 */;
val* var835 /* : ReduceAction309 */;
val* var836 /* : ReduceAction159 */;
val* var837 /* : ReduceAction311 */;
val* var838 /* : ReduceAction159 */;
val* var839 /* : ReduceAction313 */;
val* var840 /* : ReduceAction314 */;
val* var841 /* : ReduceAction159 */;
val* var842 /* : ReduceAction316 */;
val* var843 /* : ReduceAction317 */;
val* var844 /* : ReduceAction159 */;
val* var845 /* : ReduceAction319 */;
val* var846 /* : ReduceAction320 */;
val* var847 /* : ReduceAction321 */;
val* var848 /* : ReduceAction159 */;
val* var849 /* : ReduceAction323 */;
val* var850 /* : ReduceAction159 */;
val* var851 /* : ReduceAction325 */;
val* var852 /* : ReduceAction326 */;
val* var853 /* : ReduceAction327 */;
val* var854 /* : ReduceAction328 */;
val* var855 /* : ReduceAction159 */;
val* var856 /* : ReduceAction330 */;
val* var857 /* : ReduceAction331 */;
val* var858 /* : ReduceAction856 */;
val* var859 /* : ReduceAction159 */;
val* var860 /* : ReduceAction858 */;
val* var861 /* : ReduceAction859 */;
val* var862 /* : ReduceAction860 */;
val* var863 /* : ReduceAction861 */;
val* var864 /* : ReduceAction862 */;
val* var865 /* : ReduceAction863 */;
val* var866 /* : ReduceAction864 */;
val* var867 /* : ReduceAction865 */;
val* var868 /* : ReduceAction866 */;
val* var869 /* : ReduceAction192 */;
val* var870 /* : ReduceAction354 */;
val* var871 /* : ReduceAction869 */;
val* var872 /* : ReduceAction870 */;
val* var873 /* : ReduceAction360 */;
val* var874 /* : ReduceAction361 */;
val* var875 /* : ReduceAction362 */;
val* var876 /* : ReduceAction363 */;
val* var877 /* : ReduceAction364 */;
val* var878 /* : ReduceAction365 */;
val* var879 /* : ReduceAction366 */;
val* var880 /* : ReduceAction367 */;
val* var881 /* : ReduceAction368 */;
val* var882 /* : ReduceAction369 */;
val* var883 /* : ReduceAction370 */;
val* var884 /* : ReduceAction159 */;
val* var885 /* : ReduceAction372 */;
val* var886 /* : ReduceAction373 */;
val* var887 /* : ReduceAction374 */;
val* var888 /* : ReduceAction375 */;
val* var889 /* : ReduceAction376 */;
val* var890 /* : ReduceAction377 */;
val* var891 /* : ReduceAction378 */;
val* var892 /* : ReduceAction379 */;
val* var893 /* : ReduceAction380 */;
val* var894 /* : ReduceAction381 */;
val* var895 /* : ReduceAction159 */;
val* var896 /* : ReduceAction894 */;
val* var897 /* : ReduceAction895 */;
val* var898 /* : ReduceAction156 */;
val* var899 /* : ReduceAction157 */;
val* var900 /* : ReduceAction158 */;
val* var901 /* : ReduceAction159 */;
val* var902 /* : ReduceAction159 */;
val* var903 /* : ReduceAction159 */;
val* var904 /* : ReduceAction169 */;
val* var905 /* : ReduceAction170 */;
val* var906 /* : ReduceAction171 */;
val* var907 /* : ReduceAction172 */;
val* var908 /* : ReduceAction173 */;
val* var909 /* : ReduceAction174 */;
val* var910 /* : ReduceAction175 */;
val* var911 /* : ReduceAction176 */;
val* var912 /* : ReduceAction159 */;
val* var913 /* : ReduceAction159 */;
val* var914 /* : ReduceAction159 */;
val* var915 /* : ReduceAction159 */;
val* var916 /* : ReduceAction159 */;
val* var917 /* : ReduceAction159 */;
val* var918 /* : ReduceAction159 */;
val* var919 /* : ReduceAction184 */;
val* var920 /* : ReduceAction185 */;
val* var921 /* : ReduceAction186 */;
val* var922 /* : ReduceAction187 */;
val* var923 /* : ReduceAction188 */;
val* var924 /* : ReduceAction189 */;
val* var925 /* : ReduceAction190 */;
val* var926 /* : ReduceAction191 */;
val* var927 /* : ReduceAction192 */;
val* var928 /* : ReduceAction193 */;
val* var929 /* : ReduceAction194 */;
val* var930 /* : ReduceAction195 */;
val* var931 /* : ReduceAction196 */;
val* var932 /* : ReduceAction195 */;
val* var933 /* : ReduceAction198 */;
val* var934 /* : ReduceAction199 */;
val* var935 /* : ReduceAction198 */;
val* var936 /* : ReduceAction201 */;
val* var937 /* : ReduceAction257 */;
val* var938 /* : ReduceAction258 */;
val* var939 /* : ReduceAction259 */;
val* var940 /* : ReduceAction260 */;
val* var941 /* : ReduceAction269 */;
val* var942 /* : ReduceAction270 */;
val* var943 /* : ReduceAction271 */;
val* var944 /* : ReduceAction272 */;
val* var945 /* : ReduceAction273 */;
val* var946 /* : ReduceAction274 */;
val* var947 /* : ReduceAction278 */;
val* var948 /* : ReduceAction279 */;
val* var949 /* : ReduceAction283 */;
val* var950 /* : ReduceAction284 */;
val* var951 /* : ReduceAction159 */;
val* var952 /* : ReduceAction159 */;
val* var953 /* : ReduceAction169 */;
val* var954 /* : ReduceAction170 */;
val* var955 /* : ReduceAction171 */;
val* var956 /* : ReduceAction172 */;
val* var957 /* : ReduceAction173 */;
val* var958 /* : ReduceAction174 */;
val* var959 /* : ReduceAction175 */;
val* var960 /* : ReduceAction176 */;
val* var961 /* : ReduceAction159 */;
val* var962 /* : ReduceAction159 */;
val* var963 /* : ReduceAction159 */;
val* var964 /* : ReduceAction159 */;
val* var965 /* : ReduceAction159 */;
val* var966 /* : ReduceAction159 */;
val* var967 /* : ReduceAction159 */;
val* var968 /* : ReduceAction184 */;
val* var969 /* : ReduceAction185 */;
val* var970 /* : ReduceAction186 */;
val* var971 /* : ReduceAction187 */;
val* var972 /* : ReduceAction188 */;
val* var973 /* : ReduceAction189 */;
val* var974 /* : ReduceAction190 */;
val* var975 /* : ReduceAction191 */;
val* var976 /* : ReduceAction192 */;
val* var977 /* : ReduceAction193 */;
val* var978 /* : ReduceAction194 */;
val* var979 /* : ReduceAction195 */;
val* var980 /* : ReduceAction196 */;
val* var981 /* : ReduceAction195 */;
val* var982 /* : ReduceAction198 */;
val* var983 /* : ReduceAction199 */;
val* var984 /* : ReduceAction198 */;
val* var985 /* : ReduceAction201 */;
val* var986 /* : ReduceAction156 */;
val* var987 /* : ReduceAction157 */;
val* var988 /* : ReduceAction158 */;
val* var989 /* : ReduceAction156 */;
val* var990 /* : ReduceAction157 */;
val* var991 /* : ReduceAction158 */;
val* var992 /* : ReduceAction159 */;
val* var993 /* : ReduceAction159 */;
val* var994 /* : ReduceAction169 */;
val* var995 /* : ReduceAction170 */;
val* var996 /* : ReduceAction171 */;
val* var997 /* : ReduceAction172 */;
val* var998 /* : ReduceAction173 */;
val* var999 /* : ReduceAction174 */;
val* var1000 /* : ReduceAction175 */;
val* var1001 /* : ReduceAction176 */;
val* var1002 /* : ReduceAction159 */;
val* var1003 /* : ReduceAction159 */;
val* var1004 /* : ReduceAction159 */;
val* var1005 /* : ReduceAction159 */;
val* var1006 /* : ReduceAction159 */;
val* var1007 /* : ReduceAction159 */;
val* var1008 /* : ReduceAction201 */;
val* var1009 /* : ReduceAction159 */;
val* var1010 /* : ReduceAction159 */;
val* var1011 /* : ReduceAction169 */;
val* var1012 /* : ReduceAction170 */;
val* var1013 /* : ReduceAction171 */;
val* var1014 /* : ReduceAction172 */;
val* var1015 /* : ReduceAction173 */;
val* var1016 /* : ReduceAction174 */;
val* var1017 /* : ReduceAction175 */;
val* var1018 /* : ReduceAction176 */;
val* var1019 /* : ReduceAction159 */;
val* var1020 /* : ReduceAction159 */;
val* var1021 /* : ReduceAction159 */;
val* var1022 /* : ReduceAction159 */;
val* var1023 /* : ReduceAction159 */;
val* var1024 /* : ReduceAction159 */;
val* var1025 /* : ReduceAction201 */;
val* var1026 /* : ReduceAction159 */;
val* var1027 /* : ReduceAction159 */;
val* var1028 /* : ReduceAction169 */;
val* var1029 /* : ReduceAction170 */;
val* var1030 /* : ReduceAction171 */;
val* var1031 /* : ReduceAction172 */;
val* var1032 /* : ReduceAction173 */;
val* var1033 /* : ReduceAction174 */;
val* var1034 /* : ReduceAction175 */;
val* var1035 /* : ReduceAction176 */;
val* var1036 /* : ReduceAction159 */;
val* var1037 /* : ReduceAction159 */;
val* var1038 /* : ReduceAction159 */;
val* var1039 /* : ReduceAction159 */;
val* var1040 /* : ReduceAction159 */;
val* var1041 /* : ReduceAction159 */;
val* var1042 /* : ReduceAction201 */;
val* var1043 /* : ReduceAction159 */;
val* var1044 /* : ReduceAction159 */;
val* var1045 /* : ReduceAction169 */;
val* var1046 /* : ReduceAction170 */;
val* var1047 /* : ReduceAction171 */;
val* var1048 /* : ReduceAction172 */;
val* var1049 /* : ReduceAction173 */;
val* var1050 /* : ReduceAction174 */;
val* var1051 /* : ReduceAction175 */;
val* var1052 /* : ReduceAction176 */;
val* var1053 /* : ReduceAction159 */;
val* var1054 /* : ReduceAction159 */;
val* var1055 /* : ReduceAction159 */;
val* var1056 /* : ReduceAction159 */;
val* var1057 /* : ReduceAction159 */;
val* var1058 /* : ReduceAction159 */;
val* var1059 /* : ReduceAction201 */;
val* var1060 /* : ReduceAction438 */;
val* var1061 /* : ReduceAction440 */;
val* var1062 /* : ReduceAction478 */;
val* var1063 /* : ReduceAction479 */;
val* var1064 /* : ReduceAction23 */;
val* var1065 /* : ReduceAction1063 */;
val* var1066 /* : ReduceAction1064 */;
val* var1067 /* : ReduceAction1065 */;
val* var1068 /* : ReduceAction1066 */;
val* var1069 /* : ReduceAction1067 */;
val* var1070 /* : ReduceAction1068 */;
val* var1071 /* : ReduceAction37 */;
val* var1072 /* : ReduceAction1070 */;
val* var1073 /* : ReduceAction45 */;
val* var1074 /* : ReduceAction1072 */;
val* var1075 /* : ReduceAction412 */;
val* var1076 /* : ReduceAction1074 */;
val* var1077 /* : ReduceAction1075 */;
val* var1078 /* : ReduceAction1076 */;
val* var1079 /* : ReduceAction1077 */;
val* var1080 /* : ReduceAction1078 */;
val* var1081 /* : ReduceAction150 */;
val* var1082 /* : ReduceAction1080 */;
val* var1083 /* : ReduceAction391 */;
val* var1084 /* : ReduceAction1082 */;
val* var1085 /* : ReduceAction391 */;
val* var1086 /* : ReduceAction1082 */;
val* var1087 /* : ReduceAction391 */;
val* var1088 /* : ReduceAction1082 */;
val* var1089 /* : ReduceAction452 */;
val* var1090 /* : ReduceAction1088 */;
val* var1091 /* : ReduceAction412 */;
val* var1092 /* : ReduceAction1074 */;
val* var1093 /* : ReduceAction391 */;
val* var1094 /* : ReduceAction1082 */;
val* var1095 /* : ReduceAction391 */;
val* var1096 /* : ReduceAction1082 */;
val* var1097 /* : ReduceAction453 */;
val* var1098 /* : ReduceAction1096 */;
val* var1099 /* : ReduceAction1097 */;
val* var1100 /* : ReduceAction1098 */;
val* var1101 /* : ReduceAction475 */;
val* var1102 /* : ReduceAction494 */;
var1 = NEW_core__Array(&type_core__Array__nitc__parser_work__ReduceAction);
{
core___core__Array___with_capacity(var1, 1101l); /* Direct call array$Array$with_capacity on <var1:Array[ReduceAction]>*/
}
var_reduce_table = var1;
var2 = NEW_nitc__parser__ReduceAction0(&type_nitc__parser__ReduceAction0);
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var2, 0l); /* goto= on <var2:ReduceAction0>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:ReduceAction0>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var2); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var3 = NEW_nitc__parser__ReduceAction1(&type_nitc__parser__ReduceAction1);
{
((void(*)(val* self, long p0))(var3->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var3, 0l); /* goto= on <var3:ReduceAction1>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:ReduceAction1>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var3); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var4 = NEW_nitc__parser__ReduceAction2(&type_nitc__parser__ReduceAction2);
{
((void(*)(val* self, long p0))(var4->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var4, 0l); /* goto= on <var4:ReduceAction2>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:ReduceAction2>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var4); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var5 = NEW_nitc__parser__ReduceAction3(&type_nitc__parser__ReduceAction3);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var5, 0l); /* goto= on <var5:ReduceAction3>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:ReduceAction3>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var5); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var6 = NEW_nitc__parser__ReduceAction4(&type_nitc__parser__ReduceAction4);
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var6, 0l); /* goto= on <var6:ReduceAction4>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:ReduceAction4>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var6); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var7 = NEW_nitc__parser__ReduceAction5(&type_nitc__parser__ReduceAction5);
{
((void(*)(val* self, long p0))(var7->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var7, 0l); /* goto= on <var7:ReduceAction5>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_core__kernel__Object__init]))(var7); /* init on <var7:ReduceAction5>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var7); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var8 = NEW_nitc__parser__ReduceAction6(&type_nitc__parser__ReduceAction6);
{
((void(*)(val* self, long p0))(var8->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var8, 0l); /* goto= on <var8:ReduceAction6>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:ReduceAction6>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var8); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var9 = NEW_nitc__parser__ReduceAction7(&type_nitc__parser__ReduceAction7);
{
((void(*)(val* self, long p0))(var9->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var9, 0l); /* goto= on <var9:ReduceAction7>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:ReduceAction7>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var9); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var10 = NEW_nitc__parser__ReduceAction8(&type_nitc__parser__ReduceAction8);
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var10, 0l); /* goto= on <var10:ReduceAction8>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:ReduceAction8>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var10); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var11 = NEW_nitc__parser__ReduceAction9(&type_nitc__parser__ReduceAction9);
{
((void(*)(val* self, long p0))(var11->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var11, 0l); /* goto= on <var11:ReduceAction9>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_core__kernel__Object__init]))(var11); /* init on <var11:ReduceAction9>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var11); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var12 = NEW_nitc__parser__ReduceAction10(&type_nitc__parser__ReduceAction10);
{
((void(*)(val* self, long p0))(var12->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var12, 0l); /* goto= on <var12:ReduceAction10>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:ReduceAction10>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var12); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var13 = NEW_nitc__parser__ReduceAction11(&type_nitc__parser__ReduceAction11);
{
((void(*)(val* self, long p0))(var13->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var13, 0l); /* goto= on <var13:ReduceAction11>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:ReduceAction11>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var13); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var14 = NEW_nitc__parser__ReduceAction12(&type_nitc__parser__ReduceAction12);
{
((void(*)(val* self, long p0))(var14->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var14, 0l); /* goto= on <var14:ReduceAction12>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_core__kernel__Object__init]))(var14); /* init on <var14:ReduceAction12>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var14); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var15 = NEW_nitc__parser__ReduceAction13(&type_nitc__parser__ReduceAction13);
{
((void(*)(val* self, long p0))(var15->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var15, 0l); /* goto= on <var15:ReduceAction13>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_core__kernel__Object__init]))(var15); /* init on <var15:ReduceAction13>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var15); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var16 = NEW_nitc__parser__ReduceAction14(&type_nitc__parser__ReduceAction14);
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var16, 0l); /* goto= on <var16:ReduceAction14>*/
}
{
((void(*)(val* self))(var16->class->vft[COLOR_core__kernel__Object__init]))(var16); /* init on <var16:ReduceAction14>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var16); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var17 = NEW_nitc__parser__ReduceAction15(&type_nitc__parser__ReduceAction15);
{
((void(*)(val* self, long p0))(var17->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var17, 0l); /* goto= on <var17:ReduceAction15>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_core__kernel__Object__init]))(var17); /* init on <var17:ReduceAction15>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var17); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var18 = NEW_nitc__parser__ReduceAction16(&type_nitc__parser__ReduceAction16);
{
((void(*)(val* self, long p0))(var18->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var18, 1l); /* goto= on <var18:ReduceAction16>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_core__kernel__Object__init]))(var18); /* init on <var18:ReduceAction16>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var18); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var19 = NEW_nitc__parser__ReduceAction17(&type_nitc__parser__ReduceAction17);
{
((void(*)(val* self, long p0))(var19->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var19, 2l); /* goto= on <var19:ReduceAction17>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_core__kernel__Object__init]))(var19); /* init on <var19:ReduceAction17>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var19); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var20 = NEW_nitc__parser__ReduceAction18(&type_nitc__parser__ReduceAction18);
{
((void(*)(val* self, long p0))(var20->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var20, 2l); /* goto= on <var20:ReduceAction18>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:ReduceAction18>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var20); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var21 = NEW_nitc__parser__ReduceAction19(&type_nitc__parser__ReduceAction19);
{
((void(*)(val* self, long p0))(var21->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var21, 3l); /* goto= on <var21:ReduceAction19>*/
}
{
((void(*)(val* self))(var21->class->vft[COLOR_core__kernel__Object__init]))(var21); /* init on <var21:ReduceAction19>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var21); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var22 = NEW_nitc__parser__ReduceAction20(&type_nitc__parser__ReduceAction20);
{
((void(*)(val* self, long p0))(var22->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var22, 3l); /* goto= on <var22:ReduceAction20>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:ReduceAction20>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var22); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var23 = NEW_nitc__parser__ReduceAction21(&type_nitc__parser__ReduceAction21);
{
((void(*)(val* self, long p0))(var23->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var23, 4l); /* goto= on <var23:ReduceAction21>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:ReduceAction21>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var23); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var24 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var24->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var24, 4l); /* goto= on <var24:ReduceAction22>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_core__kernel__Object__init]))(var24); /* init on <var24:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var24); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var25 = NEW_nitc__parser__ReduceAction23(&type_nitc__parser__ReduceAction23);
{
((void(*)(val* self, long p0))(var25->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var25, 4l); /* goto= on <var25:ReduceAction23>*/
}
{
((void(*)(val* self))(var25->class->vft[COLOR_core__kernel__Object__init]))(var25); /* init on <var25:ReduceAction23>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var25); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var26 = NEW_nitc__parser__ReduceAction24(&type_nitc__parser__ReduceAction24);
{
((void(*)(val* self, long p0))(var26->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var26, 5l); /* goto= on <var26:ReduceAction24>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_core__kernel__Object__init]))(var26); /* init on <var26:ReduceAction24>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var26); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var27 = NEW_nitc__parser__ReduceAction24(&type_nitc__parser__ReduceAction24);
{
((void(*)(val* self, long p0))(var27->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var27, 5l); /* goto= on <var27:ReduceAction24>*/
}
{
((void(*)(val* self))(var27->class->vft[COLOR_core__kernel__Object__init]))(var27); /* init on <var27:ReduceAction24>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var27); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var28 = NEW_nitc__parser__ReduceAction26(&type_nitc__parser__ReduceAction26);
{
((void(*)(val* self, long p0))(var28->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var28, 6l); /* goto= on <var28:ReduceAction26>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_core__kernel__Object__init]))(var28); /* init on <var28:ReduceAction26>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var28); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var29 = NEW_nitc__parser__ReduceAction27(&type_nitc__parser__ReduceAction27);
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var29, 6l); /* goto= on <var29:ReduceAction27>*/
}
{
((void(*)(val* self))(var29->class->vft[COLOR_core__kernel__Object__init]))(var29); /* init on <var29:ReduceAction27>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var29); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var30 = NEW_nitc__parser__ReduceAction28(&type_nitc__parser__ReduceAction28);
{
((void(*)(val* self, long p0))(var30->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var30, 6l); /* goto= on <var30:ReduceAction28>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:ReduceAction28>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var30); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var31 = NEW_nitc__parser__ReduceAction29(&type_nitc__parser__ReduceAction29);
{
((void(*)(val* self, long p0))(var31->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var31, 6l); /* goto= on <var31:ReduceAction29>*/
}
{
((void(*)(val* self))(var31->class->vft[COLOR_core__kernel__Object__init]))(var31); /* init on <var31:ReduceAction29>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var31); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var32 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var32->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var32, 7l); /* goto= on <var32:ReduceAction22>*/
}
{
((void(*)(val* self))(var32->class->vft[COLOR_core__kernel__Object__init]))(var32); /* init on <var32:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var32); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var33 = NEW_nitc__parser__ReduceAction31(&type_nitc__parser__ReduceAction31);
{
((void(*)(val* self, long p0))(var33->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var33, 7l); /* goto= on <var33:ReduceAction31>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_core__kernel__Object__init]))(var33); /* init on <var33:ReduceAction31>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var33); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var34 = NEW_nitc__parser__ReduceAction32(&type_nitc__parser__ReduceAction32);
{
((void(*)(val* self, long p0))(var34->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var34, 8l); /* goto= on <var34:ReduceAction32>*/
}
{
((void(*)(val* self))(var34->class->vft[COLOR_core__kernel__Object__init]))(var34); /* init on <var34:ReduceAction32>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var34); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var35 = NEW_nitc__parser__ReduceAction33(&type_nitc__parser__ReduceAction33);
{
((void(*)(val* self, long p0))(var35->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var35, 8l); /* goto= on <var35:ReduceAction33>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_core__kernel__Object__init]))(var35); /* init on <var35:ReduceAction33>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var35); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var36 = NEW_nitc__parser__ReduceAction34(&type_nitc__parser__ReduceAction34);
{
((void(*)(val* self, long p0))(var36->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var36, 8l); /* goto= on <var36:ReduceAction34>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:ReduceAction34>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var36); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var37 = NEW_nitc__parser__ReduceAction35(&type_nitc__parser__ReduceAction35);
{
((void(*)(val* self, long p0))(var37->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var37, 8l); /* goto= on <var37:ReduceAction35>*/
}
{
((void(*)(val* self))(var37->class->vft[COLOR_core__kernel__Object__init]))(var37); /* init on <var37:ReduceAction35>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var37); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var38 = NEW_nitc__parser__ReduceAction36(&type_nitc__parser__ReduceAction36);
{
((void(*)(val* self, long p0))(var38->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var38, 8l); /* goto= on <var38:ReduceAction36>*/
}
{
((void(*)(val* self))(var38->class->vft[COLOR_core__kernel__Object__init]))(var38); /* init on <var38:ReduceAction36>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var38); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var39 = NEW_nitc__parser__ReduceAction37(&type_nitc__parser__ReduceAction37);
{
((void(*)(val* self, long p0))(var39->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var39, 9l); /* goto= on <var39:ReduceAction37>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_core__kernel__Object__init]))(var39); /* init on <var39:ReduceAction37>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var39); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var40 = NEW_nitc__parser__ReduceAction38(&type_nitc__parser__ReduceAction38);
{
((void(*)(val* self, long p0))(var40->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var40, 9l); /* goto= on <var40:ReduceAction38>*/
}
{
((void(*)(val* self))(var40->class->vft[COLOR_core__kernel__Object__init]))(var40); /* init on <var40:ReduceAction38>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var40); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var41 = NEW_nitc__parser__ReduceAction39(&type_nitc__parser__ReduceAction39);
{
((void(*)(val* self, long p0))(var41->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var41, 9l); /* goto= on <var41:ReduceAction39>*/
}
{
((void(*)(val* self))(var41->class->vft[COLOR_core__kernel__Object__init]))(var41); /* init on <var41:ReduceAction39>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var41); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var42 = NEW_nitc__parser__ReduceAction40(&type_nitc__parser__ReduceAction40);
{
((void(*)(val* self, long p0))(var42->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var42, 10l); /* goto= on <var42:ReduceAction40>*/
}
{
((void(*)(val* self))(var42->class->vft[COLOR_core__kernel__Object__init]))(var42); /* init on <var42:ReduceAction40>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var42); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var43 = NEW_nitc__parser__ReduceAction41(&type_nitc__parser__ReduceAction41);
{
((void(*)(val* self, long p0))(var43->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var43, 11l); /* goto= on <var43:ReduceAction41>*/
}
{
((void(*)(val* self))(var43->class->vft[COLOR_core__kernel__Object__init]))(var43); /* init on <var43:ReduceAction41>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var43); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var44 = NEW_nitc__parser__ReduceAction42(&type_nitc__parser__ReduceAction42);
{
((void(*)(val* self, long p0))(var44->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var44, 11l); /* goto= on <var44:ReduceAction42>*/
}
{
((void(*)(val* self))(var44->class->vft[COLOR_core__kernel__Object__init]))(var44); /* init on <var44:ReduceAction42>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var44); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var45 = NEW_nitc__parser__ReduceAction43(&type_nitc__parser__ReduceAction43);
{
((void(*)(val* self, long p0))(var45->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var45, 12l); /* goto= on <var45:ReduceAction43>*/
}
{
((void(*)(val* self))(var45->class->vft[COLOR_core__kernel__Object__init]))(var45); /* init on <var45:ReduceAction43>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var45); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var46 = NEW_nitc__parser__ReduceAction44(&type_nitc__parser__ReduceAction44);
{
((void(*)(val* self, long p0))(var46->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var46, 13l); /* goto= on <var46:ReduceAction44>*/
}
{
((void(*)(val* self))(var46->class->vft[COLOR_core__kernel__Object__init]))(var46); /* init on <var46:ReduceAction44>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var46); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var47 = NEW_nitc__parser__ReduceAction45(&type_nitc__parser__ReduceAction45);
{
((void(*)(val* self, long p0))(var47->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var47, 13l); /* goto= on <var47:ReduceAction45>*/
}
{
((void(*)(val* self))(var47->class->vft[COLOR_core__kernel__Object__init]))(var47); /* init on <var47:ReduceAction45>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var47); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var48 = NEW_nitc__parser__ReduceAction46(&type_nitc__parser__ReduceAction46);
{
((void(*)(val* self, long p0))(var48->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var48, 13l); /* goto= on <var48:ReduceAction46>*/
}
{
((void(*)(val* self))(var48->class->vft[COLOR_core__kernel__Object__init]))(var48); /* init on <var48:ReduceAction46>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var48); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var49 = NEW_nitc__parser__ReduceAction47(&type_nitc__parser__ReduceAction47);
{
((void(*)(val* self, long p0))(var49->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var49, 14l); /* goto= on <var49:ReduceAction47>*/
}
{
((void(*)(val* self))(var49->class->vft[COLOR_core__kernel__Object__init]))(var49); /* init on <var49:ReduceAction47>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var49); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var50 = NEW_nitc__parser__ReduceAction48(&type_nitc__parser__ReduceAction48);
{
((void(*)(val* self, long p0))(var50->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var50, 15l); /* goto= on <var50:ReduceAction48>*/
}
{
((void(*)(val* self))(var50->class->vft[COLOR_core__kernel__Object__init]))(var50); /* init on <var50:ReduceAction48>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var50); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var51 = NEW_nitc__parser__ReduceAction49(&type_nitc__parser__ReduceAction49);
{
((void(*)(val* self, long p0))(var51->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var51, 15l); /* goto= on <var51:ReduceAction49>*/
}
{
((void(*)(val* self))(var51->class->vft[COLOR_core__kernel__Object__init]))(var51); /* init on <var51:ReduceAction49>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var51); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var52 = NEW_nitc__parser__ReduceAction50(&type_nitc__parser__ReduceAction50);
{
((void(*)(val* self, long p0))(var52->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var52, 15l); /* goto= on <var52:ReduceAction50>*/
}
{
((void(*)(val* self))(var52->class->vft[COLOR_core__kernel__Object__init]))(var52); /* init on <var52:ReduceAction50>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var52); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var53 = NEW_nitc__parser__ReduceAction51(&type_nitc__parser__ReduceAction51);
{
((void(*)(val* self, long p0))(var53->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var53, 15l); /* goto= on <var53:ReduceAction51>*/
}
{
((void(*)(val* self))(var53->class->vft[COLOR_core__kernel__Object__init]))(var53); /* init on <var53:ReduceAction51>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var53); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var54 = NEW_nitc__parser__ReduceAction52(&type_nitc__parser__ReduceAction52);
{
((void(*)(val* self, long p0))(var54->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var54, 15l); /* goto= on <var54:ReduceAction52>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_core__kernel__Object__init]))(var54); /* init on <var54:ReduceAction52>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var54); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var55 = NEW_nitc__parser__ReduceAction53(&type_nitc__parser__ReduceAction53);
{
((void(*)(val* self, long p0))(var55->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var55, 15l); /* goto= on <var55:ReduceAction53>*/
}
{
((void(*)(val* self))(var55->class->vft[COLOR_core__kernel__Object__init]))(var55); /* init on <var55:ReduceAction53>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var55); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var56 = NEW_nitc__parser__ReduceAction54(&type_nitc__parser__ReduceAction54);
{
((void(*)(val* self, long p0))(var56->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var56, 15l); /* goto= on <var56:ReduceAction54>*/
}
{
((void(*)(val* self))(var56->class->vft[COLOR_core__kernel__Object__init]))(var56); /* init on <var56:ReduceAction54>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var56); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var57 = NEW_nitc__parser__ReduceAction55(&type_nitc__parser__ReduceAction55);
{
((void(*)(val* self, long p0))(var57->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var57, 15l); /* goto= on <var57:ReduceAction55>*/
}
{
((void(*)(val* self))(var57->class->vft[COLOR_core__kernel__Object__init]))(var57); /* init on <var57:ReduceAction55>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var57); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var58 = NEW_nitc__parser__ReduceAction56(&type_nitc__parser__ReduceAction56);
{
((void(*)(val* self, long p0))(var58->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var58, 15l); /* goto= on <var58:ReduceAction56>*/
}
{
((void(*)(val* self))(var58->class->vft[COLOR_core__kernel__Object__init]))(var58); /* init on <var58:ReduceAction56>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var58); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var59 = NEW_nitc__parser__ReduceAction57(&type_nitc__parser__ReduceAction57);
{
((void(*)(val* self, long p0))(var59->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var59, 15l); /* goto= on <var59:ReduceAction57>*/
}
{
((void(*)(val* self))(var59->class->vft[COLOR_core__kernel__Object__init]))(var59); /* init on <var59:ReduceAction57>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var59); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var60 = NEW_nitc__parser__ReduceAction58(&type_nitc__parser__ReduceAction58);
{
((void(*)(val* self, long p0))(var60->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var60, 15l); /* goto= on <var60:ReduceAction58>*/
}
{
((void(*)(val* self))(var60->class->vft[COLOR_core__kernel__Object__init]))(var60); /* init on <var60:ReduceAction58>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var60); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var61 = NEW_nitc__parser__ReduceAction59(&type_nitc__parser__ReduceAction59);
{
((void(*)(val* self, long p0))(var61->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var61, 15l); /* goto= on <var61:ReduceAction59>*/
}
{
((void(*)(val* self))(var61->class->vft[COLOR_core__kernel__Object__init]))(var61); /* init on <var61:ReduceAction59>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var61); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var62 = NEW_nitc__parser__ReduceAction60(&type_nitc__parser__ReduceAction60);
{
((void(*)(val* self, long p0))(var62->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var62, 15l); /* goto= on <var62:ReduceAction60>*/
}
{
((void(*)(val* self))(var62->class->vft[COLOR_core__kernel__Object__init]))(var62); /* init on <var62:ReduceAction60>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var62); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var63 = NEW_nitc__parser__ReduceAction61(&type_nitc__parser__ReduceAction61);
{
((void(*)(val* self, long p0))(var63->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var63, 15l); /* goto= on <var63:ReduceAction61>*/
}
{
((void(*)(val* self))(var63->class->vft[COLOR_core__kernel__Object__init]))(var63); /* init on <var63:ReduceAction61>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var63); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var64 = NEW_nitc__parser__ReduceAction62(&type_nitc__parser__ReduceAction62);
{
((void(*)(val* self, long p0))(var64->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var64, 15l); /* goto= on <var64:ReduceAction62>*/
}
{
((void(*)(val* self))(var64->class->vft[COLOR_core__kernel__Object__init]))(var64); /* init on <var64:ReduceAction62>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var64); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var65 = NEW_nitc__parser__ReduceAction63(&type_nitc__parser__ReduceAction63);
{
((void(*)(val* self, long p0))(var65->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var65, 15l); /* goto= on <var65:ReduceAction63>*/
}
{
((void(*)(val* self))(var65->class->vft[COLOR_core__kernel__Object__init]))(var65); /* init on <var65:ReduceAction63>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var65); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var66 = NEW_nitc__parser__ReduceAction64(&type_nitc__parser__ReduceAction64);
{
((void(*)(val* self, long p0))(var66->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var66, 15l); /* goto= on <var66:ReduceAction64>*/
}
{
((void(*)(val* self))(var66->class->vft[COLOR_core__kernel__Object__init]))(var66); /* init on <var66:ReduceAction64>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var66); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var67 = NEW_nitc__parser__ReduceAction65(&type_nitc__parser__ReduceAction65);
{
((void(*)(val* self, long p0))(var67->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var67, 15l); /* goto= on <var67:ReduceAction65>*/
}
{
((void(*)(val* self))(var67->class->vft[COLOR_core__kernel__Object__init]))(var67); /* init on <var67:ReduceAction65>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var67); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var68 = NEW_nitc__parser__ReduceAction66(&type_nitc__parser__ReduceAction66);
{
((void(*)(val* self, long p0))(var68->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var68, 15l); /* goto= on <var68:ReduceAction66>*/
}
{
((void(*)(val* self))(var68->class->vft[COLOR_core__kernel__Object__init]))(var68); /* init on <var68:ReduceAction66>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var68); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var69 = NEW_nitc__parser__ReduceAction67(&type_nitc__parser__ReduceAction67);
{
((void(*)(val* self, long p0))(var69->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var69, 15l); /* goto= on <var69:ReduceAction67>*/
}
{
((void(*)(val* self))(var69->class->vft[COLOR_core__kernel__Object__init]))(var69); /* init on <var69:ReduceAction67>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var69); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var70 = NEW_nitc__parser__ReduceAction68(&type_nitc__parser__ReduceAction68);
{
((void(*)(val* self, long p0))(var70->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var70, 15l); /* goto= on <var70:ReduceAction68>*/
}
{
((void(*)(val* self))(var70->class->vft[COLOR_core__kernel__Object__init]))(var70); /* init on <var70:ReduceAction68>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var70); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var71 = NEW_nitc__parser__ReduceAction69(&type_nitc__parser__ReduceAction69);
{
((void(*)(val* self, long p0))(var71->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var71, 15l); /* goto= on <var71:ReduceAction69>*/
}
{
((void(*)(val* self))(var71->class->vft[COLOR_core__kernel__Object__init]))(var71); /* init on <var71:ReduceAction69>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var71); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var72 = NEW_nitc__parser__ReduceAction70(&type_nitc__parser__ReduceAction70);
{
((void(*)(val* self, long p0))(var72->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var72, 15l); /* goto= on <var72:ReduceAction70>*/
}
{
((void(*)(val* self))(var72->class->vft[COLOR_core__kernel__Object__init]))(var72); /* init on <var72:ReduceAction70>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var72); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var73 = NEW_nitc__parser__ReduceAction71(&type_nitc__parser__ReduceAction71);
{
((void(*)(val* self, long p0))(var73->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var73, 15l); /* goto= on <var73:ReduceAction71>*/
}
{
((void(*)(val* self))(var73->class->vft[COLOR_core__kernel__Object__init]))(var73); /* init on <var73:ReduceAction71>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var73); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var74 = NEW_nitc__parser__ReduceAction72(&type_nitc__parser__ReduceAction72);
{
((void(*)(val* self, long p0))(var74->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var74, 15l); /* goto= on <var74:ReduceAction72>*/
}
{
((void(*)(val* self))(var74->class->vft[COLOR_core__kernel__Object__init]))(var74); /* init on <var74:ReduceAction72>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var74); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var75 = NEW_nitc__parser__ReduceAction73(&type_nitc__parser__ReduceAction73);
{
((void(*)(val* self, long p0))(var75->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var75, 15l); /* goto= on <var75:ReduceAction73>*/
}
{
((void(*)(val* self))(var75->class->vft[COLOR_core__kernel__Object__init]))(var75); /* init on <var75:ReduceAction73>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var75); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var76 = NEW_nitc__parser__ReduceAction74(&type_nitc__parser__ReduceAction74);
{
((void(*)(val* self, long p0))(var76->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var76, 15l); /* goto= on <var76:ReduceAction74>*/
}
{
((void(*)(val* self))(var76->class->vft[COLOR_core__kernel__Object__init]))(var76); /* init on <var76:ReduceAction74>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var76); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var77 = NEW_nitc__parser__ReduceAction74(&type_nitc__parser__ReduceAction74);
{
((void(*)(val* self, long p0))(var77->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var77, 15l); /* goto= on <var77:ReduceAction74>*/
}
{
((void(*)(val* self))(var77->class->vft[COLOR_core__kernel__Object__init]))(var77); /* init on <var77:ReduceAction74>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var77); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var78 = NEW_nitc__parser__ReduceAction76(&type_nitc__parser__ReduceAction76);
{
((void(*)(val* self, long p0))(var78->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var78, 16l); /* goto= on <var78:ReduceAction76>*/
}
{
((void(*)(val* self))(var78->class->vft[COLOR_core__kernel__Object__init]))(var78); /* init on <var78:ReduceAction76>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var78); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var79 = NEW_nitc__parser__ReduceAction77(&type_nitc__parser__ReduceAction77);
{
((void(*)(val* self, long p0))(var79->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var79, 16l); /* goto= on <var79:ReduceAction77>*/
}
{
((void(*)(val* self))(var79->class->vft[COLOR_core__kernel__Object__init]))(var79); /* init on <var79:ReduceAction77>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var79); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var80 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var80->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var80, 16l); /* goto= on <var80:ReduceAction22>*/
}
{
((void(*)(val* self))(var80->class->vft[COLOR_core__kernel__Object__init]))(var80); /* init on <var80:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var80); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var81 = NEW_nitc__parser__ReduceAction76(&type_nitc__parser__ReduceAction76);
{
((void(*)(val* self, long p0))(var81->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var81, 17l); /* goto= on <var81:ReduceAction76>*/
}
{
((void(*)(val* self))(var81->class->vft[COLOR_core__kernel__Object__init]))(var81); /* init on <var81:ReduceAction76>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var81); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var82 = NEW_nitc__parser__ReduceAction80(&type_nitc__parser__ReduceAction80);
{
((void(*)(val* self, long p0))(var82->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var82, 17l); /* goto= on <var82:ReduceAction80>*/
}
{
((void(*)(val* self))(var82->class->vft[COLOR_core__kernel__Object__init]))(var82); /* init on <var82:ReduceAction80>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var82); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var83 = NEW_nitc__parser__ReduceAction81(&type_nitc__parser__ReduceAction81);
{
((void(*)(val* self, long p0))(var83->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var83, 18l); /* goto= on <var83:ReduceAction81>*/
}
{
((void(*)(val* self))(var83->class->vft[COLOR_core__kernel__Object__init]))(var83); /* init on <var83:ReduceAction81>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var83); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var84 = NEW_nitc__parser__ReduceAction82(&type_nitc__parser__ReduceAction82);
{
((void(*)(val* self, long p0))(var84->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var84, 18l); /* goto= on <var84:ReduceAction82>*/
}
{
((void(*)(val* self))(var84->class->vft[COLOR_core__kernel__Object__init]))(var84); /* init on <var84:ReduceAction82>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var84); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var85 = NEW_nitc__parser__ReduceAction83(&type_nitc__parser__ReduceAction83);
{
((void(*)(val* self, long p0))(var85->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var85, 18l); /* goto= on <var85:ReduceAction83>*/
}
{
((void(*)(val* self))(var85->class->vft[COLOR_core__kernel__Object__init]))(var85); /* init on <var85:ReduceAction83>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var85); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var86 = NEW_nitc__parser__ReduceAction84(&type_nitc__parser__ReduceAction84);
{
((void(*)(val* self, long p0))(var86->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var86, 18l); /* goto= on <var86:ReduceAction84>*/
}
{
((void(*)(val* self))(var86->class->vft[COLOR_core__kernel__Object__init]))(var86); /* init on <var86:ReduceAction84>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var86); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var87 = NEW_nitc__parser__ReduceAction85(&type_nitc__parser__ReduceAction85);
{
((void(*)(val* self, long p0))(var87->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var87, 18l); /* goto= on <var87:ReduceAction85>*/
}
{
((void(*)(val* self))(var87->class->vft[COLOR_core__kernel__Object__init]))(var87); /* init on <var87:ReduceAction85>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var87); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var88 = NEW_nitc__parser__ReduceAction86(&type_nitc__parser__ReduceAction86);
{
((void(*)(val* self, long p0))(var88->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var88, 19l); /* goto= on <var88:ReduceAction86>*/
}
{
((void(*)(val* self))(var88->class->vft[COLOR_core__kernel__Object__init]))(var88); /* init on <var88:ReduceAction86>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var88); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var89 = NEW_nitc__parser__ReduceAction87(&type_nitc__parser__ReduceAction87);
{
((void(*)(val* self, long p0))(var89->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var89, 19l); /* goto= on <var89:ReduceAction87>*/
}
{
((void(*)(val* self))(var89->class->vft[COLOR_core__kernel__Object__init]))(var89); /* init on <var89:ReduceAction87>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var89); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var90 = NEW_nitc__parser__ReduceAction88(&type_nitc__parser__ReduceAction88);
{
((void(*)(val* self, long p0))(var90->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var90, 19l); /* goto= on <var90:ReduceAction88>*/
}
{
((void(*)(val* self))(var90->class->vft[COLOR_core__kernel__Object__init]))(var90); /* init on <var90:ReduceAction88>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var90); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var91 = NEW_nitc__parser__ReduceAction89(&type_nitc__parser__ReduceAction89);
{
((void(*)(val* self, long p0))(var91->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var91, 19l); /* goto= on <var91:ReduceAction89>*/
}
{
((void(*)(val* self))(var91->class->vft[COLOR_core__kernel__Object__init]))(var91); /* init on <var91:ReduceAction89>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var91); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var92 = NEW_nitc__parser__ReduceAction90(&type_nitc__parser__ReduceAction90);
{
((void(*)(val* self, long p0))(var92->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var92, 19l); /* goto= on <var92:ReduceAction90>*/
}
{
((void(*)(val* self))(var92->class->vft[COLOR_core__kernel__Object__init]))(var92); /* init on <var92:ReduceAction90>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var92); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var93 = NEW_nitc__parser__ReduceAction91(&type_nitc__parser__ReduceAction91);
{
((void(*)(val* self, long p0))(var93->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var93, 19l); /* goto= on <var93:ReduceAction91>*/
}
{
((void(*)(val* self))(var93->class->vft[COLOR_core__kernel__Object__init]))(var93); /* init on <var93:ReduceAction91>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var93); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var94 = NEW_nitc__parser__ReduceAction92(&type_nitc__parser__ReduceAction92);
{
((void(*)(val* self, long p0))(var94->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var94, 19l); /* goto= on <var94:ReduceAction92>*/
}
{
((void(*)(val* self))(var94->class->vft[COLOR_core__kernel__Object__init]))(var94); /* init on <var94:ReduceAction92>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var94); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var95 = NEW_nitc__parser__ReduceAction93(&type_nitc__parser__ReduceAction93);
{
((void(*)(val* self, long p0))(var95->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var95, 19l); /* goto= on <var95:ReduceAction93>*/
}
{
((void(*)(val* self))(var95->class->vft[COLOR_core__kernel__Object__init]))(var95); /* init on <var95:ReduceAction93>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var95); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var96 = NEW_nitc__parser__ReduceAction94(&type_nitc__parser__ReduceAction94);
{
((void(*)(val* self, long p0))(var96->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var96, 19l); /* goto= on <var96:ReduceAction94>*/
}
{
((void(*)(val* self))(var96->class->vft[COLOR_core__kernel__Object__init]))(var96); /* init on <var96:ReduceAction94>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var96); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var97 = NEW_nitc__parser__ReduceAction95(&type_nitc__parser__ReduceAction95);
{
((void(*)(val* self, long p0))(var97->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var97, 19l); /* goto= on <var97:ReduceAction95>*/
}
{
((void(*)(val* self))(var97->class->vft[COLOR_core__kernel__Object__init]))(var97); /* init on <var97:ReduceAction95>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var97); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var98 = NEW_nitc__parser__ReduceAction96(&type_nitc__parser__ReduceAction96);
{
((void(*)(val* self, long p0))(var98->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var98, 19l); /* goto= on <var98:ReduceAction96>*/
}
{
((void(*)(val* self))(var98->class->vft[COLOR_core__kernel__Object__init]))(var98); /* init on <var98:ReduceAction96>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var98); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var99 = NEW_nitc__parser__ReduceAction97(&type_nitc__parser__ReduceAction97);
{
((void(*)(val* self, long p0))(var99->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var99, 19l); /* goto= on <var99:ReduceAction97>*/
}
{
((void(*)(val* self))(var99->class->vft[COLOR_core__kernel__Object__init]))(var99); /* init on <var99:ReduceAction97>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var99); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var100 = NEW_nitc__parser__ReduceAction98(&type_nitc__parser__ReduceAction98);
{
((void(*)(val* self, long p0))(var100->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var100, 19l); /* goto= on <var100:ReduceAction98>*/
}
{
((void(*)(val* self))(var100->class->vft[COLOR_core__kernel__Object__init]))(var100); /* init on <var100:ReduceAction98>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var100); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var101 = NEW_nitc__parser__ReduceAction99(&type_nitc__parser__ReduceAction99);
{
((void(*)(val* self, long p0))(var101->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var101, 19l); /* goto= on <var101:ReduceAction99>*/
}
{
((void(*)(val* self))(var101->class->vft[COLOR_core__kernel__Object__init]))(var101); /* init on <var101:ReduceAction99>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var101); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var102 = NEW_nitc__parser__ReduceAction100(&type_nitc__parser__ReduceAction100);
{
((void(*)(val* self, long p0))(var102->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var102, 19l); /* goto= on <var102:ReduceAction100>*/
}
{
((void(*)(val* self))(var102->class->vft[COLOR_core__kernel__Object__init]))(var102); /* init on <var102:ReduceAction100>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var102); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var103 = NEW_nitc__parser__ReduceAction101(&type_nitc__parser__ReduceAction101);
{
((void(*)(val* self, long p0))(var103->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var103, 19l); /* goto= on <var103:ReduceAction101>*/
}
{
((void(*)(val* self))(var103->class->vft[COLOR_core__kernel__Object__init]))(var103); /* init on <var103:ReduceAction101>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var103); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var104 = NEW_nitc__parser__ReduceAction102(&type_nitc__parser__ReduceAction102);
{
((void(*)(val* self, long p0))(var104->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var104, 19l); /* goto= on <var104:ReduceAction102>*/
}
{
((void(*)(val* self))(var104->class->vft[COLOR_core__kernel__Object__init]))(var104); /* init on <var104:ReduceAction102>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var104); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var105 = NEW_nitc__parser__ReduceAction103(&type_nitc__parser__ReduceAction103);
{
((void(*)(val* self, long p0))(var105->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var105, 19l); /* goto= on <var105:ReduceAction103>*/
}
{
((void(*)(val* self))(var105->class->vft[COLOR_core__kernel__Object__init]))(var105); /* init on <var105:ReduceAction103>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var105); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var106 = NEW_nitc__parser__ReduceAction104(&type_nitc__parser__ReduceAction104);
{
((void(*)(val* self, long p0))(var106->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var106, 19l); /* goto= on <var106:ReduceAction104>*/
}
{
((void(*)(val* self))(var106->class->vft[COLOR_core__kernel__Object__init]))(var106); /* init on <var106:ReduceAction104>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var106); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var107 = NEW_nitc__parser__ReduceAction105(&type_nitc__parser__ReduceAction105);
{
((void(*)(val* self, long p0))(var107->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var107, 19l); /* goto= on <var107:ReduceAction105>*/
}
{
((void(*)(val* self))(var107->class->vft[COLOR_core__kernel__Object__init]))(var107); /* init on <var107:ReduceAction105>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var107); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var108 = NEW_nitc__parser__ReduceAction106(&type_nitc__parser__ReduceAction106);
{
((void(*)(val* self, long p0))(var108->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var108, 19l); /* goto= on <var108:ReduceAction106>*/
}
{
((void(*)(val* self))(var108->class->vft[COLOR_core__kernel__Object__init]))(var108); /* init on <var108:ReduceAction106>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var108); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var109 = NEW_nitc__parser__ReduceAction107(&type_nitc__parser__ReduceAction107);
{
((void(*)(val* self, long p0))(var109->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var109, 19l); /* goto= on <var109:ReduceAction107>*/
}
{
((void(*)(val* self))(var109->class->vft[COLOR_core__kernel__Object__init]))(var109); /* init on <var109:ReduceAction107>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var109); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var110 = NEW_nitc__parser__ReduceAction108(&type_nitc__parser__ReduceAction108);
{
((void(*)(val* self, long p0))(var110->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var110, 19l); /* goto= on <var110:ReduceAction108>*/
}
{
((void(*)(val* self))(var110->class->vft[COLOR_core__kernel__Object__init]))(var110); /* init on <var110:ReduceAction108>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var110); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var111 = NEW_nitc__parser__ReduceAction109(&type_nitc__parser__ReduceAction109);
{
((void(*)(val* self, long p0))(var111->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var111, 20l); /* goto= on <var111:ReduceAction109>*/
}
{
((void(*)(val* self))(var111->class->vft[COLOR_core__kernel__Object__init]))(var111); /* init on <var111:ReduceAction109>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var111); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var112 = NEW_nitc__parser__ReduceAction110(&type_nitc__parser__ReduceAction110);
{
((void(*)(val* self, long p0))(var112->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var112, 20l); /* goto= on <var112:ReduceAction110>*/
}
{
((void(*)(val* self))(var112->class->vft[COLOR_core__kernel__Object__init]))(var112); /* init on <var112:ReduceAction110>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var112); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var113 = NEW_nitc__parser__ReduceAction111(&type_nitc__parser__ReduceAction111);
{
((void(*)(val* self, long p0))(var113->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var113, 20l); /* goto= on <var113:ReduceAction111>*/
}
{
((void(*)(val* self))(var113->class->vft[COLOR_core__kernel__Object__init]))(var113); /* init on <var113:ReduceAction111>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var113); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var114 = NEW_nitc__parser__ReduceAction112(&type_nitc__parser__ReduceAction112);
{
((void(*)(val* self, long p0))(var114->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var114, 20l); /* goto= on <var114:ReduceAction112>*/
}
{
((void(*)(val* self))(var114->class->vft[COLOR_core__kernel__Object__init]))(var114); /* init on <var114:ReduceAction112>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var114); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var115 = NEW_nitc__parser__ReduceAction113(&type_nitc__parser__ReduceAction113);
{
((void(*)(val* self, long p0))(var115->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var115, 21l); /* goto= on <var115:ReduceAction113>*/
}
{
((void(*)(val* self))(var115->class->vft[COLOR_core__kernel__Object__init]))(var115); /* init on <var115:ReduceAction113>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var115); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var116 = NEW_nitc__parser__ReduceAction114(&type_nitc__parser__ReduceAction114);
{
((void(*)(val* self, long p0))(var116->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var116, 21l); /* goto= on <var116:ReduceAction114>*/
}
{
((void(*)(val* self))(var116->class->vft[COLOR_core__kernel__Object__init]))(var116); /* init on <var116:ReduceAction114>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var116); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var117 = NEW_nitc__parser__ReduceAction39(&type_nitc__parser__ReduceAction39);
{
((void(*)(val* self, long p0))(var117->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var117, 21l); /* goto= on <var117:ReduceAction39>*/
}
{
((void(*)(val* self))(var117->class->vft[COLOR_core__kernel__Object__init]))(var117); /* init on <var117:ReduceAction39>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var117); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var118 = NEW_nitc__parser__ReduceAction116(&type_nitc__parser__ReduceAction116);
{
((void(*)(val* self, long p0))(var118->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var118, 22l); /* goto= on <var118:ReduceAction116>*/
}
{
((void(*)(val* self))(var118->class->vft[COLOR_core__kernel__Object__init]))(var118); /* init on <var118:ReduceAction116>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var118); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var119 = NEW_nitc__parser__ReduceAction117(&type_nitc__parser__ReduceAction117);
{
((void(*)(val* self, long p0))(var119->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var119, 23l); /* goto= on <var119:ReduceAction117>*/
}
{
((void(*)(val* self))(var119->class->vft[COLOR_core__kernel__Object__init]))(var119); /* init on <var119:ReduceAction117>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var119); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var120 = NEW_nitc__parser__ReduceAction118(&type_nitc__parser__ReduceAction118);
{
((void(*)(val* self, long p0))(var120->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var120, 23l); /* goto= on <var120:ReduceAction118>*/
}
{
((void(*)(val* self))(var120->class->vft[COLOR_core__kernel__Object__init]))(var120); /* init on <var120:ReduceAction118>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var120); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var121 = NEW_nitc__parser__ReduceAction119(&type_nitc__parser__ReduceAction119);
{
((void(*)(val* self, long p0))(var121->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var121, 23l); /* goto= on <var121:ReduceAction119>*/
}
{
((void(*)(val* self))(var121->class->vft[COLOR_core__kernel__Object__init]))(var121); /* init on <var121:ReduceAction119>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var121); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var122 = NEW_nitc__parser__ReduceAction120(&type_nitc__parser__ReduceAction120);
{
((void(*)(val* self, long p0))(var122->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var122, 23l); /* goto= on <var122:ReduceAction120>*/
}
{
((void(*)(val* self))(var122->class->vft[COLOR_core__kernel__Object__init]))(var122); /* init on <var122:ReduceAction120>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var122); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var123 = NEW_nitc__parser__ReduceAction121(&type_nitc__parser__ReduceAction121);
{
((void(*)(val* self, long p0))(var123->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var123, 23l); /* goto= on <var123:ReduceAction121>*/
}
{
((void(*)(val* self))(var123->class->vft[COLOR_core__kernel__Object__init]))(var123); /* init on <var123:ReduceAction121>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var123); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var124 = NEW_nitc__parser__ReduceAction122(&type_nitc__parser__ReduceAction122);
{
((void(*)(val* self, long p0))(var124->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var124, 24l); /* goto= on <var124:ReduceAction122>*/
}
{
((void(*)(val* self))(var124->class->vft[COLOR_core__kernel__Object__init]))(var124); /* init on <var124:ReduceAction122>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var124); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var125 = NEW_nitc__parser__ReduceAction123(&type_nitc__parser__ReduceAction123);
{
((void(*)(val* self, long p0))(var125->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var125, 24l); /* goto= on <var125:ReduceAction123>*/
}
{
((void(*)(val* self))(var125->class->vft[COLOR_core__kernel__Object__init]))(var125); /* init on <var125:ReduceAction123>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var125); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var126 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var126->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var126, 24l); /* goto= on <var126:ReduceAction22>*/
}
{
((void(*)(val* self))(var126->class->vft[COLOR_core__kernel__Object__init]))(var126); /* init on <var126:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var126); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var127 = NEW_nitc__parser__ReduceAction125(&type_nitc__parser__ReduceAction125);
{
((void(*)(val* self, long p0))(var127->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var127, 25l); /* goto= on <var127:ReduceAction125>*/
}
{
((void(*)(val* self))(var127->class->vft[COLOR_core__kernel__Object__init]))(var127); /* init on <var127:ReduceAction125>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var127); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var128 = NEW_nitc__parser__ReduceAction126(&type_nitc__parser__ReduceAction126);
{
((void(*)(val* self, long p0))(var128->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var128, 26l); /* goto= on <var128:ReduceAction126>*/
}
{
((void(*)(val* self))(var128->class->vft[COLOR_core__kernel__Object__init]))(var128); /* init on <var128:ReduceAction126>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var128); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var129 = NEW_nitc__parser__ReduceAction126(&type_nitc__parser__ReduceAction126);
{
((void(*)(val* self, long p0))(var129->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var129, 26l); /* goto= on <var129:ReduceAction126>*/
}
{
((void(*)(val* self))(var129->class->vft[COLOR_core__kernel__Object__init]))(var129); /* init on <var129:ReduceAction126>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var129); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var130 = NEW_nitc__parser__ReduceAction128(&type_nitc__parser__ReduceAction128);
{
((void(*)(val* self, long p0))(var130->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var130, 26l); /* goto= on <var130:ReduceAction128>*/
}
{
((void(*)(val* self))(var130->class->vft[COLOR_core__kernel__Object__init]))(var130); /* init on <var130:ReduceAction128>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var130); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var131 = NEW_nitc__parser__ReduceAction129(&type_nitc__parser__ReduceAction129);
{
((void(*)(val* self, long p0))(var131->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var131, 27l); /* goto= on <var131:ReduceAction129>*/
}
{
((void(*)(val* self))(var131->class->vft[COLOR_core__kernel__Object__init]))(var131); /* init on <var131:ReduceAction129>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var131); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var132 = NEW_nitc__parser__ReduceAction130(&type_nitc__parser__ReduceAction130);
{
((void(*)(val* self, long p0))(var132->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var132, 27l); /* goto= on <var132:ReduceAction130>*/
}
{
((void(*)(val* self))(var132->class->vft[COLOR_core__kernel__Object__init]))(var132); /* init on <var132:ReduceAction130>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var132); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var133 = NEW_nitc__parser__ReduceAction131(&type_nitc__parser__ReduceAction131);
{
((void(*)(val* self, long p0))(var133->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var133, 27l); /* goto= on <var133:ReduceAction131>*/
}
{
((void(*)(val* self))(var133->class->vft[COLOR_core__kernel__Object__init]))(var133); /* init on <var133:ReduceAction131>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var133); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var134 = NEW_nitc__parser__ReduceAction132(&type_nitc__parser__ReduceAction132);
{
((void(*)(val* self, long p0))(var134->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var134, 28l); /* goto= on <var134:ReduceAction132>*/
}
{
((void(*)(val* self))(var134->class->vft[COLOR_core__kernel__Object__init]))(var134); /* init on <var134:ReduceAction132>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var134); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var135 = NEW_nitc__parser__ReduceAction133(&type_nitc__parser__ReduceAction133);
{
((void(*)(val* self, long p0))(var135->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var135, 28l); /* goto= on <var135:ReduceAction133>*/
}
{
((void(*)(val* self))(var135->class->vft[COLOR_core__kernel__Object__init]))(var135); /* init on <var135:ReduceAction133>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var135); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var136 = NEW_nitc__parser__ReduceAction134(&type_nitc__parser__ReduceAction134);
{
((void(*)(val* self, long p0))(var136->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var136, 28l); /* goto= on <var136:ReduceAction134>*/
}
{
((void(*)(val* self))(var136->class->vft[COLOR_core__kernel__Object__init]))(var136); /* init on <var136:ReduceAction134>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var136); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var137 = NEW_nitc__parser__ReduceAction135(&type_nitc__parser__ReduceAction135);
{
((void(*)(val* self, long p0))(var137->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var137, 28l); /* goto= on <var137:ReduceAction135>*/
}
{
((void(*)(val* self))(var137->class->vft[COLOR_core__kernel__Object__init]))(var137); /* init on <var137:ReduceAction135>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var137); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var138 = NEW_nitc__parser__ReduceAction136(&type_nitc__parser__ReduceAction136);
{
((void(*)(val* self, long p0))(var138->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var138, 28l); /* goto= on <var138:ReduceAction136>*/
}
{
((void(*)(val* self))(var138->class->vft[COLOR_core__kernel__Object__init]))(var138); /* init on <var138:ReduceAction136>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var138); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var139 = NEW_nitc__parser__ReduceAction137(&type_nitc__parser__ReduceAction137);
{
((void(*)(val* self, long p0))(var139->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var139, 28l); /* goto= on <var139:ReduceAction137>*/
}
{
((void(*)(val* self))(var139->class->vft[COLOR_core__kernel__Object__init]))(var139); /* init on <var139:ReduceAction137>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var139); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var140 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var140->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var140, 29l); /* goto= on <var140:ReduceAction22>*/
}
{
((void(*)(val* self))(var140->class->vft[COLOR_core__kernel__Object__init]))(var140); /* init on <var140:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var140); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var141 = NEW_nitc__parser__ReduceAction139(&type_nitc__parser__ReduceAction139);
{
((void(*)(val* self, long p0))(var141->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var141, 29l); /* goto= on <var141:ReduceAction139>*/
}
{
((void(*)(val* self))(var141->class->vft[COLOR_core__kernel__Object__init]))(var141); /* init on <var141:ReduceAction139>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var141); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var142 = NEW_nitc__parser__ReduceAction140(&type_nitc__parser__ReduceAction140);
{
((void(*)(val* self, long p0))(var142->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var142, 30l); /* goto= on <var142:ReduceAction140>*/
}
{
((void(*)(val* self))(var142->class->vft[COLOR_core__kernel__Object__init]))(var142); /* init on <var142:ReduceAction140>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var142); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var143 = NEW_nitc__parser__ReduceAction141(&type_nitc__parser__ReduceAction141);
{
((void(*)(val* self, long p0))(var143->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var143, 31l); /* goto= on <var143:ReduceAction141>*/
}
{
((void(*)(val* self))(var143->class->vft[COLOR_core__kernel__Object__init]))(var143); /* init on <var143:ReduceAction141>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var143); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var144 = NEW_nitc__parser__ReduceAction142(&type_nitc__parser__ReduceAction142);
{
((void(*)(val* self, long p0))(var144->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var144, 31l); /* goto= on <var144:ReduceAction142>*/
}
{
((void(*)(val* self))(var144->class->vft[COLOR_core__kernel__Object__init]))(var144); /* init on <var144:ReduceAction142>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var144); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var145 = NEW_nitc__parser__ReduceAction143(&type_nitc__parser__ReduceAction143);
{
((void(*)(val* self, long p0))(var145->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var145, 32l); /* goto= on <var145:ReduceAction143>*/
}
{
((void(*)(val* self))(var145->class->vft[COLOR_core__kernel__Object__init]))(var145); /* init on <var145:ReduceAction143>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var145); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var146 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var146->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var146, 32l); /* goto= on <var146:ReduceAction22>*/
}
{
((void(*)(val* self))(var146->class->vft[COLOR_core__kernel__Object__init]))(var146); /* init on <var146:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var146); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var147 = NEW_nitc__parser__ReduceAction145(&type_nitc__parser__ReduceAction145);
{
((void(*)(val* self, long p0))(var147->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var147, 33l); /* goto= on <var147:ReduceAction145>*/
}
{
((void(*)(val* self))(var147->class->vft[COLOR_core__kernel__Object__init]))(var147); /* init on <var147:ReduceAction145>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var147); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var148 = NEW_nitc__parser__ReduceAction146(&type_nitc__parser__ReduceAction146);
{
((void(*)(val* self, long p0))(var148->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var148, 34l); /* goto= on <var148:ReduceAction146>*/
}
{
((void(*)(val* self))(var148->class->vft[COLOR_core__kernel__Object__init]))(var148); /* init on <var148:ReduceAction146>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var148); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var149 = NEW_nitc__parser__ReduceAction147(&type_nitc__parser__ReduceAction147);
{
((void(*)(val* self, long p0))(var149->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var149, 34l); /* goto= on <var149:ReduceAction147>*/
}
{
((void(*)(val* self))(var149->class->vft[COLOR_core__kernel__Object__init]))(var149); /* init on <var149:ReduceAction147>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var149); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var150 = NEW_nitc__parser__ReduceAction148(&type_nitc__parser__ReduceAction148);
{
((void(*)(val* self, long p0))(var150->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var150, 34l); /* goto= on <var150:ReduceAction148>*/
}
{
((void(*)(val* self))(var150->class->vft[COLOR_core__kernel__Object__init]))(var150); /* init on <var150:ReduceAction148>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var150); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var151 = NEW_nitc__parser__ReduceAction149(&type_nitc__parser__ReduceAction149);
{
((void(*)(val* self, long p0))(var151->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var151, 34l); /* goto= on <var151:ReduceAction149>*/
}
{
((void(*)(val* self))(var151->class->vft[COLOR_core__kernel__Object__init]))(var151); /* init on <var151:ReduceAction149>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var151); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var152 = NEW_nitc__parser__ReduceAction150(&type_nitc__parser__ReduceAction150);
{
((void(*)(val* self, long p0))(var152->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var152, 35l); /* goto= on <var152:ReduceAction150>*/
}
{
((void(*)(val* self))(var152->class->vft[COLOR_core__kernel__Object__init]))(var152); /* init on <var152:ReduceAction150>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var152); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var153 = NEW_nitc__parser__ReduceAction151(&type_nitc__parser__ReduceAction151);
{
((void(*)(val* self, long p0))(var153->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var153, 35l); /* goto= on <var153:ReduceAction151>*/
}
{
((void(*)(val* self))(var153->class->vft[COLOR_core__kernel__Object__init]))(var153); /* init on <var153:ReduceAction151>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var153); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var154 = NEW_nitc__parser__ReduceAction152(&type_nitc__parser__ReduceAction152);
{
((void(*)(val* self, long p0))(var154->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var154, 36l); /* goto= on <var154:ReduceAction152>*/
}
{
((void(*)(val* self))(var154->class->vft[COLOR_core__kernel__Object__init]))(var154); /* init on <var154:ReduceAction152>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var154); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var155 = NEW_nitc__parser__ReduceAction152(&type_nitc__parser__ReduceAction152);
{
((void(*)(val* self, long p0))(var155->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var155, 37l); /* goto= on <var155:ReduceAction152>*/
}
{
((void(*)(val* self))(var155->class->vft[COLOR_core__kernel__Object__init]))(var155); /* init on <var155:ReduceAction152>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var155); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var156 = NEW_nitc__parser__ReduceAction152(&type_nitc__parser__ReduceAction152);
{
((void(*)(val* self, long p0))(var156->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var156, 38l); /* goto= on <var156:ReduceAction152>*/
}
{
((void(*)(val* self))(var156->class->vft[COLOR_core__kernel__Object__init]))(var156); /* init on <var156:ReduceAction152>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var156); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var157 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var157->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var157, 38l); /* goto= on <var157:ReduceAction22>*/
}
{
((void(*)(val* self))(var157->class->vft[COLOR_core__kernel__Object__init]))(var157); /* init on <var157:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var157); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var158 = NEW_nitc__parser__ReduceAction156(&type_nitc__parser__ReduceAction156);
{
((void(*)(val* self, long p0))(var158->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var158, 39l); /* goto= on <var158:ReduceAction156>*/
}
{
((void(*)(val* self))(var158->class->vft[COLOR_core__kernel__Object__init]))(var158); /* init on <var158:ReduceAction156>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var158); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var159 = NEW_nitc__parser__ReduceAction157(&type_nitc__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var159->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var159, 39l); /* goto= on <var159:ReduceAction157>*/
}
{
((void(*)(val* self))(var159->class->vft[COLOR_core__kernel__Object__init]))(var159); /* init on <var159:ReduceAction157>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var159); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var160 = NEW_nitc__parser__ReduceAction158(&type_nitc__parser__ReduceAction158);
{
((void(*)(val* self, long p0))(var160->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var160, 39l); /* goto= on <var160:ReduceAction158>*/
}
{
((void(*)(val* self))(var160->class->vft[COLOR_core__kernel__Object__init]))(var160); /* init on <var160:ReduceAction158>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var160); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var161 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var161->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var161, 39l); /* goto= on <var161:ReduceAction159>*/
}
{
((void(*)(val* self))(var161->class->vft[COLOR_core__kernel__Object__init]))(var161); /* init on <var161:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var161); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var162 = NEW_nitc__parser__ReduceAction160(&type_nitc__parser__ReduceAction160);
{
((void(*)(val* self, long p0))(var162->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var162, 40l); /* goto= on <var162:ReduceAction160>*/
}
{
((void(*)(val* self))(var162->class->vft[COLOR_core__kernel__Object__init]))(var162); /* init on <var162:ReduceAction160>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var162); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var163 = NEW_nitc__parser__ReduceAction161(&type_nitc__parser__ReduceAction161);
{
((void(*)(val* self, long p0))(var163->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var163, 40l); /* goto= on <var163:ReduceAction161>*/
}
{
((void(*)(val* self))(var163->class->vft[COLOR_core__kernel__Object__init]))(var163); /* init on <var163:ReduceAction161>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var163); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var164 = NEW_nitc__parser__ReduceAction162(&type_nitc__parser__ReduceAction162);
{
((void(*)(val* self, long p0))(var164->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var164, 41l); /* goto= on <var164:ReduceAction162>*/
}
{
((void(*)(val* self))(var164->class->vft[COLOR_core__kernel__Object__init]))(var164); /* init on <var164:ReduceAction162>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var164); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var165 = NEW_nitc__parser__ReduceAction163(&type_nitc__parser__ReduceAction163);
{
((void(*)(val* self, long p0))(var165->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var165, 41l); /* goto= on <var165:ReduceAction163>*/
}
{
((void(*)(val* self))(var165->class->vft[COLOR_core__kernel__Object__init]))(var165); /* init on <var165:ReduceAction163>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var165); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var166 = NEW_nitc__parser__ReduceAction164(&type_nitc__parser__ReduceAction164);
{
((void(*)(val* self, long p0))(var166->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var166, 42l); /* goto= on <var166:ReduceAction164>*/
}
{
((void(*)(val* self))(var166->class->vft[COLOR_core__kernel__Object__init]))(var166); /* init on <var166:ReduceAction164>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var166); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var167 = NEW_nitc__parser__ReduceAction165(&type_nitc__parser__ReduceAction165);
{
((void(*)(val* self, long p0))(var167->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var167, 42l); /* goto= on <var167:ReduceAction165>*/
}
{
((void(*)(val* self))(var167->class->vft[COLOR_core__kernel__Object__init]))(var167); /* init on <var167:ReduceAction165>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var167); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var168 = NEW_nitc__parser__ReduceAction156(&type_nitc__parser__ReduceAction156);
{
((void(*)(val* self, long p0))(var168->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var168, 43l); /* goto= on <var168:ReduceAction156>*/
}
{
((void(*)(val* self))(var168->class->vft[COLOR_core__kernel__Object__init]))(var168); /* init on <var168:ReduceAction156>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var168); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var169 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var169->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var169, 44l); /* goto= on <var169:ReduceAction159>*/
}
{
((void(*)(val* self))(var169->class->vft[COLOR_core__kernel__Object__init]))(var169); /* init on <var169:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var169); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var170 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var170->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var170, 44l); /* goto= on <var170:ReduceAction159>*/
}
{
((void(*)(val* self))(var170->class->vft[COLOR_core__kernel__Object__init]))(var170); /* init on <var170:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var170); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var171 = NEW_nitc__parser__ReduceAction169(&type_nitc__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var171->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var171, 44l); /* goto= on <var171:ReduceAction169>*/
}
{
((void(*)(val* self))(var171->class->vft[COLOR_core__kernel__Object__init]))(var171); /* init on <var171:ReduceAction169>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var171); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var172 = NEW_nitc__parser__ReduceAction170(&type_nitc__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var172->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var172, 44l); /* goto= on <var172:ReduceAction170>*/
}
{
((void(*)(val* self))(var172->class->vft[COLOR_core__kernel__Object__init]))(var172); /* init on <var172:ReduceAction170>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var172); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var173 = NEW_nitc__parser__ReduceAction171(&type_nitc__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var173->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var173, 44l); /* goto= on <var173:ReduceAction171>*/
}
{
((void(*)(val* self))(var173->class->vft[COLOR_core__kernel__Object__init]))(var173); /* init on <var173:ReduceAction171>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var173); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var174 = NEW_nitc__parser__ReduceAction172(&type_nitc__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var174->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var174, 44l); /* goto= on <var174:ReduceAction172>*/
}
{
((void(*)(val* self))(var174->class->vft[COLOR_core__kernel__Object__init]))(var174); /* init on <var174:ReduceAction172>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var174); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var175 = NEW_nitc__parser__ReduceAction173(&type_nitc__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var175->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var175, 44l); /* goto= on <var175:ReduceAction173>*/
}
{
((void(*)(val* self))(var175->class->vft[COLOR_core__kernel__Object__init]))(var175); /* init on <var175:ReduceAction173>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var175); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var176 = NEW_nitc__parser__ReduceAction174(&type_nitc__parser__ReduceAction174);
{
((void(*)(val* self, long p0))(var176->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var176, 44l); /* goto= on <var176:ReduceAction174>*/
}
{
((void(*)(val* self))(var176->class->vft[COLOR_core__kernel__Object__init]))(var176); /* init on <var176:ReduceAction174>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var176); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var177 = NEW_nitc__parser__ReduceAction175(&type_nitc__parser__ReduceAction175);
{
((void(*)(val* self, long p0))(var177->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var177, 44l); /* goto= on <var177:ReduceAction175>*/
}
{
((void(*)(val* self))(var177->class->vft[COLOR_core__kernel__Object__init]))(var177); /* init on <var177:ReduceAction175>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var177); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var178 = NEW_nitc__parser__ReduceAction176(&type_nitc__parser__ReduceAction176);
{
((void(*)(val* self, long p0))(var178->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var178, 44l); /* goto= on <var178:ReduceAction176>*/
}
{
((void(*)(val* self))(var178->class->vft[COLOR_core__kernel__Object__init]))(var178); /* init on <var178:ReduceAction176>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var178); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var179 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var179->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var179, 44l); /* goto= on <var179:ReduceAction159>*/
}
{
((void(*)(val* self))(var179->class->vft[COLOR_core__kernel__Object__init]))(var179); /* init on <var179:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var179); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var180 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var180->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var180, 44l); /* goto= on <var180:ReduceAction159>*/
}
{
((void(*)(val* self))(var180->class->vft[COLOR_core__kernel__Object__init]))(var180); /* init on <var180:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var180); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var181 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var181->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var181, 44l); /* goto= on <var181:ReduceAction159>*/
}
{
((void(*)(val* self))(var181->class->vft[COLOR_core__kernel__Object__init]))(var181); /* init on <var181:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var181); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var182 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var182->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var182, 44l); /* goto= on <var182:ReduceAction159>*/
}
{
((void(*)(val* self))(var182->class->vft[COLOR_core__kernel__Object__init]))(var182); /* init on <var182:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var182); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var183 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var183->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var183, 44l); /* goto= on <var183:ReduceAction159>*/
}
{
((void(*)(val* self))(var183->class->vft[COLOR_core__kernel__Object__init]))(var183); /* init on <var183:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var183); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var184 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var184->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var184, 44l); /* goto= on <var184:ReduceAction159>*/
}
{
((void(*)(val* self))(var184->class->vft[COLOR_core__kernel__Object__init]))(var184); /* init on <var184:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var184); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var185 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var185->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var185, 44l); /* goto= on <var185:ReduceAction159>*/
}
{
((void(*)(val* self))(var185->class->vft[COLOR_core__kernel__Object__init]))(var185); /* init on <var185:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var185); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var186 = NEW_nitc__parser__ReduceAction184(&type_nitc__parser__ReduceAction184);
{
((void(*)(val* self, long p0))(var186->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var186, 44l); /* goto= on <var186:ReduceAction184>*/
}
{
((void(*)(val* self))(var186->class->vft[COLOR_core__kernel__Object__init]))(var186); /* init on <var186:ReduceAction184>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var186); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var187 = NEW_nitc__parser__ReduceAction185(&type_nitc__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var187->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var187, 44l); /* goto= on <var187:ReduceAction185>*/
}
{
((void(*)(val* self))(var187->class->vft[COLOR_core__kernel__Object__init]))(var187); /* init on <var187:ReduceAction185>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var187); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var188 = NEW_nitc__parser__ReduceAction186(&type_nitc__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var188->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var188, 44l); /* goto= on <var188:ReduceAction186>*/
}
{
((void(*)(val* self))(var188->class->vft[COLOR_core__kernel__Object__init]))(var188); /* init on <var188:ReduceAction186>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var188); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var189 = NEW_nitc__parser__ReduceAction187(&type_nitc__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var189->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var189, 44l); /* goto= on <var189:ReduceAction187>*/
}
{
((void(*)(val* self))(var189->class->vft[COLOR_core__kernel__Object__init]))(var189); /* init on <var189:ReduceAction187>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var189); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var190 = NEW_nitc__parser__ReduceAction188(&type_nitc__parser__ReduceAction188);
{
((void(*)(val* self, long p0))(var190->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var190, 44l); /* goto= on <var190:ReduceAction188>*/
}
{
((void(*)(val* self))(var190->class->vft[COLOR_core__kernel__Object__init]))(var190); /* init on <var190:ReduceAction188>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var190); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var191 = NEW_nitc__parser__ReduceAction189(&type_nitc__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var191->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var191, 44l); /* goto= on <var191:ReduceAction189>*/
}
{
((void(*)(val* self))(var191->class->vft[COLOR_core__kernel__Object__init]))(var191); /* init on <var191:ReduceAction189>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var191); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var192 = NEW_nitc__parser__ReduceAction190(&type_nitc__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var192->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var192, 44l); /* goto= on <var192:ReduceAction190>*/
}
{
((void(*)(val* self))(var192->class->vft[COLOR_core__kernel__Object__init]))(var192); /* init on <var192:ReduceAction190>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var192); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var193 = NEW_nitc__parser__ReduceAction191(&type_nitc__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var193->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var193, 44l); /* goto= on <var193:ReduceAction191>*/
}
{
((void(*)(val* self))(var193->class->vft[COLOR_core__kernel__Object__init]))(var193); /* init on <var193:ReduceAction191>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var193); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var194 = NEW_nitc__parser__ReduceAction192(&type_nitc__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var194->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var194, 44l); /* goto= on <var194:ReduceAction192>*/
}
{
((void(*)(val* self))(var194->class->vft[COLOR_core__kernel__Object__init]))(var194); /* init on <var194:ReduceAction192>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var194); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var195 = NEW_nitc__parser__ReduceAction193(&type_nitc__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var195->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var195, 44l); /* goto= on <var195:ReduceAction193>*/
}
{
((void(*)(val* self))(var195->class->vft[COLOR_core__kernel__Object__init]))(var195); /* init on <var195:ReduceAction193>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var195); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var196 = NEW_nitc__parser__ReduceAction194(&type_nitc__parser__ReduceAction194);
{
((void(*)(val* self, long p0))(var196->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var196, 44l); /* goto= on <var196:ReduceAction194>*/
}
{
((void(*)(val* self))(var196->class->vft[COLOR_core__kernel__Object__init]))(var196); /* init on <var196:ReduceAction194>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var196); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var197 = NEW_nitc__parser__ReduceAction195(&type_nitc__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var197->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var197, 44l); /* goto= on <var197:ReduceAction195>*/
}
{
((void(*)(val* self))(var197->class->vft[COLOR_core__kernel__Object__init]))(var197); /* init on <var197:ReduceAction195>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var197); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var198 = NEW_nitc__parser__ReduceAction196(&type_nitc__parser__ReduceAction196);
{
((void(*)(val* self, long p0))(var198->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var198, 44l); /* goto= on <var198:ReduceAction196>*/
}
{
((void(*)(val* self))(var198->class->vft[COLOR_core__kernel__Object__init]))(var198); /* init on <var198:ReduceAction196>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var198); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var199 = NEW_nitc__parser__ReduceAction195(&type_nitc__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var199->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var199, 44l); /* goto= on <var199:ReduceAction195>*/
}
{
((void(*)(val* self))(var199->class->vft[COLOR_core__kernel__Object__init]))(var199); /* init on <var199:ReduceAction195>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var199); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var200 = NEW_nitc__parser__ReduceAction198(&type_nitc__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var200->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var200, 44l); /* goto= on <var200:ReduceAction198>*/
}
{
((void(*)(val* self))(var200->class->vft[COLOR_core__kernel__Object__init]))(var200); /* init on <var200:ReduceAction198>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var200); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var201 = NEW_nitc__parser__ReduceAction199(&type_nitc__parser__ReduceAction199);
{
((void(*)(val* self, long p0))(var201->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var201, 44l); /* goto= on <var201:ReduceAction199>*/
}
{
((void(*)(val* self))(var201->class->vft[COLOR_core__kernel__Object__init]))(var201); /* init on <var201:ReduceAction199>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var201); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var202 = NEW_nitc__parser__ReduceAction198(&type_nitc__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var202->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var202, 44l); /* goto= on <var202:ReduceAction198>*/
}
{
((void(*)(val* self))(var202->class->vft[COLOR_core__kernel__Object__init]))(var202); /* init on <var202:ReduceAction198>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var202); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var203 = NEW_nitc__parser__ReduceAction201(&type_nitc__parser__ReduceAction201);
{
((void(*)(val* self, long p0))(var203->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var203, 44l); /* goto= on <var203:ReduceAction201>*/
}
{
((void(*)(val* self))(var203->class->vft[COLOR_core__kernel__Object__init]))(var203); /* init on <var203:ReduceAction201>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var203); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var204 = NEW_nitc__parser__ReduceAction202(&type_nitc__parser__ReduceAction202);
{
((void(*)(val* self, long p0))(var204->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var204, 45l); /* goto= on <var204:ReduceAction202>*/
}
{
((void(*)(val* self))(var204->class->vft[COLOR_core__kernel__Object__init]))(var204); /* init on <var204:ReduceAction202>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var204); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var205 = NEW_nitc__parser__ReduceAction203(&type_nitc__parser__ReduceAction203);
{
((void(*)(val* self, long p0))(var205->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var205, 45l); /* goto= on <var205:ReduceAction203>*/
}
{
((void(*)(val* self))(var205->class->vft[COLOR_core__kernel__Object__init]))(var205); /* init on <var205:ReduceAction203>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var205); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var206 = NEW_nitc__parser__ReduceAction204(&type_nitc__parser__ReduceAction204);
{
((void(*)(val* self, long p0))(var206->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var206, 46l); /* goto= on <var206:ReduceAction204>*/
}
{
((void(*)(val* self))(var206->class->vft[COLOR_core__kernel__Object__init]))(var206); /* init on <var206:ReduceAction204>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var206); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var207 = NEW_nitc__parser__ReduceAction205(&type_nitc__parser__ReduceAction205);
{
((void(*)(val* self, long p0))(var207->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var207, 46l); /* goto= on <var207:ReduceAction205>*/
}
{
((void(*)(val* self))(var207->class->vft[COLOR_core__kernel__Object__init]))(var207); /* init on <var207:ReduceAction205>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var207); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var208 = NEW_nitc__parser__ReduceAction206(&type_nitc__parser__ReduceAction206);
{
((void(*)(val* self, long p0))(var208->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var208, 46l); /* goto= on <var208:ReduceAction206>*/
}
{
((void(*)(val* self))(var208->class->vft[COLOR_core__kernel__Object__init]))(var208); /* init on <var208:ReduceAction206>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var208); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var209 = NEW_nitc__parser__ReduceAction207(&type_nitc__parser__ReduceAction207);
{
((void(*)(val* self, long p0))(var209->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var209, 46l); /* goto= on <var209:ReduceAction207>*/
}
{
((void(*)(val* self))(var209->class->vft[COLOR_core__kernel__Object__init]))(var209); /* init on <var209:ReduceAction207>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var209); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var210 = NEW_nitc__parser__ReduceAction208(&type_nitc__parser__ReduceAction208);
{
((void(*)(val* self, long p0))(var210->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var210, 47l); /* goto= on <var210:ReduceAction208>*/
}
{
((void(*)(val* self))(var210->class->vft[COLOR_core__kernel__Object__init]))(var210); /* init on <var210:ReduceAction208>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var210); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var211 = NEW_nitc__parser__ReduceAction209(&type_nitc__parser__ReduceAction209);
{
((void(*)(val* self, long p0))(var211->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var211, 47l); /* goto= on <var211:ReduceAction209>*/
}
{
((void(*)(val* self))(var211->class->vft[COLOR_core__kernel__Object__init]))(var211); /* init on <var211:ReduceAction209>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var211); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var212 = NEW_nitc__parser__ReduceAction210(&type_nitc__parser__ReduceAction210);
{
((void(*)(val* self, long p0))(var212->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var212, 47l); /* goto= on <var212:ReduceAction210>*/
}
{
((void(*)(val* self))(var212->class->vft[COLOR_core__kernel__Object__init]))(var212); /* init on <var212:ReduceAction210>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var212); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var213 = NEW_nitc__parser__ReduceAction211(&type_nitc__parser__ReduceAction211);
{
((void(*)(val* self, long p0))(var213->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var213, 47l); /* goto= on <var213:ReduceAction211>*/
}
{
((void(*)(val* self))(var213->class->vft[COLOR_core__kernel__Object__init]))(var213); /* init on <var213:ReduceAction211>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var213); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var214 = NEW_nitc__parser__ReduceAction212(&type_nitc__parser__ReduceAction212);
{
((void(*)(val* self, long p0))(var214->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var214, 47l); /* goto= on <var214:ReduceAction212>*/
}
{
((void(*)(val* self))(var214->class->vft[COLOR_core__kernel__Object__init]))(var214); /* init on <var214:ReduceAction212>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var214); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var215 = NEW_nitc__parser__ReduceAction213(&type_nitc__parser__ReduceAction213);
{
((void(*)(val* self, long p0))(var215->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var215, 47l); /* goto= on <var215:ReduceAction213>*/
}
{
((void(*)(val* self))(var215->class->vft[COLOR_core__kernel__Object__init]))(var215); /* init on <var215:ReduceAction213>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var215); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var216 = NEW_nitc__parser__ReduceAction214(&type_nitc__parser__ReduceAction214);
{
((void(*)(val* self, long p0))(var216->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var216, 47l); /* goto= on <var216:ReduceAction214>*/
}
{
((void(*)(val* self))(var216->class->vft[COLOR_core__kernel__Object__init]))(var216); /* init on <var216:ReduceAction214>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var216); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var217 = NEW_nitc__parser__ReduceAction215(&type_nitc__parser__ReduceAction215);
{
((void(*)(val* self, long p0))(var217->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var217, 47l); /* goto= on <var217:ReduceAction215>*/
}
{
((void(*)(val* self))(var217->class->vft[COLOR_core__kernel__Object__init]))(var217); /* init on <var217:ReduceAction215>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var217); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var218 = NEW_nitc__parser__ReduceAction216(&type_nitc__parser__ReduceAction216);
{
((void(*)(val* self, long p0))(var218->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var218, 47l); /* goto= on <var218:ReduceAction216>*/
}
{
((void(*)(val* self))(var218->class->vft[COLOR_core__kernel__Object__init]))(var218); /* init on <var218:ReduceAction216>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var218); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var219 = NEW_nitc__parser__ReduceAction217(&type_nitc__parser__ReduceAction217);
{
((void(*)(val* self, long p0))(var219->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var219, 47l); /* goto= on <var219:ReduceAction217>*/
}
{
((void(*)(val* self))(var219->class->vft[COLOR_core__kernel__Object__init]))(var219); /* init on <var219:ReduceAction217>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var219); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var220 = NEW_nitc__parser__ReduceAction218(&type_nitc__parser__ReduceAction218);
{
((void(*)(val* self, long p0))(var220->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var220, 47l); /* goto= on <var220:ReduceAction218>*/
}
{
((void(*)(val* self))(var220->class->vft[COLOR_core__kernel__Object__init]))(var220); /* init on <var220:ReduceAction218>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var220); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var221 = NEW_nitc__parser__ReduceAction219(&type_nitc__parser__ReduceAction219);
{
((void(*)(val* self, long p0))(var221->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var221, 47l); /* goto= on <var221:ReduceAction219>*/
}
{
((void(*)(val* self))(var221->class->vft[COLOR_core__kernel__Object__init]))(var221); /* init on <var221:ReduceAction219>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var221); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var222 = NEW_nitc__parser__ReduceAction220(&type_nitc__parser__ReduceAction220);
{
((void(*)(val* self, long p0))(var222->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var222, 47l); /* goto= on <var222:ReduceAction220>*/
}
{
((void(*)(val* self))(var222->class->vft[COLOR_core__kernel__Object__init]))(var222); /* init on <var222:ReduceAction220>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var222); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var223 = NEW_nitc__parser__ReduceAction221(&type_nitc__parser__ReduceAction221);
{
((void(*)(val* self, long p0))(var223->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var223, 47l); /* goto= on <var223:ReduceAction221>*/
}
{
((void(*)(val* self))(var223->class->vft[COLOR_core__kernel__Object__init]))(var223); /* init on <var223:ReduceAction221>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var223); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var224 = NEW_nitc__parser__ReduceAction222(&type_nitc__parser__ReduceAction222);
{
((void(*)(val* self, long p0))(var224->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var224, 47l); /* goto= on <var224:ReduceAction222>*/
}
{
((void(*)(val* self))(var224->class->vft[COLOR_core__kernel__Object__init]))(var224); /* init on <var224:ReduceAction222>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var224); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var225 = NEW_nitc__parser__ReduceAction223(&type_nitc__parser__ReduceAction223);
{
((void(*)(val* self, long p0))(var225->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var225, 47l); /* goto= on <var225:ReduceAction223>*/
}
{
((void(*)(val* self))(var225->class->vft[COLOR_core__kernel__Object__init]))(var225); /* init on <var225:ReduceAction223>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var225); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var226 = NEW_nitc__parser__ReduceAction224(&type_nitc__parser__ReduceAction224);
{
((void(*)(val* self, long p0))(var226->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var226, 47l); /* goto= on <var226:ReduceAction224>*/
}
{
((void(*)(val* self))(var226->class->vft[COLOR_core__kernel__Object__init]))(var226); /* init on <var226:ReduceAction224>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var226); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var227 = NEW_nitc__parser__ReduceAction225(&type_nitc__parser__ReduceAction225);
{
((void(*)(val* self, long p0))(var227->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var227, 47l); /* goto= on <var227:ReduceAction225>*/
}
{
((void(*)(val* self))(var227->class->vft[COLOR_core__kernel__Object__init]))(var227); /* init on <var227:ReduceAction225>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var227); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var228 = NEW_nitc__parser__ReduceAction226(&type_nitc__parser__ReduceAction226);
{
((void(*)(val* self, long p0))(var228->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var228, 47l); /* goto= on <var228:ReduceAction226>*/
}
{
((void(*)(val* self))(var228->class->vft[COLOR_core__kernel__Object__init]))(var228); /* init on <var228:ReduceAction226>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var228); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var229 = NEW_nitc__parser__ReduceAction227(&type_nitc__parser__ReduceAction227);
{
((void(*)(val* self, long p0))(var229->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var229, 47l); /* goto= on <var229:ReduceAction227>*/
}
{
((void(*)(val* self))(var229->class->vft[COLOR_core__kernel__Object__init]))(var229); /* init on <var229:ReduceAction227>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var229); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var230 = NEW_nitc__parser__ReduceAction228(&type_nitc__parser__ReduceAction228);
{
((void(*)(val* self, long p0))(var230->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var230, 47l); /* goto= on <var230:ReduceAction228>*/
}
{
((void(*)(val* self))(var230->class->vft[COLOR_core__kernel__Object__init]))(var230); /* init on <var230:ReduceAction228>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var230); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var231 = NEW_nitc__parser__ReduceAction229(&type_nitc__parser__ReduceAction229);
{
((void(*)(val* self, long p0))(var231->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var231, 47l); /* goto= on <var231:ReduceAction229>*/
}
{
((void(*)(val* self))(var231->class->vft[COLOR_core__kernel__Object__init]))(var231); /* init on <var231:ReduceAction229>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var231); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var232 = NEW_nitc__parser__ReduceAction230(&type_nitc__parser__ReduceAction230);
{
((void(*)(val* self, long p0))(var232->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var232, 47l); /* goto= on <var232:ReduceAction230>*/
}
{
((void(*)(val* self))(var232->class->vft[COLOR_core__kernel__Object__init]))(var232); /* init on <var232:ReduceAction230>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var232); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var233 = NEW_nitc__parser__ReduceAction231(&type_nitc__parser__ReduceAction231);
{
((void(*)(val* self, long p0))(var233->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var233, 47l); /* goto= on <var233:ReduceAction231>*/
}
{
((void(*)(val* self))(var233->class->vft[COLOR_core__kernel__Object__init]))(var233); /* init on <var233:ReduceAction231>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var233); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var234 = NEW_nitc__parser__ReduceAction232(&type_nitc__parser__ReduceAction232);
{
((void(*)(val* self, long p0))(var234->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var234, 47l); /* goto= on <var234:ReduceAction232>*/
}
{
((void(*)(val* self))(var234->class->vft[COLOR_core__kernel__Object__init]))(var234); /* init on <var234:ReduceAction232>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var234); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var235 = NEW_nitc__parser__ReduceAction233(&type_nitc__parser__ReduceAction233);
{
((void(*)(val* self, long p0))(var235->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var235, 47l); /* goto= on <var235:ReduceAction233>*/
}
{
((void(*)(val* self))(var235->class->vft[COLOR_core__kernel__Object__init]))(var235); /* init on <var235:ReduceAction233>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var235); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var236 = NEW_nitc__parser__ReduceAction234(&type_nitc__parser__ReduceAction234);
{
((void(*)(val* self, long p0))(var236->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var236, 47l); /* goto= on <var236:ReduceAction234>*/
}
{
((void(*)(val* self))(var236->class->vft[COLOR_core__kernel__Object__init]))(var236); /* init on <var236:ReduceAction234>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var236); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var237 = NEW_nitc__parser__ReduceAction235(&type_nitc__parser__ReduceAction235);
{
((void(*)(val* self, long p0))(var237->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var237, 47l); /* goto= on <var237:ReduceAction235>*/
}
{
((void(*)(val* self))(var237->class->vft[COLOR_core__kernel__Object__init]))(var237); /* init on <var237:ReduceAction235>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var237); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var238 = NEW_nitc__parser__ReduceAction236(&type_nitc__parser__ReduceAction236);
{
((void(*)(val* self, long p0))(var238->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var238, 47l); /* goto= on <var238:ReduceAction236>*/
}
{
((void(*)(val* self))(var238->class->vft[COLOR_core__kernel__Object__init]))(var238); /* init on <var238:ReduceAction236>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var238); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var239 = NEW_nitc__parser__ReduceAction237(&type_nitc__parser__ReduceAction237);
{
((void(*)(val* self, long p0))(var239->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var239, 47l); /* goto= on <var239:ReduceAction237>*/
}
{
((void(*)(val* self))(var239->class->vft[COLOR_core__kernel__Object__init]))(var239); /* init on <var239:ReduceAction237>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var239); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var240 = NEW_nitc__parser__ReduceAction238(&type_nitc__parser__ReduceAction238);
{
((void(*)(val* self, long p0))(var240->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var240, 47l); /* goto= on <var240:ReduceAction238>*/
}
{
((void(*)(val* self))(var240->class->vft[COLOR_core__kernel__Object__init]))(var240); /* init on <var240:ReduceAction238>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var240); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var241 = NEW_nitc__parser__ReduceAction239(&type_nitc__parser__ReduceAction239);
{
((void(*)(val* self, long p0))(var241->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var241, 47l); /* goto= on <var241:ReduceAction239>*/
}
{
((void(*)(val* self))(var241->class->vft[COLOR_core__kernel__Object__init]))(var241); /* init on <var241:ReduceAction239>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var241); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var242 = NEW_nitc__parser__ReduceAction240(&type_nitc__parser__ReduceAction240);
{
((void(*)(val* self, long p0))(var242->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var242, 47l); /* goto= on <var242:ReduceAction240>*/
}
{
((void(*)(val* self))(var242->class->vft[COLOR_core__kernel__Object__init]))(var242); /* init on <var242:ReduceAction240>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var242); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var243 = NEW_nitc__parser__ReduceAction241(&type_nitc__parser__ReduceAction241);
{
((void(*)(val* self, long p0))(var243->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var243, 47l); /* goto= on <var243:ReduceAction241>*/
}
{
((void(*)(val* self))(var243->class->vft[COLOR_core__kernel__Object__init]))(var243); /* init on <var243:ReduceAction241>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var243); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var244 = NEW_nitc__parser__ReduceAction242(&type_nitc__parser__ReduceAction242);
{
((void(*)(val* self, long p0))(var244->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var244, 47l); /* goto= on <var244:ReduceAction242>*/
}
{
((void(*)(val* self))(var244->class->vft[COLOR_core__kernel__Object__init]))(var244); /* init on <var244:ReduceAction242>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var244); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var245 = NEW_nitc__parser__ReduceAction243(&type_nitc__parser__ReduceAction243);
{
((void(*)(val* self, long p0))(var245->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var245, 47l); /* goto= on <var245:ReduceAction243>*/
}
{
((void(*)(val* self))(var245->class->vft[COLOR_core__kernel__Object__init]))(var245); /* init on <var245:ReduceAction243>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var245); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var246 = NEW_nitc__parser__ReduceAction244(&type_nitc__parser__ReduceAction244);
{
((void(*)(val* self, long p0))(var246->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var246, 47l); /* goto= on <var246:ReduceAction244>*/
}
{
((void(*)(val* self))(var246->class->vft[COLOR_core__kernel__Object__init]))(var246); /* init on <var246:ReduceAction244>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var246); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var247 = NEW_nitc__parser__ReduceAction245(&type_nitc__parser__ReduceAction245);
{
((void(*)(val* self, long p0))(var247->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var247, 47l); /* goto= on <var247:ReduceAction245>*/
}
{
((void(*)(val* self))(var247->class->vft[COLOR_core__kernel__Object__init]))(var247); /* init on <var247:ReduceAction245>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var247); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var248 = NEW_nitc__parser__ReduceAction246(&type_nitc__parser__ReduceAction246);
{
((void(*)(val* self, long p0))(var248->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var248, 48l); /* goto= on <var248:ReduceAction246>*/
}
{
((void(*)(val* self))(var248->class->vft[COLOR_core__kernel__Object__init]))(var248); /* init on <var248:ReduceAction246>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var248); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var249 = NEW_nitc__parser__ReduceAction247(&type_nitc__parser__ReduceAction247);
{
((void(*)(val* self, long p0))(var249->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var249, 48l); /* goto= on <var249:ReduceAction247>*/
}
{
((void(*)(val* self))(var249->class->vft[COLOR_core__kernel__Object__init]))(var249); /* init on <var249:ReduceAction247>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var249); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var250 = NEW_nitc__parser__ReduceAction248(&type_nitc__parser__ReduceAction248);
{
((void(*)(val* self, long p0))(var250->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var250, 48l); /* goto= on <var250:ReduceAction248>*/
}
{
((void(*)(val* self))(var250->class->vft[COLOR_core__kernel__Object__init]))(var250); /* init on <var250:ReduceAction248>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var250); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var251 = NEW_nitc__parser__ReduceAction249(&type_nitc__parser__ReduceAction249);
{
((void(*)(val* self, long p0))(var251->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var251, 48l); /* goto= on <var251:ReduceAction249>*/
}
{
((void(*)(val* self))(var251->class->vft[COLOR_core__kernel__Object__init]))(var251); /* init on <var251:ReduceAction249>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var251); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var252 = NEW_nitc__parser__ReduceAction250(&type_nitc__parser__ReduceAction250);
{
((void(*)(val* self, long p0))(var252->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var252, 48l); /* goto= on <var252:ReduceAction250>*/
}
{
((void(*)(val* self))(var252->class->vft[COLOR_core__kernel__Object__init]))(var252); /* init on <var252:ReduceAction250>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var252); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var253 = NEW_nitc__parser__ReduceAction251(&type_nitc__parser__ReduceAction251);
{
((void(*)(val* self, long p0))(var253->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var253, 48l); /* goto= on <var253:ReduceAction251>*/
}
{
((void(*)(val* self))(var253->class->vft[COLOR_core__kernel__Object__init]))(var253); /* init on <var253:ReduceAction251>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var253); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var254 = NEW_nitc__parser__ReduceAction252(&type_nitc__parser__ReduceAction252);
{
((void(*)(val* self, long p0))(var254->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var254, 48l); /* goto= on <var254:ReduceAction252>*/
}
{
((void(*)(val* self))(var254->class->vft[COLOR_core__kernel__Object__init]))(var254); /* init on <var254:ReduceAction252>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var254); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var255 = NEW_nitc__parser__ReduceAction253(&type_nitc__parser__ReduceAction253);
{
((void(*)(val* self, long p0))(var255->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var255, 48l); /* goto= on <var255:ReduceAction253>*/
}
{
((void(*)(val* self))(var255->class->vft[COLOR_core__kernel__Object__init]))(var255); /* init on <var255:ReduceAction253>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var255); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var256 = NEW_nitc__parser__ReduceAction254(&type_nitc__parser__ReduceAction254);
{
((void(*)(val* self, long p0))(var256->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var256, 48l); /* goto= on <var256:ReduceAction254>*/
}
{
((void(*)(val* self))(var256->class->vft[COLOR_core__kernel__Object__init]))(var256); /* init on <var256:ReduceAction254>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var256); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var257 = NEW_nitc__parser__ReduceAction255(&type_nitc__parser__ReduceAction255);
{
((void(*)(val* self, long p0))(var257->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var257, 48l); /* goto= on <var257:ReduceAction255>*/
}
{
((void(*)(val* self))(var257->class->vft[COLOR_core__kernel__Object__init]))(var257); /* init on <var257:ReduceAction255>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var257); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var258 = NEW_nitc__parser__ReduceAction256(&type_nitc__parser__ReduceAction256);
{
((void(*)(val* self, long p0))(var258->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var258, 48l); /* goto= on <var258:ReduceAction256>*/
}
{
((void(*)(val* self))(var258->class->vft[COLOR_core__kernel__Object__init]))(var258); /* init on <var258:ReduceAction256>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var258); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var259 = NEW_nitc__parser__ReduceAction257(&type_nitc__parser__ReduceAction257);
{
((void(*)(val* self, long p0))(var259->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var259, 49l); /* goto= on <var259:ReduceAction257>*/
}
{
((void(*)(val* self))(var259->class->vft[COLOR_core__kernel__Object__init]))(var259); /* init on <var259:ReduceAction257>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var259); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var260 = NEW_nitc__parser__ReduceAction258(&type_nitc__parser__ReduceAction258);
{
((void(*)(val* self, long p0))(var260->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var260, 49l); /* goto= on <var260:ReduceAction258>*/
}
{
((void(*)(val* self))(var260->class->vft[COLOR_core__kernel__Object__init]))(var260); /* init on <var260:ReduceAction258>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var260); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var261 = NEW_nitc__parser__ReduceAction259(&type_nitc__parser__ReduceAction259);
{
((void(*)(val* self, long p0))(var261->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var261, 49l); /* goto= on <var261:ReduceAction259>*/
}
{
((void(*)(val* self))(var261->class->vft[COLOR_core__kernel__Object__init]))(var261); /* init on <var261:ReduceAction259>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var261); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var262 = NEW_nitc__parser__ReduceAction260(&type_nitc__parser__ReduceAction260);
{
((void(*)(val* self, long p0))(var262->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var262, 50l); /* goto= on <var262:ReduceAction260>*/
}
{
((void(*)(val* self))(var262->class->vft[COLOR_core__kernel__Object__init]))(var262); /* init on <var262:ReduceAction260>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var262); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var263 = NEW_nitc__parser__ReduceAction261(&type_nitc__parser__ReduceAction261);
{
((void(*)(val* self, long p0))(var263->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var263, 50l); /* goto= on <var263:ReduceAction261>*/
}
{
((void(*)(val* self))(var263->class->vft[COLOR_core__kernel__Object__init]))(var263); /* init on <var263:ReduceAction261>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var263); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var264 = NEW_nitc__parser__ReduceAction262(&type_nitc__parser__ReduceAction262);
{
((void(*)(val* self, long p0))(var264->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var264, 50l); /* goto= on <var264:ReduceAction262>*/
}
{
((void(*)(val* self))(var264->class->vft[COLOR_core__kernel__Object__init]))(var264); /* init on <var264:ReduceAction262>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var264); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var265 = NEW_nitc__parser__ReduceAction263(&type_nitc__parser__ReduceAction263);
{
((void(*)(val* self, long p0))(var265->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var265, 50l); /* goto= on <var265:ReduceAction263>*/
}
{
((void(*)(val* self))(var265->class->vft[COLOR_core__kernel__Object__init]))(var265); /* init on <var265:ReduceAction263>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var265); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var266 = NEW_nitc__parser__ReduceAction264(&type_nitc__parser__ReduceAction264);
{
((void(*)(val* self, long p0))(var266->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var266, 50l); /* goto= on <var266:ReduceAction264>*/
}
{
((void(*)(val* self))(var266->class->vft[COLOR_core__kernel__Object__init]))(var266); /* init on <var266:ReduceAction264>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var266); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var267 = NEW_nitc__parser__ReduceAction265(&type_nitc__parser__ReduceAction265);
{
((void(*)(val* self, long p0))(var267->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var267, 50l); /* goto= on <var267:ReduceAction265>*/
}
{
((void(*)(val* self))(var267->class->vft[COLOR_core__kernel__Object__init]))(var267); /* init on <var267:ReduceAction265>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var267); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var268 = NEW_nitc__parser__ReduceAction266(&type_nitc__parser__ReduceAction266);
{
((void(*)(val* self, long p0))(var268->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var268, 50l); /* goto= on <var268:ReduceAction266>*/
}
{
((void(*)(val* self))(var268->class->vft[COLOR_core__kernel__Object__init]))(var268); /* init on <var268:ReduceAction266>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var268); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var269 = NEW_nitc__parser__ReduceAction267(&type_nitc__parser__ReduceAction267);
{
((void(*)(val* self, long p0))(var269->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var269, 50l); /* goto= on <var269:ReduceAction267>*/
}
{
((void(*)(val* self))(var269->class->vft[COLOR_core__kernel__Object__init]))(var269); /* init on <var269:ReduceAction267>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var269); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var270 = NEW_nitc__parser__ReduceAction158(&type_nitc__parser__ReduceAction158);
{
((void(*)(val* self, long p0))(var270->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var270, 51l); /* goto= on <var270:ReduceAction158>*/
}
{
((void(*)(val* self))(var270->class->vft[COLOR_core__kernel__Object__init]))(var270); /* init on <var270:ReduceAction158>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var270); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var271 = NEW_nitc__parser__ReduceAction269(&type_nitc__parser__ReduceAction269);
{
((void(*)(val* self, long p0))(var271->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var271, 52l); /* goto= on <var271:ReduceAction269>*/
}
{
((void(*)(val* self))(var271->class->vft[COLOR_core__kernel__Object__init]))(var271); /* init on <var271:ReduceAction269>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var271); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var272 = NEW_nitc__parser__ReduceAction270(&type_nitc__parser__ReduceAction270);
{
((void(*)(val* self, long p0))(var272->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var272, 52l); /* goto= on <var272:ReduceAction270>*/
}
{
((void(*)(val* self))(var272->class->vft[COLOR_core__kernel__Object__init]))(var272); /* init on <var272:ReduceAction270>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var272); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var273 = NEW_nitc__parser__ReduceAction271(&type_nitc__parser__ReduceAction271);
{
((void(*)(val* self, long p0))(var273->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var273, 53l); /* goto= on <var273:ReduceAction271>*/
}
{
((void(*)(val* self))(var273->class->vft[COLOR_core__kernel__Object__init]))(var273); /* init on <var273:ReduceAction271>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var273); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var274 = NEW_nitc__parser__ReduceAction272(&type_nitc__parser__ReduceAction272);
{
((void(*)(val* self, long p0))(var274->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var274, 53l); /* goto= on <var274:ReduceAction272>*/
}
{
((void(*)(val* self))(var274->class->vft[COLOR_core__kernel__Object__init]))(var274); /* init on <var274:ReduceAction272>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var274); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var275 = NEW_nitc__parser__ReduceAction273(&type_nitc__parser__ReduceAction273);
{
((void(*)(val* self, long p0))(var275->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var275, 54l); /* goto= on <var275:ReduceAction273>*/
}
{
((void(*)(val* self))(var275->class->vft[COLOR_core__kernel__Object__init]))(var275); /* init on <var275:ReduceAction273>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var275); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var276 = NEW_nitc__parser__ReduceAction274(&type_nitc__parser__ReduceAction274);
{
((void(*)(val* self, long p0))(var276->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var276, 54l); /* goto= on <var276:ReduceAction274>*/
}
{
((void(*)(val* self))(var276->class->vft[COLOR_core__kernel__Object__init]))(var276); /* init on <var276:ReduceAction274>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var276); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var277 = NEW_nitc__parser__ReduceAction275(&type_nitc__parser__ReduceAction275);
{
((void(*)(val* self, long p0))(var277->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var277, 55l); /* goto= on <var277:ReduceAction275>*/
}
{
((void(*)(val* self))(var277->class->vft[COLOR_core__kernel__Object__init]))(var277); /* init on <var277:ReduceAction275>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var277); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var278 = NEW_nitc__parser__ReduceAction276(&type_nitc__parser__ReduceAction276);
{
((void(*)(val* self, long p0))(var278->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var278, 55l); /* goto= on <var278:ReduceAction276>*/
}
{
((void(*)(val* self))(var278->class->vft[COLOR_core__kernel__Object__init]))(var278); /* init on <var278:ReduceAction276>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var278); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var279 = NEW_nitc__parser__ReduceAction277(&type_nitc__parser__ReduceAction277);
{
((void(*)(val* self, long p0))(var279->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var279, 56l); /* goto= on <var279:ReduceAction277>*/
}
{
((void(*)(val* self))(var279->class->vft[COLOR_core__kernel__Object__init]))(var279); /* init on <var279:ReduceAction277>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var279); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var280 = NEW_nitc__parser__ReduceAction278(&type_nitc__parser__ReduceAction278);
{
((void(*)(val* self, long p0))(var280->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var280, 57l); /* goto= on <var280:ReduceAction278>*/
}
{
((void(*)(val* self))(var280->class->vft[COLOR_core__kernel__Object__init]))(var280); /* init on <var280:ReduceAction278>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var280); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var281 = NEW_nitc__parser__ReduceAction279(&type_nitc__parser__ReduceAction279);
{
((void(*)(val* self, long p0))(var281->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var281, 57l); /* goto= on <var281:ReduceAction279>*/
}
{
((void(*)(val* self))(var281->class->vft[COLOR_core__kernel__Object__init]))(var281); /* init on <var281:ReduceAction279>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var281); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var282 = NEW_nitc__parser__ReduceAction280(&type_nitc__parser__ReduceAction280);
{
((void(*)(val* self, long p0))(var282->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var282, 58l); /* goto= on <var282:ReduceAction280>*/
}
{
((void(*)(val* self))(var282->class->vft[COLOR_core__kernel__Object__init]))(var282); /* init on <var282:ReduceAction280>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var282); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var283 = NEW_nitc__parser__ReduceAction281(&type_nitc__parser__ReduceAction281);
{
((void(*)(val* self, long p0))(var283->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var283, 58l); /* goto= on <var283:ReduceAction281>*/
}
{
((void(*)(val* self))(var283->class->vft[COLOR_core__kernel__Object__init]))(var283); /* init on <var283:ReduceAction281>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var283); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var284 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var284->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var284, 58l); /* goto= on <var284:ReduceAction159>*/
}
{
((void(*)(val* self))(var284->class->vft[COLOR_core__kernel__Object__init]))(var284); /* init on <var284:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var284); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var285 = NEW_nitc__parser__ReduceAction283(&type_nitc__parser__ReduceAction283);
{
((void(*)(val* self, long p0))(var285->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var285, 59l); /* goto= on <var285:ReduceAction283>*/
}
{
((void(*)(val* self))(var285->class->vft[COLOR_core__kernel__Object__init]))(var285); /* init on <var285:ReduceAction283>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var285); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var286 = NEW_nitc__parser__ReduceAction284(&type_nitc__parser__ReduceAction284);
{
((void(*)(val* self, long p0))(var286->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var286, 59l); /* goto= on <var286:ReduceAction284>*/
}
{
((void(*)(val* self))(var286->class->vft[COLOR_core__kernel__Object__init]))(var286); /* init on <var286:ReduceAction284>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var286); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var287 = NEW_nitc__parser__ReduceAction285(&type_nitc__parser__ReduceAction285);
{
((void(*)(val* self, long p0))(var287->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var287, 59l); /* goto= on <var287:ReduceAction285>*/
}
{
((void(*)(val* self))(var287->class->vft[COLOR_core__kernel__Object__init]))(var287); /* init on <var287:ReduceAction285>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var287); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var288 = NEW_nitc__parser__ReduceAction286(&type_nitc__parser__ReduceAction286);
{
((void(*)(val* self, long p0))(var288->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var288, 59l); /* goto= on <var288:ReduceAction286>*/
}
{
((void(*)(val* self))(var288->class->vft[COLOR_core__kernel__Object__init]))(var288); /* init on <var288:ReduceAction286>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var288); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var289 = NEW_nitc__parser__ReduceAction287(&type_nitc__parser__ReduceAction287);
{
((void(*)(val* self, long p0))(var289->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var289, 60l); /* goto= on <var289:ReduceAction287>*/
}
{
((void(*)(val* self))(var289->class->vft[COLOR_core__kernel__Object__init]))(var289); /* init on <var289:ReduceAction287>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var289); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var290 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var290->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var290, 61l); /* goto= on <var290:ReduceAction159>*/
}
{
((void(*)(val* self))(var290->class->vft[COLOR_core__kernel__Object__init]))(var290); /* init on <var290:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var290); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var291 = NEW_nitc__parser__ReduceAction289(&type_nitc__parser__ReduceAction289);
{
((void(*)(val* self, long p0))(var291->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var291, 61l); /* goto= on <var291:ReduceAction289>*/
}
{
((void(*)(val* self))(var291->class->vft[COLOR_core__kernel__Object__init]))(var291); /* init on <var291:ReduceAction289>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var291); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var292 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var292->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var292, 62l); /* goto= on <var292:ReduceAction159>*/
}
{
((void(*)(val* self))(var292->class->vft[COLOR_core__kernel__Object__init]))(var292); /* init on <var292:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var292); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var293 = NEW_nitc__parser__ReduceAction291(&type_nitc__parser__ReduceAction291);
{
((void(*)(val* self, long p0))(var293->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var293, 62l); /* goto= on <var293:ReduceAction291>*/
}
{
((void(*)(val* self))(var293->class->vft[COLOR_core__kernel__Object__init]))(var293); /* init on <var293:ReduceAction291>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var293); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var294 = NEW_nitc__parser__ReduceAction292(&type_nitc__parser__ReduceAction292);
{
((void(*)(val* self, long p0))(var294->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var294, 62l); /* goto= on <var294:ReduceAction292>*/
}
{
((void(*)(val* self))(var294->class->vft[COLOR_core__kernel__Object__init]))(var294); /* init on <var294:ReduceAction292>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var294); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var295 = NEW_nitc__parser__ReduceAction293(&type_nitc__parser__ReduceAction293);
{
((void(*)(val* self, long p0))(var295->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var295, 62l); /* goto= on <var295:ReduceAction293>*/
}
{
((void(*)(val* self))(var295->class->vft[COLOR_core__kernel__Object__init]))(var295); /* init on <var295:ReduceAction293>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var295); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var296 = NEW_nitc__parser__ReduceAction294(&type_nitc__parser__ReduceAction294);
{
((void(*)(val* self, long p0))(var296->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var296, 62l); /* goto= on <var296:ReduceAction294>*/
}
{
((void(*)(val* self))(var296->class->vft[COLOR_core__kernel__Object__init]))(var296); /* init on <var296:ReduceAction294>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var296); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var297 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var297->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var297, 63l); /* goto= on <var297:ReduceAction159>*/
}
{
((void(*)(val* self))(var297->class->vft[COLOR_core__kernel__Object__init]))(var297); /* init on <var297:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var297); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var298 = NEW_nitc__parser__ReduceAction296(&type_nitc__parser__ReduceAction296);
{
((void(*)(val* self, long p0))(var298->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var298, 63l); /* goto= on <var298:ReduceAction296>*/
}
{
((void(*)(val* self))(var298->class->vft[COLOR_core__kernel__Object__init]))(var298); /* init on <var298:ReduceAction296>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var298); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var299 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var299->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var299, 64l); /* goto= on <var299:ReduceAction159>*/
}
{
((void(*)(val* self))(var299->class->vft[COLOR_core__kernel__Object__init]))(var299); /* init on <var299:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var299); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var300 = NEW_nitc__parser__ReduceAction298(&type_nitc__parser__ReduceAction298);
{
((void(*)(val* self, long p0))(var300->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var300, 64l); /* goto= on <var300:ReduceAction298>*/
}
{
((void(*)(val* self))(var300->class->vft[COLOR_core__kernel__Object__init]))(var300); /* init on <var300:ReduceAction298>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var300); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var301 = NEW_nitc__parser__ReduceAction299(&type_nitc__parser__ReduceAction299);
{
((void(*)(val* self, long p0))(var301->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var301, 64l); /* goto= on <var301:ReduceAction299>*/
}
{
((void(*)(val* self))(var301->class->vft[COLOR_core__kernel__Object__init]))(var301); /* init on <var301:ReduceAction299>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var301); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var302 = NEW_nitc__parser__ReduceAction300(&type_nitc__parser__ReduceAction300);
{
((void(*)(val* self, long p0))(var302->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var302, 64l); /* goto= on <var302:ReduceAction300>*/
}
{
((void(*)(val* self))(var302->class->vft[COLOR_core__kernel__Object__init]))(var302); /* init on <var302:ReduceAction300>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var302); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var303 = NEW_nitc__parser__ReduceAction301(&type_nitc__parser__ReduceAction301);
{
((void(*)(val* self, long p0))(var303->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var303, 64l); /* goto= on <var303:ReduceAction301>*/
}
{
((void(*)(val* self))(var303->class->vft[COLOR_core__kernel__Object__init]))(var303); /* init on <var303:ReduceAction301>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var303); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var304 = NEW_nitc__parser__ReduceAction302(&type_nitc__parser__ReduceAction302);
{
((void(*)(val* self, long p0))(var304->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var304, 64l); /* goto= on <var304:ReduceAction302>*/
}
{
((void(*)(val* self))(var304->class->vft[COLOR_core__kernel__Object__init]))(var304); /* init on <var304:ReduceAction302>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var304); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var305 = NEW_nitc__parser__ReduceAction303(&type_nitc__parser__ReduceAction303);
{
((void(*)(val* self, long p0))(var305->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var305, 64l); /* goto= on <var305:ReduceAction303>*/
}
{
((void(*)(val* self))(var305->class->vft[COLOR_core__kernel__Object__init]))(var305); /* init on <var305:ReduceAction303>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var305); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var306 = NEW_nitc__parser__ReduceAction304(&type_nitc__parser__ReduceAction304);
{
((void(*)(val* self, long p0))(var306->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var306, 64l); /* goto= on <var306:ReduceAction304>*/
}
{
((void(*)(val* self))(var306->class->vft[COLOR_core__kernel__Object__init]))(var306); /* init on <var306:ReduceAction304>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var306); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var307 = NEW_nitc__parser__ReduceAction305(&type_nitc__parser__ReduceAction305);
{
((void(*)(val* self, long p0))(var307->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var307, 64l); /* goto= on <var307:ReduceAction305>*/
}
{
((void(*)(val* self))(var307->class->vft[COLOR_core__kernel__Object__init]))(var307); /* init on <var307:ReduceAction305>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var307); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var308 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var308->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var308, 65l); /* goto= on <var308:ReduceAction159>*/
}
{
((void(*)(val* self))(var308->class->vft[COLOR_core__kernel__Object__init]))(var308); /* init on <var308:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var308); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var309 = NEW_nitc__parser__ReduceAction307(&type_nitc__parser__ReduceAction307);
{
((void(*)(val* self, long p0))(var309->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var309, 65l); /* goto= on <var309:ReduceAction307>*/
}
{
((void(*)(val* self))(var309->class->vft[COLOR_core__kernel__Object__init]))(var309); /* init on <var309:ReduceAction307>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var309); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var310 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var310->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var310, 66l); /* goto= on <var310:ReduceAction159>*/
}
{
((void(*)(val* self))(var310->class->vft[COLOR_core__kernel__Object__init]))(var310); /* init on <var310:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var310); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var311 = NEW_nitc__parser__ReduceAction309(&type_nitc__parser__ReduceAction309);
{
((void(*)(val* self, long p0))(var311->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var311, 66l); /* goto= on <var311:ReduceAction309>*/
}
{
((void(*)(val* self))(var311->class->vft[COLOR_core__kernel__Object__init]))(var311); /* init on <var311:ReduceAction309>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var311); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var312 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var312->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var312, 67l); /* goto= on <var312:ReduceAction159>*/
}
{
((void(*)(val* self))(var312->class->vft[COLOR_core__kernel__Object__init]))(var312); /* init on <var312:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var312); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var313 = NEW_nitc__parser__ReduceAction311(&type_nitc__parser__ReduceAction311);
{
((void(*)(val* self, long p0))(var313->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var313, 67l); /* goto= on <var313:ReduceAction311>*/
}
{
((void(*)(val* self))(var313->class->vft[COLOR_core__kernel__Object__init]))(var313); /* init on <var313:ReduceAction311>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var313); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var314 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var314->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var314, 68l); /* goto= on <var314:ReduceAction159>*/
}
{
((void(*)(val* self))(var314->class->vft[COLOR_core__kernel__Object__init]))(var314); /* init on <var314:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var314); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var315 = NEW_nitc__parser__ReduceAction313(&type_nitc__parser__ReduceAction313);
{
((void(*)(val* self, long p0))(var315->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var315, 68l); /* goto= on <var315:ReduceAction313>*/
}
{
((void(*)(val* self))(var315->class->vft[COLOR_core__kernel__Object__init]))(var315); /* init on <var315:ReduceAction313>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var315); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var316 = NEW_nitc__parser__ReduceAction314(&type_nitc__parser__ReduceAction314);
{
((void(*)(val* self, long p0))(var316->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var316, 68l); /* goto= on <var316:ReduceAction314>*/
}
{
((void(*)(val* self))(var316->class->vft[COLOR_core__kernel__Object__init]))(var316); /* init on <var316:ReduceAction314>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var316); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var317 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var317->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var317, 69l); /* goto= on <var317:ReduceAction159>*/
}
{
((void(*)(val* self))(var317->class->vft[COLOR_core__kernel__Object__init]))(var317); /* init on <var317:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var317); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var318 = NEW_nitc__parser__ReduceAction316(&type_nitc__parser__ReduceAction316);
{
((void(*)(val* self, long p0))(var318->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var318, 69l); /* goto= on <var318:ReduceAction316>*/
}
{
((void(*)(val* self))(var318->class->vft[COLOR_core__kernel__Object__init]))(var318); /* init on <var318:ReduceAction316>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var318); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var319 = NEW_nitc__parser__ReduceAction317(&type_nitc__parser__ReduceAction317);
{
((void(*)(val* self, long p0))(var319->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var319, 69l); /* goto= on <var319:ReduceAction317>*/
}
{
((void(*)(val* self))(var319->class->vft[COLOR_core__kernel__Object__init]))(var319); /* init on <var319:ReduceAction317>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var319); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var320 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var320->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var320, 70l); /* goto= on <var320:ReduceAction159>*/
}
{
((void(*)(val* self))(var320->class->vft[COLOR_core__kernel__Object__init]))(var320); /* init on <var320:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var320); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var321 = NEW_nitc__parser__ReduceAction319(&type_nitc__parser__ReduceAction319);
{
((void(*)(val* self, long p0))(var321->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var321, 70l); /* goto= on <var321:ReduceAction319>*/
}
{
((void(*)(val* self))(var321->class->vft[COLOR_core__kernel__Object__init]))(var321); /* init on <var321:ReduceAction319>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var321); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var322 = NEW_nitc__parser__ReduceAction320(&type_nitc__parser__ReduceAction320);
{
((void(*)(val* self, long p0))(var322->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var322, 70l); /* goto= on <var322:ReduceAction320>*/
}
{
((void(*)(val* self))(var322->class->vft[COLOR_core__kernel__Object__init]))(var322); /* init on <var322:ReduceAction320>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var322); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var323 = NEW_nitc__parser__ReduceAction321(&type_nitc__parser__ReduceAction321);
{
((void(*)(val* self, long p0))(var323->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var323, 70l); /* goto= on <var323:ReduceAction321>*/
}
{
((void(*)(val* self))(var323->class->vft[COLOR_core__kernel__Object__init]))(var323); /* init on <var323:ReduceAction321>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var323); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var324 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var324->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var324, 71l); /* goto= on <var324:ReduceAction159>*/
}
{
((void(*)(val* self))(var324->class->vft[COLOR_core__kernel__Object__init]))(var324); /* init on <var324:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var324); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var325 = NEW_nitc__parser__ReduceAction323(&type_nitc__parser__ReduceAction323);
{
((void(*)(val* self, long p0))(var325->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var325, 71l); /* goto= on <var325:ReduceAction323>*/
}
{
((void(*)(val* self))(var325->class->vft[COLOR_core__kernel__Object__init]))(var325); /* init on <var325:ReduceAction323>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var325); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var326 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var326->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var326, 72l); /* goto= on <var326:ReduceAction159>*/
}
{
((void(*)(val* self))(var326->class->vft[COLOR_core__kernel__Object__init]))(var326); /* init on <var326:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var326); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var327 = NEW_nitc__parser__ReduceAction325(&type_nitc__parser__ReduceAction325);
{
((void(*)(val* self, long p0))(var327->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var327, 72l); /* goto= on <var327:ReduceAction325>*/
}
{
((void(*)(val* self))(var327->class->vft[COLOR_core__kernel__Object__init]))(var327); /* init on <var327:ReduceAction325>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var327); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var328 = NEW_nitc__parser__ReduceAction326(&type_nitc__parser__ReduceAction326);
{
((void(*)(val* self, long p0))(var328->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var328, 72l); /* goto= on <var328:ReduceAction326>*/
}
{
((void(*)(val* self))(var328->class->vft[COLOR_core__kernel__Object__init]))(var328); /* init on <var328:ReduceAction326>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var328); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var329 = NEW_nitc__parser__ReduceAction327(&type_nitc__parser__ReduceAction327);
{
((void(*)(val* self, long p0))(var329->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var329, 72l); /* goto= on <var329:ReduceAction327>*/
}
{
((void(*)(val* self))(var329->class->vft[COLOR_core__kernel__Object__init]))(var329); /* init on <var329:ReduceAction327>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var329); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var330 = NEW_nitc__parser__ReduceAction328(&type_nitc__parser__ReduceAction328);
{
((void(*)(val* self, long p0))(var330->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var330, 72l); /* goto= on <var330:ReduceAction328>*/
}
{
((void(*)(val* self))(var330->class->vft[COLOR_core__kernel__Object__init]))(var330); /* init on <var330:ReduceAction328>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var330); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var331 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var331->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var331, 73l); /* goto= on <var331:ReduceAction159>*/
}
{
((void(*)(val* self))(var331->class->vft[COLOR_core__kernel__Object__init]))(var331); /* init on <var331:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var331); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var332 = NEW_nitc__parser__ReduceAction330(&type_nitc__parser__ReduceAction330);
{
((void(*)(val* self, long p0))(var332->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var332, 73l); /* goto= on <var332:ReduceAction330>*/
}
{
((void(*)(val* self))(var332->class->vft[COLOR_core__kernel__Object__init]))(var332); /* init on <var332:ReduceAction330>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var332); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var333 = NEW_nitc__parser__ReduceAction331(&type_nitc__parser__ReduceAction331);
{
((void(*)(val* self, long p0))(var333->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var333, 73l); /* goto= on <var333:ReduceAction331>*/
}
{
((void(*)(val* self))(var333->class->vft[COLOR_core__kernel__Object__init]))(var333); /* init on <var333:ReduceAction331>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var333); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var334 = NEW_nitc__parser__ReduceAction332(&type_nitc__parser__ReduceAction332);
{
((void(*)(val* self, long p0))(var334->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var334, 73l); /* goto= on <var334:ReduceAction332>*/
}
{
((void(*)(val* self))(var334->class->vft[COLOR_core__kernel__Object__init]))(var334); /* init on <var334:ReduceAction332>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var334); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var335 = NEW_nitc__parser__ReduceAction333(&type_nitc__parser__ReduceAction333);
{
((void(*)(val* self, long p0))(var335->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var335, 73l); /* goto= on <var335:ReduceAction333>*/
}
{
((void(*)(val* self))(var335->class->vft[COLOR_core__kernel__Object__init]))(var335); /* init on <var335:ReduceAction333>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var335); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var336 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var336->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var336, 74l); /* goto= on <var336:ReduceAction159>*/
}
{
((void(*)(val* self))(var336->class->vft[COLOR_core__kernel__Object__init]))(var336); /* init on <var336:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var336); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var337 = NEW_nitc__parser__ReduceAction335(&type_nitc__parser__ReduceAction335);
{
((void(*)(val* self, long p0))(var337->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var337, 74l); /* goto= on <var337:ReduceAction335>*/
}
{
((void(*)(val* self))(var337->class->vft[COLOR_core__kernel__Object__init]))(var337); /* init on <var337:ReduceAction335>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var337); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var338 = NEW_nitc__parser__ReduceAction336(&type_nitc__parser__ReduceAction336);
{
((void(*)(val* self, long p0))(var338->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var338, 74l); /* goto= on <var338:ReduceAction336>*/
}
{
((void(*)(val* self))(var338->class->vft[COLOR_core__kernel__Object__init]))(var338); /* init on <var338:ReduceAction336>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var338); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var339 = NEW_nitc__parser__ReduceAction184(&type_nitc__parser__ReduceAction184);
{
((void(*)(val* self, long p0))(var339->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var339, 74l); /* goto= on <var339:ReduceAction184>*/
}
{
((void(*)(val* self))(var339->class->vft[COLOR_core__kernel__Object__init]))(var339); /* init on <var339:ReduceAction184>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var339); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var340 = NEW_nitc__parser__ReduceAction338(&type_nitc__parser__ReduceAction338);
{
((void(*)(val* self, long p0))(var340->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var340, 74l); /* goto= on <var340:ReduceAction338>*/
}
{
((void(*)(val* self))(var340->class->vft[COLOR_core__kernel__Object__init]))(var340); /* init on <var340:ReduceAction338>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var340); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var341 = NEW_nitc__parser__ReduceAction185(&type_nitc__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var341->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var341, 74l); /* goto= on <var341:ReduceAction185>*/
}
{
((void(*)(val* self))(var341->class->vft[COLOR_core__kernel__Object__init]))(var341); /* init on <var341:ReduceAction185>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var341); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var342 = NEW_nitc__parser__ReduceAction340(&type_nitc__parser__ReduceAction340);
{
((void(*)(val* self, long p0))(var342->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var342, 74l); /* goto= on <var342:ReduceAction340>*/
}
{
((void(*)(val* self))(var342->class->vft[COLOR_core__kernel__Object__init]))(var342); /* init on <var342:ReduceAction340>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var342); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var343 = NEW_nitc__parser__ReduceAction186(&type_nitc__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var343->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var343, 74l); /* goto= on <var343:ReduceAction186>*/
}
{
((void(*)(val* self))(var343->class->vft[COLOR_core__kernel__Object__init]))(var343); /* init on <var343:ReduceAction186>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var343); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var344 = NEW_nitc__parser__ReduceAction342(&type_nitc__parser__ReduceAction342);
{
((void(*)(val* self, long p0))(var344->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var344, 74l); /* goto= on <var344:ReduceAction342>*/
}
{
((void(*)(val* self))(var344->class->vft[COLOR_core__kernel__Object__init]))(var344); /* init on <var344:ReduceAction342>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var344); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var345 = NEW_nitc__parser__ReduceAction187(&type_nitc__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var345->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var345, 74l); /* goto= on <var345:ReduceAction187>*/
}
{
((void(*)(val* self))(var345->class->vft[COLOR_core__kernel__Object__init]))(var345); /* init on <var345:ReduceAction187>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var345); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var346 = NEW_nitc__parser__ReduceAction344(&type_nitc__parser__ReduceAction344);
{
((void(*)(val* self, long p0))(var346->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var346, 74l); /* goto= on <var346:ReduceAction344>*/
}
{
((void(*)(val* self))(var346->class->vft[COLOR_core__kernel__Object__init]))(var346); /* init on <var346:ReduceAction344>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var346); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var347 = NEW_nitc__parser__ReduceAction188(&type_nitc__parser__ReduceAction188);
{
((void(*)(val* self, long p0))(var347->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var347, 74l); /* goto= on <var347:ReduceAction188>*/
}
{
((void(*)(val* self))(var347->class->vft[COLOR_core__kernel__Object__init]))(var347); /* init on <var347:ReduceAction188>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var347); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var348 = NEW_nitc__parser__ReduceAction346(&type_nitc__parser__ReduceAction346);
{
((void(*)(val* self, long p0))(var348->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var348, 74l); /* goto= on <var348:ReduceAction346>*/
}
{
((void(*)(val* self))(var348->class->vft[COLOR_core__kernel__Object__init]))(var348); /* init on <var348:ReduceAction346>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var348); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var349 = NEW_nitc__parser__ReduceAction189(&type_nitc__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var349->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var349, 74l); /* goto= on <var349:ReduceAction189>*/
}
{
((void(*)(val* self))(var349->class->vft[COLOR_core__kernel__Object__init]))(var349); /* init on <var349:ReduceAction189>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var349); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var350 = NEW_nitc__parser__ReduceAction348(&type_nitc__parser__ReduceAction348);
{
((void(*)(val* self, long p0))(var350->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var350, 74l); /* goto= on <var350:ReduceAction348>*/
}
{
((void(*)(val* self))(var350->class->vft[COLOR_core__kernel__Object__init]))(var350); /* init on <var350:ReduceAction348>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var350); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var351 = NEW_nitc__parser__ReduceAction190(&type_nitc__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var351->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var351, 74l); /* goto= on <var351:ReduceAction190>*/
}
{
((void(*)(val* self))(var351->class->vft[COLOR_core__kernel__Object__init]))(var351); /* init on <var351:ReduceAction190>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var351); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var352 = NEW_nitc__parser__ReduceAction350(&type_nitc__parser__ReduceAction350);
{
((void(*)(val* self, long p0))(var352->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var352, 74l); /* goto= on <var352:ReduceAction350>*/
}
{
((void(*)(val* self))(var352->class->vft[COLOR_core__kernel__Object__init]))(var352); /* init on <var352:ReduceAction350>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var352); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var353 = NEW_nitc__parser__ReduceAction191(&type_nitc__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var353->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var353, 74l); /* goto= on <var353:ReduceAction191>*/
}
{
((void(*)(val* self))(var353->class->vft[COLOR_core__kernel__Object__init]))(var353); /* init on <var353:ReduceAction191>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var353); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var354 = NEW_nitc__parser__ReduceAction352(&type_nitc__parser__ReduceAction352);
{
((void(*)(val* self, long p0))(var354->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var354, 74l); /* goto= on <var354:ReduceAction352>*/
}
{
((void(*)(val* self))(var354->class->vft[COLOR_core__kernel__Object__init]))(var354); /* init on <var354:ReduceAction352>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var354); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var355 = NEW_nitc__parser__ReduceAction192(&type_nitc__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var355->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var355, 74l); /* goto= on <var355:ReduceAction192>*/
}
{
((void(*)(val* self))(var355->class->vft[COLOR_core__kernel__Object__init]))(var355); /* init on <var355:ReduceAction192>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var355); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var356 = NEW_nitc__parser__ReduceAction354(&type_nitc__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var356->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var356, 74l); /* goto= on <var356:ReduceAction354>*/
}
{
((void(*)(val* self))(var356->class->vft[COLOR_core__kernel__Object__init]))(var356); /* init on <var356:ReduceAction354>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var356); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var357 = NEW_nitc__parser__ReduceAction193(&type_nitc__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var357->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var357, 74l); /* goto= on <var357:ReduceAction193>*/
}
{
((void(*)(val* self))(var357->class->vft[COLOR_core__kernel__Object__init]))(var357); /* init on <var357:ReduceAction193>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var357); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var358 = NEW_nitc__parser__ReduceAction356(&type_nitc__parser__ReduceAction356);
{
((void(*)(val* self, long p0))(var358->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var358, 74l); /* goto= on <var358:ReduceAction356>*/
}
{
((void(*)(val* self))(var358->class->vft[COLOR_core__kernel__Object__init]))(var358); /* init on <var358:ReduceAction356>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var358); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var359 = NEW_nitc__parser__ReduceAction194(&type_nitc__parser__ReduceAction194);
{
((void(*)(val* self, long p0))(var359->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var359, 74l); /* goto= on <var359:ReduceAction194>*/
}
{
((void(*)(val* self))(var359->class->vft[COLOR_core__kernel__Object__init]))(var359); /* init on <var359:ReduceAction194>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var359); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var360 = NEW_nitc__parser__ReduceAction358(&type_nitc__parser__ReduceAction358);
{
((void(*)(val* self, long p0))(var360->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var360, 74l); /* goto= on <var360:ReduceAction358>*/
}
{
((void(*)(val* self))(var360->class->vft[COLOR_core__kernel__Object__init]))(var360); /* init on <var360:ReduceAction358>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var360); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var361 = NEW_nitc__parser__ReduceAction359(&type_nitc__parser__ReduceAction359);
{
((void(*)(val* self, long p0))(var361->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var361, 74l); /* goto= on <var361:ReduceAction359>*/
}
{
((void(*)(val* self))(var361->class->vft[COLOR_core__kernel__Object__init]))(var361); /* init on <var361:ReduceAction359>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var361); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var362 = NEW_nitc__parser__ReduceAction360(&type_nitc__parser__ReduceAction360);
{
((void(*)(val* self, long p0))(var362->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var362, 74l); /* goto= on <var362:ReduceAction360>*/
}
{
((void(*)(val* self))(var362->class->vft[COLOR_core__kernel__Object__init]))(var362); /* init on <var362:ReduceAction360>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var362); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var363 = NEW_nitc__parser__ReduceAction361(&type_nitc__parser__ReduceAction361);
{
((void(*)(val* self, long p0))(var363->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var363, 74l); /* goto= on <var363:ReduceAction361>*/
}
{
((void(*)(val* self))(var363->class->vft[COLOR_core__kernel__Object__init]))(var363); /* init on <var363:ReduceAction361>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var363); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var364 = NEW_nitc__parser__ReduceAction362(&type_nitc__parser__ReduceAction362);
{
((void(*)(val* self, long p0))(var364->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var364, 74l); /* goto= on <var364:ReduceAction362>*/
}
{
((void(*)(val* self))(var364->class->vft[COLOR_core__kernel__Object__init]))(var364); /* init on <var364:ReduceAction362>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var364); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var365 = NEW_nitc__parser__ReduceAction363(&type_nitc__parser__ReduceAction363);
{
((void(*)(val* self, long p0))(var365->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var365, 74l); /* goto= on <var365:ReduceAction363>*/
}
{
((void(*)(val* self))(var365->class->vft[COLOR_core__kernel__Object__init]))(var365); /* init on <var365:ReduceAction363>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var365); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var366 = NEW_nitc__parser__ReduceAction364(&type_nitc__parser__ReduceAction364);
{
((void(*)(val* self, long p0))(var366->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var366, 74l); /* goto= on <var366:ReduceAction364>*/
}
{
((void(*)(val* self))(var366->class->vft[COLOR_core__kernel__Object__init]))(var366); /* init on <var366:ReduceAction364>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var366); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var367 = NEW_nitc__parser__ReduceAction365(&type_nitc__parser__ReduceAction365);
{
((void(*)(val* self, long p0))(var367->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var367, 74l); /* goto= on <var367:ReduceAction365>*/
}
{
((void(*)(val* self))(var367->class->vft[COLOR_core__kernel__Object__init]))(var367); /* init on <var367:ReduceAction365>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var367); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var368 = NEW_nitc__parser__ReduceAction366(&type_nitc__parser__ReduceAction366);
{
((void(*)(val* self, long p0))(var368->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var368, 74l); /* goto= on <var368:ReduceAction366>*/
}
{
((void(*)(val* self))(var368->class->vft[COLOR_core__kernel__Object__init]))(var368); /* init on <var368:ReduceAction366>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var368); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var369 = NEW_nitc__parser__ReduceAction367(&type_nitc__parser__ReduceAction367);
{
((void(*)(val* self, long p0))(var369->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var369, 74l); /* goto= on <var369:ReduceAction367>*/
}
{
((void(*)(val* self))(var369->class->vft[COLOR_core__kernel__Object__init]))(var369); /* init on <var369:ReduceAction367>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var369); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var370 = NEW_nitc__parser__ReduceAction368(&type_nitc__parser__ReduceAction368);
{
((void(*)(val* self, long p0))(var370->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var370, 74l); /* goto= on <var370:ReduceAction368>*/
}
{
((void(*)(val* self))(var370->class->vft[COLOR_core__kernel__Object__init]))(var370); /* init on <var370:ReduceAction368>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var370); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var371 = NEW_nitc__parser__ReduceAction369(&type_nitc__parser__ReduceAction369);
{
((void(*)(val* self, long p0))(var371->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var371, 74l); /* goto= on <var371:ReduceAction369>*/
}
{
((void(*)(val* self))(var371->class->vft[COLOR_core__kernel__Object__init]))(var371); /* init on <var371:ReduceAction369>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var371); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var372 = NEW_nitc__parser__ReduceAction370(&type_nitc__parser__ReduceAction370);
{
((void(*)(val* self, long p0))(var372->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var372, 74l); /* goto= on <var372:ReduceAction370>*/
}
{
((void(*)(val* self))(var372->class->vft[COLOR_core__kernel__Object__init]))(var372); /* init on <var372:ReduceAction370>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var372); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var373 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var373->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var373, 75l); /* goto= on <var373:ReduceAction159>*/
}
{
((void(*)(val* self))(var373->class->vft[COLOR_core__kernel__Object__init]))(var373); /* init on <var373:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var373); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var374 = NEW_nitc__parser__ReduceAction372(&type_nitc__parser__ReduceAction372);
{
((void(*)(val* self, long p0))(var374->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var374, 75l); /* goto= on <var374:ReduceAction372>*/
}
{
((void(*)(val* self))(var374->class->vft[COLOR_core__kernel__Object__init]))(var374); /* init on <var374:ReduceAction372>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var374); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var375 = NEW_nitc__parser__ReduceAction373(&type_nitc__parser__ReduceAction373);
{
((void(*)(val* self, long p0))(var375->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var375, 75l); /* goto= on <var375:ReduceAction373>*/
}
{
((void(*)(val* self))(var375->class->vft[COLOR_core__kernel__Object__init]))(var375); /* init on <var375:ReduceAction373>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var375); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var376 = NEW_nitc__parser__ReduceAction374(&type_nitc__parser__ReduceAction374);
{
((void(*)(val* self, long p0))(var376->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var376, 76l); /* goto= on <var376:ReduceAction374>*/
}
{
((void(*)(val* self))(var376->class->vft[COLOR_core__kernel__Object__init]))(var376); /* init on <var376:ReduceAction374>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var376); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var377 = NEW_nitc__parser__ReduceAction375(&type_nitc__parser__ReduceAction375);
{
((void(*)(val* self, long p0))(var377->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var377, 76l); /* goto= on <var377:ReduceAction375>*/
}
{
((void(*)(val* self))(var377->class->vft[COLOR_core__kernel__Object__init]))(var377); /* init on <var377:ReduceAction375>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var377); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var378 = NEW_nitc__parser__ReduceAction376(&type_nitc__parser__ReduceAction376);
{
((void(*)(val* self, long p0))(var378->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var378, 76l); /* goto= on <var378:ReduceAction376>*/
}
{
((void(*)(val* self))(var378->class->vft[COLOR_core__kernel__Object__init]))(var378); /* init on <var378:ReduceAction376>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var378); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var379 = NEW_nitc__parser__ReduceAction377(&type_nitc__parser__ReduceAction377);
{
((void(*)(val* self, long p0))(var379->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var379, 76l); /* goto= on <var379:ReduceAction377>*/
}
{
((void(*)(val* self))(var379->class->vft[COLOR_core__kernel__Object__init]))(var379); /* init on <var379:ReduceAction377>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var379); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var380 = NEW_nitc__parser__ReduceAction378(&type_nitc__parser__ReduceAction378);
{
((void(*)(val* self, long p0))(var380->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var380, 76l); /* goto= on <var380:ReduceAction378>*/
}
{
((void(*)(val* self))(var380->class->vft[COLOR_core__kernel__Object__init]))(var380); /* init on <var380:ReduceAction378>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var380); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var381 = NEW_nitc__parser__ReduceAction379(&type_nitc__parser__ReduceAction379);
{
((void(*)(val* self, long p0))(var381->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var381, 76l); /* goto= on <var381:ReduceAction379>*/
}
{
((void(*)(val* self))(var381->class->vft[COLOR_core__kernel__Object__init]))(var381); /* init on <var381:ReduceAction379>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var381); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var382 = NEW_nitc__parser__ReduceAction380(&type_nitc__parser__ReduceAction380);
{
((void(*)(val* self, long p0))(var382->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var382, 76l); /* goto= on <var382:ReduceAction380>*/
}
{
((void(*)(val* self))(var382->class->vft[COLOR_core__kernel__Object__init]))(var382); /* init on <var382:ReduceAction380>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var382); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var383 = NEW_nitc__parser__ReduceAction381(&type_nitc__parser__ReduceAction381);
{
((void(*)(val* self, long p0))(var383->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var383, 76l); /* goto= on <var383:ReduceAction381>*/
}
{
((void(*)(val* self))(var383->class->vft[COLOR_core__kernel__Object__init]))(var383); /* init on <var383:ReduceAction381>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var383); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var384 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var384->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var384, 76l); /* goto= on <var384:ReduceAction159>*/
}
{
((void(*)(val* self))(var384->class->vft[COLOR_core__kernel__Object__init]))(var384); /* init on <var384:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var384); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var385 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var385->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var385, 76l); /* goto= on <var385:ReduceAction159>*/
}
{
((void(*)(val* self))(var385->class->vft[COLOR_core__kernel__Object__init]))(var385); /* init on <var385:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var385); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var386 = NEW_nitc__parser__ReduceAction384(&type_nitc__parser__ReduceAction384);
{
((void(*)(val* self, long p0))(var386->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var386, 76l); /* goto= on <var386:ReduceAction384>*/
}
{
((void(*)(val* self))(var386->class->vft[COLOR_core__kernel__Object__init]))(var386); /* init on <var386:ReduceAction384>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var386); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var387 = NEW_nitc__parser__ReduceAction385(&type_nitc__parser__ReduceAction385);
{
((void(*)(val* self, long p0))(var387->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var387, 76l); /* goto= on <var387:ReduceAction385>*/
}
{
((void(*)(val* self))(var387->class->vft[COLOR_core__kernel__Object__init]))(var387); /* init on <var387:ReduceAction385>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var387); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var388 = NEW_nitc__parser__ReduceAction386(&type_nitc__parser__ReduceAction386);
{
((void(*)(val* self, long p0))(var388->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var388, 76l); /* goto= on <var388:ReduceAction386>*/
}
{
((void(*)(val* self))(var388->class->vft[COLOR_core__kernel__Object__init]))(var388); /* init on <var388:ReduceAction386>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var388); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var389 = NEW_nitc__parser__ReduceAction387(&type_nitc__parser__ReduceAction387);
{
((void(*)(val* self, long p0))(var389->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var389, 77l); /* goto= on <var389:ReduceAction387>*/
}
{
((void(*)(val* self))(var389->class->vft[COLOR_core__kernel__Object__init]))(var389); /* init on <var389:ReduceAction387>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var389); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var390 = NEW_nitc__parser__ReduceAction387(&type_nitc__parser__ReduceAction387);
{
((void(*)(val* self, long p0))(var390->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var390, 77l); /* goto= on <var390:ReduceAction387>*/
}
{
((void(*)(val* self))(var390->class->vft[COLOR_core__kernel__Object__init]))(var390); /* init on <var390:ReduceAction387>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var390); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var391 = NEW_nitc__parser__ReduceAction389(&type_nitc__parser__ReduceAction389);
{
((void(*)(val* self, long p0))(var391->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var391, 78l); /* goto= on <var391:ReduceAction389>*/
}
{
((void(*)(val* self))(var391->class->vft[COLOR_core__kernel__Object__init]))(var391); /* init on <var391:ReduceAction389>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var391); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var392 = NEW_nitc__parser__ReduceAction390(&type_nitc__parser__ReduceAction390);
{
((void(*)(val* self, long p0))(var392->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var392, 79l); /* goto= on <var392:ReduceAction390>*/
}
{
((void(*)(val* self))(var392->class->vft[COLOR_core__kernel__Object__init]))(var392); /* init on <var392:ReduceAction390>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var392); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var393 = NEW_nitc__parser__ReduceAction391(&type_nitc__parser__ReduceAction391);
{
((void(*)(val* self, long p0))(var393->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var393, 80l); /* goto= on <var393:ReduceAction391>*/
}
{
((void(*)(val* self))(var393->class->vft[COLOR_core__kernel__Object__init]))(var393); /* init on <var393:ReduceAction391>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var393); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var394 = NEW_nitc__parser__ReduceAction392(&type_nitc__parser__ReduceAction392);
{
((void(*)(val* self, long p0))(var394->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var394, 80l); /* goto= on <var394:ReduceAction392>*/
}
{
((void(*)(val* self))(var394->class->vft[COLOR_core__kernel__Object__init]))(var394); /* init on <var394:ReduceAction392>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var394); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var395 = NEW_nitc__parser__ReduceAction390(&type_nitc__parser__ReduceAction390);
{
((void(*)(val* self, long p0))(var395->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var395, 81l); /* goto= on <var395:ReduceAction390>*/
}
{
((void(*)(val* self))(var395->class->vft[COLOR_core__kernel__Object__init]))(var395); /* init on <var395:ReduceAction390>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var395); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var396 = NEW_nitc__parser__ReduceAction394(&type_nitc__parser__ReduceAction394);
{
((void(*)(val* self, long p0))(var396->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var396, 82l); /* goto= on <var396:ReduceAction394>*/
}
{
((void(*)(val* self))(var396->class->vft[COLOR_core__kernel__Object__init]))(var396); /* init on <var396:ReduceAction394>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var396); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var397 = NEW_nitc__parser__ReduceAction274(&type_nitc__parser__ReduceAction274);
{
((void(*)(val* self, long p0))(var397->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var397, 82l); /* goto= on <var397:ReduceAction274>*/
}
{
((void(*)(val* self))(var397->class->vft[COLOR_core__kernel__Object__init]))(var397); /* init on <var397:ReduceAction274>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var397); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var398 = NEW_nitc__parser__ReduceAction396(&type_nitc__parser__ReduceAction396);
{
((void(*)(val* self, long p0))(var398->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var398, 82l); /* goto= on <var398:ReduceAction396>*/
}
{
((void(*)(val* self))(var398->class->vft[COLOR_core__kernel__Object__init]))(var398); /* init on <var398:ReduceAction396>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var398); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var399 = NEW_nitc__parser__ReduceAction397(&type_nitc__parser__ReduceAction397);
{
((void(*)(val* self, long p0))(var399->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var399, 83l); /* goto= on <var399:ReduceAction397>*/
}
{
((void(*)(val* self))(var399->class->vft[COLOR_core__kernel__Object__init]))(var399); /* init on <var399:ReduceAction397>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var399); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var400 = NEW_nitc__parser__ReduceAction398(&type_nitc__parser__ReduceAction398);
{
((void(*)(val* self, long p0))(var400->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var400, 83l); /* goto= on <var400:ReduceAction398>*/
}
{
((void(*)(val* self))(var400->class->vft[COLOR_core__kernel__Object__init]))(var400); /* init on <var400:ReduceAction398>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var400); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var401 = NEW_nitc__parser__ReduceAction399(&type_nitc__parser__ReduceAction399);
{
((void(*)(val* self, long p0))(var401->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var401, 84l); /* goto= on <var401:ReduceAction399>*/
}
{
((void(*)(val* self))(var401->class->vft[COLOR_core__kernel__Object__init]))(var401); /* init on <var401:ReduceAction399>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var401); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var402 = NEW_nitc__parser__ReduceAction400(&type_nitc__parser__ReduceAction400);
{
((void(*)(val* self, long p0))(var402->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var402, 84l); /* goto= on <var402:ReduceAction400>*/
}
{
((void(*)(val* self))(var402->class->vft[COLOR_core__kernel__Object__init]))(var402); /* init on <var402:ReduceAction400>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var402); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var403 = NEW_nitc__parser__ReduceAction401(&type_nitc__parser__ReduceAction401);
{
((void(*)(val* self, long p0))(var403->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var403, 85l); /* goto= on <var403:ReduceAction401>*/
}
{
((void(*)(val* self))(var403->class->vft[COLOR_core__kernel__Object__init]))(var403); /* init on <var403:ReduceAction401>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var403); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var404 = NEW_nitc__parser__ReduceAction399(&type_nitc__parser__ReduceAction399);
{
((void(*)(val* self, long p0))(var404->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var404, 86l); /* goto= on <var404:ReduceAction399>*/
}
{
((void(*)(val* self))(var404->class->vft[COLOR_core__kernel__Object__init]))(var404); /* init on <var404:ReduceAction399>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var404); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var405 = NEW_nitc__parser__ReduceAction400(&type_nitc__parser__ReduceAction400);
{
((void(*)(val* self, long p0))(var405->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var405, 86l); /* goto= on <var405:ReduceAction400>*/
}
{
((void(*)(val* self))(var405->class->vft[COLOR_core__kernel__Object__init]))(var405); /* init on <var405:ReduceAction400>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var405); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var406 = NEW_nitc__parser__ReduceAction404(&type_nitc__parser__ReduceAction404);
{
((void(*)(val* self, long p0))(var406->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var406, 87l); /* goto= on <var406:ReduceAction404>*/
}
{
((void(*)(val* self))(var406->class->vft[COLOR_core__kernel__Object__init]))(var406); /* init on <var406:ReduceAction404>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var406); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var407 = NEW_nitc__parser__ReduceAction405(&type_nitc__parser__ReduceAction405);
{
((void(*)(val* self, long p0))(var407->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var407, 88l); /* goto= on <var407:ReduceAction405>*/
}
{
((void(*)(val* self))(var407->class->vft[COLOR_core__kernel__Object__init]))(var407); /* init on <var407:ReduceAction405>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var407); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var408 = NEW_nitc__parser__ReduceAction406(&type_nitc__parser__ReduceAction406);
{
((void(*)(val* self, long p0))(var408->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var408, 89l); /* goto= on <var408:ReduceAction406>*/
}
{
((void(*)(val* self))(var408->class->vft[COLOR_core__kernel__Object__init]))(var408); /* init on <var408:ReduceAction406>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var408); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var409 = NEW_nitc__parser__ReduceAction407(&type_nitc__parser__ReduceAction407);
{
((void(*)(val* self, long p0))(var409->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var409, 89l); /* goto= on <var409:ReduceAction407>*/
}
{
((void(*)(val* self))(var409->class->vft[COLOR_core__kernel__Object__init]))(var409); /* init on <var409:ReduceAction407>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var409); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var410 = NEW_nitc__parser__ReduceAction408(&type_nitc__parser__ReduceAction408);
{
((void(*)(val* self, long p0))(var410->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var410, 90l); /* goto= on <var410:ReduceAction408>*/
}
{
((void(*)(val* self))(var410->class->vft[COLOR_core__kernel__Object__init]))(var410); /* init on <var410:ReduceAction408>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var410); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var411 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var411->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var411, 90l); /* goto= on <var411:ReduceAction22>*/
}
{
((void(*)(val* self))(var411->class->vft[COLOR_core__kernel__Object__init]))(var411); /* init on <var411:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var411); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var412 = NEW_nitc__parser__ReduceAction410(&type_nitc__parser__ReduceAction410);
{
((void(*)(val* self, long p0))(var412->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var412, 91l); /* goto= on <var412:ReduceAction410>*/
}
{
((void(*)(val* self))(var412->class->vft[COLOR_core__kernel__Object__init]))(var412); /* init on <var412:ReduceAction410>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var412); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var413 = NEW_nitc__parser__ReduceAction411(&type_nitc__parser__ReduceAction411);
{
((void(*)(val* self, long p0))(var413->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var413, 91l); /* goto= on <var413:ReduceAction411>*/
}
{
((void(*)(val* self))(var413->class->vft[COLOR_core__kernel__Object__init]))(var413); /* init on <var413:ReduceAction411>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var413); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var414 = NEW_nitc__parser__ReduceAction412(&type_nitc__parser__ReduceAction412);
{
((void(*)(val* self, long p0))(var414->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var414, 92l); /* goto= on <var414:ReduceAction412>*/
}
{
((void(*)(val* self))(var414->class->vft[COLOR_core__kernel__Object__init]))(var414); /* init on <var414:ReduceAction412>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var414); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var415 = NEW_nitc__parser__ReduceAction413(&type_nitc__parser__ReduceAction413);
{
((void(*)(val* self, long p0))(var415->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var415, 92l); /* goto= on <var415:ReduceAction413>*/
}
{
((void(*)(val* self))(var415->class->vft[COLOR_core__kernel__Object__init]))(var415); /* init on <var415:ReduceAction413>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var415); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var416 = NEW_nitc__parser__ReduceAction410(&type_nitc__parser__ReduceAction410);
{
((void(*)(val* self, long p0))(var416->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var416, 93l); /* goto= on <var416:ReduceAction410>*/
}
{
((void(*)(val* self))(var416->class->vft[COLOR_core__kernel__Object__init]))(var416); /* init on <var416:ReduceAction410>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var416); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var417 = NEW_nitc__parser__ReduceAction411(&type_nitc__parser__ReduceAction411);
{
((void(*)(val* self, long p0))(var417->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var417, 93l); /* goto= on <var417:ReduceAction411>*/
}
{
((void(*)(val* self))(var417->class->vft[COLOR_core__kernel__Object__init]))(var417); /* init on <var417:ReduceAction411>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var417); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var418 = NEW_nitc__parser__ReduceAction416(&type_nitc__parser__ReduceAction416);
{
((void(*)(val* self, long p0))(var418->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var418, 93l); /* goto= on <var418:ReduceAction416>*/
}
{
((void(*)(val* self))(var418->class->vft[COLOR_core__kernel__Object__init]))(var418); /* init on <var418:ReduceAction416>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var418); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var419 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var419->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var419, 94l); /* goto= on <var419:ReduceAction159>*/
}
{
((void(*)(val* self))(var419->class->vft[COLOR_core__kernel__Object__init]))(var419); /* init on <var419:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var419); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var420 = NEW_nitc__parser__ReduceAction418(&type_nitc__parser__ReduceAction418);
{
((void(*)(val* self, long p0))(var420->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var420, 95l); /* goto= on <var420:ReduceAction418>*/
}
{
((void(*)(val* self))(var420->class->vft[COLOR_core__kernel__Object__init]))(var420); /* init on <var420:ReduceAction418>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var420); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var421 = NEW_nitc__parser__ReduceAction419(&type_nitc__parser__ReduceAction419);
{
((void(*)(val* self, long p0))(var421->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var421, 96l); /* goto= on <var421:ReduceAction419>*/
}
{
((void(*)(val* self))(var421->class->vft[COLOR_core__kernel__Object__init]))(var421); /* init on <var421:ReduceAction419>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var421); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var422 = NEW_nitc__parser__ReduceAction420(&type_nitc__parser__ReduceAction420);
{
((void(*)(val* self, long p0))(var422->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var422, 96l); /* goto= on <var422:ReduceAction420>*/
}
{
((void(*)(val* self))(var422->class->vft[COLOR_core__kernel__Object__init]))(var422); /* init on <var422:ReduceAction420>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var422); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var423 = NEW_nitc__parser__ReduceAction421(&type_nitc__parser__ReduceAction421);
{
((void(*)(val* self, long p0))(var423->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var423, 96l); /* goto= on <var423:ReduceAction421>*/
}
{
((void(*)(val* self))(var423->class->vft[COLOR_core__kernel__Object__init]))(var423); /* init on <var423:ReduceAction421>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var423); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var424 = NEW_nitc__parser__ReduceAction422(&type_nitc__parser__ReduceAction422);
{
((void(*)(val* self, long p0))(var424->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var424, 96l); /* goto= on <var424:ReduceAction422>*/
}
{
((void(*)(val* self))(var424->class->vft[COLOR_core__kernel__Object__init]))(var424); /* init on <var424:ReduceAction422>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var424); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var425 = NEW_nitc__parser__ReduceAction423(&type_nitc__parser__ReduceAction423);
{
((void(*)(val* self, long p0))(var425->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var425, 96l); /* goto= on <var425:ReduceAction423>*/
}
{
((void(*)(val* self))(var425->class->vft[COLOR_core__kernel__Object__init]))(var425); /* init on <var425:ReduceAction423>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var425); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var426 = NEW_nitc__parser__ReduceAction424(&type_nitc__parser__ReduceAction424);
{
((void(*)(val* self, long p0))(var426->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var426, 97l); /* goto= on <var426:ReduceAction424>*/
}
{
((void(*)(val* self))(var426->class->vft[COLOR_core__kernel__Object__init]))(var426); /* init on <var426:ReduceAction424>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var426); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var427 = NEW_nitc__parser__ReduceAction425(&type_nitc__parser__ReduceAction425);
{
((void(*)(val* self, long p0))(var427->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var427, 97l); /* goto= on <var427:ReduceAction425>*/
}
{
((void(*)(val* self))(var427->class->vft[COLOR_core__kernel__Object__init]))(var427); /* init on <var427:ReduceAction425>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var427); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var428 = NEW_nitc__parser__ReduceAction426(&type_nitc__parser__ReduceAction426);
{
((void(*)(val* self, long p0))(var428->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var428, 97l); /* goto= on <var428:ReduceAction426>*/
}
{
((void(*)(val* self))(var428->class->vft[COLOR_core__kernel__Object__init]))(var428); /* init on <var428:ReduceAction426>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var428); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var429 = NEW_nitc__parser__ReduceAction427(&type_nitc__parser__ReduceAction427);
{
((void(*)(val* self, long p0))(var429->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var429, 97l); /* goto= on <var429:ReduceAction427>*/
}
{
((void(*)(val* self))(var429->class->vft[COLOR_core__kernel__Object__init]))(var429); /* init on <var429:ReduceAction427>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var429); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var430 = NEW_nitc__parser__ReduceAction428(&type_nitc__parser__ReduceAction428);
{
((void(*)(val* self, long p0))(var430->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var430, 97l); /* goto= on <var430:ReduceAction428>*/
}
{
((void(*)(val* self))(var430->class->vft[COLOR_core__kernel__Object__init]))(var430); /* init on <var430:ReduceAction428>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var430); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var431 = NEW_nitc__parser__ReduceAction391(&type_nitc__parser__ReduceAction391);
{
((void(*)(val* self, long p0))(var431->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var431, 98l); /* goto= on <var431:ReduceAction391>*/
}
{
((void(*)(val* self))(var431->class->vft[COLOR_core__kernel__Object__init]))(var431); /* init on <var431:ReduceAction391>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var431); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var432 = NEW_nitc__parser__ReduceAction392(&type_nitc__parser__ReduceAction392);
{
((void(*)(val* self, long p0))(var432->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var432, 98l); /* goto= on <var432:ReduceAction392>*/
}
{
((void(*)(val* self))(var432->class->vft[COLOR_core__kernel__Object__init]))(var432); /* init on <var432:ReduceAction392>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var432); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var433 = NEW_nitc__parser__ReduceAction390(&type_nitc__parser__ReduceAction390);
{
((void(*)(val* self, long p0))(var433->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var433, 99l); /* goto= on <var433:ReduceAction390>*/
}
{
((void(*)(val* self))(var433->class->vft[COLOR_core__kernel__Object__init]))(var433); /* init on <var433:ReduceAction390>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var433); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var434 = NEW_nitc__parser__ReduceAction432(&type_nitc__parser__ReduceAction432);
{
((void(*)(val* self, long p0))(var434->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var434, 100l); /* goto= on <var434:ReduceAction432>*/
}
{
((void(*)(val* self))(var434->class->vft[COLOR_core__kernel__Object__init]))(var434); /* init on <var434:ReduceAction432>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var434); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var435 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var435->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var435, 100l); /* goto= on <var435:ReduceAction159>*/
}
{
((void(*)(val* self))(var435->class->vft[COLOR_core__kernel__Object__init]))(var435); /* init on <var435:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var435); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var436 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var436->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var436, 100l); /* goto= on <var436:ReduceAction159>*/
}
{
((void(*)(val* self))(var436->class->vft[COLOR_core__kernel__Object__init]))(var436); /* init on <var436:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var436); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var437 = NEW_nitc__parser__ReduceAction435(&type_nitc__parser__ReduceAction435);
{
((void(*)(val* self, long p0))(var437->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var437, 100l); /* goto= on <var437:ReduceAction435>*/
}
{
((void(*)(val* self))(var437->class->vft[COLOR_core__kernel__Object__init]))(var437); /* init on <var437:ReduceAction435>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var437); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var438 = NEW_nitc__parser__ReduceAction436(&type_nitc__parser__ReduceAction436);
{
((void(*)(val* self, long p0))(var438->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var438, 100l); /* goto= on <var438:ReduceAction436>*/
}
{
((void(*)(val* self))(var438->class->vft[COLOR_core__kernel__Object__init]))(var438); /* init on <var438:ReduceAction436>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var438); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var439 = NEW_nitc__parser__ReduceAction437(&type_nitc__parser__ReduceAction437);
{
((void(*)(val* self, long p0))(var439->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var439, 100l); /* goto= on <var439:ReduceAction437>*/
}
{
((void(*)(val* self))(var439->class->vft[COLOR_core__kernel__Object__init]))(var439); /* init on <var439:ReduceAction437>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var439); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var440 = NEW_nitc__parser__ReduceAction438(&type_nitc__parser__ReduceAction438);
{
((void(*)(val* self, long p0))(var440->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var440, 101l); /* goto= on <var440:ReduceAction438>*/
}
{
((void(*)(val* self))(var440->class->vft[COLOR_core__kernel__Object__init]))(var440); /* init on <var440:ReduceAction438>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var440); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var441 = NEW_nitc__parser__ReduceAction439(&type_nitc__parser__ReduceAction439);
{
((void(*)(val* self, long p0))(var441->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var441, 101l); /* goto= on <var441:ReduceAction439>*/
}
{
((void(*)(val* self))(var441->class->vft[COLOR_core__kernel__Object__init]))(var441); /* init on <var441:ReduceAction439>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var441); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var442 = NEW_nitc__parser__ReduceAction440(&type_nitc__parser__ReduceAction440);
{
((void(*)(val* self, long p0))(var442->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var442, 101l); /* goto= on <var442:ReduceAction440>*/
}
{
((void(*)(val* self))(var442->class->vft[COLOR_core__kernel__Object__init]))(var442); /* init on <var442:ReduceAction440>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var442); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var443 = NEW_nitc__parser__ReduceAction441(&type_nitc__parser__ReduceAction441);
{
((void(*)(val* self, long p0))(var443->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var443, 102l); /* goto= on <var443:ReduceAction441>*/
}
{
((void(*)(val* self))(var443->class->vft[COLOR_core__kernel__Object__init]))(var443); /* init on <var443:ReduceAction441>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var443); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var444 = NEW_nitc__parser__ReduceAction442(&type_nitc__parser__ReduceAction442);
{
((void(*)(val* self, long p0))(var444->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var444, 102l); /* goto= on <var444:ReduceAction442>*/
}
{
((void(*)(val* self))(var444->class->vft[COLOR_core__kernel__Object__init]))(var444); /* init on <var444:ReduceAction442>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var444); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var445 = NEW_nitc__parser__ReduceAction441(&type_nitc__parser__ReduceAction441);
{
((void(*)(val* self, long p0))(var445->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var445, 103l); /* goto= on <var445:ReduceAction441>*/
}
{
((void(*)(val* self))(var445->class->vft[COLOR_core__kernel__Object__init]))(var445); /* init on <var445:ReduceAction441>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var445); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var446 = NEW_nitc__parser__ReduceAction444(&type_nitc__parser__ReduceAction444);
{
((void(*)(val* self, long p0))(var446->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var446, 103l); /* goto= on <var446:ReduceAction444>*/
}
{
((void(*)(val* self))(var446->class->vft[COLOR_core__kernel__Object__init]))(var446); /* init on <var446:ReduceAction444>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var446); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var447 = NEW_nitc__parser__ReduceAction442(&type_nitc__parser__ReduceAction442);
{
((void(*)(val* self, long p0))(var447->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var447, 103l); /* goto= on <var447:ReduceAction442>*/
}
{
((void(*)(val* self))(var447->class->vft[COLOR_core__kernel__Object__init]))(var447); /* init on <var447:ReduceAction442>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var447); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var448 = NEW_nitc__parser__ReduceAction446(&type_nitc__parser__ReduceAction446);
{
((void(*)(val* self, long p0))(var448->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var448, 103l); /* goto= on <var448:ReduceAction446>*/
}
{
((void(*)(val* self))(var448->class->vft[COLOR_core__kernel__Object__init]))(var448); /* init on <var448:ReduceAction446>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var448); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var449 = NEW_nitc__parser__ReduceAction447(&type_nitc__parser__ReduceAction447);
{
((void(*)(val* self, long p0))(var449->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var449, 104l); /* goto= on <var449:ReduceAction447>*/
}
{
((void(*)(val* self))(var449->class->vft[COLOR_core__kernel__Object__init]))(var449); /* init on <var449:ReduceAction447>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var449); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var450 = NEW_nitc__parser__ReduceAction400(&type_nitc__parser__ReduceAction400);
{
((void(*)(val* self, long p0))(var450->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var450, 105l); /* goto= on <var450:ReduceAction400>*/
}
{
((void(*)(val* self))(var450->class->vft[COLOR_core__kernel__Object__init]))(var450); /* init on <var450:ReduceAction400>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var450); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var451 = NEW_nitc__parser__ReduceAction449(&type_nitc__parser__ReduceAction449);
{
((void(*)(val* self, long p0))(var451->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var451, 105l); /* goto= on <var451:ReduceAction449>*/
}
{
((void(*)(val* self))(var451->class->vft[COLOR_core__kernel__Object__init]))(var451); /* init on <var451:ReduceAction449>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var451); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var452 = NEW_nitc__parser__ReduceAction450(&type_nitc__parser__ReduceAction450);
{
((void(*)(val* self, long p0))(var452->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var452, 106l); /* goto= on <var452:ReduceAction450>*/
}
{
((void(*)(val* self))(var452->class->vft[COLOR_core__kernel__Object__init]))(var452); /* init on <var452:ReduceAction450>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var452); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var453 = NEW_nitc__parser__ReduceAction451(&type_nitc__parser__ReduceAction451);
{
((void(*)(val* self, long p0))(var453->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var453, 107l); /* goto= on <var453:ReduceAction451>*/
}
{
((void(*)(val* self))(var453->class->vft[COLOR_core__kernel__Object__init]))(var453); /* init on <var453:ReduceAction451>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var453); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var454 = NEW_nitc__parser__ReduceAction452(&type_nitc__parser__ReduceAction452);
{
((void(*)(val* self, long p0))(var454->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var454, 107l); /* goto= on <var454:ReduceAction452>*/
}
{
((void(*)(val* self))(var454->class->vft[COLOR_core__kernel__Object__init]))(var454); /* init on <var454:ReduceAction452>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var454); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var455 = NEW_nitc__parser__ReduceAction453(&type_nitc__parser__ReduceAction453);
{
((void(*)(val* self, long p0))(var455->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var455, 108l); /* goto= on <var455:ReduceAction453>*/
}
{
((void(*)(val* self))(var455->class->vft[COLOR_core__kernel__Object__init]))(var455); /* init on <var455:ReduceAction453>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var455); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var456 = NEW_nitc__parser__ReduceAction454(&type_nitc__parser__ReduceAction454);
{
((void(*)(val* self, long p0))(var456->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var456, 108l); /* goto= on <var456:ReduceAction454>*/
}
{
((void(*)(val* self))(var456->class->vft[COLOR_core__kernel__Object__init]))(var456); /* init on <var456:ReduceAction454>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var456); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var457 = NEW_nitc__parser__ReduceAction455(&type_nitc__parser__ReduceAction455);
{
((void(*)(val* self, long p0))(var457->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var457, 109l); /* goto= on <var457:ReduceAction455>*/
}
{
((void(*)(val* self))(var457->class->vft[COLOR_core__kernel__Object__init]))(var457); /* init on <var457:ReduceAction455>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var457); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var458 = NEW_nitc__parser__ReduceAction456(&type_nitc__parser__ReduceAction456);
{
((void(*)(val* self, long p0))(var458->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var458, 109l); /* goto= on <var458:ReduceAction456>*/
}
{
((void(*)(val* self))(var458->class->vft[COLOR_core__kernel__Object__init]))(var458); /* init on <var458:ReduceAction456>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var458); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var459 = NEW_nitc__parser__ReduceAction457(&type_nitc__parser__ReduceAction457);
{
((void(*)(val* self, long p0))(var459->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var459, 109l); /* goto= on <var459:ReduceAction457>*/
}
{
((void(*)(val* self))(var459->class->vft[COLOR_core__kernel__Object__init]))(var459); /* init on <var459:ReduceAction457>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var459); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var460 = NEW_nitc__parser__ReduceAction458(&type_nitc__parser__ReduceAction458);
{
((void(*)(val* self, long p0))(var460->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var460, 109l); /* goto= on <var460:ReduceAction458>*/
}
{
((void(*)(val* self))(var460->class->vft[COLOR_core__kernel__Object__init]))(var460); /* init on <var460:ReduceAction458>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var460); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var461 = NEW_nitc__parser__ReduceAction459(&type_nitc__parser__ReduceAction459);
{
((void(*)(val* self, long p0))(var461->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var461, 110l); /* goto= on <var461:ReduceAction459>*/
}
{
((void(*)(val* self))(var461->class->vft[COLOR_core__kernel__Object__init]))(var461); /* init on <var461:ReduceAction459>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var461); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var462 = NEW_nitc__parser__ReduceAction460(&type_nitc__parser__ReduceAction460);
{
((void(*)(val* self, long p0))(var462->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var462, 110l); /* goto= on <var462:ReduceAction460>*/
}
{
((void(*)(val* self))(var462->class->vft[COLOR_core__kernel__Object__init]))(var462); /* init on <var462:ReduceAction460>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var462); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var463 = NEW_nitc__parser__ReduceAction461(&type_nitc__parser__ReduceAction461);
{
((void(*)(val* self, long p0))(var463->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var463, 110l); /* goto= on <var463:ReduceAction461>*/
}
{
((void(*)(val* self))(var463->class->vft[COLOR_core__kernel__Object__init]))(var463); /* init on <var463:ReduceAction461>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var463); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var464 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var464->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var464, 110l); /* goto= on <var464:ReduceAction22>*/
}
{
((void(*)(val* self))(var464->class->vft[COLOR_core__kernel__Object__init]))(var464); /* init on <var464:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var464); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var465 = NEW_nitc__parser__ReduceAction463(&type_nitc__parser__ReduceAction463);
{
((void(*)(val* self, long p0))(var465->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var465, 111l); /* goto= on <var465:ReduceAction463>*/
}
{
((void(*)(val* self))(var465->class->vft[COLOR_core__kernel__Object__init]))(var465); /* init on <var465:ReduceAction463>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var465); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var466 = NEW_nitc__parser__ReduceAction464(&type_nitc__parser__ReduceAction464);
{
((void(*)(val* self, long p0))(var466->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var466, 111l); /* goto= on <var466:ReduceAction464>*/
}
{
((void(*)(val* self))(var466->class->vft[COLOR_core__kernel__Object__init]))(var466); /* init on <var466:ReduceAction464>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var466); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var467 = NEW_nitc__parser__ReduceAction465(&type_nitc__parser__ReduceAction465);
{
((void(*)(val* self, long p0))(var467->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var467, 111l); /* goto= on <var467:ReduceAction465>*/
}
{
((void(*)(val* self))(var467->class->vft[COLOR_core__kernel__Object__init]))(var467); /* init on <var467:ReduceAction465>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var467); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var468 = NEW_nitc__parser__ReduceAction466(&type_nitc__parser__ReduceAction466);
{
((void(*)(val* self, long p0))(var468->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var468, 111l); /* goto= on <var468:ReduceAction466>*/
}
{
((void(*)(val* self))(var468->class->vft[COLOR_core__kernel__Object__init]))(var468); /* init on <var468:ReduceAction466>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var468); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var469 = NEW_nitc__parser__ReduceAction467(&type_nitc__parser__ReduceAction467);
{
((void(*)(val* self, long p0))(var469->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var469, 112l); /* goto= on <var469:ReduceAction467>*/
}
{
((void(*)(val* self))(var469->class->vft[COLOR_core__kernel__Object__init]))(var469); /* init on <var469:ReduceAction467>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var469); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var470 = NEW_nitc__parser__ReduceAction468(&type_nitc__parser__ReduceAction468);
{
((void(*)(val* self, long p0))(var470->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var470, 112l); /* goto= on <var470:ReduceAction468>*/
}
{
((void(*)(val* self))(var470->class->vft[COLOR_core__kernel__Object__init]))(var470); /* init on <var470:ReduceAction468>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var470); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var471 = NEW_nitc__parser__ReduceAction469(&type_nitc__parser__ReduceAction469);
{
((void(*)(val* self, long p0))(var471->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var471, 112l); /* goto= on <var471:ReduceAction469>*/
}
{
((void(*)(val* self))(var471->class->vft[COLOR_core__kernel__Object__init]))(var471); /* init on <var471:ReduceAction469>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var471); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var472 = NEW_nitc__parser__ReduceAction468(&type_nitc__parser__ReduceAction468);
{
((void(*)(val* self, long p0))(var472->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var472, 112l); /* goto= on <var472:ReduceAction468>*/
}
{
((void(*)(val* self))(var472->class->vft[COLOR_core__kernel__Object__init]))(var472); /* init on <var472:ReduceAction468>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var472); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var473 = NEW_nitc__parser__ReduceAction471(&type_nitc__parser__ReduceAction471);
{
((void(*)(val* self, long p0))(var473->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var473, 113l); /* goto= on <var473:ReduceAction471>*/
}
{
((void(*)(val* self))(var473->class->vft[COLOR_core__kernel__Object__init]))(var473); /* init on <var473:ReduceAction471>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var473); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var474 = NEW_nitc__parser__ReduceAction472(&type_nitc__parser__ReduceAction472);
{
((void(*)(val* self, long p0))(var474->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var474, 114l); /* goto= on <var474:ReduceAction472>*/
}
{
((void(*)(val* self))(var474->class->vft[COLOR_core__kernel__Object__init]))(var474); /* init on <var474:ReduceAction472>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var474); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var475 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var475->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var475, 115l); /* goto= on <var475:ReduceAction22>*/
}
{
((void(*)(val* self))(var475->class->vft[COLOR_core__kernel__Object__init]))(var475); /* init on <var475:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var475); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var476 = NEW_nitc__parser__ReduceAction474(&type_nitc__parser__ReduceAction474);
{
((void(*)(val* self, long p0))(var476->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var476, 115l); /* goto= on <var476:ReduceAction474>*/
}
{
((void(*)(val* self))(var476->class->vft[COLOR_core__kernel__Object__init]))(var476); /* init on <var476:ReduceAction474>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var476); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var477 = NEW_nitc__parser__ReduceAction475(&type_nitc__parser__ReduceAction475);
{
((void(*)(val* self, long p0))(var477->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var477, 116l); /* goto= on <var477:ReduceAction475>*/
}
{
((void(*)(val* self))(var477->class->vft[COLOR_core__kernel__Object__init]))(var477); /* init on <var477:ReduceAction475>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var477); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var478 = NEW_nitc__parser__ReduceAction475(&type_nitc__parser__ReduceAction475);
{
((void(*)(val* self, long p0))(var478->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var478, 116l); /* goto= on <var478:ReduceAction475>*/
}
{
((void(*)(val* self))(var478->class->vft[COLOR_core__kernel__Object__init]))(var478); /* init on <var478:ReduceAction475>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var478); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var479 = NEW_nitc__parser__ReduceAction475(&type_nitc__parser__ReduceAction475);
{
((void(*)(val* self, long p0))(var479->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var479, 116l); /* goto= on <var479:ReduceAction475>*/
}
{
((void(*)(val* self))(var479->class->vft[COLOR_core__kernel__Object__init]))(var479); /* init on <var479:ReduceAction475>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var479); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var480 = NEW_nitc__parser__ReduceAction478(&type_nitc__parser__ReduceAction478);
{
((void(*)(val* self, long p0))(var480->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var480, 117l); /* goto= on <var480:ReduceAction478>*/
}
{
((void(*)(val* self))(var480->class->vft[COLOR_core__kernel__Object__init]))(var480); /* init on <var480:ReduceAction478>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var480); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var481 = NEW_nitc__parser__ReduceAction479(&type_nitc__parser__ReduceAction479);
{
((void(*)(val* self, long p0))(var481->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var481, 117l); /* goto= on <var481:ReduceAction479>*/
}
{
((void(*)(val* self))(var481->class->vft[COLOR_core__kernel__Object__init]))(var481); /* init on <var481:ReduceAction479>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var481); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var482 = NEW_nitc__parser__ReduceAction23(&type_nitc__parser__ReduceAction23);
{
((void(*)(val* self, long p0))(var482->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var482, 117l); /* goto= on <var482:ReduceAction23>*/
}
{
((void(*)(val* self))(var482->class->vft[COLOR_core__kernel__Object__init]))(var482); /* init on <var482:ReduceAction23>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var482); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var483 = NEW_nitc__parser__ReduceAction23(&type_nitc__parser__ReduceAction23);
{
((void(*)(val* self, long p0))(var483->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var483, 117l); /* goto= on <var483:ReduceAction23>*/
}
{
((void(*)(val* self))(var483->class->vft[COLOR_core__kernel__Object__init]))(var483); /* init on <var483:ReduceAction23>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var483); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var484 = NEW_nitc__parser__ReduceAction482(&type_nitc__parser__ReduceAction482);
{
((void(*)(val* self, long p0))(var484->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var484, 117l); /* goto= on <var484:ReduceAction482>*/
}
{
((void(*)(val* self))(var484->class->vft[COLOR_core__kernel__Object__init]))(var484); /* init on <var484:ReduceAction482>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var484); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var485 = NEW_nitc__parser__ReduceAction482(&type_nitc__parser__ReduceAction482);
{
((void(*)(val* self, long p0))(var485->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var485, 117l); /* goto= on <var485:ReduceAction482>*/
}
{
((void(*)(val* self))(var485->class->vft[COLOR_core__kernel__Object__init]))(var485); /* init on <var485:ReduceAction482>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var485); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var486 = NEW_nitc__parser__ReduceAction484(&type_nitc__parser__ReduceAction484);
{
((void(*)(val* self, long p0))(var486->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var486, 117l); /* goto= on <var486:ReduceAction484>*/
}
{
((void(*)(val* self))(var486->class->vft[COLOR_core__kernel__Object__init]))(var486); /* init on <var486:ReduceAction484>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var486); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var487 = NEW_nitc__parser__ReduceAction485(&type_nitc__parser__ReduceAction485);
{
((void(*)(val* self, long p0))(var487->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var487, 117l); /* goto= on <var487:ReduceAction485>*/
}
{
((void(*)(val* self))(var487->class->vft[COLOR_core__kernel__Object__init]))(var487); /* init on <var487:ReduceAction485>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var487); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var488 = NEW_nitc__parser__ReduceAction486(&type_nitc__parser__ReduceAction486);
{
((void(*)(val* self, long p0))(var488->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var488, 117l); /* goto= on <var488:ReduceAction486>*/
}
{
((void(*)(val* self))(var488->class->vft[COLOR_core__kernel__Object__init]))(var488); /* init on <var488:ReduceAction486>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var488); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var489 = NEW_nitc__parser__ReduceAction486(&type_nitc__parser__ReduceAction486);
{
((void(*)(val* self, long p0))(var489->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var489, 117l); /* goto= on <var489:ReduceAction486>*/
}
{
((void(*)(val* self))(var489->class->vft[COLOR_core__kernel__Object__init]))(var489); /* init on <var489:ReduceAction486>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var489); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var490 = NEW_nitc__parser__ReduceAction488(&type_nitc__parser__ReduceAction488);
{
((void(*)(val* self, long p0))(var490->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var490, 117l); /* goto= on <var490:ReduceAction488>*/
}
{
((void(*)(val* self))(var490->class->vft[COLOR_core__kernel__Object__init]))(var490); /* init on <var490:ReduceAction488>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var490); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var491 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var491->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var491, 118l); /* goto= on <var491:ReduceAction22>*/
}
{
((void(*)(val* self))(var491->class->vft[COLOR_core__kernel__Object__init]))(var491); /* init on <var491:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var491); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var492 = NEW_nitc__parser__ReduceAction490(&type_nitc__parser__ReduceAction490);
{
((void(*)(val* self, long p0))(var492->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var492, 118l); /* goto= on <var492:ReduceAction490>*/
}
{
((void(*)(val* self))(var492->class->vft[COLOR_core__kernel__Object__init]))(var492); /* init on <var492:ReduceAction490>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var492); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var493 = NEW_nitc__parser__ReduceAction491(&type_nitc__parser__ReduceAction491);
{
((void(*)(val* self, long p0))(var493->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var493, 119l); /* goto= on <var493:ReduceAction491>*/
}
{
((void(*)(val* self))(var493->class->vft[COLOR_core__kernel__Object__init]))(var493); /* init on <var493:ReduceAction491>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var493); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var494 = NEW_nitc__parser__ReduceAction475(&type_nitc__parser__ReduceAction475);
{
((void(*)(val* self, long p0))(var494->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var494, 119l); /* goto= on <var494:ReduceAction475>*/
}
{
((void(*)(val* self))(var494->class->vft[COLOR_core__kernel__Object__init]))(var494); /* init on <var494:ReduceAction475>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var494); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var495 = NEW_nitc__parser__ReduceAction475(&type_nitc__parser__ReduceAction475);
{
((void(*)(val* self, long p0))(var495->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var495, 120l); /* goto= on <var495:ReduceAction475>*/
}
{
((void(*)(val* self))(var495->class->vft[COLOR_core__kernel__Object__init]))(var495); /* init on <var495:ReduceAction475>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var495); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var496 = NEW_nitc__parser__ReduceAction494(&type_nitc__parser__ReduceAction494);
{
((void(*)(val* self, long p0))(var496->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var496, 120l); /* goto= on <var496:ReduceAction494>*/
}
{
((void(*)(val* self))(var496->class->vft[COLOR_core__kernel__Object__init]))(var496); /* init on <var496:ReduceAction494>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var496); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var497 = NEW_nitc__parser__ReduceAction48(&type_nitc__parser__ReduceAction48);
{
((void(*)(val* self, long p0))(var497->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var497, 121l); /* goto= on <var497:ReduceAction48>*/
}
{
((void(*)(val* self))(var497->class->vft[COLOR_core__kernel__Object__init]))(var497); /* init on <var497:ReduceAction48>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var497); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var498 = NEW_nitc__parser__ReduceAction49(&type_nitc__parser__ReduceAction49);
{
((void(*)(val* self, long p0))(var498->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var498, 121l); /* goto= on <var498:ReduceAction49>*/
}
{
((void(*)(val* self))(var498->class->vft[COLOR_core__kernel__Object__init]))(var498); /* init on <var498:ReduceAction49>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var498); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var499 = NEW_nitc__parser__ReduceAction50(&type_nitc__parser__ReduceAction50);
{
((void(*)(val* self, long p0))(var499->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var499, 121l); /* goto= on <var499:ReduceAction50>*/
}
{
((void(*)(val* self))(var499->class->vft[COLOR_core__kernel__Object__init]))(var499); /* init on <var499:ReduceAction50>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var499); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var500 = NEW_nitc__parser__ReduceAction57(&type_nitc__parser__ReduceAction57);
{
((void(*)(val* self, long p0))(var500->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var500, 121l); /* goto= on <var500:ReduceAction57>*/
}
{
((void(*)(val* self))(var500->class->vft[COLOR_core__kernel__Object__init]))(var500); /* init on <var500:ReduceAction57>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var500); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var501 = NEW_nitc__parser__ReduceAction58(&type_nitc__parser__ReduceAction58);
{
((void(*)(val* self, long p0))(var501->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var501, 121l); /* goto= on <var501:ReduceAction58>*/
}
{
((void(*)(val* self))(var501->class->vft[COLOR_core__kernel__Object__init]))(var501); /* init on <var501:ReduceAction58>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var501); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var502 = NEW_nitc__parser__ReduceAction76(&type_nitc__parser__ReduceAction76);
{
((void(*)(val* self, long p0))(var502->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var502, 122l); /* goto= on <var502:ReduceAction76>*/
}
{
((void(*)(val* self))(var502->class->vft[COLOR_core__kernel__Object__init]))(var502); /* init on <var502:ReduceAction76>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var502); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var503 = NEW_nitc__parser__ReduceAction77(&type_nitc__parser__ReduceAction77);
{
((void(*)(val* self, long p0))(var503->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var503, 122l); /* goto= on <var503:ReduceAction77>*/
}
{
((void(*)(val* self))(var503->class->vft[COLOR_core__kernel__Object__init]))(var503); /* init on <var503:ReduceAction77>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var503); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var504 = NEW_nitc__parser__ReduceAction86(&type_nitc__parser__ReduceAction86);
{
((void(*)(val* self, long p0))(var504->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var504, 123l); /* goto= on <var504:ReduceAction86>*/
}
{
((void(*)(val* self))(var504->class->vft[COLOR_core__kernel__Object__init]))(var504); /* init on <var504:ReduceAction86>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var504); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var505 = NEW_nitc__parser__ReduceAction87(&type_nitc__parser__ReduceAction87);
{
((void(*)(val* self, long p0))(var505->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var505, 123l); /* goto= on <var505:ReduceAction87>*/
}
{
((void(*)(val* self))(var505->class->vft[COLOR_core__kernel__Object__init]))(var505); /* init on <var505:ReduceAction87>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var505); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var506 = NEW_nitc__parser__ReduceAction88(&type_nitc__parser__ReduceAction88);
{
((void(*)(val* self, long p0))(var506->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var506, 123l); /* goto= on <var506:ReduceAction88>*/
}
{
((void(*)(val* self))(var506->class->vft[COLOR_core__kernel__Object__init]))(var506); /* init on <var506:ReduceAction88>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var506); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var507 = NEW_nitc__parser__ReduceAction89(&type_nitc__parser__ReduceAction89);
{
((void(*)(val* self, long p0))(var507->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var507, 123l); /* goto= on <var507:ReduceAction89>*/
}
{
((void(*)(val* self))(var507->class->vft[COLOR_core__kernel__Object__init]))(var507); /* init on <var507:ReduceAction89>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var507); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var508 = NEW_nitc__parser__ReduceAction90(&type_nitc__parser__ReduceAction90);
{
((void(*)(val* self, long p0))(var508->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var508, 123l); /* goto= on <var508:ReduceAction90>*/
}
{
((void(*)(val* self))(var508->class->vft[COLOR_core__kernel__Object__init]))(var508); /* init on <var508:ReduceAction90>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var508); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var509 = NEW_nitc__parser__ReduceAction91(&type_nitc__parser__ReduceAction91);
{
((void(*)(val* self, long p0))(var509->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var509, 123l); /* goto= on <var509:ReduceAction91>*/
}
{
((void(*)(val* self))(var509->class->vft[COLOR_core__kernel__Object__init]))(var509); /* init on <var509:ReduceAction91>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var509); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var510 = NEW_nitc__parser__ReduceAction92(&type_nitc__parser__ReduceAction92);
{
((void(*)(val* self, long p0))(var510->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var510, 123l); /* goto= on <var510:ReduceAction92>*/
}
{
((void(*)(val* self))(var510->class->vft[COLOR_core__kernel__Object__init]))(var510); /* init on <var510:ReduceAction92>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var510); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var511 = NEW_nitc__parser__ReduceAction93(&type_nitc__parser__ReduceAction93);
{
((void(*)(val* self, long p0))(var511->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var511, 123l); /* goto= on <var511:ReduceAction93>*/
}
{
((void(*)(val* self))(var511->class->vft[COLOR_core__kernel__Object__init]))(var511); /* init on <var511:ReduceAction93>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var511); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var512 = NEW_nitc__parser__ReduceAction94(&type_nitc__parser__ReduceAction94);
{
((void(*)(val* self, long p0))(var512->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var512, 123l); /* goto= on <var512:ReduceAction94>*/
}
{
((void(*)(val* self))(var512->class->vft[COLOR_core__kernel__Object__init]))(var512); /* init on <var512:ReduceAction94>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var512); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var513 = NEW_nitc__parser__ReduceAction95(&type_nitc__parser__ReduceAction95);
{
((void(*)(val* self, long p0))(var513->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var513, 123l); /* goto= on <var513:ReduceAction95>*/
}
{
((void(*)(val* self))(var513->class->vft[COLOR_core__kernel__Object__init]))(var513); /* init on <var513:ReduceAction95>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var513); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var514 = NEW_nitc__parser__ReduceAction96(&type_nitc__parser__ReduceAction96);
{
((void(*)(val* self, long p0))(var514->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var514, 123l); /* goto= on <var514:ReduceAction96>*/
}
{
((void(*)(val* self))(var514->class->vft[COLOR_core__kernel__Object__init]))(var514); /* init on <var514:ReduceAction96>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var514); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var515 = NEW_nitc__parser__ReduceAction97(&type_nitc__parser__ReduceAction97);
{
((void(*)(val* self, long p0))(var515->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var515, 123l); /* goto= on <var515:ReduceAction97>*/
}
{
((void(*)(val* self))(var515->class->vft[COLOR_core__kernel__Object__init]))(var515); /* init on <var515:ReduceAction97>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var515); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var516 = NEW_nitc__parser__ReduceAction98(&type_nitc__parser__ReduceAction98);
{
((void(*)(val* self, long p0))(var516->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var516, 123l); /* goto= on <var516:ReduceAction98>*/
}
{
((void(*)(val* self))(var516->class->vft[COLOR_core__kernel__Object__init]))(var516); /* init on <var516:ReduceAction98>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var516); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var517 = NEW_nitc__parser__ReduceAction99(&type_nitc__parser__ReduceAction99);
{
((void(*)(val* self, long p0))(var517->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var517, 123l); /* goto= on <var517:ReduceAction99>*/
}
{
((void(*)(val* self))(var517->class->vft[COLOR_core__kernel__Object__init]))(var517); /* init on <var517:ReduceAction99>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var517); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var518 = NEW_nitc__parser__ReduceAction100(&type_nitc__parser__ReduceAction100);
{
((void(*)(val* self, long p0))(var518->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var518, 123l); /* goto= on <var518:ReduceAction100>*/
}
{
((void(*)(val* self))(var518->class->vft[COLOR_core__kernel__Object__init]))(var518); /* init on <var518:ReduceAction100>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var518); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var519 = NEW_nitc__parser__ReduceAction101(&type_nitc__parser__ReduceAction101);
{
((void(*)(val* self, long p0))(var519->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var519, 123l); /* goto= on <var519:ReduceAction101>*/
}
{
((void(*)(val* self))(var519->class->vft[COLOR_core__kernel__Object__init]))(var519); /* init on <var519:ReduceAction101>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var519); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var520 = NEW_nitc__parser__ReduceAction102(&type_nitc__parser__ReduceAction102);
{
((void(*)(val* self, long p0))(var520->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var520, 123l); /* goto= on <var520:ReduceAction102>*/
}
{
((void(*)(val* self))(var520->class->vft[COLOR_core__kernel__Object__init]))(var520); /* init on <var520:ReduceAction102>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var520); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var521 = NEW_nitc__parser__ReduceAction103(&type_nitc__parser__ReduceAction103);
{
((void(*)(val* self, long p0))(var521->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var521, 123l); /* goto= on <var521:ReduceAction103>*/
}
{
((void(*)(val* self))(var521->class->vft[COLOR_core__kernel__Object__init]))(var521); /* init on <var521:ReduceAction103>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var521); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var522 = NEW_nitc__parser__ReduceAction104(&type_nitc__parser__ReduceAction104);
{
((void(*)(val* self, long p0))(var522->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var522, 123l); /* goto= on <var522:ReduceAction104>*/
}
{
((void(*)(val* self))(var522->class->vft[COLOR_core__kernel__Object__init]))(var522); /* init on <var522:ReduceAction104>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var522); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var523 = NEW_nitc__parser__ReduceAction105(&type_nitc__parser__ReduceAction105);
{
((void(*)(val* self, long p0))(var523->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var523, 123l); /* goto= on <var523:ReduceAction105>*/
}
{
((void(*)(val* self))(var523->class->vft[COLOR_core__kernel__Object__init]))(var523); /* init on <var523:ReduceAction105>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var523); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var524 = NEW_nitc__parser__ReduceAction106(&type_nitc__parser__ReduceAction106);
{
((void(*)(val* self, long p0))(var524->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var524, 123l); /* goto= on <var524:ReduceAction106>*/
}
{
((void(*)(val* self))(var524->class->vft[COLOR_core__kernel__Object__init]))(var524); /* init on <var524:ReduceAction106>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var524); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var525 = NEW_nitc__parser__ReduceAction107(&type_nitc__parser__ReduceAction107);
{
((void(*)(val* self, long p0))(var525->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var525, 123l); /* goto= on <var525:ReduceAction107>*/
}
{
((void(*)(val* self))(var525->class->vft[COLOR_core__kernel__Object__init]))(var525); /* init on <var525:ReduceAction107>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var525); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var526 = NEW_nitc__parser__ReduceAction467(&type_nitc__parser__ReduceAction467);
{
((void(*)(val* self, long p0))(var526->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var526, 124l); /* goto= on <var526:ReduceAction467>*/
}
{
((void(*)(val* self))(var526->class->vft[COLOR_core__kernel__Object__init]))(var526); /* init on <var526:ReduceAction467>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var526); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var527 = NEW_nitc__parser__ReduceAction468(&type_nitc__parser__ReduceAction468);
{
((void(*)(val* self, long p0))(var527->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var527, 124l); /* goto= on <var527:ReduceAction468>*/
}
{
((void(*)(val* self))(var527->class->vft[COLOR_core__kernel__Object__init]))(var527); /* init on <var527:ReduceAction468>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var527); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var528 = NEW_nitc__parser__ReduceAction469(&type_nitc__parser__ReduceAction469);
{
((void(*)(val* self, long p0))(var528->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var528, 124l); /* goto= on <var528:ReduceAction469>*/
}
{
((void(*)(val* self))(var528->class->vft[COLOR_core__kernel__Object__init]))(var528); /* init on <var528:ReduceAction469>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var528); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var529 = NEW_nitc__parser__ReduceAction468(&type_nitc__parser__ReduceAction468);
{
((void(*)(val* self, long p0))(var529->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var529, 124l); /* goto= on <var529:ReduceAction468>*/
}
{
((void(*)(val* self))(var529->class->vft[COLOR_core__kernel__Object__init]))(var529); /* init on <var529:ReduceAction468>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var529); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var530 = NEW_nitc__parser__ReduceAction146(&type_nitc__parser__ReduceAction146);
{
((void(*)(val* self, long p0))(var530->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var530, 125l); /* goto= on <var530:ReduceAction146>*/
}
{
((void(*)(val* self))(var530->class->vft[COLOR_core__kernel__Object__init]))(var530); /* init on <var530:ReduceAction146>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var530); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var531 = NEW_nitc__parser__ReduceAction147(&type_nitc__parser__ReduceAction147);
{
((void(*)(val* self, long p0))(var531->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var531, 125l); /* goto= on <var531:ReduceAction147>*/
}
{
((void(*)(val* self))(var531->class->vft[COLOR_core__kernel__Object__init]))(var531); /* init on <var531:ReduceAction147>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var531); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var532 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var532->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var532, 126l); /* goto= on <var532:ReduceAction159>*/
}
{
((void(*)(val* self))(var532->class->vft[COLOR_core__kernel__Object__init]))(var532); /* init on <var532:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var532); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var533 = NEW_nitc__parser__ReduceAction289(&type_nitc__parser__ReduceAction289);
{
((void(*)(val* self, long p0))(var533->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var533, 126l); /* goto= on <var533:ReduceAction289>*/
}
{
((void(*)(val* self))(var533->class->vft[COLOR_core__kernel__Object__init]))(var533); /* init on <var533:ReduceAction289>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var533); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var534 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var534->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var534, 127l); /* goto= on <var534:ReduceAction159>*/
}
{
((void(*)(val* self))(var534->class->vft[COLOR_core__kernel__Object__init]))(var534); /* init on <var534:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var534); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var535 = NEW_nitc__parser__ReduceAction291(&type_nitc__parser__ReduceAction291);
{
((void(*)(val* self, long p0))(var535->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var535, 127l); /* goto= on <var535:ReduceAction291>*/
}
{
((void(*)(val* self))(var535->class->vft[COLOR_core__kernel__Object__init]))(var535); /* init on <var535:ReduceAction291>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var535); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var536 = NEW_nitc__parser__ReduceAction292(&type_nitc__parser__ReduceAction292);
{
((void(*)(val* self, long p0))(var536->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var536, 127l); /* goto= on <var536:ReduceAction292>*/
}
{
((void(*)(val* self))(var536->class->vft[COLOR_core__kernel__Object__init]))(var536); /* init on <var536:ReduceAction292>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var536); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var537 = NEW_nitc__parser__ReduceAction293(&type_nitc__parser__ReduceAction293);
{
((void(*)(val* self, long p0))(var537->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var537, 127l); /* goto= on <var537:ReduceAction293>*/
}
{
((void(*)(val* self))(var537->class->vft[COLOR_core__kernel__Object__init]))(var537); /* init on <var537:ReduceAction293>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var537); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var538 = NEW_nitc__parser__ReduceAction294(&type_nitc__parser__ReduceAction294);
{
((void(*)(val* self, long p0))(var538->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var538, 127l); /* goto= on <var538:ReduceAction294>*/
}
{
((void(*)(val* self))(var538->class->vft[COLOR_core__kernel__Object__init]))(var538); /* init on <var538:ReduceAction294>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var538); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var539 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var539->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var539, 128l); /* goto= on <var539:ReduceAction159>*/
}
{
((void(*)(val* self))(var539->class->vft[COLOR_core__kernel__Object__init]))(var539); /* init on <var539:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var539); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var540 = NEW_nitc__parser__ReduceAction296(&type_nitc__parser__ReduceAction296);
{
((void(*)(val* self, long p0))(var540->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var540, 128l); /* goto= on <var540:ReduceAction296>*/
}
{
((void(*)(val* self))(var540->class->vft[COLOR_core__kernel__Object__init]))(var540); /* init on <var540:ReduceAction296>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var540); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var541 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var541->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var541, 129l); /* goto= on <var541:ReduceAction159>*/
}
{
((void(*)(val* self))(var541->class->vft[COLOR_core__kernel__Object__init]))(var541); /* init on <var541:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var541); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var542 = NEW_nitc__parser__ReduceAction298(&type_nitc__parser__ReduceAction298);
{
((void(*)(val* self, long p0))(var542->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var542, 129l); /* goto= on <var542:ReduceAction298>*/
}
{
((void(*)(val* self))(var542->class->vft[COLOR_core__kernel__Object__init]))(var542); /* init on <var542:ReduceAction298>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var542); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var543 = NEW_nitc__parser__ReduceAction299(&type_nitc__parser__ReduceAction299);
{
((void(*)(val* self, long p0))(var543->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var543, 129l); /* goto= on <var543:ReduceAction299>*/
}
{
((void(*)(val* self))(var543->class->vft[COLOR_core__kernel__Object__init]))(var543); /* init on <var543:ReduceAction299>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var543); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var544 = NEW_nitc__parser__ReduceAction300(&type_nitc__parser__ReduceAction300);
{
((void(*)(val* self, long p0))(var544->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var544, 129l); /* goto= on <var544:ReduceAction300>*/
}
{
((void(*)(val* self))(var544->class->vft[COLOR_core__kernel__Object__init]))(var544); /* init on <var544:ReduceAction300>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var544); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var545 = NEW_nitc__parser__ReduceAction301(&type_nitc__parser__ReduceAction301);
{
((void(*)(val* self, long p0))(var545->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var545, 129l); /* goto= on <var545:ReduceAction301>*/
}
{
((void(*)(val* self))(var545->class->vft[COLOR_core__kernel__Object__init]))(var545); /* init on <var545:ReduceAction301>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var545); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var546 = NEW_nitc__parser__ReduceAction302(&type_nitc__parser__ReduceAction302);
{
((void(*)(val* self, long p0))(var546->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var546, 129l); /* goto= on <var546:ReduceAction302>*/
}
{
((void(*)(val* self))(var546->class->vft[COLOR_core__kernel__Object__init]))(var546); /* init on <var546:ReduceAction302>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var546); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var547 = NEW_nitc__parser__ReduceAction303(&type_nitc__parser__ReduceAction303);
{
((void(*)(val* self, long p0))(var547->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var547, 129l); /* goto= on <var547:ReduceAction303>*/
}
{
((void(*)(val* self))(var547->class->vft[COLOR_core__kernel__Object__init]))(var547); /* init on <var547:ReduceAction303>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var547); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var548 = NEW_nitc__parser__ReduceAction304(&type_nitc__parser__ReduceAction304);
{
((void(*)(val* self, long p0))(var548->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var548, 129l); /* goto= on <var548:ReduceAction304>*/
}
{
((void(*)(val* self))(var548->class->vft[COLOR_core__kernel__Object__init]))(var548); /* init on <var548:ReduceAction304>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var548); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var549 = NEW_nitc__parser__ReduceAction305(&type_nitc__parser__ReduceAction305);
{
((void(*)(val* self, long p0))(var549->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var549, 129l); /* goto= on <var549:ReduceAction305>*/
}
{
((void(*)(val* self))(var549->class->vft[COLOR_core__kernel__Object__init]))(var549); /* init on <var549:ReduceAction305>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var549); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var550 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var550->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var550, 130l); /* goto= on <var550:ReduceAction159>*/
}
{
((void(*)(val* self))(var550->class->vft[COLOR_core__kernel__Object__init]))(var550); /* init on <var550:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var550); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var551 = NEW_nitc__parser__ReduceAction307(&type_nitc__parser__ReduceAction307);
{
((void(*)(val* self, long p0))(var551->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var551, 130l); /* goto= on <var551:ReduceAction307>*/
}
{
((void(*)(val* self))(var551->class->vft[COLOR_core__kernel__Object__init]))(var551); /* init on <var551:ReduceAction307>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var551); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var552 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var552->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var552, 131l); /* goto= on <var552:ReduceAction159>*/
}
{
((void(*)(val* self))(var552->class->vft[COLOR_core__kernel__Object__init]))(var552); /* init on <var552:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var552); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var553 = NEW_nitc__parser__ReduceAction309(&type_nitc__parser__ReduceAction309);
{
((void(*)(val* self, long p0))(var553->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var553, 131l); /* goto= on <var553:ReduceAction309>*/
}
{
((void(*)(val* self))(var553->class->vft[COLOR_core__kernel__Object__init]))(var553); /* init on <var553:ReduceAction309>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var553); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var554 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var554->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var554, 132l); /* goto= on <var554:ReduceAction159>*/
}
{
((void(*)(val* self))(var554->class->vft[COLOR_core__kernel__Object__init]))(var554); /* init on <var554:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var554); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var555 = NEW_nitc__parser__ReduceAction311(&type_nitc__parser__ReduceAction311);
{
((void(*)(val* self, long p0))(var555->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var555, 132l); /* goto= on <var555:ReduceAction311>*/
}
{
((void(*)(val* self))(var555->class->vft[COLOR_core__kernel__Object__init]))(var555); /* init on <var555:ReduceAction311>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var555); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var556 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var556->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var556, 133l); /* goto= on <var556:ReduceAction159>*/
}
{
((void(*)(val* self))(var556->class->vft[COLOR_core__kernel__Object__init]))(var556); /* init on <var556:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var556); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var557 = NEW_nitc__parser__ReduceAction313(&type_nitc__parser__ReduceAction313);
{
((void(*)(val* self, long p0))(var557->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var557, 133l); /* goto= on <var557:ReduceAction313>*/
}
{
((void(*)(val* self))(var557->class->vft[COLOR_core__kernel__Object__init]))(var557); /* init on <var557:ReduceAction313>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var557); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var558 = NEW_nitc__parser__ReduceAction314(&type_nitc__parser__ReduceAction314);
{
((void(*)(val* self, long p0))(var558->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var558, 133l); /* goto= on <var558:ReduceAction314>*/
}
{
((void(*)(val* self))(var558->class->vft[COLOR_core__kernel__Object__init]))(var558); /* init on <var558:ReduceAction314>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var558); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var559 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var559->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var559, 134l); /* goto= on <var559:ReduceAction159>*/
}
{
((void(*)(val* self))(var559->class->vft[COLOR_core__kernel__Object__init]))(var559); /* init on <var559:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var559); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var560 = NEW_nitc__parser__ReduceAction316(&type_nitc__parser__ReduceAction316);
{
((void(*)(val* self, long p0))(var560->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var560, 134l); /* goto= on <var560:ReduceAction316>*/
}
{
((void(*)(val* self))(var560->class->vft[COLOR_core__kernel__Object__init]))(var560); /* init on <var560:ReduceAction316>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var560); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var561 = NEW_nitc__parser__ReduceAction317(&type_nitc__parser__ReduceAction317);
{
((void(*)(val* self, long p0))(var561->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var561, 134l); /* goto= on <var561:ReduceAction317>*/
}
{
((void(*)(val* self))(var561->class->vft[COLOR_core__kernel__Object__init]))(var561); /* init on <var561:ReduceAction317>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var561); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var562 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var562->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var562, 135l); /* goto= on <var562:ReduceAction159>*/
}
{
((void(*)(val* self))(var562->class->vft[COLOR_core__kernel__Object__init]))(var562); /* init on <var562:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var562); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var563 = NEW_nitc__parser__ReduceAction319(&type_nitc__parser__ReduceAction319);
{
((void(*)(val* self, long p0))(var563->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var563, 135l); /* goto= on <var563:ReduceAction319>*/
}
{
((void(*)(val* self))(var563->class->vft[COLOR_core__kernel__Object__init]))(var563); /* init on <var563:ReduceAction319>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var563); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var564 = NEW_nitc__parser__ReduceAction320(&type_nitc__parser__ReduceAction320);
{
((void(*)(val* self, long p0))(var564->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var564, 135l); /* goto= on <var564:ReduceAction320>*/
}
{
((void(*)(val* self))(var564->class->vft[COLOR_core__kernel__Object__init]))(var564); /* init on <var564:ReduceAction320>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var564); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var565 = NEW_nitc__parser__ReduceAction321(&type_nitc__parser__ReduceAction321);
{
((void(*)(val* self, long p0))(var565->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var565, 135l); /* goto= on <var565:ReduceAction321>*/
}
{
((void(*)(val* self))(var565->class->vft[COLOR_core__kernel__Object__init]))(var565); /* init on <var565:ReduceAction321>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var565); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var566 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var566->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var566, 136l); /* goto= on <var566:ReduceAction159>*/
}
{
((void(*)(val* self))(var566->class->vft[COLOR_core__kernel__Object__init]))(var566); /* init on <var566:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var566); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var567 = NEW_nitc__parser__ReduceAction323(&type_nitc__parser__ReduceAction323);
{
((void(*)(val* self, long p0))(var567->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var567, 136l); /* goto= on <var567:ReduceAction323>*/
}
{
((void(*)(val* self))(var567->class->vft[COLOR_core__kernel__Object__init]))(var567); /* init on <var567:ReduceAction323>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var567); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var568 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var568->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var568, 137l); /* goto= on <var568:ReduceAction159>*/
}
{
((void(*)(val* self))(var568->class->vft[COLOR_core__kernel__Object__init]))(var568); /* init on <var568:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var568); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var569 = NEW_nitc__parser__ReduceAction325(&type_nitc__parser__ReduceAction325);
{
((void(*)(val* self, long p0))(var569->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var569, 137l); /* goto= on <var569:ReduceAction325>*/
}
{
((void(*)(val* self))(var569->class->vft[COLOR_core__kernel__Object__init]))(var569); /* init on <var569:ReduceAction325>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var569); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var570 = NEW_nitc__parser__ReduceAction326(&type_nitc__parser__ReduceAction326);
{
((void(*)(val* self, long p0))(var570->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var570, 137l); /* goto= on <var570:ReduceAction326>*/
}
{
((void(*)(val* self))(var570->class->vft[COLOR_core__kernel__Object__init]))(var570); /* init on <var570:ReduceAction326>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var570); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var571 = NEW_nitc__parser__ReduceAction327(&type_nitc__parser__ReduceAction327);
{
((void(*)(val* self, long p0))(var571->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var571, 137l); /* goto= on <var571:ReduceAction327>*/
}
{
((void(*)(val* self))(var571->class->vft[COLOR_core__kernel__Object__init]))(var571); /* init on <var571:ReduceAction327>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var571); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var572 = NEW_nitc__parser__ReduceAction328(&type_nitc__parser__ReduceAction328);
{
((void(*)(val* self, long p0))(var572->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var572, 137l); /* goto= on <var572:ReduceAction328>*/
}
{
((void(*)(val* self))(var572->class->vft[COLOR_core__kernel__Object__init]))(var572); /* init on <var572:ReduceAction328>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var572); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var573 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var573->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var573, 138l); /* goto= on <var573:ReduceAction159>*/
}
{
((void(*)(val* self))(var573->class->vft[COLOR_core__kernel__Object__init]))(var573); /* init on <var573:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var573); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var574 = NEW_nitc__parser__ReduceAction330(&type_nitc__parser__ReduceAction330);
{
((void(*)(val* self, long p0))(var574->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var574, 138l); /* goto= on <var574:ReduceAction330>*/
}
{
((void(*)(val* self))(var574->class->vft[COLOR_core__kernel__Object__init]))(var574); /* init on <var574:ReduceAction330>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var574); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var575 = NEW_nitc__parser__ReduceAction331(&type_nitc__parser__ReduceAction331);
{
((void(*)(val* self, long p0))(var575->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var575, 138l); /* goto= on <var575:ReduceAction331>*/
}
{
((void(*)(val* self))(var575->class->vft[COLOR_core__kernel__Object__init]))(var575); /* init on <var575:ReduceAction331>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var575); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var576 = NEW_nitc__parser__ReduceAction332(&type_nitc__parser__ReduceAction332);
{
((void(*)(val* self, long p0))(var576->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var576, 138l); /* goto= on <var576:ReduceAction332>*/
}
{
((void(*)(val* self))(var576->class->vft[COLOR_core__kernel__Object__init]))(var576); /* init on <var576:ReduceAction332>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var576); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var577 = NEW_nitc__parser__ReduceAction333(&type_nitc__parser__ReduceAction333);
{
((void(*)(val* self, long p0))(var577->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var577, 138l); /* goto= on <var577:ReduceAction333>*/
}
{
((void(*)(val* self))(var577->class->vft[COLOR_core__kernel__Object__init]))(var577); /* init on <var577:ReduceAction333>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var577); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var578 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var578->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var578, 139l); /* goto= on <var578:ReduceAction159>*/
}
{
((void(*)(val* self))(var578->class->vft[COLOR_core__kernel__Object__init]))(var578); /* init on <var578:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var578); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var579 = NEW_nitc__parser__ReduceAction335(&type_nitc__parser__ReduceAction335);
{
((void(*)(val* self, long p0))(var579->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var579, 139l); /* goto= on <var579:ReduceAction335>*/
}
{
((void(*)(val* self))(var579->class->vft[COLOR_core__kernel__Object__init]))(var579); /* init on <var579:ReduceAction335>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var579); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var580 = NEW_nitc__parser__ReduceAction336(&type_nitc__parser__ReduceAction336);
{
((void(*)(val* self, long p0))(var580->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var580, 139l); /* goto= on <var580:ReduceAction336>*/
}
{
((void(*)(val* self))(var580->class->vft[COLOR_core__kernel__Object__init]))(var580); /* init on <var580:ReduceAction336>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var580); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var581 = NEW_nitc__parser__ReduceAction184(&type_nitc__parser__ReduceAction184);
{
((void(*)(val* self, long p0))(var581->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var581, 139l); /* goto= on <var581:ReduceAction184>*/
}
{
((void(*)(val* self))(var581->class->vft[COLOR_core__kernel__Object__init]))(var581); /* init on <var581:ReduceAction184>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var581); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var582 = NEW_nitc__parser__ReduceAction188(&type_nitc__parser__ReduceAction188);
{
((void(*)(val* self, long p0))(var582->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var582, 139l); /* goto= on <var582:ReduceAction188>*/
}
{
((void(*)(val* self))(var582->class->vft[COLOR_core__kernel__Object__init]))(var582); /* init on <var582:ReduceAction188>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var582); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var583 = NEW_nitc__parser__ReduceAction338(&type_nitc__parser__ReduceAction338);
{
((void(*)(val* self, long p0))(var583->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var583, 139l); /* goto= on <var583:ReduceAction338>*/
}
{
((void(*)(val* self))(var583->class->vft[COLOR_core__kernel__Object__init]))(var583); /* init on <var583:ReduceAction338>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var583); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var584 = NEW_nitc__parser__ReduceAction346(&type_nitc__parser__ReduceAction346);
{
((void(*)(val* self, long p0))(var584->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var584, 139l); /* goto= on <var584:ReduceAction346>*/
}
{
((void(*)(val* self))(var584->class->vft[COLOR_core__kernel__Object__init]))(var584); /* init on <var584:ReduceAction346>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var584); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var585 = NEW_nitc__parser__ReduceAction185(&type_nitc__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var585->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var585, 139l); /* goto= on <var585:ReduceAction185>*/
}
{
((void(*)(val* self))(var585->class->vft[COLOR_core__kernel__Object__init]))(var585); /* init on <var585:ReduceAction185>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var585); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var586 = NEW_nitc__parser__ReduceAction189(&type_nitc__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var586->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var586, 139l); /* goto= on <var586:ReduceAction189>*/
}
{
((void(*)(val* self))(var586->class->vft[COLOR_core__kernel__Object__init]))(var586); /* init on <var586:ReduceAction189>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var586); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var587 = NEW_nitc__parser__ReduceAction340(&type_nitc__parser__ReduceAction340);
{
((void(*)(val* self, long p0))(var587->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var587, 139l); /* goto= on <var587:ReduceAction340>*/
}
{
((void(*)(val* self))(var587->class->vft[COLOR_core__kernel__Object__init]))(var587); /* init on <var587:ReduceAction340>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var587); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var588 = NEW_nitc__parser__ReduceAction348(&type_nitc__parser__ReduceAction348);
{
((void(*)(val* self, long p0))(var588->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var588, 139l); /* goto= on <var588:ReduceAction348>*/
}
{
((void(*)(val* self))(var588->class->vft[COLOR_core__kernel__Object__init]))(var588); /* init on <var588:ReduceAction348>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var588); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var589 = NEW_nitc__parser__ReduceAction186(&type_nitc__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var589->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var589, 139l); /* goto= on <var589:ReduceAction186>*/
}
{
((void(*)(val* self))(var589->class->vft[COLOR_core__kernel__Object__init]))(var589); /* init on <var589:ReduceAction186>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var589); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var590 = NEW_nitc__parser__ReduceAction190(&type_nitc__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var590->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var590, 139l); /* goto= on <var590:ReduceAction190>*/
}
{
((void(*)(val* self))(var590->class->vft[COLOR_core__kernel__Object__init]))(var590); /* init on <var590:ReduceAction190>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var590); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var591 = NEW_nitc__parser__ReduceAction342(&type_nitc__parser__ReduceAction342);
{
((void(*)(val* self, long p0))(var591->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var591, 139l); /* goto= on <var591:ReduceAction342>*/
}
{
((void(*)(val* self))(var591->class->vft[COLOR_core__kernel__Object__init]))(var591); /* init on <var591:ReduceAction342>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var591); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var592 = NEW_nitc__parser__ReduceAction350(&type_nitc__parser__ReduceAction350);
{
((void(*)(val* self, long p0))(var592->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var592, 139l); /* goto= on <var592:ReduceAction350>*/
}
{
((void(*)(val* self))(var592->class->vft[COLOR_core__kernel__Object__init]))(var592); /* init on <var592:ReduceAction350>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var592); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var593 = NEW_nitc__parser__ReduceAction187(&type_nitc__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var593->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var593, 139l); /* goto= on <var593:ReduceAction187>*/
}
{
((void(*)(val* self))(var593->class->vft[COLOR_core__kernel__Object__init]))(var593); /* init on <var593:ReduceAction187>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var593); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var594 = NEW_nitc__parser__ReduceAction191(&type_nitc__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var594->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var594, 139l); /* goto= on <var594:ReduceAction191>*/
}
{
((void(*)(val* self))(var594->class->vft[COLOR_core__kernel__Object__init]))(var594); /* init on <var594:ReduceAction191>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var594); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var595 = NEW_nitc__parser__ReduceAction344(&type_nitc__parser__ReduceAction344);
{
((void(*)(val* self, long p0))(var595->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var595, 139l); /* goto= on <var595:ReduceAction344>*/
}
{
((void(*)(val* self))(var595->class->vft[COLOR_core__kernel__Object__init]))(var595); /* init on <var595:ReduceAction344>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var595); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var596 = NEW_nitc__parser__ReduceAction352(&type_nitc__parser__ReduceAction352);
{
((void(*)(val* self, long p0))(var596->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var596, 139l); /* goto= on <var596:ReduceAction352>*/
}
{
((void(*)(val* self))(var596->class->vft[COLOR_core__kernel__Object__init]))(var596); /* init on <var596:ReduceAction352>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var596); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var597 = NEW_nitc__parser__ReduceAction192(&type_nitc__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var597->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var597, 139l); /* goto= on <var597:ReduceAction192>*/
}
{
((void(*)(val* self))(var597->class->vft[COLOR_core__kernel__Object__init]))(var597); /* init on <var597:ReduceAction192>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var597); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var598 = NEW_nitc__parser__ReduceAction354(&type_nitc__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var598->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var598, 139l); /* goto= on <var598:ReduceAction354>*/
}
{
((void(*)(val* self))(var598->class->vft[COLOR_core__kernel__Object__init]))(var598); /* init on <var598:ReduceAction354>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var598); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var599 = NEW_nitc__parser__ReduceAction193(&type_nitc__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var599->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var599, 139l); /* goto= on <var599:ReduceAction193>*/
}
{
((void(*)(val* self))(var599->class->vft[COLOR_core__kernel__Object__init]))(var599); /* init on <var599:ReduceAction193>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var599); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var600 = NEW_nitc__parser__ReduceAction194(&type_nitc__parser__ReduceAction194);
{
((void(*)(val* self, long p0))(var600->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var600, 139l); /* goto= on <var600:ReduceAction194>*/
}
{
((void(*)(val* self))(var600->class->vft[COLOR_core__kernel__Object__init]))(var600); /* init on <var600:ReduceAction194>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var600); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var601 = NEW_nitc__parser__ReduceAction356(&type_nitc__parser__ReduceAction356);
{
((void(*)(val* self, long p0))(var601->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var601, 139l); /* goto= on <var601:ReduceAction356>*/
}
{
((void(*)(val* self))(var601->class->vft[COLOR_core__kernel__Object__init]))(var601); /* init on <var601:ReduceAction356>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var601); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var602 = NEW_nitc__parser__ReduceAction358(&type_nitc__parser__ReduceAction358);
{
((void(*)(val* self, long p0))(var602->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var602, 139l); /* goto= on <var602:ReduceAction358>*/
}
{
((void(*)(val* self))(var602->class->vft[COLOR_core__kernel__Object__init]))(var602); /* init on <var602:ReduceAction358>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var602); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var603 = NEW_nitc__parser__ReduceAction360(&type_nitc__parser__ReduceAction360);
{
((void(*)(val* self, long p0))(var603->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var603, 139l); /* goto= on <var603:ReduceAction360>*/
}
{
((void(*)(val* self))(var603->class->vft[COLOR_core__kernel__Object__init]))(var603); /* init on <var603:ReduceAction360>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var603); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var604 = NEW_nitc__parser__ReduceAction361(&type_nitc__parser__ReduceAction361);
{
((void(*)(val* self, long p0))(var604->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var604, 139l); /* goto= on <var604:ReduceAction361>*/
}
{
((void(*)(val* self))(var604->class->vft[COLOR_core__kernel__Object__init]))(var604); /* init on <var604:ReduceAction361>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var604); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var605 = NEW_nitc__parser__ReduceAction362(&type_nitc__parser__ReduceAction362);
{
((void(*)(val* self, long p0))(var605->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var605, 139l); /* goto= on <var605:ReduceAction362>*/
}
{
((void(*)(val* self))(var605->class->vft[COLOR_core__kernel__Object__init]))(var605); /* init on <var605:ReduceAction362>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var605); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var606 = NEW_nitc__parser__ReduceAction363(&type_nitc__parser__ReduceAction363);
{
((void(*)(val* self, long p0))(var606->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var606, 139l); /* goto= on <var606:ReduceAction363>*/
}
{
((void(*)(val* self))(var606->class->vft[COLOR_core__kernel__Object__init]))(var606); /* init on <var606:ReduceAction363>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var606); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var607 = NEW_nitc__parser__ReduceAction364(&type_nitc__parser__ReduceAction364);
{
((void(*)(val* self, long p0))(var607->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var607, 139l); /* goto= on <var607:ReduceAction364>*/
}
{
((void(*)(val* self))(var607->class->vft[COLOR_core__kernel__Object__init]))(var607); /* init on <var607:ReduceAction364>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var607); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var608 = NEW_nitc__parser__ReduceAction365(&type_nitc__parser__ReduceAction365);
{
((void(*)(val* self, long p0))(var608->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var608, 139l); /* goto= on <var608:ReduceAction365>*/
}
{
((void(*)(val* self))(var608->class->vft[COLOR_core__kernel__Object__init]))(var608); /* init on <var608:ReduceAction365>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var608); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var609 = NEW_nitc__parser__ReduceAction366(&type_nitc__parser__ReduceAction366);
{
((void(*)(val* self, long p0))(var609->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var609, 139l); /* goto= on <var609:ReduceAction366>*/
}
{
((void(*)(val* self))(var609->class->vft[COLOR_core__kernel__Object__init]))(var609); /* init on <var609:ReduceAction366>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var609); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var610 = NEW_nitc__parser__ReduceAction367(&type_nitc__parser__ReduceAction367);
{
((void(*)(val* self, long p0))(var610->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var610, 139l); /* goto= on <var610:ReduceAction367>*/
}
{
((void(*)(val* self))(var610->class->vft[COLOR_core__kernel__Object__init]))(var610); /* init on <var610:ReduceAction367>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var610); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var611 = NEW_nitc__parser__ReduceAction368(&type_nitc__parser__ReduceAction368);
{
((void(*)(val* self, long p0))(var611->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var611, 139l); /* goto= on <var611:ReduceAction368>*/
}
{
((void(*)(val* self))(var611->class->vft[COLOR_core__kernel__Object__init]))(var611); /* init on <var611:ReduceAction368>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var611); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var612 = NEW_nitc__parser__ReduceAction369(&type_nitc__parser__ReduceAction369);
{
((void(*)(val* self, long p0))(var612->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var612, 139l); /* goto= on <var612:ReduceAction369>*/
}
{
((void(*)(val* self))(var612->class->vft[COLOR_core__kernel__Object__init]))(var612); /* init on <var612:ReduceAction369>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var612); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var613 = NEW_nitc__parser__ReduceAction370(&type_nitc__parser__ReduceAction370);
{
((void(*)(val* self, long p0))(var613->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var613, 139l); /* goto= on <var613:ReduceAction370>*/
}
{
((void(*)(val* self))(var613->class->vft[COLOR_core__kernel__Object__init]))(var613); /* init on <var613:ReduceAction370>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var613); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var614 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var614->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var614, 140l); /* goto= on <var614:ReduceAction159>*/
}
{
((void(*)(val* self))(var614->class->vft[COLOR_core__kernel__Object__init]))(var614); /* init on <var614:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var614); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var615 = NEW_nitc__parser__ReduceAction372(&type_nitc__parser__ReduceAction372);
{
((void(*)(val* self, long p0))(var615->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var615, 140l); /* goto= on <var615:ReduceAction372>*/
}
{
((void(*)(val* self))(var615->class->vft[COLOR_core__kernel__Object__init]))(var615); /* init on <var615:ReduceAction372>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var615); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var616 = NEW_nitc__parser__ReduceAction373(&type_nitc__parser__ReduceAction373);
{
((void(*)(val* self, long p0))(var616->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var616, 140l); /* goto= on <var616:ReduceAction373>*/
}
{
((void(*)(val* self))(var616->class->vft[COLOR_core__kernel__Object__init]))(var616); /* init on <var616:ReduceAction373>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var616); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var617 = NEW_nitc__parser__ReduceAction374(&type_nitc__parser__ReduceAction374);
{
((void(*)(val* self, long p0))(var617->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var617, 141l); /* goto= on <var617:ReduceAction374>*/
}
{
((void(*)(val* self))(var617->class->vft[COLOR_core__kernel__Object__init]))(var617); /* init on <var617:ReduceAction374>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var617); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var618 = NEW_nitc__parser__ReduceAction375(&type_nitc__parser__ReduceAction375);
{
((void(*)(val* self, long p0))(var618->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var618, 141l); /* goto= on <var618:ReduceAction375>*/
}
{
((void(*)(val* self))(var618->class->vft[COLOR_core__kernel__Object__init]))(var618); /* init on <var618:ReduceAction375>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var618); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var619 = NEW_nitc__parser__ReduceAction376(&type_nitc__parser__ReduceAction376);
{
((void(*)(val* self, long p0))(var619->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var619, 141l); /* goto= on <var619:ReduceAction376>*/
}
{
((void(*)(val* self))(var619->class->vft[COLOR_core__kernel__Object__init]))(var619); /* init on <var619:ReduceAction376>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var619); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var620 = NEW_nitc__parser__ReduceAction377(&type_nitc__parser__ReduceAction377);
{
((void(*)(val* self, long p0))(var620->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var620, 141l); /* goto= on <var620:ReduceAction377>*/
}
{
((void(*)(val* self))(var620->class->vft[COLOR_core__kernel__Object__init]))(var620); /* init on <var620:ReduceAction377>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var620); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var621 = NEW_nitc__parser__ReduceAction378(&type_nitc__parser__ReduceAction378);
{
((void(*)(val* self, long p0))(var621->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var621, 141l); /* goto= on <var621:ReduceAction378>*/
}
{
((void(*)(val* self))(var621->class->vft[COLOR_core__kernel__Object__init]))(var621); /* init on <var621:ReduceAction378>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var621); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var622 = NEW_nitc__parser__ReduceAction379(&type_nitc__parser__ReduceAction379);
{
((void(*)(val* self, long p0))(var622->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var622, 141l); /* goto= on <var622:ReduceAction379>*/
}
{
((void(*)(val* self))(var622->class->vft[COLOR_core__kernel__Object__init]))(var622); /* init on <var622:ReduceAction379>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var622); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var623 = NEW_nitc__parser__ReduceAction380(&type_nitc__parser__ReduceAction380);
{
((void(*)(val* self, long p0))(var623->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var623, 141l); /* goto= on <var623:ReduceAction380>*/
}
{
((void(*)(val* self))(var623->class->vft[COLOR_core__kernel__Object__init]))(var623); /* init on <var623:ReduceAction380>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var623); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var624 = NEW_nitc__parser__ReduceAction381(&type_nitc__parser__ReduceAction381);
{
((void(*)(val* self, long p0))(var624->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var624, 141l); /* goto= on <var624:ReduceAction381>*/
}
{
((void(*)(val* self))(var624->class->vft[COLOR_core__kernel__Object__init]))(var624); /* init on <var624:ReduceAction381>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var624); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var625 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var625->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var625, 141l); /* goto= on <var625:ReduceAction159>*/
}
{
((void(*)(val* self))(var625->class->vft[COLOR_core__kernel__Object__init]))(var625); /* init on <var625:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var625); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var626 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var626->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var626, 141l); /* goto= on <var626:ReduceAction159>*/
}
{
((void(*)(val* self))(var626->class->vft[COLOR_core__kernel__Object__init]))(var626); /* init on <var626:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var626); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var627 = NEW_nitc__parser__ReduceAction146(&type_nitc__parser__ReduceAction146);
{
((void(*)(val* self, long p0))(var627->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var627, 142l); /* goto= on <var627:ReduceAction146>*/
}
{
((void(*)(val* self))(var627->class->vft[COLOR_core__kernel__Object__init]))(var627); /* init on <var627:ReduceAction146>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var627); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var628 = NEW_nitc__parser__ReduceAction147(&type_nitc__parser__ReduceAction147);
{
((void(*)(val* self, long p0))(var628->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var628, 142l); /* goto= on <var628:ReduceAction147>*/
}
{
((void(*)(val* self))(var628->class->vft[COLOR_core__kernel__Object__init]))(var628); /* init on <var628:ReduceAction147>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var628); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var629 = NEW_nitc__parser__ReduceAction148(&type_nitc__parser__ReduceAction148);
{
((void(*)(val* self, long p0))(var629->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var629, 142l); /* goto= on <var629:ReduceAction148>*/
}
{
((void(*)(val* self))(var629->class->vft[COLOR_core__kernel__Object__init]))(var629); /* init on <var629:ReduceAction148>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var629); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var630 = NEW_nitc__parser__ReduceAction149(&type_nitc__parser__ReduceAction149);
{
((void(*)(val* self, long p0))(var630->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var630, 142l); /* goto= on <var630:ReduceAction149>*/
}
{
((void(*)(val* self))(var630->class->vft[COLOR_core__kernel__Object__init]))(var630); /* init on <var630:ReduceAction149>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var630); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var631 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var631->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var631, 143l); /* goto= on <var631:ReduceAction159>*/
}
{
((void(*)(val* self))(var631->class->vft[COLOR_core__kernel__Object__init]))(var631); /* init on <var631:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var631); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var632 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var632->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var632, 143l); /* goto= on <var632:ReduceAction159>*/
}
{
((void(*)(val* self))(var632->class->vft[COLOR_core__kernel__Object__init]))(var632); /* init on <var632:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var632); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var633 = NEW_nitc__parser__ReduceAction169(&type_nitc__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var633->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var633, 143l); /* goto= on <var633:ReduceAction169>*/
}
{
((void(*)(val* self))(var633->class->vft[COLOR_core__kernel__Object__init]))(var633); /* init on <var633:ReduceAction169>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var633); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var634 = NEW_nitc__parser__ReduceAction170(&type_nitc__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var634->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var634, 143l); /* goto= on <var634:ReduceAction170>*/
}
{
((void(*)(val* self))(var634->class->vft[COLOR_core__kernel__Object__init]))(var634); /* init on <var634:ReduceAction170>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var634); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var635 = NEW_nitc__parser__ReduceAction171(&type_nitc__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var635->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var635, 143l); /* goto= on <var635:ReduceAction171>*/
}
{
((void(*)(val* self))(var635->class->vft[COLOR_core__kernel__Object__init]))(var635); /* init on <var635:ReduceAction171>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var635); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var636 = NEW_nitc__parser__ReduceAction172(&type_nitc__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var636->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var636, 143l); /* goto= on <var636:ReduceAction172>*/
}
{
((void(*)(val* self))(var636->class->vft[COLOR_core__kernel__Object__init]))(var636); /* init on <var636:ReduceAction172>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var636); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var637 = NEW_nitc__parser__ReduceAction173(&type_nitc__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var637->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var637, 143l); /* goto= on <var637:ReduceAction173>*/
}
{
((void(*)(val* self))(var637->class->vft[COLOR_core__kernel__Object__init]))(var637); /* init on <var637:ReduceAction173>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var637); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var638 = NEW_nitc__parser__ReduceAction174(&type_nitc__parser__ReduceAction174);
{
((void(*)(val* self, long p0))(var638->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var638, 143l); /* goto= on <var638:ReduceAction174>*/
}
{
((void(*)(val* self))(var638->class->vft[COLOR_core__kernel__Object__init]))(var638); /* init on <var638:ReduceAction174>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var638); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var639 = NEW_nitc__parser__ReduceAction175(&type_nitc__parser__ReduceAction175);
{
((void(*)(val* self, long p0))(var639->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var639, 143l); /* goto= on <var639:ReduceAction175>*/
}
{
((void(*)(val* self))(var639->class->vft[COLOR_core__kernel__Object__init]))(var639); /* init on <var639:ReduceAction175>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var639); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var640 = NEW_nitc__parser__ReduceAction176(&type_nitc__parser__ReduceAction176);
{
((void(*)(val* self, long p0))(var640->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var640, 143l); /* goto= on <var640:ReduceAction176>*/
}
{
((void(*)(val* self))(var640->class->vft[COLOR_core__kernel__Object__init]))(var640); /* init on <var640:ReduceAction176>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var640); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var641 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var641->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var641, 143l); /* goto= on <var641:ReduceAction159>*/
}
{
((void(*)(val* self))(var641->class->vft[COLOR_core__kernel__Object__init]))(var641); /* init on <var641:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var641); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var642 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var642->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var642, 143l); /* goto= on <var642:ReduceAction159>*/
}
{
((void(*)(val* self))(var642->class->vft[COLOR_core__kernel__Object__init]))(var642); /* init on <var642:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var642); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var643 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var643->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var643, 143l); /* goto= on <var643:ReduceAction159>*/
}
{
((void(*)(val* self))(var643->class->vft[COLOR_core__kernel__Object__init]))(var643); /* init on <var643:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var643); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var644 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var644->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var644, 143l); /* goto= on <var644:ReduceAction159>*/
}
{
((void(*)(val* self))(var644->class->vft[COLOR_core__kernel__Object__init]))(var644); /* init on <var644:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var644); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var645 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var645->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var645, 143l); /* goto= on <var645:ReduceAction159>*/
}
{
((void(*)(val* self))(var645->class->vft[COLOR_core__kernel__Object__init]))(var645); /* init on <var645:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var645); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var646 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var646->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var646, 143l); /* goto= on <var646:ReduceAction159>*/
}
{
((void(*)(val* self))(var646->class->vft[COLOR_core__kernel__Object__init]))(var646); /* init on <var646:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var646); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var647 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var647->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var647, 143l); /* goto= on <var647:ReduceAction159>*/
}
{
((void(*)(val* self))(var647->class->vft[COLOR_core__kernel__Object__init]))(var647); /* init on <var647:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var647); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var648 = NEW_nitc__parser__ReduceAction184(&type_nitc__parser__ReduceAction184);
{
((void(*)(val* self, long p0))(var648->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var648, 143l); /* goto= on <var648:ReduceAction184>*/
}
{
((void(*)(val* self))(var648->class->vft[COLOR_core__kernel__Object__init]))(var648); /* init on <var648:ReduceAction184>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var648); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var649 = NEW_nitc__parser__ReduceAction185(&type_nitc__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var649->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var649, 143l); /* goto= on <var649:ReduceAction185>*/
}
{
((void(*)(val* self))(var649->class->vft[COLOR_core__kernel__Object__init]))(var649); /* init on <var649:ReduceAction185>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var649); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var650 = NEW_nitc__parser__ReduceAction186(&type_nitc__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var650->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var650, 143l); /* goto= on <var650:ReduceAction186>*/
}
{
((void(*)(val* self))(var650->class->vft[COLOR_core__kernel__Object__init]))(var650); /* init on <var650:ReduceAction186>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var650); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var651 = NEW_nitc__parser__ReduceAction187(&type_nitc__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var651->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var651, 143l); /* goto= on <var651:ReduceAction187>*/
}
{
((void(*)(val* self))(var651->class->vft[COLOR_core__kernel__Object__init]))(var651); /* init on <var651:ReduceAction187>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var651); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var652 = NEW_nitc__parser__ReduceAction188(&type_nitc__parser__ReduceAction188);
{
((void(*)(val* self, long p0))(var652->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var652, 143l); /* goto= on <var652:ReduceAction188>*/
}
{
((void(*)(val* self))(var652->class->vft[COLOR_core__kernel__Object__init]))(var652); /* init on <var652:ReduceAction188>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var652); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var653 = NEW_nitc__parser__ReduceAction189(&type_nitc__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var653->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var653, 143l); /* goto= on <var653:ReduceAction189>*/
}
{
((void(*)(val* self))(var653->class->vft[COLOR_core__kernel__Object__init]))(var653); /* init on <var653:ReduceAction189>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var653); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var654 = NEW_nitc__parser__ReduceAction190(&type_nitc__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var654->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var654, 143l); /* goto= on <var654:ReduceAction190>*/
}
{
((void(*)(val* self))(var654->class->vft[COLOR_core__kernel__Object__init]))(var654); /* init on <var654:ReduceAction190>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var654); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var655 = NEW_nitc__parser__ReduceAction191(&type_nitc__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var655->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var655, 143l); /* goto= on <var655:ReduceAction191>*/
}
{
((void(*)(val* self))(var655->class->vft[COLOR_core__kernel__Object__init]))(var655); /* init on <var655:ReduceAction191>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var655); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var656 = NEW_nitc__parser__ReduceAction192(&type_nitc__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var656->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var656, 143l); /* goto= on <var656:ReduceAction192>*/
}
{
((void(*)(val* self))(var656->class->vft[COLOR_core__kernel__Object__init]))(var656); /* init on <var656:ReduceAction192>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var656); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var657 = NEW_nitc__parser__ReduceAction193(&type_nitc__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var657->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var657, 143l); /* goto= on <var657:ReduceAction193>*/
}
{
((void(*)(val* self))(var657->class->vft[COLOR_core__kernel__Object__init]))(var657); /* init on <var657:ReduceAction193>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var657); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var658 = NEW_nitc__parser__ReduceAction194(&type_nitc__parser__ReduceAction194);
{
((void(*)(val* self, long p0))(var658->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var658, 143l); /* goto= on <var658:ReduceAction194>*/
}
{
((void(*)(val* self))(var658->class->vft[COLOR_core__kernel__Object__init]))(var658); /* init on <var658:ReduceAction194>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var658); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var659 = NEW_nitc__parser__ReduceAction195(&type_nitc__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var659->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var659, 143l); /* goto= on <var659:ReduceAction195>*/
}
{
((void(*)(val* self))(var659->class->vft[COLOR_core__kernel__Object__init]))(var659); /* init on <var659:ReduceAction195>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var659); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var660 = NEW_nitc__parser__ReduceAction196(&type_nitc__parser__ReduceAction196);
{
((void(*)(val* self, long p0))(var660->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var660, 143l); /* goto= on <var660:ReduceAction196>*/
}
{
((void(*)(val* self))(var660->class->vft[COLOR_core__kernel__Object__init]))(var660); /* init on <var660:ReduceAction196>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var660); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var661 = NEW_nitc__parser__ReduceAction195(&type_nitc__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var661->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var661, 143l); /* goto= on <var661:ReduceAction195>*/
}
{
((void(*)(val* self))(var661->class->vft[COLOR_core__kernel__Object__init]))(var661); /* init on <var661:ReduceAction195>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var661); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var662 = NEW_nitc__parser__ReduceAction198(&type_nitc__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var662->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var662, 143l); /* goto= on <var662:ReduceAction198>*/
}
{
((void(*)(val* self))(var662->class->vft[COLOR_core__kernel__Object__init]))(var662); /* init on <var662:ReduceAction198>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var662); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var663 = NEW_nitc__parser__ReduceAction199(&type_nitc__parser__ReduceAction199);
{
((void(*)(val* self, long p0))(var663->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var663, 143l); /* goto= on <var663:ReduceAction199>*/
}
{
((void(*)(val* self))(var663->class->vft[COLOR_core__kernel__Object__init]))(var663); /* init on <var663:ReduceAction199>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var663); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var664 = NEW_nitc__parser__ReduceAction198(&type_nitc__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var664->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var664, 143l); /* goto= on <var664:ReduceAction198>*/
}
{
((void(*)(val* self))(var664->class->vft[COLOR_core__kernel__Object__init]))(var664); /* init on <var664:ReduceAction198>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var664); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var665 = NEW_nitc__parser__ReduceAction201(&type_nitc__parser__ReduceAction201);
{
((void(*)(val* self, long p0))(var665->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var665, 143l); /* goto= on <var665:ReduceAction201>*/
}
{
((void(*)(val* self))(var665->class->vft[COLOR_core__kernel__Object__init]))(var665); /* init on <var665:ReduceAction201>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var665); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var666 = NEW_nitc__parser__ReduceAction208(&type_nitc__parser__ReduceAction208);
{
((void(*)(val* self, long p0))(var666->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var666, 144l); /* goto= on <var666:ReduceAction208>*/
}
{
((void(*)(val* self))(var666->class->vft[COLOR_core__kernel__Object__init]))(var666); /* init on <var666:ReduceAction208>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var666); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var667 = NEW_nitc__parser__ReduceAction209(&type_nitc__parser__ReduceAction209);
{
((void(*)(val* self, long p0))(var667->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var667, 144l); /* goto= on <var667:ReduceAction209>*/
}
{
((void(*)(val* self))(var667->class->vft[COLOR_core__kernel__Object__init]))(var667); /* init on <var667:ReduceAction209>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var667); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var668 = NEW_nitc__parser__ReduceAction210(&type_nitc__parser__ReduceAction210);
{
((void(*)(val* self, long p0))(var668->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var668, 144l); /* goto= on <var668:ReduceAction210>*/
}
{
((void(*)(val* self))(var668->class->vft[COLOR_core__kernel__Object__init]))(var668); /* init on <var668:ReduceAction210>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var668); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var669 = NEW_nitc__parser__ReduceAction211(&type_nitc__parser__ReduceAction211);
{
((void(*)(val* self, long p0))(var669->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var669, 144l); /* goto= on <var669:ReduceAction211>*/
}
{
((void(*)(val* self))(var669->class->vft[COLOR_core__kernel__Object__init]))(var669); /* init on <var669:ReduceAction211>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var669); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var670 = NEW_nitc__parser__ReduceAction212(&type_nitc__parser__ReduceAction212);
{
((void(*)(val* self, long p0))(var670->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var670, 144l); /* goto= on <var670:ReduceAction212>*/
}
{
((void(*)(val* self))(var670->class->vft[COLOR_core__kernel__Object__init]))(var670); /* init on <var670:ReduceAction212>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var670); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var671 = NEW_nitc__parser__ReduceAction213(&type_nitc__parser__ReduceAction213);
{
((void(*)(val* self, long p0))(var671->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var671, 144l); /* goto= on <var671:ReduceAction213>*/
}
{
((void(*)(val* self))(var671->class->vft[COLOR_core__kernel__Object__init]))(var671); /* init on <var671:ReduceAction213>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var671); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var672 = NEW_nitc__parser__ReduceAction214(&type_nitc__parser__ReduceAction214);
{
((void(*)(val* self, long p0))(var672->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var672, 144l); /* goto= on <var672:ReduceAction214>*/
}
{
((void(*)(val* self))(var672->class->vft[COLOR_core__kernel__Object__init]))(var672); /* init on <var672:ReduceAction214>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var672); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var673 = NEW_nitc__parser__ReduceAction215(&type_nitc__parser__ReduceAction215);
{
((void(*)(val* self, long p0))(var673->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var673, 144l); /* goto= on <var673:ReduceAction215>*/
}
{
((void(*)(val* self))(var673->class->vft[COLOR_core__kernel__Object__init]))(var673); /* init on <var673:ReduceAction215>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var673); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var674 = NEW_nitc__parser__ReduceAction216(&type_nitc__parser__ReduceAction216);
{
((void(*)(val* self, long p0))(var674->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var674, 144l); /* goto= on <var674:ReduceAction216>*/
}
{
((void(*)(val* self))(var674->class->vft[COLOR_core__kernel__Object__init]))(var674); /* init on <var674:ReduceAction216>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var674); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var675 = NEW_nitc__parser__ReduceAction217(&type_nitc__parser__ReduceAction217);
{
((void(*)(val* self, long p0))(var675->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var675, 144l); /* goto= on <var675:ReduceAction217>*/
}
{
((void(*)(val* self))(var675->class->vft[COLOR_core__kernel__Object__init]))(var675); /* init on <var675:ReduceAction217>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var675); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var676 = NEW_nitc__parser__ReduceAction218(&type_nitc__parser__ReduceAction218);
{
((void(*)(val* self, long p0))(var676->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var676, 144l); /* goto= on <var676:ReduceAction218>*/
}
{
((void(*)(val* self))(var676->class->vft[COLOR_core__kernel__Object__init]))(var676); /* init on <var676:ReduceAction218>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var676); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var677 = NEW_nitc__parser__ReduceAction219(&type_nitc__parser__ReduceAction219);
{
((void(*)(val* self, long p0))(var677->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var677, 144l); /* goto= on <var677:ReduceAction219>*/
}
{
((void(*)(val* self))(var677->class->vft[COLOR_core__kernel__Object__init]))(var677); /* init on <var677:ReduceAction219>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var677); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var678 = NEW_nitc__parser__ReduceAction220(&type_nitc__parser__ReduceAction220);
{
((void(*)(val* self, long p0))(var678->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var678, 144l); /* goto= on <var678:ReduceAction220>*/
}
{
((void(*)(val* self))(var678->class->vft[COLOR_core__kernel__Object__init]))(var678); /* init on <var678:ReduceAction220>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var678); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var679 = NEW_nitc__parser__ReduceAction221(&type_nitc__parser__ReduceAction221);
{
((void(*)(val* self, long p0))(var679->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var679, 144l); /* goto= on <var679:ReduceAction221>*/
}
{
((void(*)(val* self))(var679->class->vft[COLOR_core__kernel__Object__init]))(var679); /* init on <var679:ReduceAction221>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var679); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var680 = NEW_nitc__parser__ReduceAction222(&type_nitc__parser__ReduceAction222);
{
((void(*)(val* self, long p0))(var680->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var680, 144l); /* goto= on <var680:ReduceAction222>*/
}
{
((void(*)(val* self))(var680->class->vft[COLOR_core__kernel__Object__init]))(var680); /* init on <var680:ReduceAction222>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var680); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var681 = NEW_nitc__parser__ReduceAction223(&type_nitc__parser__ReduceAction223);
{
((void(*)(val* self, long p0))(var681->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var681, 144l); /* goto= on <var681:ReduceAction223>*/
}
{
((void(*)(val* self))(var681->class->vft[COLOR_core__kernel__Object__init]))(var681); /* init on <var681:ReduceAction223>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var681); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var682 = NEW_nitc__parser__ReduceAction224(&type_nitc__parser__ReduceAction224);
{
((void(*)(val* self, long p0))(var682->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var682, 144l); /* goto= on <var682:ReduceAction224>*/
}
{
((void(*)(val* self))(var682->class->vft[COLOR_core__kernel__Object__init]))(var682); /* init on <var682:ReduceAction224>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var682); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var683 = NEW_nitc__parser__ReduceAction225(&type_nitc__parser__ReduceAction225);
{
((void(*)(val* self, long p0))(var683->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var683, 144l); /* goto= on <var683:ReduceAction225>*/
}
{
((void(*)(val* self))(var683->class->vft[COLOR_core__kernel__Object__init]))(var683); /* init on <var683:ReduceAction225>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var683); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var684 = NEW_nitc__parser__ReduceAction226(&type_nitc__parser__ReduceAction226);
{
((void(*)(val* self, long p0))(var684->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var684, 144l); /* goto= on <var684:ReduceAction226>*/
}
{
((void(*)(val* self))(var684->class->vft[COLOR_core__kernel__Object__init]))(var684); /* init on <var684:ReduceAction226>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var684); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var685 = NEW_nitc__parser__ReduceAction227(&type_nitc__parser__ReduceAction227);
{
((void(*)(val* self, long p0))(var685->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var685, 144l); /* goto= on <var685:ReduceAction227>*/
}
{
((void(*)(val* self))(var685->class->vft[COLOR_core__kernel__Object__init]))(var685); /* init on <var685:ReduceAction227>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var685); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var686 = NEW_nitc__parser__ReduceAction228(&type_nitc__parser__ReduceAction228);
{
((void(*)(val* self, long p0))(var686->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var686, 144l); /* goto= on <var686:ReduceAction228>*/
}
{
((void(*)(val* self))(var686->class->vft[COLOR_core__kernel__Object__init]))(var686); /* init on <var686:ReduceAction228>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var686); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var687 = NEW_nitc__parser__ReduceAction229(&type_nitc__parser__ReduceAction229);
{
((void(*)(val* self, long p0))(var687->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var687, 144l); /* goto= on <var687:ReduceAction229>*/
}
{
((void(*)(val* self))(var687->class->vft[COLOR_core__kernel__Object__init]))(var687); /* init on <var687:ReduceAction229>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var687); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var688 = NEW_nitc__parser__ReduceAction230(&type_nitc__parser__ReduceAction230);
{
((void(*)(val* self, long p0))(var688->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var688, 144l); /* goto= on <var688:ReduceAction230>*/
}
{
((void(*)(val* self))(var688->class->vft[COLOR_core__kernel__Object__init]))(var688); /* init on <var688:ReduceAction230>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var688); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var689 = NEW_nitc__parser__ReduceAction231(&type_nitc__parser__ReduceAction231);
{
((void(*)(val* self, long p0))(var689->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var689, 144l); /* goto= on <var689:ReduceAction231>*/
}
{
((void(*)(val* self))(var689->class->vft[COLOR_core__kernel__Object__init]))(var689); /* init on <var689:ReduceAction231>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var689); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var690 = NEW_nitc__parser__ReduceAction232(&type_nitc__parser__ReduceAction232);
{
((void(*)(val* self, long p0))(var690->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var690, 144l); /* goto= on <var690:ReduceAction232>*/
}
{
((void(*)(val* self))(var690->class->vft[COLOR_core__kernel__Object__init]))(var690); /* init on <var690:ReduceAction232>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var690); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var691 = NEW_nitc__parser__ReduceAction233(&type_nitc__parser__ReduceAction233);
{
((void(*)(val* self, long p0))(var691->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var691, 144l); /* goto= on <var691:ReduceAction233>*/
}
{
((void(*)(val* self))(var691->class->vft[COLOR_core__kernel__Object__init]))(var691); /* init on <var691:ReduceAction233>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var691); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var692 = NEW_nitc__parser__ReduceAction234(&type_nitc__parser__ReduceAction234);
{
((void(*)(val* self, long p0))(var692->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var692, 144l); /* goto= on <var692:ReduceAction234>*/
}
{
((void(*)(val* self))(var692->class->vft[COLOR_core__kernel__Object__init]))(var692); /* init on <var692:ReduceAction234>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var692); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var693 = NEW_nitc__parser__ReduceAction235(&type_nitc__parser__ReduceAction235);
{
((void(*)(val* self, long p0))(var693->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var693, 144l); /* goto= on <var693:ReduceAction235>*/
}
{
((void(*)(val* self))(var693->class->vft[COLOR_core__kernel__Object__init]))(var693); /* init on <var693:ReduceAction235>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var693); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var694 = NEW_nitc__parser__ReduceAction236(&type_nitc__parser__ReduceAction236);
{
((void(*)(val* self, long p0))(var694->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var694, 144l); /* goto= on <var694:ReduceAction236>*/
}
{
((void(*)(val* self))(var694->class->vft[COLOR_core__kernel__Object__init]))(var694); /* init on <var694:ReduceAction236>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var694); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var695 = NEW_nitc__parser__ReduceAction237(&type_nitc__parser__ReduceAction237);
{
((void(*)(val* self, long p0))(var695->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var695, 144l); /* goto= on <var695:ReduceAction237>*/
}
{
((void(*)(val* self))(var695->class->vft[COLOR_core__kernel__Object__init]))(var695); /* init on <var695:ReduceAction237>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var695); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var696 = NEW_nitc__parser__ReduceAction238(&type_nitc__parser__ReduceAction238);
{
((void(*)(val* self, long p0))(var696->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var696, 144l); /* goto= on <var696:ReduceAction238>*/
}
{
((void(*)(val* self))(var696->class->vft[COLOR_core__kernel__Object__init]))(var696); /* init on <var696:ReduceAction238>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var696); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var697 = NEW_nitc__parser__ReduceAction239(&type_nitc__parser__ReduceAction239);
{
((void(*)(val* self, long p0))(var697->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var697, 144l); /* goto= on <var697:ReduceAction239>*/
}
{
((void(*)(val* self))(var697->class->vft[COLOR_core__kernel__Object__init]))(var697); /* init on <var697:ReduceAction239>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var697); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var698 = NEW_nitc__parser__ReduceAction240(&type_nitc__parser__ReduceAction240);
{
((void(*)(val* self, long p0))(var698->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var698, 144l); /* goto= on <var698:ReduceAction240>*/
}
{
((void(*)(val* self))(var698->class->vft[COLOR_core__kernel__Object__init]))(var698); /* init on <var698:ReduceAction240>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var698); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var699 = NEW_nitc__parser__ReduceAction241(&type_nitc__parser__ReduceAction241);
{
((void(*)(val* self, long p0))(var699->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var699, 144l); /* goto= on <var699:ReduceAction241>*/
}
{
((void(*)(val* self))(var699->class->vft[COLOR_core__kernel__Object__init]))(var699); /* init on <var699:ReduceAction241>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var699); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var700 = NEW_nitc__parser__ReduceAction242(&type_nitc__parser__ReduceAction242);
{
((void(*)(val* self, long p0))(var700->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var700, 144l); /* goto= on <var700:ReduceAction242>*/
}
{
((void(*)(val* self))(var700->class->vft[COLOR_core__kernel__Object__init]))(var700); /* init on <var700:ReduceAction242>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var700); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var701 = NEW_nitc__parser__ReduceAction243(&type_nitc__parser__ReduceAction243);
{
((void(*)(val* self, long p0))(var701->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var701, 144l); /* goto= on <var701:ReduceAction243>*/
}
{
((void(*)(val* self))(var701->class->vft[COLOR_core__kernel__Object__init]))(var701); /* init on <var701:ReduceAction243>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var701); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var702 = NEW_nitc__parser__ReduceAction244(&type_nitc__parser__ReduceAction244);
{
((void(*)(val* self, long p0))(var702->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var702, 144l); /* goto= on <var702:ReduceAction244>*/
}
{
((void(*)(val* self))(var702->class->vft[COLOR_core__kernel__Object__init]))(var702); /* init on <var702:ReduceAction244>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var702); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var703 = NEW_nitc__parser__ReduceAction245(&type_nitc__parser__ReduceAction245);
{
((void(*)(val* self, long p0))(var703->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var703, 144l); /* goto= on <var703:ReduceAction245>*/
}
{
((void(*)(val* self))(var703->class->vft[COLOR_core__kernel__Object__init]))(var703); /* init on <var703:ReduceAction245>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var703); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var704 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var704->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var704, 145l); /* goto= on <var704:ReduceAction159>*/
}
{
((void(*)(val* self))(var704->class->vft[COLOR_core__kernel__Object__init]))(var704); /* init on <var704:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var704); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var705 = NEW_nitc__parser__ReduceAction289(&type_nitc__parser__ReduceAction289);
{
((void(*)(val* self, long p0))(var705->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var705, 145l); /* goto= on <var705:ReduceAction289>*/
}
{
((void(*)(val* self))(var705->class->vft[COLOR_core__kernel__Object__init]))(var705); /* init on <var705:ReduceAction289>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var705); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var706 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var706->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var706, 146l); /* goto= on <var706:ReduceAction159>*/
}
{
((void(*)(val* self))(var706->class->vft[COLOR_core__kernel__Object__init]))(var706); /* init on <var706:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var706); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var707 = NEW_nitc__parser__ReduceAction291(&type_nitc__parser__ReduceAction291);
{
((void(*)(val* self, long p0))(var707->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var707, 146l); /* goto= on <var707:ReduceAction291>*/
}
{
((void(*)(val* self))(var707->class->vft[COLOR_core__kernel__Object__init]))(var707); /* init on <var707:ReduceAction291>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var707); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var708 = NEW_nitc__parser__ReduceAction292(&type_nitc__parser__ReduceAction292);
{
((void(*)(val* self, long p0))(var708->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var708, 146l); /* goto= on <var708:ReduceAction292>*/
}
{
((void(*)(val* self))(var708->class->vft[COLOR_core__kernel__Object__init]))(var708); /* init on <var708:ReduceAction292>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var708); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var709 = NEW_nitc__parser__ReduceAction293(&type_nitc__parser__ReduceAction293);
{
((void(*)(val* self, long p0))(var709->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var709, 146l); /* goto= on <var709:ReduceAction293>*/
}
{
((void(*)(val* self))(var709->class->vft[COLOR_core__kernel__Object__init]))(var709); /* init on <var709:ReduceAction293>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var709); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var710 = NEW_nitc__parser__ReduceAction294(&type_nitc__parser__ReduceAction294);
{
((void(*)(val* self, long p0))(var710->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var710, 146l); /* goto= on <var710:ReduceAction294>*/
}
{
((void(*)(val* self))(var710->class->vft[COLOR_core__kernel__Object__init]))(var710); /* init on <var710:ReduceAction294>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var710); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var711 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var711->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var711, 147l); /* goto= on <var711:ReduceAction159>*/
}
{
((void(*)(val* self))(var711->class->vft[COLOR_core__kernel__Object__init]))(var711); /* init on <var711:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var711); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var712 = NEW_nitc__parser__ReduceAction296(&type_nitc__parser__ReduceAction296);
{
((void(*)(val* self, long p0))(var712->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var712, 147l); /* goto= on <var712:ReduceAction296>*/
}
{
((void(*)(val* self))(var712->class->vft[COLOR_core__kernel__Object__init]))(var712); /* init on <var712:ReduceAction296>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var712); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var713 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var713->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var713, 148l); /* goto= on <var713:ReduceAction159>*/
}
{
((void(*)(val* self))(var713->class->vft[COLOR_core__kernel__Object__init]))(var713); /* init on <var713:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var713); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var714 = NEW_nitc__parser__ReduceAction298(&type_nitc__parser__ReduceAction298);
{
((void(*)(val* self, long p0))(var714->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var714, 148l); /* goto= on <var714:ReduceAction298>*/
}
{
((void(*)(val* self))(var714->class->vft[COLOR_core__kernel__Object__init]))(var714); /* init on <var714:ReduceAction298>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var714); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var715 = NEW_nitc__parser__ReduceAction299(&type_nitc__parser__ReduceAction299);
{
((void(*)(val* self, long p0))(var715->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var715, 148l); /* goto= on <var715:ReduceAction299>*/
}
{
((void(*)(val* self))(var715->class->vft[COLOR_core__kernel__Object__init]))(var715); /* init on <var715:ReduceAction299>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var715); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var716 = NEW_nitc__parser__ReduceAction300(&type_nitc__parser__ReduceAction300);
{
((void(*)(val* self, long p0))(var716->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var716, 148l); /* goto= on <var716:ReduceAction300>*/
}
{
((void(*)(val* self))(var716->class->vft[COLOR_core__kernel__Object__init]))(var716); /* init on <var716:ReduceAction300>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var716); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var717 = NEW_nitc__parser__ReduceAction301(&type_nitc__parser__ReduceAction301);
{
((void(*)(val* self, long p0))(var717->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var717, 148l); /* goto= on <var717:ReduceAction301>*/
}
{
((void(*)(val* self))(var717->class->vft[COLOR_core__kernel__Object__init]))(var717); /* init on <var717:ReduceAction301>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var717); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var718 = NEW_nitc__parser__ReduceAction302(&type_nitc__parser__ReduceAction302);
{
((void(*)(val* self, long p0))(var718->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var718, 148l); /* goto= on <var718:ReduceAction302>*/
}
{
((void(*)(val* self))(var718->class->vft[COLOR_core__kernel__Object__init]))(var718); /* init on <var718:ReduceAction302>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var718); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var719 = NEW_nitc__parser__ReduceAction303(&type_nitc__parser__ReduceAction303);
{
((void(*)(val* self, long p0))(var719->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var719, 148l); /* goto= on <var719:ReduceAction303>*/
}
{
((void(*)(val* self))(var719->class->vft[COLOR_core__kernel__Object__init]))(var719); /* init on <var719:ReduceAction303>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var719); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var720 = NEW_nitc__parser__ReduceAction304(&type_nitc__parser__ReduceAction304);
{
((void(*)(val* self, long p0))(var720->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var720, 148l); /* goto= on <var720:ReduceAction304>*/
}
{
((void(*)(val* self))(var720->class->vft[COLOR_core__kernel__Object__init]))(var720); /* init on <var720:ReduceAction304>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var720); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var721 = NEW_nitc__parser__ReduceAction305(&type_nitc__parser__ReduceAction305);
{
((void(*)(val* self, long p0))(var721->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var721, 148l); /* goto= on <var721:ReduceAction305>*/
}
{
((void(*)(val* self))(var721->class->vft[COLOR_core__kernel__Object__init]))(var721); /* init on <var721:ReduceAction305>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var721); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var722 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var722->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var722, 149l); /* goto= on <var722:ReduceAction159>*/
}
{
((void(*)(val* self))(var722->class->vft[COLOR_core__kernel__Object__init]))(var722); /* init on <var722:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var722); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var723 = NEW_nitc__parser__ReduceAction307(&type_nitc__parser__ReduceAction307);
{
((void(*)(val* self, long p0))(var723->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var723, 149l); /* goto= on <var723:ReduceAction307>*/
}
{
((void(*)(val* self))(var723->class->vft[COLOR_core__kernel__Object__init]))(var723); /* init on <var723:ReduceAction307>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var723); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var724 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var724->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var724, 150l); /* goto= on <var724:ReduceAction159>*/
}
{
((void(*)(val* self))(var724->class->vft[COLOR_core__kernel__Object__init]))(var724); /* init on <var724:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var724); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var725 = NEW_nitc__parser__ReduceAction309(&type_nitc__parser__ReduceAction309);
{
((void(*)(val* self, long p0))(var725->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var725, 150l); /* goto= on <var725:ReduceAction309>*/
}
{
((void(*)(val* self))(var725->class->vft[COLOR_core__kernel__Object__init]))(var725); /* init on <var725:ReduceAction309>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var725); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var726 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var726->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var726, 151l); /* goto= on <var726:ReduceAction159>*/
}
{
((void(*)(val* self))(var726->class->vft[COLOR_core__kernel__Object__init]))(var726); /* init on <var726:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var726); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var727 = NEW_nitc__parser__ReduceAction311(&type_nitc__parser__ReduceAction311);
{
((void(*)(val* self, long p0))(var727->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var727, 151l); /* goto= on <var727:ReduceAction311>*/
}
{
((void(*)(val* self))(var727->class->vft[COLOR_core__kernel__Object__init]))(var727); /* init on <var727:ReduceAction311>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var727); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var728 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var728->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var728, 152l); /* goto= on <var728:ReduceAction159>*/
}
{
((void(*)(val* self))(var728->class->vft[COLOR_core__kernel__Object__init]))(var728); /* init on <var728:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var728); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var729 = NEW_nitc__parser__ReduceAction313(&type_nitc__parser__ReduceAction313);
{
((void(*)(val* self, long p0))(var729->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var729, 152l); /* goto= on <var729:ReduceAction313>*/
}
{
((void(*)(val* self))(var729->class->vft[COLOR_core__kernel__Object__init]))(var729); /* init on <var729:ReduceAction313>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var729); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var730 = NEW_nitc__parser__ReduceAction314(&type_nitc__parser__ReduceAction314);
{
((void(*)(val* self, long p0))(var730->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var730, 152l); /* goto= on <var730:ReduceAction314>*/
}
{
((void(*)(val* self))(var730->class->vft[COLOR_core__kernel__Object__init]))(var730); /* init on <var730:ReduceAction314>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var730); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var731 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var731->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var731, 153l); /* goto= on <var731:ReduceAction159>*/
}
{
((void(*)(val* self))(var731->class->vft[COLOR_core__kernel__Object__init]))(var731); /* init on <var731:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var731); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var732 = NEW_nitc__parser__ReduceAction316(&type_nitc__parser__ReduceAction316);
{
((void(*)(val* self, long p0))(var732->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var732, 153l); /* goto= on <var732:ReduceAction316>*/
}
{
((void(*)(val* self))(var732->class->vft[COLOR_core__kernel__Object__init]))(var732); /* init on <var732:ReduceAction316>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var732); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var733 = NEW_nitc__parser__ReduceAction317(&type_nitc__parser__ReduceAction317);
{
((void(*)(val* self, long p0))(var733->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var733, 153l); /* goto= on <var733:ReduceAction317>*/
}
{
((void(*)(val* self))(var733->class->vft[COLOR_core__kernel__Object__init]))(var733); /* init on <var733:ReduceAction317>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var733); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var734 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var734->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var734, 154l); /* goto= on <var734:ReduceAction159>*/
}
{
((void(*)(val* self))(var734->class->vft[COLOR_core__kernel__Object__init]))(var734); /* init on <var734:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var734); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var735 = NEW_nitc__parser__ReduceAction319(&type_nitc__parser__ReduceAction319);
{
((void(*)(val* self, long p0))(var735->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var735, 154l); /* goto= on <var735:ReduceAction319>*/
}
{
((void(*)(val* self))(var735->class->vft[COLOR_core__kernel__Object__init]))(var735); /* init on <var735:ReduceAction319>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var735); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var736 = NEW_nitc__parser__ReduceAction320(&type_nitc__parser__ReduceAction320);
{
((void(*)(val* self, long p0))(var736->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var736, 154l); /* goto= on <var736:ReduceAction320>*/
}
{
((void(*)(val* self))(var736->class->vft[COLOR_core__kernel__Object__init]))(var736); /* init on <var736:ReduceAction320>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var736); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var737 = NEW_nitc__parser__ReduceAction321(&type_nitc__parser__ReduceAction321);
{
((void(*)(val* self, long p0))(var737->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var737, 154l); /* goto= on <var737:ReduceAction321>*/
}
{
((void(*)(val* self))(var737->class->vft[COLOR_core__kernel__Object__init]))(var737); /* init on <var737:ReduceAction321>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var737); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var738 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var738->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var738, 155l); /* goto= on <var738:ReduceAction159>*/
}
{
((void(*)(val* self))(var738->class->vft[COLOR_core__kernel__Object__init]))(var738); /* init on <var738:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var738); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var739 = NEW_nitc__parser__ReduceAction323(&type_nitc__parser__ReduceAction323);
{
((void(*)(val* self, long p0))(var739->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var739, 155l); /* goto= on <var739:ReduceAction323>*/
}
{
((void(*)(val* self))(var739->class->vft[COLOR_core__kernel__Object__init]))(var739); /* init on <var739:ReduceAction323>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var739); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var740 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var740->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var740, 156l); /* goto= on <var740:ReduceAction159>*/
}
{
((void(*)(val* self))(var740->class->vft[COLOR_core__kernel__Object__init]))(var740); /* init on <var740:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var740); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var741 = NEW_nitc__parser__ReduceAction325(&type_nitc__parser__ReduceAction325);
{
((void(*)(val* self, long p0))(var741->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var741, 156l); /* goto= on <var741:ReduceAction325>*/
}
{
((void(*)(val* self))(var741->class->vft[COLOR_core__kernel__Object__init]))(var741); /* init on <var741:ReduceAction325>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var741); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var742 = NEW_nitc__parser__ReduceAction326(&type_nitc__parser__ReduceAction326);
{
((void(*)(val* self, long p0))(var742->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var742, 156l); /* goto= on <var742:ReduceAction326>*/
}
{
((void(*)(val* self))(var742->class->vft[COLOR_core__kernel__Object__init]))(var742); /* init on <var742:ReduceAction326>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var742); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var743 = NEW_nitc__parser__ReduceAction327(&type_nitc__parser__ReduceAction327);
{
((void(*)(val* self, long p0))(var743->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var743, 156l); /* goto= on <var743:ReduceAction327>*/
}
{
((void(*)(val* self))(var743->class->vft[COLOR_core__kernel__Object__init]))(var743); /* init on <var743:ReduceAction327>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var743); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var744 = NEW_nitc__parser__ReduceAction328(&type_nitc__parser__ReduceAction328);
{
((void(*)(val* self, long p0))(var744->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var744, 156l); /* goto= on <var744:ReduceAction328>*/
}
{
((void(*)(val* self))(var744->class->vft[COLOR_core__kernel__Object__init]))(var744); /* init on <var744:ReduceAction328>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var744); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var745 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var745->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var745, 157l); /* goto= on <var745:ReduceAction159>*/
}
{
((void(*)(val* self))(var745->class->vft[COLOR_core__kernel__Object__init]))(var745); /* init on <var745:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var745); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var746 = NEW_nitc__parser__ReduceAction330(&type_nitc__parser__ReduceAction330);
{
((void(*)(val* self, long p0))(var746->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var746, 157l); /* goto= on <var746:ReduceAction330>*/
}
{
((void(*)(val* self))(var746->class->vft[COLOR_core__kernel__Object__init]))(var746); /* init on <var746:ReduceAction330>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var746); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var747 = NEW_nitc__parser__ReduceAction331(&type_nitc__parser__ReduceAction331);
{
((void(*)(val* self, long p0))(var747->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var747, 157l); /* goto= on <var747:ReduceAction331>*/
}
{
((void(*)(val* self))(var747->class->vft[COLOR_core__kernel__Object__init]))(var747); /* init on <var747:ReduceAction331>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var747); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var748 = NEW_nitc__parser__ReduceAction332(&type_nitc__parser__ReduceAction332);
{
((void(*)(val* self, long p0))(var748->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var748, 157l); /* goto= on <var748:ReduceAction332>*/
}
{
((void(*)(val* self))(var748->class->vft[COLOR_core__kernel__Object__init]))(var748); /* init on <var748:ReduceAction332>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var748); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var749 = NEW_nitc__parser__ReduceAction333(&type_nitc__parser__ReduceAction333);
{
((void(*)(val* self, long p0))(var749->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var749, 157l); /* goto= on <var749:ReduceAction333>*/
}
{
((void(*)(val* self))(var749->class->vft[COLOR_core__kernel__Object__init]))(var749); /* init on <var749:ReduceAction333>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var749); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var750 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var750->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var750, 158l); /* goto= on <var750:ReduceAction159>*/
}
{
((void(*)(val* self))(var750->class->vft[COLOR_core__kernel__Object__init]))(var750); /* init on <var750:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var750); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var751 = NEW_nitc__parser__ReduceAction335(&type_nitc__parser__ReduceAction335);
{
((void(*)(val* self, long p0))(var751->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var751, 158l); /* goto= on <var751:ReduceAction335>*/
}
{
((void(*)(val* self))(var751->class->vft[COLOR_core__kernel__Object__init]))(var751); /* init on <var751:ReduceAction335>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var751); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var752 = NEW_nitc__parser__ReduceAction336(&type_nitc__parser__ReduceAction336);
{
((void(*)(val* self, long p0))(var752->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var752, 158l); /* goto= on <var752:ReduceAction336>*/
}
{
((void(*)(val* self))(var752->class->vft[COLOR_core__kernel__Object__init]))(var752); /* init on <var752:ReduceAction336>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var752); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var753 = NEW_nitc__parser__ReduceAction184(&type_nitc__parser__ReduceAction184);
{
((void(*)(val* self, long p0))(var753->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var753, 158l); /* goto= on <var753:ReduceAction184>*/
}
{
((void(*)(val* self))(var753->class->vft[COLOR_core__kernel__Object__init]))(var753); /* init on <var753:ReduceAction184>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var753); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var754 = NEW_nitc__parser__ReduceAction338(&type_nitc__parser__ReduceAction338);
{
((void(*)(val* self, long p0))(var754->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var754, 158l); /* goto= on <var754:ReduceAction338>*/
}
{
((void(*)(val* self))(var754->class->vft[COLOR_core__kernel__Object__init]))(var754); /* init on <var754:ReduceAction338>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var754); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var755 = NEW_nitc__parser__ReduceAction185(&type_nitc__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var755->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var755, 158l); /* goto= on <var755:ReduceAction185>*/
}
{
((void(*)(val* self))(var755->class->vft[COLOR_core__kernel__Object__init]))(var755); /* init on <var755:ReduceAction185>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var755); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var756 = NEW_nitc__parser__ReduceAction340(&type_nitc__parser__ReduceAction340);
{
((void(*)(val* self, long p0))(var756->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var756, 158l); /* goto= on <var756:ReduceAction340>*/
}
{
((void(*)(val* self))(var756->class->vft[COLOR_core__kernel__Object__init]))(var756); /* init on <var756:ReduceAction340>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var756); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var757 = NEW_nitc__parser__ReduceAction186(&type_nitc__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var757->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var757, 158l); /* goto= on <var757:ReduceAction186>*/
}
{
((void(*)(val* self))(var757->class->vft[COLOR_core__kernel__Object__init]))(var757); /* init on <var757:ReduceAction186>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var757); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var758 = NEW_nitc__parser__ReduceAction342(&type_nitc__parser__ReduceAction342);
{
((void(*)(val* self, long p0))(var758->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var758, 158l); /* goto= on <var758:ReduceAction342>*/
}
{
((void(*)(val* self))(var758->class->vft[COLOR_core__kernel__Object__init]))(var758); /* init on <var758:ReduceAction342>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var758); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var759 = NEW_nitc__parser__ReduceAction187(&type_nitc__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var759->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var759, 158l); /* goto= on <var759:ReduceAction187>*/
}
{
((void(*)(val* self))(var759->class->vft[COLOR_core__kernel__Object__init]))(var759); /* init on <var759:ReduceAction187>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var759); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var760 = NEW_nitc__parser__ReduceAction344(&type_nitc__parser__ReduceAction344);
{
((void(*)(val* self, long p0))(var760->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var760, 158l); /* goto= on <var760:ReduceAction344>*/
}
{
((void(*)(val* self))(var760->class->vft[COLOR_core__kernel__Object__init]))(var760); /* init on <var760:ReduceAction344>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var760); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var761 = NEW_nitc__parser__ReduceAction188(&type_nitc__parser__ReduceAction188);
{
((void(*)(val* self, long p0))(var761->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var761, 158l); /* goto= on <var761:ReduceAction188>*/
}
{
((void(*)(val* self))(var761->class->vft[COLOR_core__kernel__Object__init]))(var761); /* init on <var761:ReduceAction188>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var761); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var762 = NEW_nitc__parser__ReduceAction346(&type_nitc__parser__ReduceAction346);
{
((void(*)(val* self, long p0))(var762->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var762, 158l); /* goto= on <var762:ReduceAction346>*/
}
{
((void(*)(val* self))(var762->class->vft[COLOR_core__kernel__Object__init]))(var762); /* init on <var762:ReduceAction346>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var762); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var763 = NEW_nitc__parser__ReduceAction189(&type_nitc__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var763->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var763, 158l); /* goto= on <var763:ReduceAction189>*/
}
{
((void(*)(val* self))(var763->class->vft[COLOR_core__kernel__Object__init]))(var763); /* init on <var763:ReduceAction189>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var763); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var764 = NEW_nitc__parser__ReduceAction348(&type_nitc__parser__ReduceAction348);
{
((void(*)(val* self, long p0))(var764->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var764, 158l); /* goto= on <var764:ReduceAction348>*/
}
{
((void(*)(val* self))(var764->class->vft[COLOR_core__kernel__Object__init]))(var764); /* init on <var764:ReduceAction348>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var764); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var765 = NEW_nitc__parser__ReduceAction190(&type_nitc__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var765->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var765, 158l); /* goto= on <var765:ReduceAction190>*/
}
{
((void(*)(val* self))(var765->class->vft[COLOR_core__kernel__Object__init]))(var765); /* init on <var765:ReduceAction190>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var765); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var766 = NEW_nitc__parser__ReduceAction350(&type_nitc__parser__ReduceAction350);
{
((void(*)(val* self, long p0))(var766->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var766, 158l); /* goto= on <var766:ReduceAction350>*/
}
{
((void(*)(val* self))(var766->class->vft[COLOR_core__kernel__Object__init]))(var766); /* init on <var766:ReduceAction350>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var766); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var767 = NEW_nitc__parser__ReduceAction191(&type_nitc__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var767->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var767, 158l); /* goto= on <var767:ReduceAction191>*/
}
{
((void(*)(val* self))(var767->class->vft[COLOR_core__kernel__Object__init]))(var767); /* init on <var767:ReduceAction191>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var767); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var768 = NEW_nitc__parser__ReduceAction352(&type_nitc__parser__ReduceAction352);
{
((void(*)(val* self, long p0))(var768->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var768, 158l); /* goto= on <var768:ReduceAction352>*/
}
{
((void(*)(val* self))(var768->class->vft[COLOR_core__kernel__Object__init]))(var768); /* init on <var768:ReduceAction352>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var768); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var769 = NEW_nitc__parser__ReduceAction192(&type_nitc__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var769->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var769, 158l); /* goto= on <var769:ReduceAction192>*/
}
{
((void(*)(val* self))(var769->class->vft[COLOR_core__kernel__Object__init]))(var769); /* init on <var769:ReduceAction192>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var769); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var770 = NEW_nitc__parser__ReduceAction354(&type_nitc__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var770->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var770, 158l); /* goto= on <var770:ReduceAction354>*/
}
{
((void(*)(val* self))(var770->class->vft[COLOR_core__kernel__Object__init]))(var770); /* init on <var770:ReduceAction354>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var770); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var771 = NEW_nitc__parser__ReduceAction193(&type_nitc__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var771->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var771, 158l); /* goto= on <var771:ReduceAction193>*/
}
{
((void(*)(val* self))(var771->class->vft[COLOR_core__kernel__Object__init]))(var771); /* init on <var771:ReduceAction193>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var771); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var772 = NEW_nitc__parser__ReduceAction356(&type_nitc__parser__ReduceAction356);
{
((void(*)(val* self, long p0))(var772->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var772, 158l); /* goto= on <var772:ReduceAction356>*/
}
{
((void(*)(val* self))(var772->class->vft[COLOR_core__kernel__Object__init]))(var772); /* init on <var772:ReduceAction356>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var772); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var773 = NEW_nitc__parser__ReduceAction194(&type_nitc__parser__ReduceAction194);
{
((void(*)(val* self, long p0))(var773->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var773, 158l); /* goto= on <var773:ReduceAction194>*/
}
{
((void(*)(val* self))(var773->class->vft[COLOR_core__kernel__Object__init]))(var773); /* init on <var773:ReduceAction194>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var773); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var774 = NEW_nitc__parser__ReduceAction358(&type_nitc__parser__ReduceAction358);
{
((void(*)(val* self, long p0))(var774->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var774, 158l); /* goto= on <var774:ReduceAction358>*/
}
{
((void(*)(val* self))(var774->class->vft[COLOR_core__kernel__Object__init]))(var774); /* init on <var774:ReduceAction358>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var774); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var775 = NEW_nitc__parser__ReduceAction359(&type_nitc__parser__ReduceAction359);
{
((void(*)(val* self, long p0))(var775->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var775, 158l); /* goto= on <var775:ReduceAction359>*/
}
{
((void(*)(val* self))(var775->class->vft[COLOR_core__kernel__Object__init]))(var775); /* init on <var775:ReduceAction359>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var775); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var776 = NEW_nitc__parser__ReduceAction360(&type_nitc__parser__ReduceAction360);
{
((void(*)(val* self, long p0))(var776->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var776, 158l); /* goto= on <var776:ReduceAction360>*/
}
{
((void(*)(val* self))(var776->class->vft[COLOR_core__kernel__Object__init]))(var776); /* init on <var776:ReduceAction360>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var776); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var777 = NEW_nitc__parser__ReduceAction361(&type_nitc__parser__ReduceAction361);
{
((void(*)(val* self, long p0))(var777->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var777, 158l); /* goto= on <var777:ReduceAction361>*/
}
{
((void(*)(val* self))(var777->class->vft[COLOR_core__kernel__Object__init]))(var777); /* init on <var777:ReduceAction361>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var777); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var778 = NEW_nitc__parser__ReduceAction362(&type_nitc__parser__ReduceAction362);
{
((void(*)(val* self, long p0))(var778->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var778, 158l); /* goto= on <var778:ReduceAction362>*/
}
{
((void(*)(val* self))(var778->class->vft[COLOR_core__kernel__Object__init]))(var778); /* init on <var778:ReduceAction362>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var778); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var779 = NEW_nitc__parser__ReduceAction363(&type_nitc__parser__ReduceAction363);
{
((void(*)(val* self, long p0))(var779->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var779, 158l); /* goto= on <var779:ReduceAction363>*/
}
{
((void(*)(val* self))(var779->class->vft[COLOR_core__kernel__Object__init]))(var779); /* init on <var779:ReduceAction363>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var779); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var780 = NEW_nitc__parser__ReduceAction364(&type_nitc__parser__ReduceAction364);
{
((void(*)(val* self, long p0))(var780->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var780, 158l); /* goto= on <var780:ReduceAction364>*/
}
{
((void(*)(val* self))(var780->class->vft[COLOR_core__kernel__Object__init]))(var780); /* init on <var780:ReduceAction364>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var780); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var781 = NEW_nitc__parser__ReduceAction365(&type_nitc__parser__ReduceAction365);
{
((void(*)(val* self, long p0))(var781->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var781, 158l); /* goto= on <var781:ReduceAction365>*/
}
{
((void(*)(val* self))(var781->class->vft[COLOR_core__kernel__Object__init]))(var781); /* init on <var781:ReduceAction365>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var781); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var782 = NEW_nitc__parser__ReduceAction366(&type_nitc__parser__ReduceAction366);
{
((void(*)(val* self, long p0))(var782->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var782, 158l); /* goto= on <var782:ReduceAction366>*/
}
{
((void(*)(val* self))(var782->class->vft[COLOR_core__kernel__Object__init]))(var782); /* init on <var782:ReduceAction366>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var782); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var783 = NEW_nitc__parser__ReduceAction367(&type_nitc__parser__ReduceAction367);
{
((void(*)(val* self, long p0))(var783->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var783, 158l); /* goto= on <var783:ReduceAction367>*/
}
{
((void(*)(val* self))(var783->class->vft[COLOR_core__kernel__Object__init]))(var783); /* init on <var783:ReduceAction367>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var783); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var784 = NEW_nitc__parser__ReduceAction368(&type_nitc__parser__ReduceAction368);
{
((void(*)(val* self, long p0))(var784->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var784, 158l); /* goto= on <var784:ReduceAction368>*/
}
{
((void(*)(val* self))(var784->class->vft[COLOR_core__kernel__Object__init]))(var784); /* init on <var784:ReduceAction368>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var784); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var785 = NEW_nitc__parser__ReduceAction369(&type_nitc__parser__ReduceAction369);
{
((void(*)(val* self, long p0))(var785->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var785, 158l); /* goto= on <var785:ReduceAction369>*/
}
{
((void(*)(val* self))(var785->class->vft[COLOR_core__kernel__Object__init]))(var785); /* init on <var785:ReduceAction369>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var785); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var786 = NEW_nitc__parser__ReduceAction370(&type_nitc__parser__ReduceAction370);
{
((void(*)(val* self, long p0))(var786->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var786, 158l); /* goto= on <var786:ReduceAction370>*/
}
{
((void(*)(val* self))(var786->class->vft[COLOR_core__kernel__Object__init]))(var786); /* init on <var786:ReduceAction370>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var786); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var787 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var787->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var787, 159l); /* goto= on <var787:ReduceAction159>*/
}
{
((void(*)(val* self))(var787->class->vft[COLOR_core__kernel__Object__init]))(var787); /* init on <var787:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var787); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var788 = NEW_nitc__parser__ReduceAction372(&type_nitc__parser__ReduceAction372);
{
((void(*)(val* self, long p0))(var788->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var788, 159l); /* goto= on <var788:ReduceAction372>*/
}
{
((void(*)(val* self))(var788->class->vft[COLOR_core__kernel__Object__init]))(var788); /* init on <var788:ReduceAction372>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var788); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var789 = NEW_nitc__parser__ReduceAction373(&type_nitc__parser__ReduceAction373);
{
((void(*)(val* self, long p0))(var789->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var789, 159l); /* goto= on <var789:ReduceAction373>*/
}
{
((void(*)(val* self))(var789->class->vft[COLOR_core__kernel__Object__init]))(var789); /* init on <var789:ReduceAction373>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var789); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var790 = NEW_nitc__parser__ReduceAction374(&type_nitc__parser__ReduceAction374);
{
((void(*)(val* self, long p0))(var790->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var790, 160l); /* goto= on <var790:ReduceAction374>*/
}
{
((void(*)(val* self))(var790->class->vft[COLOR_core__kernel__Object__init]))(var790); /* init on <var790:ReduceAction374>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var790); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var791 = NEW_nitc__parser__ReduceAction375(&type_nitc__parser__ReduceAction375);
{
((void(*)(val* self, long p0))(var791->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var791, 160l); /* goto= on <var791:ReduceAction375>*/
}
{
((void(*)(val* self))(var791->class->vft[COLOR_core__kernel__Object__init]))(var791); /* init on <var791:ReduceAction375>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var791); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var792 = NEW_nitc__parser__ReduceAction376(&type_nitc__parser__ReduceAction376);
{
((void(*)(val* self, long p0))(var792->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var792, 160l); /* goto= on <var792:ReduceAction376>*/
}
{
((void(*)(val* self))(var792->class->vft[COLOR_core__kernel__Object__init]))(var792); /* init on <var792:ReduceAction376>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var792); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var793 = NEW_nitc__parser__ReduceAction377(&type_nitc__parser__ReduceAction377);
{
((void(*)(val* self, long p0))(var793->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var793, 160l); /* goto= on <var793:ReduceAction377>*/
}
{
((void(*)(val* self))(var793->class->vft[COLOR_core__kernel__Object__init]))(var793); /* init on <var793:ReduceAction377>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var793); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var794 = NEW_nitc__parser__ReduceAction378(&type_nitc__parser__ReduceAction378);
{
((void(*)(val* self, long p0))(var794->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var794, 160l); /* goto= on <var794:ReduceAction378>*/
}
{
((void(*)(val* self))(var794->class->vft[COLOR_core__kernel__Object__init]))(var794); /* init on <var794:ReduceAction378>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var794); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var795 = NEW_nitc__parser__ReduceAction379(&type_nitc__parser__ReduceAction379);
{
((void(*)(val* self, long p0))(var795->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var795, 160l); /* goto= on <var795:ReduceAction379>*/
}
{
((void(*)(val* self))(var795->class->vft[COLOR_core__kernel__Object__init]))(var795); /* init on <var795:ReduceAction379>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var795); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var796 = NEW_nitc__parser__ReduceAction380(&type_nitc__parser__ReduceAction380);
{
((void(*)(val* self, long p0))(var796->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var796, 160l); /* goto= on <var796:ReduceAction380>*/
}
{
((void(*)(val* self))(var796->class->vft[COLOR_core__kernel__Object__init]))(var796); /* init on <var796:ReduceAction380>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var796); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var797 = NEW_nitc__parser__ReduceAction381(&type_nitc__parser__ReduceAction381);
{
((void(*)(val* self, long p0))(var797->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var797, 160l); /* goto= on <var797:ReduceAction381>*/
}
{
((void(*)(val* self))(var797->class->vft[COLOR_core__kernel__Object__init]))(var797); /* init on <var797:ReduceAction381>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var797); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var798 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var798->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var798, 160l); /* goto= on <var798:ReduceAction159>*/
}
{
((void(*)(val* self))(var798->class->vft[COLOR_core__kernel__Object__init]))(var798); /* init on <var798:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var798); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var799 = NEW_nitc__parser__ReduceAction406(&type_nitc__parser__ReduceAction406);
{
((void(*)(val* self, long p0))(var799->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var799, 161l); /* goto= on <var799:ReduceAction406>*/
}
{
((void(*)(val* self))(var799->class->vft[COLOR_core__kernel__Object__init]))(var799); /* init on <var799:ReduceAction406>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var799); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var800 = NEW_nitc__parser__ReduceAction407(&type_nitc__parser__ReduceAction407);
{
((void(*)(val* self, long p0))(var800->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var800, 161l); /* goto= on <var800:ReduceAction407>*/
}
{
((void(*)(val* self))(var800->class->vft[COLOR_core__kernel__Object__init]))(var800); /* init on <var800:ReduceAction407>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var800); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var801 = NEW_nitc__parser__ReduceAction408(&type_nitc__parser__ReduceAction408);
{
((void(*)(val* self, long p0))(var801->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var801, 162l); /* goto= on <var801:ReduceAction408>*/
}
{
((void(*)(val* self))(var801->class->vft[COLOR_core__kernel__Object__init]))(var801); /* init on <var801:ReduceAction408>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var801); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var802 = NEW_nitc__parser__ReduceAction22(&type_nitc__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var802->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var802, 162l); /* goto= on <var802:ReduceAction22>*/
}
{
((void(*)(val* self))(var802->class->vft[COLOR_core__kernel__Object__init]))(var802); /* init on <var802:ReduceAction22>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var802); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var803 = NEW_nitc__parser__ReduceAction410(&type_nitc__parser__ReduceAction410);
{
((void(*)(val* self, long p0))(var803->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var803, 163l); /* goto= on <var803:ReduceAction410>*/
}
{
((void(*)(val* self))(var803->class->vft[COLOR_core__kernel__Object__init]))(var803); /* init on <var803:ReduceAction410>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var803); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var804 = NEW_nitc__parser__ReduceAction410(&type_nitc__parser__ReduceAction410);
{
((void(*)(val* self, long p0))(var804->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var804, 164l); /* goto= on <var804:ReduceAction410>*/
}
{
((void(*)(val* self))(var804->class->vft[COLOR_core__kernel__Object__init]))(var804); /* init on <var804:ReduceAction410>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var804); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var805 = NEW_nitc__parser__ReduceAction391(&type_nitc__parser__ReduceAction391);
{
((void(*)(val* self, long p0))(var805->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var805, 165l); /* goto= on <var805:ReduceAction391>*/
}
{
((void(*)(val* self))(var805->class->vft[COLOR_core__kernel__Object__init]))(var805); /* init on <var805:ReduceAction391>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var805); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var806 = NEW_nitc__parser__ReduceAction392(&type_nitc__parser__ReduceAction392);
{
((void(*)(val* self, long p0))(var806->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var806, 165l); /* goto= on <var806:ReduceAction392>*/
}
{
((void(*)(val* self))(var806->class->vft[COLOR_core__kernel__Object__init]))(var806); /* init on <var806:ReduceAction392>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var806); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var807 = NEW_nitc__parser__ReduceAction432(&type_nitc__parser__ReduceAction432);
{
((void(*)(val* self, long p0))(var807->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var807, 166l); /* goto= on <var807:ReduceAction432>*/
}
{
((void(*)(val* self))(var807->class->vft[COLOR_core__kernel__Object__init]))(var807); /* init on <var807:ReduceAction432>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var807); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var808 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var808->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var808, 166l); /* goto= on <var808:ReduceAction159>*/
}
{
((void(*)(val* self))(var808->class->vft[COLOR_core__kernel__Object__init]))(var808); /* init on <var808:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var808); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var809 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var809->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var809, 166l); /* goto= on <var809:ReduceAction159>*/
}
{
((void(*)(val* self))(var809->class->vft[COLOR_core__kernel__Object__init]))(var809); /* init on <var809:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var809); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var810 = NEW_nitc__parser__ReduceAction435(&type_nitc__parser__ReduceAction435);
{
((void(*)(val* self, long p0))(var810->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var810, 166l); /* goto= on <var810:ReduceAction435>*/
}
{
((void(*)(val* self))(var810->class->vft[COLOR_core__kernel__Object__init]))(var810); /* init on <var810:ReduceAction435>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var810); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var811 = NEW_nitc__parser__ReduceAction436(&type_nitc__parser__ReduceAction436);
{
((void(*)(val* self, long p0))(var811->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var811, 166l); /* goto= on <var811:ReduceAction436>*/
}
{
((void(*)(val* self))(var811->class->vft[COLOR_core__kernel__Object__init]))(var811); /* init on <var811:ReduceAction436>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var811); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var812 = NEW_nitc__parser__ReduceAction146(&type_nitc__parser__ReduceAction146);
{
((void(*)(val* self, long p0))(var812->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var812, 167l); /* goto= on <var812:ReduceAction146>*/
}
{
((void(*)(val* self))(var812->class->vft[COLOR_core__kernel__Object__init]))(var812); /* init on <var812:ReduceAction146>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var812); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var813 = NEW_nitc__parser__ReduceAction147(&type_nitc__parser__ReduceAction147);
{
((void(*)(val* self, long p0))(var813->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var813, 167l); /* goto= on <var813:ReduceAction147>*/
}
{
((void(*)(val* self))(var813->class->vft[COLOR_core__kernel__Object__init]))(var813); /* init on <var813:ReduceAction147>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var813); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var814 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var814->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var814, 168l); /* goto= on <var814:ReduceAction159>*/
}
{
((void(*)(val* self))(var814->class->vft[COLOR_core__kernel__Object__init]))(var814); /* init on <var814:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var814); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var815 = NEW_nitc__parser__ReduceAction289(&type_nitc__parser__ReduceAction289);
{
((void(*)(val* self, long p0))(var815->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var815, 168l); /* goto= on <var815:ReduceAction289>*/
}
{
((void(*)(val* self))(var815->class->vft[COLOR_core__kernel__Object__init]))(var815); /* init on <var815:ReduceAction289>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var815); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var816 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var816->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var816, 169l); /* goto= on <var816:ReduceAction159>*/
}
{
((void(*)(val* self))(var816->class->vft[COLOR_core__kernel__Object__init]))(var816); /* init on <var816:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var816); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var817 = NEW_nitc__parser__ReduceAction291(&type_nitc__parser__ReduceAction291);
{
((void(*)(val* self, long p0))(var817->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var817, 169l); /* goto= on <var817:ReduceAction291>*/
}
{
((void(*)(val* self))(var817->class->vft[COLOR_core__kernel__Object__init]))(var817); /* init on <var817:ReduceAction291>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var817); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var818 = NEW_nitc__parser__ReduceAction292(&type_nitc__parser__ReduceAction292);
{
((void(*)(val* self, long p0))(var818->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var818, 169l); /* goto= on <var818:ReduceAction292>*/
}
{
((void(*)(val* self))(var818->class->vft[COLOR_core__kernel__Object__init]))(var818); /* init on <var818:ReduceAction292>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var818); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var819 = NEW_nitc__parser__ReduceAction293(&type_nitc__parser__ReduceAction293);
{
((void(*)(val* self, long p0))(var819->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var819, 169l); /* goto= on <var819:ReduceAction293>*/
}
{
((void(*)(val* self))(var819->class->vft[COLOR_core__kernel__Object__init]))(var819); /* init on <var819:ReduceAction293>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var819); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var820 = NEW_nitc__parser__ReduceAction294(&type_nitc__parser__ReduceAction294);
{
((void(*)(val* self, long p0))(var820->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var820, 169l); /* goto= on <var820:ReduceAction294>*/
}
{
((void(*)(val* self))(var820->class->vft[COLOR_core__kernel__Object__init]))(var820); /* init on <var820:ReduceAction294>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var820); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var821 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var821->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var821, 170l); /* goto= on <var821:ReduceAction159>*/
}
{
((void(*)(val* self))(var821->class->vft[COLOR_core__kernel__Object__init]))(var821); /* init on <var821:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var821); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var822 = NEW_nitc__parser__ReduceAction296(&type_nitc__parser__ReduceAction296);
{
((void(*)(val* self, long p0))(var822->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var822, 170l); /* goto= on <var822:ReduceAction296>*/
}
{
((void(*)(val* self))(var822->class->vft[COLOR_core__kernel__Object__init]))(var822); /* init on <var822:ReduceAction296>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var822); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var823 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var823->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var823, 171l); /* goto= on <var823:ReduceAction159>*/
}
{
((void(*)(val* self))(var823->class->vft[COLOR_core__kernel__Object__init]))(var823); /* init on <var823:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var823); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var824 = NEW_nitc__parser__ReduceAction298(&type_nitc__parser__ReduceAction298);
{
((void(*)(val* self, long p0))(var824->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var824, 171l); /* goto= on <var824:ReduceAction298>*/
}
{
((void(*)(val* self))(var824->class->vft[COLOR_core__kernel__Object__init]))(var824); /* init on <var824:ReduceAction298>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var824); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var825 = NEW_nitc__parser__ReduceAction299(&type_nitc__parser__ReduceAction299);
{
((void(*)(val* self, long p0))(var825->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var825, 171l); /* goto= on <var825:ReduceAction299>*/
}
{
((void(*)(val* self))(var825->class->vft[COLOR_core__kernel__Object__init]))(var825); /* init on <var825:ReduceAction299>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var825); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var826 = NEW_nitc__parser__ReduceAction300(&type_nitc__parser__ReduceAction300);
{
((void(*)(val* self, long p0))(var826->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var826, 171l); /* goto= on <var826:ReduceAction300>*/
}
{
((void(*)(val* self))(var826->class->vft[COLOR_core__kernel__Object__init]))(var826); /* init on <var826:ReduceAction300>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var826); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var827 = NEW_nitc__parser__ReduceAction301(&type_nitc__parser__ReduceAction301);
{
((void(*)(val* self, long p0))(var827->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var827, 171l); /* goto= on <var827:ReduceAction301>*/
}
{
((void(*)(val* self))(var827->class->vft[COLOR_core__kernel__Object__init]))(var827); /* init on <var827:ReduceAction301>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var827); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var828 = NEW_nitc__parser__ReduceAction302(&type_nitc__parser__ReduceAction302);
{
((void(*)(val* self, long p0))(var828->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var828, 171l); /* goto= on <var828:ReduceAction302>*/
}
{
((void(*)(val* self))(var828->class->vft[COLOR_core__kernel__Object__init]))(var828); /* init on <var828:ReduceAction302>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var828); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var829 = NEW_nitc__parser__ReduceAction303(&type_nitc__parser__ReduceAction303);
{
((void(*)(val* self, long p0))(var829->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var829, 171l); /* goto= on <var829:ReduceAction303>*/
}
{
((void(*)(val* self))(var829->class->vft[COLOR_core__kernel__Object__init]))(var829); /* init on <var829:ReduceAction303>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var829); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var830 = NEW_nitc__parser__ReduceAction304(&type_nitc__parser__ReduceAction304);
{
((void(*)(val* self, long p0))(var830->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var830, 171l); /* goto= on <var830:ReduceAction304>*/
}
{
((void(*)(val* self))(var830->class->vft[COLOR_core__kernel__Object__init]))(var830); /* init on <var830:ReduceAction304>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var830); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var831 = NEW_nitc__parser__ReduceAction305(&type_nitc__parser__ReduceAction305);
{
((void(*)(val* self, long p0))(var831->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var831, 171l); /* goto= on <var831:ReduceAction305>*/
}
{
((void(*)(val* self))(var831->class->vft[COLOR_core__kernel__Object__init]))(var831); /* init on <var831:ReduceAction305>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var831); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var832 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var832->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var832, 172l); /* goto= on <var832:ReduceAction159>*/
}
{
((void(*)(val* self))(var832->class->vft[COLOR_core__kernel__Object__init]))(var832); /* init on <var832:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var832); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var833 = NEW_nitc__parser__ReduceAction307(&type_nitc__parser__ReduceAction307);
{
((void(*)(val* self, long p0))(var833->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var833, 172l); /* goto= on <var833:ReduceAction307>*/
}
{
((void(*)(val* self))(var833->class->vft[COLOR_core__kernel__Object__init]))(var833); /* init on <var833:ReduceAction307>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var833); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var834 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var834->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var834, 173l); /* goto= on <var834:ReduceAction159>*/
}
{
((void(*)(val* self))(var834->class->vft[COLOR_core__kernel__Object__init]))(var834); /* init on <var834:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var834); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var835 = NEW_nitc__parser__ReduceAction309(&type_nitc__parser__ReduceAction309);
{
((void(*)(val* self, long p0))(var835->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var835, 173l); /* goto= on <var835:ReduceAction309>*/
}
{
((void(*)(val* self))(var835->class->vft[COLOR_core__kernel__Object__init]))(var835); /* init on <var835:ReduceAction309>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var835); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var836 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var836->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var836, 174l); /* goto= on <var836:ReduceAction159>*/
}
{
((void(*)(val* self))(var836->class->vft[COLOR_core__kernel__Object__init]))(var836); /* init on <var836:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var836); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var837 = NEW_nitc__parser__ReduceAction311(&type_nitc__parser__ReduceAction311);
{
((void(*)(val* self, long p0))(var837->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var837, 174l); /* goto= on <var837:ReduceAction311>*/
}
{
((void(*)(val* self))(var837->class->vft[COLOR_core__kernel__Object__init]))(var837); /* init on <var837:ReduceAction311>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var837); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var838 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var838->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var838, 175l); /* goto= on <var838:ReduceAction159>*/
}
{
((void(*)(val* self))(var838->class->vft[COLOR_core__kernel__Object__init]))(var838); /* init on <var838:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var838); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var839 = NEW_nitc__parser__ReduceAction313(&type_nitc__parser__ReduceAction313);
{
((void(*)(val* self, long p0))(var839->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var839, 175l); /* goto= on <var839:ReduceAction313>*/
}
{
((void(*)(val* self))(var839->class->vft[COLOR_core__kernel__Object__init]))(var839); /* init on <var839:ReduceAction313>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var839); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var840 = NEW_nitc__parser__ReduceAction314(&type_nitc__parser__ReduceAction314);
{
((void(*)(val* self, long p0))(var840->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var840, 175l); /* goto= on <var840:ReduceAction314>*/
}
{
((void(*)(val* self))(var840->class->vft[COLOR_core__kernel__Object__init]))(var840); /* init on <var840:ReduceAction314>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var840); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var841 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var841->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var841, 176l); /* goto= on <var841:ReduceAction159>*/
}
{
((void(*)(val* self))(var841->class->vft[COLOR_core__kernel__Object__init]))(var841); /* init on <var841:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var841); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var842 = NEW_nitc__parser__ReduceAction316(&type_nitc__parser__ReduceAction316);
{
((void(*)(val* self, long p0))(var842->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var842, 176l); /* goto= on <var842:ReduceAction316>*/
}
{
((void(*)(val* self))(var842->class->vft[COLOR_core__kernel__Object__init]))(var842); /* init on <var842:ReduceAction316>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var842); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var843 = NEW_nitc__parser__ReduceAction317(&type_nitc__parser__ReduceAction317);
{
((void(*)(val* self, long p0))(var843->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var843, 176l); /* goto= on <var843:ReduceAction317>*/
}
{
((void(*)(val* self))(var843->class->vft[COLOR_core__kernel__Object__init]))(var843); /* init on <var843:ReduceAction317>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var843); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var844 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var844->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var844, 177l); /* goto= on <var844:ReduceAction159>*/
}
{
((void(*)(val* self))(var844->class->vft[COLOR_core__kernel__Object__init]))(var844); /* init on <var844:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var844); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var845 = NEW_nitc__parser__ReduceAction319(&type_nitc__parser__ReduceAction319);
{
((void(*)(val* self, long p0))(var845->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var845, 177l); /* goto= on <var845:ReduceAction319>*/
}
{
((void(*)(val* self))(var845->class->vft[COLOR_core__kernel__Object__init]))(var845); /* init on <var845:ReduceAction319>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var845); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var846 = NEW_nitc__parser__ReduceAction320(&type_nitc__parser__ReduceAction320);
{
((void(*)(val* self, long p0))(var846->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var846, 177l); /* goto= on <var846:ReduceAction320>*/
}
{
((void(*)(val* self))(var846->class->vft[COLOR_core__kernel__Object__init]))(var846); /* init on <var846:ReduceAction320>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var846); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var847 = NEW_nitc__parser__ReduceAction321(&type_nitc__parser__ReduceAction321);
{
((void(*)(val* self, long p0))(var847->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var847, 177l); /* goto= on <var847:ReduceAction321>*/
}
{
((void(*)(val* self))(var847->class->vft[COLOR_core__kernel__Object__init]))(var847); /* init on <var847:ReduceAction321>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var847); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var848 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var848->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var848, 178l); /* goto= on <var848:ReduceAction159>*/
}
{
((void(*)(val* self))(var848->class->vft[COLOR_core__kernel__Object__init]))(var848); /* init on <var848:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var848); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var849 = NEW_nitc__parser__ReduceAction323(&type_nitc__parser__ReduceAction323);
{
((void(*)(val* self, long p0))(var849->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var849, 178l); /* goto= on <var849:ReduceAction323>*/
}
{
((void(*)(val* self))(var849->class->vft[COLOR_core__kernel__Object__init]))(var849); /* init on <var849:ReduceAction323>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var849); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var850 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var850->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var850, 179l); /* goto= on <var850:ReduceAction159>*/
}
{
((void(*)(val* self))(var850->class->vft[COLOR_core__kernel__Object__init]))(var850); /* init on <var850:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var850); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var851 = NEW_nitc__parser__ReduceAction325(&type_nitc__parser__ReduceAction325);
{
((void(*)(val* self, long p0))(var851->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var851, 179l); /* goto= on <var851:ReduceAction325>*/
}
{
((void(*)(val* self))(var851->class->vft[COLOR_core__kernel__Object__init]))(var851); /* init on <var851:ReduceAction325>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var851); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var852 = NEW_nitc__parser__ReduceAction326(&type_nitc__parser__ReduceAction326);
{
((void(*)(val* self, long p0))(var852->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var852, 179l); /* goto= on <var852:ReduceAction326>*/
}
{
((void(*)(val* self))(var852->class->vft[COLOR_core__kernel__Object__init]))(var852); /* init on <var852:ReduceAction326>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var852); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var853 = NEW_nitc__parser__ReduceAction327(&type_nitc__parser__ReduceAction327);
{
((void(*)(val* self, long p0))(var853->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var853, 179l); /* goto= on <var853:ReduceAction327>*/
}
{
((void(*)(val* self))(var853->class->vft[COLOR_core__kernel__Object__init]))(var853); /* init on <var853:ReduceAction327>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var853); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var854 = NEW_nitc__parser__ReduceAction328(&type_nitc__parser__ReduceAction328);
{
((void(*)(val* self, long p0))(var854->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var854, 179l); /* goto= on <var854:ReduceAction328>*/
}
{
((void(*)(val* self))(var854->class->vft[COLOR_core__kernel__Object__init]))(var854); /* init on <var854:ReduceAction328>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var854); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var855 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var855->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var855, 180l); /* goto= on <var855:ReduceAction159>*/
}
{
((void(*)(val* self))(var855->class->vft[COLOR_core__kernel__Object__init]))(var855); /* init on <var855:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var855); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var856 = NEW_nitc__parser__ReduceAction330(&type_nitc__parser__ReduceAction330);
{
((void(*)(val* self, long p0))(var856->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var856, 180l); /* goto= on <var856:ReduceAction330>*/
}
{
((void(*)(val* self))(var856->class->vft[COLOR_core__kernel__Object__init]))(var856); /* init on <var856:ReduceAction330>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var856); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var857 = NEW_nitc__parser__ReduceAction331(&type_nitc__parser__ReduceAction331);
{
((void(*)(val* self, long p0))(var857->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var857, 180l); /* goto= on <var857:ReduceAction331>*/
}
{
((void(*)(val* self))(var857->class->vft[COLOR_core__kernel__Object__init]))(var857); /* init on <var857:ReduceAction331>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var857); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var858 = NEW_nitc__parser__ReduceAction856(&type_nitc__parser__ReduceAction856);
{
((void(*)(val* self, long p0))(var858->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var858, 180l); /* goto= on <var858:ReduceAction856>*/
}
{
((void(*)(val* self))(var858->class->vft[COLOR_core__kernel__Object__init]))(var858); /* init on <var858:ReduceAction856>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var858); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var859 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var859->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var859, 181l); /* goto= on <var859:ReduceAction159>*/
}
{
((void(*)(val* self))(var859->class->vft[COLOR_core__kernel__Object__init]))(var859); /* init on <var859:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var859); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var860 = NEW_nitc__parser__ReduceAction858(&type_nitc__parser__ReduceAction858);
{
((void(*)(val* self, long p0))(var860->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var860, 181l); /* goto= on <var860:ReduceAction858>*/
}
{
((void(*)(val* self))(var860->class->vft[COLOR_core__kernel__Object__init]))(var860); /* init on <var860:ReduceAction858>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var860); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var861 = NEW_nitc__parser__ReduceAction859(&type_nitc__parser__ReduceAction859);
{
((void(*)(val* self, long p0))(var861->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var861, 181l); /* goto= on <var861:ReduceAction859>*/
}
{
((void(*)(val* self))(var861->class->vft[COLOR_core__kernel__Object__init]))(var861); /* init on <var861:ReduceAction859>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var861); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var862 = NEW_nitc__parser__ReduceAction860(&type_nitc__parser__ReduceAction860);
{
((void(*)(val* self, long p0))(var862->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var862, 181l); /* goto= on <var862:ReduceAction860>*/
}
{
((void(*)(val* self))(var862->class->vft[COLOR_core__kernel__Object__init]))(var862); /* init on <var862:ReduceAction860>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var862); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var863 = NEW_nitc__parser__ReduceAction861(&type_nitc__parser__ReduceAction861);
{
((void(*)(val* self, long p0))(var863->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var863, 181l); /* goto= on <var863:ReduceAction861>*/
}
{
((void(*)(val* self))(var863->class->vft[COLOR_core__kernel__Object__init]))(var863); /* init on <var863:ReduceAction861>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var863); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var864 = NEW_nitc__parser__ReduceAction862(&type_nitc__parser__ReduceAction862);
{
((void(*)(val* self, long p0))(var864->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var864, 181l); /* goto= on <var864:ReduceAction862>*/
}
{
((void(*)(val* self))(var864->class->vft[COLOR_core__kernel__Object__init]))(var864); /* init on <var864:ReduceAction862>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var864); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var865 = NEW_nitc__parser__ReduceAction863(&type_nitc__parser__ReduceAction863);
{
((void(*)(val* self, long p0))(var865->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var865, 181l); /* goto= on <var865:ReduceAction863>*/
}
{
((void(*)(val* self))(var865->class->vft[COLOR_core__kernel__Object__init]))(var865); /* init on <var865:ReduceAction863>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var865); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var866 = NEW_nitc__parser__ReduceAction864(&type_nitc__parser__ReduceAction864);
{
((void(*)(val* self, long p0))(var866->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var866, 181l); /* goto= on <var866:ReduceAction864>*/
}
{
((void(*)(val* self))(var866->class->vft[COLOR_core__kernel__Object__init]))(var866); /* init on <var866:ReduceAction864>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var866); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var867 = NEW_nitc__parser__ReduceAction865(&type_nitc__parser__ReduceAction865);
{
((void(*)(val* self, long p0))(var867->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var867, 181l); /* goto= on <var867:ReduceAction865>*/
}
{
((void(*)(val* self))(var867->class->vft[COLOR_core__kernel__Object__init]))(var867); /* init on <var867:ReduceAction865>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var867); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var868 = NEW_nitc__parser__ReduceAction866(&type_nitc__parser__ReduceAction866);
{
((void(*)(val* self, long p0))(var868->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var868, 181l); /* goto= on <var868:ReduceAction866>*/
}
{
((void(*)(val* self))(var868->class->vft[COLOR_core__kernel__Object__init]))(var868); /* init on <var868:ReduceAction866>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var868); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var869 = NEW_nitc__parser__ReduceAction192(&type_nitc__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var869->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var869, 181l); /* goto= on <var869:ReduceAction192>*/
}
{
((void(*)(val* self))(var869->class->vft[COLOR_core__kernel__Object__init]))(var869); /* init on <var869:ReduceAction192>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var869); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var870 = NEW_nitc__parser__ReduceAction354(&type_nitc__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var870->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var870, 181l); /* goto= on <var870:ReduceAction354>*/
}
{
((void(*)(val* self))(var870->class->vft[COLOR_core__kernel__Object__init]))(var870); /* init on <var870:ReduceAction354>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var870); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var871 = NEW_nitc__parser__ReduceAction869(&type_nitc__parser__ReduceAction869);
{
((void(*)(val* self, long p0))(var871->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var871, 181l); /* goto= on <var871:ReduceAction869>*/
}
{
((void(*)(val* self))(var871->class->vft[COLOR_core__kernel__Object__init]))(var871); /* init on <var871:ReduceAction869>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var871); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var872 = NEW_nitc__parser__ReduceAction870(&type_nitc__parser__ReduceAction870);
{
((void(*)(val* self, long p0))(var872->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var872, 181l); /* goto= on <var872:ReduceAction870>*/
}
{
((void(*)(val* self))(var872->class->vft[COLOR_core__kernel__Object__init]))(var872); /* init on <var872:ReduceAction870>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var872); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var873 = NEW_nitc__parser__ReduceAction360(&type_nitc__parser__ReduceAction360);
{
((void(*)(val* self, long p0))(var873->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var873, 181l); /* goto= on <var873:ReduceAction360>*/
}
{
((void(*)(val* self))(var873->class->vft[COLOR_core__kernel__Object__init]))(var873); /* init on <var873:ReduceAction360>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var873); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var874 = NEW_nitc__parser__ReduceAction361(&type_nitc__parser__ReduceAction361);
{
((void(*)(val* self, long p0))(var874->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var874, 181l); /* goto= on <var874:ReduceAction361>*/
}
{
((void(*)(val* self))(var874->class->vft[COLOR_core__kernel__Object__init]))(var874); /* init on <var874:ReduceAction361>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var874); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var875 = NEW_nitc__parser__ReduceAction362(&type_nitc__parser__ReduceAction362);
{
((void(*)(val* self, long p0))(var875->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var875, 181l); /* goto= on <var875:ReduceAction362>*/
}
{
((void(*)(val* self))(var875->class->vft[COLOR_core__kernel__Object__init]))(var875); /* init on <var875:ReduceAction362>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var875); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var876 = NEW_nitc__parser__ReduceAction363(&type_nitc__parser__ReduceAction363);
{
((void(*)(val* self, long p0))(var876->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var876, 181l); /* goto= on <var876:ReduceAction363>*/
}
{
((void(*)(val* self))(var876->class->vft[COLOR_core__kernel__Object__init]))(var876); /* init on <var876:ReduceAction363>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var876); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var877 = NEW_nitc__parser__ReduceAction364(&type_nitc__parser__ReduceAction364);
{
((void(*)(val* self, long p0))(var877->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var877, 181l); /* goto= on <var877:ReduceAction364>*/
}
{
((void(*)(val* self))(var877->class->vft[COLOR_core__kernel__Object__init]))(var877); /* init on <var877:ReduceAction364>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var877); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var878 = NEW_nitc__parser__ReduceAction365(&type_nitc__parser__ReduceAction365);
{
((void(*)(val* self, long p0))(var878->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var878, 181l); /* goto= on <var878:ReduceAction365>*/
}
{
((void(*)(val* self))(var878->class->vft[COLOR_core__kernel__Object__init]))(var878); /* init on <var878:ReduceAction365>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var878); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var879 = NEW_nitc__parser__ReduceAction366(&type_nitc__parser__ReduceAction366);
{
((void(*)(val* self, long p0))(var879->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var879, 181l); /* goto= on <var879:ReduceAction366>*/
}
{
((void(*)(val* self))(var879->class->vft[COLOR_core__kernel__Object__init]))(var879); /* init on <var879:ReduceAction366>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var879); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var880 = NEW_nitc__parser__ReduceAction367(&type_nitc__parser__ReduceAction367);
{
((void(*)(val* self, long p0))(var880->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var880, 181l); /* goto= on <var880:ReduceAction367>*/
}
{
((void(*)(val* self))(var880->class->vft[COLOR_core__kernel__Object__init]))(var880); /* init on <var880:ReduceAction367>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var880); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var881 = NEW_nitc__parser__ReduceAction368(&type_nitc__parser__ReduceAction368);
{
((void(*)(val* self, long p0))(var881->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var881, 181l); /* goto= on <var881:ReduceAction368>*/
}
{
((void(*)(val* self))(var881->class->vft[COLOR_core__kernel__Object__init]))(var881); /* init on <var881:ReduceAction368>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var881); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var882 = NEW_nitc__parser__ReduceAction369(&type_nitc__parser__ReduceAction369);
{
((void(*)(val* self, long p0))(var882->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var882, 181l); /* goto= on <var882:ReduceAction369>*/
}
{
((void(*)(val* self))(var882->class->vft[COLOR_core__kernel__Object__init]))(var882); /* init on <var882:ReduceAction369>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var882); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var883 = NEW_nitc__parser__ReduceAction370(&type_nitc__parser__ReduceAction370);
{
((void(*)(val* self, long p0))(var883->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var883, 181l); /* goto= on <var883:ReduceAction370>*/
}
{
((void(*)(val* self))(var883->class->vft[COLOR_core__kernel__Object__init]))(var883); /* init on <var883:ReduceAction370>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var883); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var884 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var884->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var884, 182l); /* goto= on <var884:ReduceAction159>*/
}
{
((void(*)(val* self))(var884->class->vft[COLOR_core__kernel__Object__init]))(var884); /* init on <var884:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var884); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var885 = NEW_nitc__parser__ReduceAction372(&type_nitc__parser__ReduceAction372);
{
((void(*)(val* self, long p0))(var885->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var885, 182l); /* goto= on <var885:ReduceAction372>*/
}
{
((void(*)(val* self))(var885->class->vft[COLOR_core__kernel__Object__init]))(var885); /* init on <var885:ReduceAction372>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var885); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var886 = NEW_nitc__parser__ReduceAction373(&type_nitc__parser__ReduceAction373);
{
((void(*)(val* self, long p0))(var886->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var886, 182l); /* goto= on <var886:ReduceAction373>*/
}
{
((void(*)(val* self))(var886->class->vft[COLOR_core__kernel__Object__init]))(var886); /* init on <var886:ReduceAction373>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var886); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var887 = NEW_nitc__parser__ReduceAction374(&type_nitc__parser__ReduceAction374);
{
((void(*)(val* self, long p0))(var887->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var887, 183l); /* goto= on <var887:ReduceAction374>*/
}
{
((void(*)(val* self))(var887->class->vft[COLOR_core__kernel__Object__init]))(var887); /* init on <var887:ReduceAction374>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var887); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var888 = NEW_nitc__parser__ReduceAction375(&type_nitc__parser__ReduceAction375);
{
((void(*)(val* self, long p0))(var888->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var888, 183l); /* goto= on <var888:ReduceAction375>*/
}
{
((void(*)(val* self))(var888->class->vft[COLOR_core__kernel__Object__init]))(var888); /* init on <var888:ReduceAction375>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var888); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var889 = NEW_nitc__parser__ReduceAction376(&type_nitc__parser__ReduceAction376);
{
((void(*)(val* self, long p0))(var889->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var889, 183l); /* goto= on <var889:ReduceAction376>*/
}
{
((void(*)(val* self))(var889->class->vft[COLOR_core__kernel__Object__init]))(var889); /* init on <var889:ReduceAction376>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var889); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var890 = NEW_nitc__parser__ReduceAction377(&type_nitc__parser__ReduceAction377);
{
((void(*)(val* self, long p0))(var890->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var890, 183l); /* goto= on <var890:ReduceAction377>*/
}
{
((void(*)(val* self))(var890->class->vft[COLOR_core__kernel__Object__init]))(var890); /* init on <var890:ReduceAction377>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var890); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var891 = NEW_nitc__parser__ReduceAction378(&type_nitc__parser__ReduceAction378);
{
((void(*)(val* self, long p0))(var891->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var891, 183l); /* goto= on <var891:ReduceAction378>*/
}
{
((void(*)(val* self))(var891->class->vft[COLOR_core__kernel__Object__init]))(var891); /* init on <var891:ReduceAction378>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var891); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var892 = NEW_nitc__parser__ReduceAction379(&type_nitc__parser__ReduceAction379);
{
((void(*)(val* self, long p0))(var892->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var892, 183l); /* goto= on <var892:ReduceAction379>*/
}
{
((void(*)(val* self))(var892->class->vft[COLOR_core__kernel__Object__init]))(var892); /* init on <var892:ReduceAction379>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var892); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var893 = NEW_nitc__parser__ReduceAction380(&type_nitc__parser__ReduceAction380);
{
((void(*)(val* self, long p0))(var893->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var893, 183l); /* goto= on <var893:ReduceAction380>*/
}
{
((void(*)(val* self))(var893->class->vft[COLOR_core__kernel__Object__init]))(var893); /* init on <var893:ReduceAction380>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var893); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var894 = NEW_nitc__parser__ReduceAction381(&type_nitc__parser__ReduceAction381);
{
((void(*)(val* self, long p0))(var894->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var894, 183l); /* goto= on <var894:ReduceAction381>*/
}
{
((void(*)(val* self))(var894->class->vft[COLOR_core__kernel__Object__init]))(var894); /* init on <var894:ReduceAction381>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var894); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var895 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var895->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var895, 183l); /* goto= on <var895:ReduceAction159>*/
}
{
((void(*)(val* self))(var895->class->vft[COLOR_core__kernel__Object__init]))(var895); /* init on <var895:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var895); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var896 = NEW_nitc__parser__ReduceAction894(&type_nitc__parser__ReduceAction894);
{
((void(*)(val* self, long p0))(var896->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var896, 184l); /* goto= on <var896:ReduceAction894>*/
}
{
((void(*)(val* self))(var896->class->vft[COLOR_core__kernel__Object__init]))(var896); /* init on <var896:ReduceAction894>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var896); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var897 = NEW_nitc__parser__ReduceAction895(&type_nitc__parser__ReduceAction895);
{
((void(*)(val* self, long p0))(var897->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var897, 184l); /* goto= on <var897:ReduceAction895>*/
}
{
((void(*)(val* self))(var897->class->vft[COLOR_core__kernel__Object__init]))(var897); /* init on <var897:ReduceAction895>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var897); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var898 = NEW_nitc__parser__ReduceAction156(&type_nitc__parser__ReduceAction156);
{
((void(*)(val* self, long p0))(var898->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var898, 185l); /* goto= on <var898:ReduceAction156>*/
}
{
((void(*)(val* self))(var898->class->vft[COLOR_core__kernel__Object__init]))(var898); /* init on <var898:ReduceAction156>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var898); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var899 = NEW_nitc__parser__ReduceAction157(&type_nitc__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var899->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var899, 185l); /* goto= on <var899:ReduceAction157>*/
}
{
((void(*)(val* self))(var899->class->vft[COLOR_core__kernel__Object__init]))(var899); /* init on <var899:ReduceAction157>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var899); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var900 = NEW_nitc__parser__ReduceAction158(&type_nitc__parser__ReduceAction158);
{
((void(*)(val* self, long p0))(var900->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var900, 185l); /* goto= on <var900:ReduceAction158>*/
}
{
((void(*)(val* self))(var900->class->vft[COLOR_core__kernel__Object__init]))(var900); /* init on <var900:ReduceAction158>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var900); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var901 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var901->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var901, 185l); /* goto= on <var901:ReduceAction159>*/
}
{
((void(*)(val* self))(var901->class->vft[COLOR_core__kernel__Object__init]))(var901); /* init on <var901:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var901); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var902 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var902->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var902, 186l); /* goto= on <var902:ReduceAction159>*/
}
{
((void(*)(val* self))(var902->class->vft[COLOR_core__kernel__Object__init]))(var902); /* init on <var902:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var902); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var903 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var903->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var903, 186l); /* goto= on <var903:ReduceAction159>*/
}
{
((void(*)(val* self))(var903->class->vft[COLOR_core__kernel__Object__init]))(var903); /* init on <var903:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var903); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var904 = NEW_nitc__parser__ReduceAction169(&type_nitc__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var904->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var904, 186l); /* goto= on <var904:ReduceAction169>*/
}
{
((void(*)(val* self))(var904->class->vft[COLOR_core__kernel__Object__init]))(var904); /* init on <var904:ReduceAction169>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var904); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var905 = NEW_nitc__parser__ReduceAction170(&type_nitc__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var905->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var905, 186l); /* goto= on <var905:ReduceAction170>*/
}
{
((void(*)(val* self))(var905->class->vft[COLOR_core__kernel__Object__init]))(var905); /* init on <var905:ReduceAction170>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var905); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var906 = NEW_nitc__parser__ReduceAction171(&type_nitc__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var906->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var906, 186l); /* goto= on <var906:ReduceAction171>*/
}
{
((void(*)(val* self))(var906->class->vft[COLOR_core__kernel__Object__init]))(var906); /* init on <var906:ReduceAction171>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var906); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var907 = NEW_nitc__parser__ReduceAction172(&type_nitc__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var907->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var907, 186l); /* goto= on <var907:ReduceAction172>*/
}
{
((void(*)(val* self))(var907->class->vft[COLOR_core__kernel__Object__init]))(var907); /* init on <var907:ReduceAction172>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var907); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var908 = NEW_nitc__parser__ReduceAction173(&type_nitc__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var908->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var908, 186l); /* goto= on <var908:ReduceAction173>*/
}
{
((void(*)(val* self))(var908->class->vft[COLOR_core__kernel__Object__init]))(var908); /* init on <var908:ReduceAction173>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var908); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var909 = NEW_nitc__parser__ReduceAction174(&type_nitc__parser__ReduceAction174);
{
((void(*)(val* self, long p0))(var909->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var909, 186l); /* goto= on <var909:ReduceAction174>*/
}
{
((void(*)(val* self))(var909->class->vft[COLOR_core__kernel__Object__init]))(var909); /* init on <var909:ReduceAction174>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var909); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var910 = NEW_nitc__parser__ReduceAction175(&type_nitc__parser__ReduceAction175);
{
((void(*)(val* self, long p0))(var910->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var910, 186l); /* goto= on <var910:ReduceAction175>*/
}
{
((void(*)(val* self))(var910->class->vft[COLOR_core__kernel__Object__init]))(var910); /* init on <var910:ReduceAction175>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var910); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var911 = NEW_nitc__parser__ReduceAction176(&type_nitc__parser__ReduceAction176);
{
((void(*)(val* self, long p0))(var911->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var911, 186l); /* goto= on <var911:ReduceAction176>*/
}
{
((void(*)(val* self))(var911->class->vft[COLOR_core__kernel__Object__init]))(var911); /* init on <var911:ReduceAction176>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var911); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var912 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var912->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var912, 186l); /* goto= on <var912:ReduceAction159>*/
}
{
((void(*)(val* self))(var912->class->vft[COLOR_core__kernel__Object__init]))(var912); /* init on <var912:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var912); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var913 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var913->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var913, 186l); /* goto= on <var913:ReduceAction159>*/
}
{
((void(*)(val* self))(var913->class->vft[COLOR_core__kernel__Object__init]))(var913); /* init on <var913:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var913); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var914 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var914->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var914, 186l); /* goto= on <var914:ReduceAction159>*/
}
{
((void(*)(val* self))(var914->class->vft[COLOR_core__kernel__Object__init]))(var914); /* init on <var914:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var914); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var915 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var915->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var915, 186l); /* goto= on <var915:ReduceAction159>*/
}
{
((void(*)(val* self))(var915->class->vft[COLOR_core__kernel__Object__init]))(var915); /* init on <var915:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var915); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var916 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var916->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var916, 186l); /* goto= on <var916:ReduceAction159>*/
}
{
((void(*)(val* self))(var916->class->vft[COLOR_core__kernel__Object__init]))(var916); /* init on <var916:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var916); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var917 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var917->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var917, 186l); /* goto= on <var917:ReduceAction159>*/
}
{
((void(*)(val* self))(var917->class->vft[COLOR_core__kernel__Object__init]))(var917); /* init on <var917:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var917); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var918 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var918->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var918, 186l); /* goto= on <var918:ReduceAction159>*/
}
{
((void(*)(val* self))(var918->class->vft[COLOR_core__kernel__Object__init]))(var918); /* init on <var918:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var918); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var919 = NEW_nitc__parser__ReduceAction184(&type_nitc__parser__ReduceAction184);
{
((void(*)(val* self, long p0))(var919->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var919, 186l); /* goto= on <var919:ReduceAction184>*/
}
{
((void(*)(val* self))(var919->class->vft[COLOR_core__kernel__Object__init]))(var919); /* init on <var919:ReduceAction184>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var919); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var920 = NEW_nitc__parser__ReduceAction185(&type_nitc__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var920->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var920, 186l); /* goto= on <var920:ReduceAction185>*/
}
{
((void(*)(val* self))(var920->class->vft[COLOR_core__kernel__Object__init]))(var920); /* init on <var920:ReduceAction185>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var920); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var921 = NEW_nitc__parser__ReduceAction186(&type_nitc__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var921->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var921, 186l); /* goto= on <var921:ReduceAction186>*/
}
{
((void(*)(val* self))(var921->class->vft[COLOR_core__kernel__Object__init]))(var921); /* init on <var921:ReduceAction186>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var921); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var922 = NEW_nitc__parser__ReduceAction187(&type_nitc__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var922->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var922, 186l); /* goto= on <var922:ReduceAction187>*/
}
{
((void(*)(val* self))(var922->class->vft[COLOR_core__kernel__Object__init]))(var922); /* init on <var922:ReduceAction187>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var922); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var923 = NEW_nitc__parser__ReduceAction188(&type_nitc__parser__ReduceAction188);
{
((void(*)(val* self, long p0))(var923->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var923, 186l); /* goto= on <var923:ReduceAction188>*/
}
{
((void(*)(val* self))(var923->class->vft[COLOR_core__kernel__Object__init]))(var923); /* init on <var923:ReduceAction188>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var923); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var924 = NEW_nitc__parser__ReduceAction189(&type_nitc__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var924->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var924, 186l); /* goto= on <var924:ReduceAction189>*/
}
{
((void(*)(val* self))(var924->class->vft[COLOR_core__kernel__Object__init]))(var924); /* init on <var924:ReduceAction189>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var924); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var925 = NEW_nitc__parser__ReduceAction190(&type_nitc__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var925->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var925, 186l); /* goto= on <var925:ReduceAction190>*/
}
{
((void(*)(val* self))(var925->class->vft[COLOR_core__kernel__Object__init]))(var925); /* init on <var925:ReduceAction190>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var925); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var926 = NEW_nitc__parser__ReduceAction191(&type_nitc__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var926->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var926, 186l); /* goto= on <var926:ReduceAction191>*/
}
{
((void(*)(val* self))(var926->class->vft[COLOR_core__kernel__Object__init]))(var926); /* init on <var926:ReduceAction191>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var926); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var927 = NEW_nitc__parser__ReduceAction192(&type_nitc__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var927->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var927, 186l); /* goto= on <var927:ReduceAction192>*/
}
{
((void(*)(val* self))(var927->class->vft[COLOR_core__kernel__Object__init]))(var927); /* init on <var927:ReduceAction192>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var927); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var928 = NEW_nitc__parser__ReduceAction193(&type_nitc__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var928->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var928, 186l); /* goto= on <var928:ReduceAction193>*/
}
{
((void(*)(val* self))(var928->class->vft[COLOR_core__kernel__Object__init]))(var928); /* init on <var928:ReduceAction193>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var928); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var929 = NEW_nitc__parser__ReduceAction194(&type_nitc__parser__ReduceAction194);
{
((void(*)(val* self, long p0))(var929->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var929, 186l); /* goto= on <var929:ReduceAction194>*/
}
{
((void(*)(val* self))(var929->class->vft[COLOR_core__kernel__Object__init]))(var929); /* init on <var929:ReduceAction194>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var929); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var930 = NEW_nitc__parser__ReduceAction195(&type_nitc__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var930->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var930, 186l); /* goto= on <var930:ReduceAction195>*/
}
{
((void(*)(val* self))(var930->class->vft[COLOR_core__kernel__Object__init]))(var930); /* init on <var930:ReduceAction195>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var930); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var931 = NEW_nitc__parser__ReduceAction196(&type_nitc__parser__ReduceAction196);
{
((void(*)(val* self, long p0))(var931->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var931, 186l); /* goto= on <var931:ReduceAction196>*/
}
{
((void(*)(val* self))(var931->class->vft[COLOR_core__kernel__Object__init]))(var931); /* init on <var931:ReduceAction196>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var931); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var932 = NEW_nitc__parser__ReduceAction195(&type_nitc__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var932->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var932, 186l); /* goto= on <var932:ReduceAction195>*/
}
{
((void(*)(val* self))(var932->class->vft[COLOR_core__kernel__Object__init]))(var932); /* init on <var932:ReduceAction195>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var932); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var933 = NEW_nitc__parser__ReduceAction198(&type_nitc__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var933->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var933, 186l); /* goto= on <var933:ReduceAction198>*/
}
{
((void(*)(val* self))(var933->class->vft[COLOR_core__kernel__Object__init]))(var933); /* init on <var933:ReduceAction198>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var933); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var934 = NEW_nitc__parser__ReduceAction199(&type_nitc__parser__ReduceAction199);
{
((void(*)(val* self, long p0))(var934->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var934, 186l); /* goto= on <var934:ReduceAction199>*/
}
{
((void(*)(val* self))(var934->class->vft[COLOR_core__kernel__Object__init]))(var934); /* init on <var934:ReduceAction199>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var934); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var935 = NEW_nitc__parser__ReduceAction198(&type_nitc__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var935->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var935, 186l); /* goto= on <var935:ReduceAction198>*/
}
{
((void(*)(val* self))(var935->class->vft[COLOR_core__kernel__Object__init]))(var935); /* init on <var935:ReduceAction198>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var935); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var936 = NEW_nitc__parser__ReduceAction201(&type_nitc__parser__ReduceAction201);
{
((void(*)(val* self, long p0))(var936->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var936, 186l); /* goto= on <var936:ReduceAction201>*/
}
{
((void(*)(val* self))(var936->class->vft[COLOR_core__kernel__Object__init]))(var936); /* init on <var936:ReduceAction201>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var936); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var937 = NEW_nitc__parser__ReduceAction257(&type_nitc__parser__ReduceAction257);
{
((void(*)(val* self, long p0))(var937->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var937, 187l); /* goto= on <var937:ReduceAction257>*/
}
{
((void(*)(val* self))(var937->class->vft[COLOR_core__kernel__Object__init]))(var937); /* init on <var937:ReduceAction257>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var937); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var938 = NEW_nitc__parser__ReduceAction258(&type_nitc__parser__ReduceAction258);
{
((void(*)(val* self, long p0))(var938->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var938, 187l); /* goto= on <var938:ReduceAction258>*/
}
{
((void(*)(val* self))(var938->class->vft[COLOR_core__kernel__Object__init]))(var938); /* init on <var938:ReduceAction258>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var938); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var939 = NEW_nitc__parser__ReduceAction259(&type_nitc__parser__ReduceAction259);
{
((void(*)(val* self, long p0))(var939->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var939, 187l); /* goto= on <var939:ReduceAction259>*/
}
{
((void(*)(val* self))(var939->class->vft[COLOR_core__kernel__Object__init]))(var939); /* init on <var939:ReduceAction259>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var939); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var940 = NEW_nitc__parser__ReduceAction260(&type_nitc__parser__ReduceAction260);
{
((void(*)(val* self, long p0))(var940->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var940, 188l); /* goto= on <var940:ReduceAction260>*/
}
{
((void(*)(val* self))(var940->class->vft[COLOR_core__kernel__Object__init]))(var940); /* init on <var940:ReduceAction260>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var940); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var941 = NEW_nitc__parser__ReduceAction269(&type_nitc__parser__ReduceAction269);
{
((void(*)(val* self, long p0))(var941->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var941, 189l); /* goto= on <var941:ReduceAction269>*/
}
{
((void(*)(val* self))(var941->class->vft[COLOR_core__kernel__Object__init]))(var941); /* init on <var941:ReduceAction269>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var941); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var942 = NEW_nitc__parser__ReduceAction270(&type_nitc__parser__ReduceAction270);
{
((void(*)(val* self, long p0))(var942->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var942, 189l); /* goto= on <var942:ReduceAction270>*/
}
{
((void(*)(val* self))(var942->class->vft[COLOR_core__kernel__Object__init]))(var942); /* init on <var942:ReduceAction270>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var942); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var943 = NEW_nitc__parser__ReduceAction271(&type_nitc__parser__ReduceAction271);
{
((void(*)(val* self, long p0))(var943->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var943, 190l); /* goto= on <var943:ReduceAction271>*/
}
{
((void(*)(val* self))(var943->class->vft[COLOR_core__kernel__Object__init]))(var943); /* init on <var943:ReduceAction271>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var943); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var944 = NEW_nitc__parser__ReduceAction272(&type_nitc__parser__ReduceAction272);
{
((void(*)(val* self, long p0))(var944->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var944, 190l); /* goto= on <var944:ReduceAction272>*/
}
{
((void(*)(val* self))(var944->class->vft[COLOR_core__kernel__Object__init]))(var944); /* init on <var944:ReduceAction272>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var944); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var945 = NEW_nitc__parser__ReduceAction273(&type_nitc__parser__ReduceAction273);
{
((void(*)(val* self, long p0))(var945->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var945, 191l); /* goto= on <var945:ReduceAction273>*/
}
{
((void(*)(val* self))(var945->class->vft[COLOR_core__kernel__Object__init]))(var945); /* init on <var945:ReduceAction273>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var945); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var946 = NEW_nitc__parser__ReduceAction274(&type_nitc__parser__ReduceAction274);
{
((void(*)(val* self, long p0))(var946->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var946, 191l); /* goto= on <var946:ReduceAction274>*/
}
{
((void(*)(val* self))(var946->class->vft[COLOR_core__kernel__Object__init]))(var946); /* init on <var946:ReduceAction274>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var946); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var947 = NEW_nitc__parser__ReduceAction278(&type_nitc__parser__ReduceAction278);
{
((void(*)(val* self, long p0))(var947->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var947, 192l); /* goto= on <var947:ReduceAction278>*/
}
{
((void(*)(val* self))(var947->class->vft[COLOR_core__kernel__Object__init]))(var947); /* init on <var947:ReduceAction278>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var947); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var948 = NEW_nitc__parser__ReduceAction279(&type_nitc__parser__ReduceAction279);
{
((void(*)(val* self, long p0))(var948->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var948, 192l); /* goto= on <var948:ReduceAction279>*/
}
{
((void(*)(val* self))(var948->class->vft[COLOR_core__kernel__Object__init]))(var948); /* init on <var948:ReduceAction279>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var948); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var949 = NEW_nitc__parser__ReduceAction283(&type_nitc__parser__ReduceAction283);
{
((void(*)(val* self, long p0))(var949->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var949, 193l); /* goto= on <var949:ReduceAction283>*/
}
{
((void(*)(val* self))(var949->class->vft[COLOR_core__kernel__Object__init]))(var949); /* init on <var949:ReduceAction283>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var949); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var950 = NEW_nitc__parser__ReduceAction284(&type_nitc__parser__ReduceAction284);
{
((void(*)(val* self, long p0))(var950->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var950, 193l); /* goto= on <var950:ReduceAction284>*/
}
{
((void(*)(val* self))(var950->class->vft[COLOR_core__kernel__Object__init]))(var950); /* init on <var950:ReduceAction284>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var950); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var951 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var951->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var951, 194l); /* goto= on <var951:ReduceAction159>*/
}
{
((void(*)(val* self))(var951->class->vft[COLOR_core__kernel__Object__init]))(var951); /* init on <var951:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var951); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var952 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var952->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var952, 194l); /* goto= on <var952:ReduceAction159>*/
}
{
((void(*)(val* self))(var952->class->vft[COLOR_core__kernel__Object__init]))(var952); /* init on <var952:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var952); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var953 = NEW_nitc__parser__ReduceAction169(&type_nitc__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var953->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var953, 194l); /* goto= on <var953:ReduceAction169>*/
}
{
((void(*)(val* self))(var953->class->vft[COLOR_core__kernel__Object__init]))(var953); /* init on <var953:ReduceAction169>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var953); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var954 = NEW_nitc__parser__ReduceAction170(&type_nitc__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var954->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var954, 194l); /* goto= on <var954:ReduceAction170>*/
}
{
((void(*)(val* self))(var954->class->vft[COLOR_core__kernel__Object__init]))(var954); /* init on <var954:ReduceAction170>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var954); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var955 = NEW_nitc__parser__ReduceAction171(&type_nitc__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var955->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var955, 194l); /* goto= on <var955:ReduceAction171>*/
}
{
((void(*)(val* self))(var955->class->vft[COLOR_core__kernel__Object__init]))(var955); /* init on <var955:ReduceAction171>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var955); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var956 = NEW_nitc__parser__ReduceAction172(&type_nitc__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var956->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var956, 194l); /* goto= on <var956:ReduceAction172>*/
}
{
((void(*)(val* self))(var956->class->vft[COLOR_core__kernel__Object__init]))(var956); /* init on <var956:ReduceAction172>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var956); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var957 = NEW_nitc__parser__ReduceAction173(&type_nitc__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var957->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var957, 194l); /* goto= on <var957:ReduceAction173>*/
}
{
((void(*)(val* self))(var957->class->vft[COLOR_core__kernel__Object__init]))(var957); /* init on <var957:ReduceAction173>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var957); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var958 = NEW_nitc__parser__ReduceAction174(&type_nitc__parser__ReduceAction174);
{
((void(*)(val* self, long p0))(var958->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var958, 194l); /* goto= on <var958:ReduceAction174>*/
}
{
((void(*)(val* self))(var958->class->vft[COLOR_core__kernel__Object__init]))(var958); /* init on <var958:ReduceAction174>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var958); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var959 = NEW_nitc__parser__ReduceAction175(&type_nitc__parser__ReduceAction175);
{
((void(*)(val* self, long p0))(var959->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var959, 194l); /* goto= on <var959:ReduceAction175>*/
}
{
((void(*)(val* self))(var959->class->vft[COLOR_core__kernel__Object__init]))(var959); /* init on <var959:ReduceAction175>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var959); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var960 = NEW_nitc__parser__ReduceAction176(&type_nitc__parser__ReduceAction176);
{
((void(*)(val* self, long p0))(var960->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var960, 194l); /* goto= on <var960:ReduceAction176>*/
}
{
((void(*)(val* self))(var960->class->vft[COLOR_core__kernel__Object__init]))(var960); /* init on <var960:ReduceAction176>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var960); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var961 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var961->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var961, 194l); /* goto= on <var961:ReduceAction159>*/
}
{
((void(*)(val* self))(var961->class->vft[COLOR_core__kernel__Object__init]))(var961); /* init on <var961:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var961); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var962 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var962->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var962, 194l); /* goto= on <var962:ReduceAction159>*/
}
{
((void(*)(val* self))(var962->class->vft[COLOR_core__kernel__Object__init]))(var962); /* init on <var962:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var962); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var963 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var963->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var963, 194l); /* goto= on <var963:ReduceAction159>*/
}
{
((void(*)(val* self))(var963->class->vft[COLOR_core__kernel__Object__init]))(var963); /* init on <var963:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var963); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var964 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var964->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var964, 194l); /* goto= on <var964:ReduceAction159>*/
}
{
((void(*)(val* self))(var964->class->vft[COLOR_core__kernel__Object__init]))(var964); /* init on <var964:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var964); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var965 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var965->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var965, 194l); /* goto= on <var965:ReduceAction159>*/
}
{
((void(*)(val* self))(var965->class->vft[COLOR_core__kernel__Object__init]))(var965); /* init on <var965:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var965); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var966 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var966->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var966, 194l); /* goto= on <var966:ReduceAction159>*/
}
{
((void(*)(val* self))(var966->class->vft[COLOR_core__kernel__Object__init]))(var966); /* init on <var966:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var966); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var967 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var967->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var967, 194l); /* goto= on <var967:ReduceAction159>*/
}
{
((void(*)(val* self))(var967->class->vft[COLOR_core__kernel__Object__init]))(var967); /* init on <var967:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var967); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var968 = NEW_nitc__parser__ReduceAction184(&type_nitc__parser__ReduceAction184);
{
((void(*)(val* self, long p0))(var968->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var968, 194l); /* goto= on <var968:ReduceAction184>*/
}
{
((void(*)(val* self))(var968->class->vft[COLOR_core__kernel__Object__init]))(var968); /* init on <var968:ReduceAction184>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var968); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var969 = NEW_nitc__parser__ReduceAction185(&type_nitc__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var969->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var969, 194l); /* goto= on <var969:ReduceAction185>*/
}
{
((void(*)(val* self))(var969->class->vft[COLOR_core__kernel__Object__init]))(var969); /* init on <var969:ReduceAction185>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var969); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var970 = NEW_nitc__parser__ReduceAction186(&type_nitc__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var970->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var970, 194l); /* goto= on <var970:ReduceAction186>*/
}
{
((void(*)(val* self))(var970->class->vft[COLOR_core__kernel__Object__init]))(var970); /* init on <var970:ReduceAction186>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var970); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var971 = NEW_nitc__parser__ReduceAction187(&type_nitc__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var971->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var971, 194l); /* goto= on <var971:ReduceAction187>*/
}
{
((void(*)(val* self))(var971->class->vft[COLOR_core__kernel__Object__init]))(var971); /* init on <var971:ReduceAction187>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var971); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var972 = NEW_nitc__parser__ReduceAction188(&type_nitc__parser__ReduceAction188);
{
((void(*)(val* self, long p0))(var972->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var972, 194l); /* goto= on <var972:ReduceAction188>*/
}
{
((void(*)(val* self))(var972->class->vft[COLOR_core__kernel__Object__init]))(var972); /* init on <var972:ReduceAction188>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var972); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var973 = NEW_nitc__parser__ReduceAction189(&type_nitc__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var973->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var973, 194l); /* goto= on <var973:ReduceAction189>*/
}
{
((void(*)(val* self))(var973->class->vft[COLOR_core__kernel__Object__init]))(var973); /* init on <var973:ReduceAction189>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var973); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var974 = NEW_nitc__parser__ReduceAction190(&type_nitc__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var974->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var974, 194l); /* goto= on <var974:ReduceAction190>*/
}
{
((void(*)(val* self))(var974->class->vft[COLOR_core__kernel__Object__init]))(var974); /* init on <var974:ReduceAction190>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var974); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var975 = NEW_nitc__parser__ReduceAction191(&type_nitc__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var975->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var975, 194l); /* goto= on <var975:ReduceAction191>*/
}
{
((void(*)(val* self))(var975->class->vft[COLOR_core__kernel__Object__init]))(var975); /* init on <var975:ReduceAction191>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var975); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var976 = NEW_nitc__parser__ReduceAction192(&type_nitc__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var976->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var976, 194l); /* goto= on <var976:ReduceAction192>*/
}
{
((void(*)(val* self))(var976->class->vft[COLOR_core__kernel__Object__init]))(var976); /* init on <var976:ReduceAction192>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var976); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var977 = NEW_nitc__parser__ReduceAction193(&type_nitc__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var977->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var977, 194l); /* goto= on <var977:ReduceAction193>*/
}
{
((void(*)(val* self))(var977->class->vft[COLOR_core__kernel__Object__init]))(var977); /* init on <var977:ReduceAction193>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var977); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var978 = NEW_nitc__parser__ReduceAction194(&type_nitc__parser__ReduceAction194);
{
((void(*)(val* self, long p0))(var978->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var978, 194l); /* goto= on <var978:ReduceAction194>*/
}
{
((void(*)(val* self))(var978->class->vft[COLOR_core__kernel__Object__init]))(var978); /* init on <var978:ReduceAction194>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var978); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var979 = NEW_nitc__parser__ReduceAction195(&type_nitc__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var979->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var979, 194l); /* goto= on <var979:ReduceAction195>*/
}
{
((void(*)(val* self))(var979->class->vft[COLOR_core__kernel__Object__init]))(var979); /* init on <var979:ReduceAction195>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var979); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var980 = NEW_nitc__parser__ReduceAction196(&type_nitc__parser__ReduceAction196);
{
((void(*)(val* self, long p0))(var980->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var980, 194l); /* goto= on <var980:ReduceAction196>*/
}
{
((void(*)(val* self))(var980->class->vft[COLOR_core__kernel__Object__init]))(var980); /* init on <var980:ReduceAction196>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var980); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var981 = NEW_nitc__parser__ReduceAction195(&type_nitc__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var981->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var981, 194l); /* goto= on <var981:ReduceAction195>*/
}
{
((void(*)(val* self))(var981->class->vft[COLOR_core__kernel__Object__init]))(var981); /* init on <var981:ReduceAction195>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var981); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var982 = NEW_nitc__parser__ReduceAction198(&type_nitc__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var982->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var982, 194l); /* goto= on <var982:ReduceAction198>*/
}
{
((void(*)(val* self))(var982->class->vft[COLOR_core__kernel__Object__init]))(var982); /* init on <var982:ReduceAction198>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var982); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var983 = NEW_nitc__parser__ReduceAction199(&type_nitc__parser__ReduceAction199);
{
((void(*)(val* self, long p0))(var983->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var983, 194l); /* goto= on <var983:ReduceAction199>*/
}
{
((void(*)(val* self))(var983->class->vft[COLOR_core__kernel__Object__init]))(var983); /* init on <var983:ReduceAction199>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var983); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var984 = NEW_nitc__parser__ReduceAction198(&type_nitc__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var984->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var984, 194l); /* goto= on <var984:ReduceAction198>*/
}
{
((void(*)(val* self))(var984->class->vft[COLOR_core__kernel__Object__init]))(var984); /* init on <var984:ReduceAction198>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var984); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var985 = NEW_nitc__parser__ReduceAction201(&type_nitc__parser__ReduceAction201);
{
((void(*)(val* self, long p0))(var985->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var985, 194l); /* goto= on <var985:ReduceAction201>*/
}
{
((void(*)(val* self))(var985->class->vft[COLOR_core__kernel__Object__init]))(var985); /* init on <var985:ReduceAction201>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var985); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var986 = NEW_nitc__parser__ReduceAction156(&type_nitc__parser__ReduceAction156);
{
((void(*)(val* self, long p0))(var986->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var986, 195l); /* goto= on <var986:ReduceAction156>*/
}
{
((void(*)(val* self))(var986->class->vft[COLOR_core__kernel__Object__init]))(var986); /* init on <var986:ReduceAction156>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var986); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var987 = NEW_nitc__parser__ReduceAction157(&type_nitc__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var987->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var987, 195l); /* goto= on <var987:ReduceAction157>*/
}
{
((void(*)(val* self))(var987->class->vft[COLOR_core__kernel__Object__init]))(var987); /* init on <var987:ReduceAction157>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var987); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var988 = NEW_nitc__parser__ReduceAction158(&type_nitc__parser__ReduceAction158);
{
((void(*)(val* self, long p0))(var988->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var988, 195l); /* goto= on <var988:ReduceAction158>*/
}
{
((void(*)(val* self))(var988->class->vft[COLOR_core__kernel__Object__init]))(var988); /* init on <var988:ReduceAction158>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var988); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var989 = NEW_nitc__parser__ReduceAction156(&type_nitc__parser__ReduceAction156);
{
((void(*)(val* self, long p0))(var989->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var989, 196l); /* goto= on <var989:ReduceAction156>*/
}
{
((void(*)(val* self))(var989->class->vft[COLOR_core__kernel__Object__init]))(var989); /* init on <var989:ReduceAction156>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var989); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var990 = NEW_nitc__parser__ReduceAction157(&type_nitc__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var990->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var990, 196l); /* goto= on <var990:ReduceAction157>*/
}
{
((void(*)(val* self))(var990->class->vft[COLOR_core__kernel__Object__init]))(var990); /* init on <var990:ReduceAction157>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var990); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var991 = NEW_nitc__parser__ReduceAction158(&type_nitc__parser__ReduceAction158);
{
((void(*)(val* self, long p0))(var991->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var991, 196l); /* goto= on <var991:ReduceAction158>*/
}
{
((void(*)(val* self))(var991->class->vft[COLOR_core__kernel__Object__init]))(var991); /* init on <var991:ReduceAction158>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var991); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var992 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var992->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var992, 197l); /* goto= on <var992:ReduceAction159>*/
}
{
((void(*)(val* self))(var992->class->vft[COLOR_core__kernel__Object__init]))(var992); /* init on <var992:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var992); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var993 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var993->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var993, 197l); /* goto= on <var993:ReduceAction159>*/
}
{
((void(*)(val* self))(var993->class->vft[COLOR_core__kernel__Object__init]))(var993); /* init on <var993:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var993); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var994 = NEW_nitc__parser__ReduceAction169(&type_nitc__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var994->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var994, 197l); /* goto= on <var994:ReduceAction169>*/
}
{
((void(*)(val* self))(var994->class->vft[COLOR_core__kernel__Object__init]))(var994); /* init on <var994:ReduceAction169>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var994); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var995 = NEW_nitc__parser__ReduceAction170(&type_nitc__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var995->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var995, 197l); /* goto= on <var995:ReduceAction170>*/
}
{
((void(*)(val* self))(var995->class->vft[COLOR_core__kernel__Object__init]))(var995); /* init on <var995:ReduceAction170>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var995); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var996 = NEW_nitc__parser__ReduceAction171(&type_nitc__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var996->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var996, 197l); /* goto= on <var996:ReduceAction171>*/
}
{
((void(*)(val* self))(var996->class->vft[COLOR_core__kernel__Object__init]))(var996); /* init on <var996:ReduceAction171>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var996); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var997 = NEW_nitc__parser__ReduceAction172(&type_nitc__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var997->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var997, 197l); /* goto= on <var997:ReduceAction172>*/
}
{
((void(*)(val* self))(var997->class->vft[COLOR_core__kernel__Object__init]))(var997); /* init on <var997:ReduceAction172>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var997); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var998 = NEW_nitc__parser__ReduceAction173(&type_nitc__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var998->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var998, 197l); /* goto= on <var998:ReduceAction173>*/
}
{
((void(*)(val* self))(var998->class->vft[COLOR_core__kernel__Object__init]))(var998); /* init on <var998:ReduceAction173>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var998); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var999 = NEW_nitc__parser__ReduceAction174(&type_nitc__parser__ReduceAction174);
{
((void(*)(val* self, long p0))(var999->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var999, 197l); /* goto= on <var999:ReduceAction174>*/
}
{
((void(*)(val* self))(var999->class->vft[COLOR_core__kernel__Object__init]))(var999); /* init on <var999:ReduceAction174>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var999); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1000 = NEW_nitc__parser__ReduceAction175(&type_nitc__parser__ReduceAction175);
{
((void(*)(val* self, long p0))(var1000->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1000, 197l); /* goto= on <var1000:ReduceAction175>*/
}
{
((void(*)(val* self))(var1000->class->vft[COLOR_core__kernel__Object__init]))(var1000); /* init on <var1000:ReduceAction175>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1000); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1001 = NEW_nitc__parser__ReduceAction176(&type_nitc__parser__ReduceAction176);
{
((void(*)(val* self, long p0))(var1001->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1001, 197l); /* goto= on <var1001:ReduceAction176>*/
}
{
((void(*)(val* self))(var1001->class->vft[COLOR_core__kernel__Object__init]))(var1001); /* init on <var1001:ReduceAction176>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1001); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1002 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1002->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1002, 197l); /* goto= on <var1002:ReduceAction159>*/
}
{
((void(*)(val* self))(var1002->class->vft[COLOR_core__kernel__Object__init]))(var1002); /* init on <var1002:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1002); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1003 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1003->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1003, 197l); /* goto= on <var1003:ReduceAction159>*/
}
{
((void(*)(val* self))(var1003->class->vft[COLOR_core__kernel__Object__init]))(var1003); /* init on <var1003:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1003); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1004 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1004->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1004, 197l); /* goto= on <var1004:ReduceAction159>*/
}
{
((void(*)(val* self))(var1004->class->vft[COLOR_core__kernel__Object__init]))(var1004); /* init on <var1004:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1004); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1005 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1005->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1005, 197l); /* goto= on <var1005:ReduceAction159>*/
}
{
((void(*)(val* self))(var1005->class->vft[COLOR_core__kernel__Object__init]))(var1005); /* init on <var1005:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1005); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1006 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1006->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1006, 197l); /* goto= on <var1006:ReduceAction159>*/
}
{
((void(*)(val* self))(var1006->class->vft[COLOR_core__kernel__Object__init]))(var1006); /* init on <var1006:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1006); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1007 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1007->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1007, 197l); /* goto= on <var1007:ReduceAction159>*/
}
{
((void(*)(val* self))(var1007->class->vft[COLOR_core__kernel__Object__init]))(var1007); /* init on <var1007:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1007); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1008 = NEW_nitc__parser__ReduceAction201(&type_nitc__parser__ReduceAction201);
{
((void(*)(val* self, long p0))(var1008->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1008, 197l); /* goto= on <var1008:ReduceAction201>*/
}
{
((void(*)(val* self))(var1008->class->vft[COLOR_core__kernel__Object__init]))(var1008); /* init on <var1008:ReduceAction201>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1008); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1009 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1009->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1009, 198l); /* goto= on <var1009:ReduceAction159>*/
}
{
((void(*)(val* self))(var1009->class->vft[COLOR_core__kernel__Object__init]))(var1009); /* init on <var1009:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1009); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1010 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1010->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1010, 198l); /* goto= on <var1010:ReduceAction159>*/
}
{
((void(*)(val* self))(var1010->class->vft[COLOR_core__kernel__Object__init]))(var1010); /* init on <var1010:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1010); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1011 = NEW_nitc__parser__ReduceAction169(&type_nitc__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var1011->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1011, 198l); /* goto= on <var1011:ReduceAction169>*/
}
{
((void(*)(val* self))(var1011->class->vft[COLOR_core__kernel__Object__init]))(var1011); /* init on <var1011:ReduceAction169>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1011); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1012 = NEW_nitc__parser__ReduceAction170(&type_nitc__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var1012->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1012, 198l); /* goto= on <var1012:ReduceAction170>*/
}
{
((void(*)(val* self))(var1012->class->vft[COLOR_core__kernel__Object__init]))(var1012); /* init on <var1012:ReduceAction170>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1012); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1013 = NEW_nitc__parser__ReduceAction171(&type_nitc__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var1013->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1013, 198l); /* goto= on <var1013:ReduceAction171>*/
}
{
((void(*)(val* self))(var1013->class->vft[COLOR_core__kernel__Object__init]))(var1013); /* init on <var1013:ReduceAction171>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1013); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1014 = NEW_nitc__parser__ReduceAction172(&type_nitc__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var1014->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1014, 198l); /* goto= on <var1014:ReduceAction172>*/
}
{
((void(*)(val* self))(var1014->class->vft[COLOR_core__kernel__Object__init]))(var1014); /* init on <var1014:ReduceAction172>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1014); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1015 = NEW_nitc__parser__ReduceAction173(&type_nitc__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var1015->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1015, 198l); /* goto= on <var1015:ReduceAction173>*/
}
{
((void(*)(val* self))(var1015->class->vft[COLOR_core__kernel__Object__init]))(var1015); /* init on <var1015:ReduceAction173>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1015); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1016 = NEW_nitc__parser__ReduceAction174(&type_nitc__parser__ReduceAction174);
{
((void(*)(val* self, long p0))(var1016->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1016, 198l); /* goto= on <var1016:ReduceAction174>*/
}
{
((void(*)(val* self))(var1016->class->vft[COLOR_core__kernel__Object__init]))(var1016); /* init on <var1016:ReduceAction174>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1016); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1017 = NEW_nitc__parser__ReduceAction175(&type_nitc__parser__ReduceAction175);
{
((void(*)(val* self, long p0))(var1017->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1017, 198l); /* goto= on <var1017:ReduceAction175>*/
}
{
((void(*)(val* self))(var1017->class->vft[COLOR_core__kernel__Object__init]))(var1017); /* init on <var1017:ReduceAction175>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1017); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1018 = NEW_nitc__parser__ReduceAction176(&type_nitc__parser__ReduceAction176);
{
((void(*)(val* self, long p0))(var1018->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1018, 198l); /* goto= on <var1018:ReduceAction176>*/
}
{
((void(*)(val* self))(var1018->class->vft[COLOR_core__kernel__Object__init]))(var1018); /* init on <var1018:ReduceAction176>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1018); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1019 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1019->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1019, 198l); /* goto= on <var1019:ReduceAction159>*/
}
{
((void(*)(val* self))(var1019->class->vft[COLOR_core__kernel__Object__init]))(var1019); /* init on <var1019:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1019); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1020 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1020->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1020, 198l); /* goto= on <var1020:ReduceAction159>*/
}
{
((void(*)(val* self))(var1020->class->vft[COLOR_core__kernel__Object__init]))(var1020); /* init on <var1020:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1020); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1021 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1021->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1021, 198l); /* goto= on <var1021:ReduceAction159>*/
}
{
((void(*)(val* self))(var1021->class->vft[COLOR_core__kernel__Object__init]))(var1021); /* init on <var1021:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1021); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1022 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1022->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1022, 198l); /* goto= on <var1022:ReduceAction159>*/
}
{
((void(*)(val* self))(var1022->class->vft[COLOR_core__kernel__Object__init]))(var1022); /* init on <var1022:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1022); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1023 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1023->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1023, 198l); /* goto= on <var1023:ReduceAction159>*/
}
{
((void(*)(val* self))(var1023->class->vft[COLOR_core__kernel__Object__init]))(var1023); /* init on <var1023:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1023); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1024 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1024->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1024, 198l); /* goto= on <var1024:ReduceAction159>*/
}
{
((void(*)(val* self))(var1024->class->vft[COLOR_core__kernel__Object__init]))(var1024); /* init on <var1024:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1024); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1025 = NEW_nitc__parser__ReduceAction201(&type_nitc__parser__ReduceAction201);
{
((void(*)(val* self, long p0))(var1025->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1025, 198l); /* goto= on <var1025:ReduceAction201>*/
}
{
((void(*)(val* self))(var1025->class->vft[COLOR_core__kernel__Object__init]))(var1025); /* init on <var1025:ReduceAction201>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1025); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1026 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1026->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1026, 199l); /* goto= on <var1026:ReduceAction159>*/
}
{
((void(*)(val* self))(var1026->class->vft[COLOR_core__kernel__Object__init]))(var1026); /* init on <var1026:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1026); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1027 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1027->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1027, 199l); /* goto= on <var1027:ReduceAction159>*/
}
{
((void(*)(val* self))(var1027->class->vft[COLOR_core__kernel__Object__init]))(var1027); /* init on <var1027:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1027); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1028 = NEW_nitc__parser__ReduceAction169(&type_nitc__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var1028->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1028, 199l); /* goto= on <var1028:ReduceAction169>*/
}
{
((void(*)(val* self))(var1028->class->vft[COLOR_core__kernel__Object__init]))(var1028); /* init on <var1028:ReduceAction169>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1028); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1029 = NEW_nitc__parser__ReduceAction170(&type_nitc__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var1029->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1029, 199l); /* goto= on <var1029:ReduceAction170>*/
}
{
((void(*)(val* self))(var1029->class->vft[COLOR_core__kernel__Object__init]))(var1029); /* init on <var1029:ReduceAction170>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1029); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1030 = NEW_nitc__parser__ReduceAction171(&type_nitc__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var1030->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1030, 199l); /* goto= on <var1030:ReduceAction171>*/
}
{
((void(*)(val* self))(var1030->class->vft[COLOR_core__kernel__Object__init]))(var1030); /* init on <var1030:ReduceAction171>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1030); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1031 = NEW_nitc__parser__ReduceAction172(&type_nitc__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var1031->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1031, 199l); /* goto= on <var1031:ReduceAction172>*/
}
{
((void(*)(val* self))(var1031->class->vft[COLOR_core__kernel__Object__init]))(var1031); /* init on <var1031:ReduceAction172>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1031); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1032 = NEW_nitc__parser__ReduceAction173(&type_nitc__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var1032->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1032, 199l); /* goto= on <var1032:ReduceAction173>*/
}
{
((void(*)(val* self))(var1032->class->vft[COLOR_core__kernel__Object__init]))(var1032); /* init on <var1032:ReduceAction173>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1032); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1033 = NEW_nitc__parser__ReduceAction174(&type_nitc__parser__ReduceAction174);
{
((void(*)(val* self, long p0))(var1033->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1033, 199l); /* goto= on <var1033:ReduceAction174>*/
}
{
((void(*)(val* self))(var1033->class->vft[COLOR_core__kernel__Object__init]))(var1033); /* init on <var1033:ReduceAction174>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1033); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1034 = NEW_nitc__parser__ReduceAction175(&type_nitc__parser__ReduceAction175);
{
((void(*)(val* self, long p0))(var1034->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1034, 199l); /* goto= on <var1034:ReduceAction175>*/
}
{
((void(*)(val* self))(var1034->class->vft[COLOR_core__kernel__Object__init]))(var1034); /* init on <var1034:ReduceAction175>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1034); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1035 = NEW_nitc__parser__ReduceAction176(&type_nitc__parser__ReduceAction176);
{
((void(*)(val* self, long p0))(var1035->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1035, 199l); /* goto= on <var1035:ReduceAction176>*/
}
{
((void(*)(val* self))(var1035->class->vft[COLOR_core__kernel__Object__init]))(var1035); /* init on <var1035:ReduceAction176>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1035); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1036 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1036->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1036, 199l); /* goto= on <var1036:ReduceAction159>*/
}
{
((void(*)(val* self))(var1036->class->vft[COLOR_core__kernel__Object__init]))(var1036); /* init on <var1036:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1036); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1037 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1037->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1037, 199l); /* goto= on <var1037:ReduceAction159>*/
}
{
((void(*)(val* self))(var1037->class->vft[COLOR_core__kernel__Object__init]))(var1037); /* init on <var1037:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1037); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1038 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1038->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1038, 199l); /* goto= on <var1038:ReduceAction159>*/
}
{
((void(*)(val* self))(var1038->class->vft[COLOR_core__kernel__Object__init]))(var1038); /* init on <var1038:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1038); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1039 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1039->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1039, 199l); /* goto= on <var1039:ReduceAction159>*/
}
{
((void(*)(val* self))(var1039->class->vft[COLOR_core__kernel__Object__init]))(var1039); /* init on <var1039:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1039); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1040 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1040->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1040, 199l); /* goto= on <var1040:ReduceAction159>*/
}
{
((void(*)(val* self))(var1040->class->vft[COLOR_core__kernel__Object__init]))(var1040); /* init on <var1040:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1040); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1041 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1041->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1041, 199l); /* goto= on <var1041:ReduceAction159>*/
}
{
((void(*)(val* self))(var1041->class->vft[COLOR_core__kernel__Object__init]))(var1041); /* init on <var1041:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1041); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1042 = NEW_nitc__parser__ReduceAction201(&type_nitc__parser__ReduceAction201);
{
((void(*)(val* self, long p0))(var1042->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1042, 199l); /* goto= on <var1042:ReduceAction201>*/
}
{
((void(*)(val* self))(var1042->class->vft[COLOR_core__kernel__Object__init]))(var1042); /* init on <var1042:ReduceAction201>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1042); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1043 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1043->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1043, 200l); /* goto= on <var1043:ReduceAction159>*/
}
{
((void(*)(val* self))(var1043->class->vft[COLOR_core__kernel__Object__init]))(var1043); /* init on <var1043:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1043); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1044 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1044->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1044, 200l); /* goto= on <var1044:ReduceAction159>*/
}
{
((void(*)(val* self))(var1044->class->vft[COLOR_core__kernel__Object__init]))(var1044); /* init on <var1044:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1044); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1045 = NEW_nitc__parser__ReduceAction169(&type_nitc__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var1045->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1045, 200l); /* goto= on <var1045:ReduceAction169>*/
}
{
((void(*)(val* self))(var1045->class->vft[COLOR_core__kernel__Object__init]))(var1045); /* init on <var1045:ReduceAction169>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1045); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1046 = NEW_nitc__parser__ReduceAction170(&type_nitc__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var1046->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1046, 200l); /* goto= on <var1046:ReduceAction170>*/
}
{
((void(*)(val* self))(var1046->class->vft[COLOR_core__kernel__Object__init]))(var1046); /* init on <var1046:ReduceAction170>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1046); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1047 = NEW_nitc__parser__ReduceAction171(&type_nitc__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var1047->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1047, 200l); /* goto= on <var1047:ReduceAction171>*/
}
{
((void(*)(val* self))(var1047->class->vft[COLOR_core__kernel__Object__init]))(var1047); /* init on <var1047:ReduceAction171>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1047); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1048 = NEW_nitc__parser__ReduceAction172(&type_nitc__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var1048->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1048, 200l); /* goto= on <var1048:ReduceAction172>*/
}
{
((void(*)(val* self))(var1048->class->vft[COLOR_core__kernel__Object__init]))(var1048); /* init on <var1048:ReduceAction172>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1048); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1049 = NEW_nitc__parser__ReduceAction173(&type_nitc__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var1049->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1049, 200l); /* goto= on <var1049:ReduceAction173>*/
}
{
((void(*)(val* self))(var1049->class->vft[COLOR_core__kernel__Object__init]))(var1049); /* init on <var1049:ReduceAction173>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1049); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1050 = NEW_nitc__parser__ReduceAction174(&type_nitc__parser__ReduceAction174);
{
((void(*)(val* self, long p0))(var1050->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1050, 200l); /* goto= on <var1050:ReduceAction174>*/
}
{
((void(*)(val* self))(var1050->class->vft[COLOR_core__kernel__Object__init]))(var1050); /* init on <var1050:ReduceAction174>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1050); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1051 = NEW_nitc__parser__ReduceAction175(&type_nitc__parser__ReduceAction175);
{
((void(*)(val* self, long p0))(var1051->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1051, 200l); /* goto= on <var1051:ReduceAction175>*/
}
{
((void(*)(val* self))(var1051->class->vft[COLOR_core__kernel__Object__init]))(var1051); /* init on <var1051:ReduceAction175>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1051); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1052 = NEW_nitc__parser__ReduceAction176(&type_nitc__parser__ReduceAction176);
{
((void(*)(val* self, long p0))(var1052->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1052, 200l); /* goto= on <var1052:ReduceAction176>*/
}
{
((void(*)(val* self))(var1052->class->vft[COLOR_core__kernel__Object__init]))(var1052); /* init on <var1052:ReduceAction176>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1052); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1053 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1053->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1053, 200l); /* goto= on <var1053:ReduceAction159>*/
}
{
((void(*)(val* self))(var1053->class->vft[COLOR_core__kernel__Object__init]))(var1053); /* init on <var1053:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1053); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1054 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1054->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1054, 200l); /* goto= on <var1054:ReduceAction159>*/
}
{
((void(*)(val* self))(var1054->class->vft[COLOR_core__kernel__Object__init]))(var1054); /* init on <var1054:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1054); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1055 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1055->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1055, 200l); /* goto= on <var1055:ReduceAction159>*/
}
{
((void(*)(val* self))(var1055->class->vft[COLOR_core__kernel__Object__init]))(var1055); /* init on <var1055:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1055); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1056 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1056->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1056, 200l); /* goto= on <var1056:ReduceAction159>*/
}
{
((void(*)(val* self))(var1056->class->vft[COLOR_core__kernel__Object__init]))(var1056); /* init on <var1056:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1056); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1057 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1057->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1057, 200l); /* goto= on <var1057:ReduceAction159>*/
}
{
((void(*)(val* self))(var1057->class->vft[COLOR_core__kernel__Object__init]))(var1057); /* init on <var1057:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1057); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1058 = NEW_nitc__parser__ReduceAction159(&type_nitc__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var1058->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1058, 200l); /* goto= on <var1058:ReduceAction159>*/
}
{
((void(*)(val* self))(var1058->class->vft[COLOR_core__kernel__Object__init]))(var1058); /* init on <var1058:ReduceAction159>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1058); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1059 = NEW_nitc__parser__ReduceAction201(&type_nitc__parser__ReduceAction201);
{
((void(*)(val* self, long p0))(var1059->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1059, 200l); /* goto= on <var1059:ReduceAction201>*/
}
{
((void(*)(val* self))(var1059->class->vft[COLOR_core__kernel__Object__init]))(var1059); /* init on <var1059:ReduceAction201>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1059); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1060 = NEW_nitc__parser__ReduceAction438(&type_nitc__parser__ReduceAction438);
{
((void(*)(val* self, long p0))(var1060->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1060, 201l); /* goto= on <var1060:ReduceAction438>*/
}
{
((void(*)(val* self))(var1060->class->vft[COLOR_core__kernel__Object__init]))(var1060); /* init on <var1060:ReduceAction438>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1060); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1061 = NEW_nitc__parser__ReduceAction440(&type_nitc__parser__ReduceAction440);
{
((void(*)(val* self, long p0))(var1061->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1061, 201l); /* goto= on <var1061:ReduceAction440>*/
}
{
((void(*)(val* self))(var1061->class->vft[COLOR_core__kernel__Object__init]))(var1061); /* init on <var1061:ReduceAction440>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1061); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1062 = NEW_nitc__parser__ReduceAction478(&type_nitc__parser__ReduceAction478);
{
((void(*)(val* self, long p0))(var1062->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1062, 202l); /* goto= on <var1062:ReduceAction478>*/
}
{
((void(*)(val* self))(var1062->class->vft[COLOR_core__kernel__Object__init]))(var1062); /* init on <var1062:ReduceAction478>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1062); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1063 = NEW_nitc__parser__ReduceAction479(&type_nitc__parser__ReduceAction479);
{
((void(*)(val* self, long p0))(var1063->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1063, 202l); /* goto= on <var1063:ReduceAction479>*/
}
{
((void(*)(val* self))(var1063->class->vft[COLOR_core__kernel__Object__init]))(var1063); /* init on <var1063:ReduceAction479>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1063); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1064 = NEW_nitc__parser__ReduceAction23(&type_nitc__parser__ReduceAction23);
{
((void(*)(val* self, long p0))(var1064->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1064, 202l); /* goto= on <var1064:ReduceAction23>*/
}
{
((void(*)(val* self))(var1064->class->vft[COLOR_core__kernel__Object__init]))(var1064); /* init on <var1064:ReduceAction23>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1064); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1065 = NEW_nitc__parser__ReduceAction1063(&type_nitc__parser__ReduceAction1063);
{
((void(*)(val* self, long p0))(var1065->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1065, 203l); /* goto= on <var1065:ReduceAction1063>*/
}
{
((void(*)(val* self))(var1065->class->vft[COLOR_core__kernel__Object__init]))(var1065); /* init on <var1065:ReduceAction1063>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1065); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1066 = NEW_nitc__parser__ReduceAction1064(&type_nitc__parser__ReduceAction1064);
{
((void(*)(val* self, long p0))(var1066->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1066, 203l); /* goto= on <var1066:ReduceAction1064>*/
}
{
((void(*)(val* self))(var1066->class->vft[COLOR_core__kernel__Object__init]))(var1066); /* init on <var1066:ReduceAction1064>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1066); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1067 = NEW_nitc__parser__ReduceAction1065(&type_nitc__parser__ReduceAction1065);
{
((void(*)(val* self, long p0))(var1067->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1067, 204l); /* goto= on <var1067:ReduceAction1065>*/
}
{
((void(*)(val* self))(var1067->class->vft[COLOR_core__kernel__Object__init]))(var1067); /* init on <var1067:ReduceAction1065>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1067); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1068 = NEW_nitc__parser__ReduceAction1066(&type_nitc__parser__ReduceAction1066);
{
((void(*)(val* self, long p0))(var1068->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1068, 204l); /* goto= on <var1068:ReduceAction1066>*/
}
{
((void(*)(val* self))(var1068->class->vft[COLOR_core__kernel__Object__init]))(var1068); /* init on <var1068:ReduceAction1066>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1068); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1069 = NEW_nitc__parser__ReduceAction1067(&type_nitc__parser__ReduceAction1067);
{
((void(*)(val* self, long p0))(var1069->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1069, 205l); /* goto= on <var1069:ReduceAction1067>*/
}
{
((void(*)(val* self))(var1069->class->vft[COLOR_core__kernel__Object__init]))(var1069); /* init on <var1069:ReduceAction1067>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1069); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1070 = NEW_nitc__parser__ReduceAction1068(&type_nitc__parser__ReduceAction1068);
{
((void(*)(val* self, long p0))(var1070->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1070, 205l); /* goto= on <var1070:ReduceAction1068>*/
}
{
((void(*)(val* self))(var1070->class->vft[COLOR_core__kernel__Object__init]))(var1070); /* init on <var1070:ReduceAction1068>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1070); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1071 = NEW_nitc__parser__ReduceAction37(&type_nitc__parser__ReduceAction37);
{
((void(*)(val* self, long p0))(var1071->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1071, 206l); /* goto= on <var1071:ReduceAction37>*/
}
{
((void(*)(val* self))(var1071->class->vft[COLOR_core__kernel__Object__init]))(var1071); /* init on <var1071:ReduceAction37>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1071); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1072 = NEW_nitc__parser__ReduceAction1070(&type_nitc__parser__ReduceAction1070);
{
((void(*)(val* self, long p0))(var1072->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1072, 206l); /* goto= on <var1072:ReduceAction1070>*/
}
{
((void(*)(val* self))(var1072->class->vft[COLOR_core__kernel__Object__init]))(var1072); /* init on <var1072:ReduceAction1070>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1072); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1073 = NEW_nitc__parser__ReduceAction45(&type_nitc__parser__ReduceAction45);
{
((void(*)(val* self, long p0))(var1073->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1073, 207l); /* goto= on <var1073:ReduceAction45>*/
}
{
((void(*)(val* self))(var1073->class->vft[COLOR_core__kernel__Object__init]))(var1073); /* init on <var1073:ReduceAction45>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1073); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1074 = NEW_nitc__parser__ReduceAction1072(&type_nitc__parser__ReduceAction1072);
{
((void(*)(val* self, long p0))(var1074->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1074, 207l); /* goto= on <var1074:ReduceAction1072>*/
}
{
((void(*)(val* self))(var1074->class->vft[COLOR_core__kernel__Object__init]))(var1074); /* init on <var1074:ReduceAction1072>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1074); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1075 = NEW_nitc__parser__ReduceAction412(&type_nitc__parser__ReduceAction412);
{
((void(*)(val* self, long p0))(var1075->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1075, 208l); /* goto= on <var1075:ReduceAction412>*/
}
{
((void(*)(val* self))(var1075->class->vft[COLOR_core__kernel__Object__init]))(var1075); /* init on <var1075:ReduceAction412>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1075); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1076 = NEW_nitc__parser__ReduceAction1074(&type_nitc__parser__ReduceAction1074);
{
((void(*)(val* self, long p0))(var1076->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1076, 208l); /* goto= on <var1076:ReduceAction1074>*/
}
{
((void(*)(val* self))(var1076->class->vft[COLOR_core__kernel__Object__init]))(var1076); /* init on <var1076:ReduceAction1074>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1076); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1077 = NEW_nitc__parser__ReduceAction1075(&type_nitc__parser__ReduceAction1075);
{
((void(*)(val* self, long p0))(var1077->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1077, 209l); /* goto= on <var1077:ReduceAction1075>*/
}
{
((void(*)(val* self))(var1077->class->vft[COLOR_core__kernel__Object__init]))(var1077); /* init on <var1077:ReduceAction1075>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1077); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1078 = NEW_nitc__parser__ReduceAction1076(&type_nitc__parser__ReduceAction1076);
{
((void(*)(val* self, long p0))(var1078->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1078, 209l); /* goto= on <var1078:ReduceAction1076>*/
}
{
((void(*)(val* self))(var1078->class->vft[COLOR_core__kernel__Object__init]))(var1078); /* init on <var1078:ReduceAction1076>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1078); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1079 = NEW_nitc__parser__ReduceAction1077(&type_nitc__parser__ReduceAction1077);
{
((void(*)(val* self, long p0))(var1079->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1079, 210l); /* goto= on <var1079:ReduceAction1077>*/
}
{
((void(*)(val* self))(var1079->class->vft[COLOR_core__kernel__Object__init]))(var1079); /* init on <var1079:ReduceAction1077>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1079); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1080 = NEW_nitc__parser__ReduceAction1078(&type_nitc__parser__ReduceAction1078);
{
((void(*)(val* self, long p0))(var1080->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1080, 210l); /* goto= on <var1080:ReduceAction1078>*/
}
{
((void(*)(val* self))(var1080->class->vft[COLOR_core__kernel__Object__init]))(var1080); /* init on <var1080:ReduceAction1078>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1080); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1081 = NEW_nitc__parser__ReduceAction150(&type_nitc__parser__ReduceAction150);
{
((void(*)(val* self, long p0))(var1081->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1081, 211l); /* goto= on <var1081:ReduceAction150>*/
}
{
((void(*)(val* self))(var1081->class->vft[COLOR_core__kernel__Object__init]))(var1081); /* init on <var1081:ReduceAction150>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1081); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1082 = NEW_nitc__parser__ReduceAction1080(&type_nitc__parser__ReduceAction1080);
{
((void(*)(val* self, long p0))(var1082->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1082, 211l); /* goto= on <var1082:ReduceAction1080>*/
}
{
((void(*)(val* self))(var1082->class->vft[COLOR_core__kernel__Object__init]))(var1082); /* init on <var1082:ReduceAction1080>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1082); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1083 = NEW_nitc__parser__ReduceAction391(&type_nitc__parser__ReduceAction391);
{
((void(*)(val* self, long p0))(var1083->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1083, 212l); /* goto= on <var1083:ReduceAction391>*/
}
{
((void(*)(val* self))(var1083->class->vft[COLOR_core__kernel__Object__init]))(var1083); /* init on <var1083:ReduceAction391>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1083); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1084 = NEW_nitc__parser__ReduceAction1082(&type_nitc__parser__ReduceAction1082);
{
((void(*)(val* self, long p0))(var1084->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1084, 212l); /* goto= on <var1084:ReduceAction1082>*/
}
{
((void(*)(val* self))(var1084->class->vft[COLOR_core__kernel__Object__init]))(var1084); /* init on <var1084:ReduceAction1082>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1084); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1085 = NEW_nitc__parser__ReduceAction391(&type_nitc__parser__ReduceAction391);
{
((void(*)(val* self, long p0))(var1085->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1085, 213l); /* goto= on <var1085:ReduceAction391>*/
}
{
((void(*)(val* self))(var1085->class->vft[COLOR_core__kernel__Object__init]))(var1085); /* init on <var1085:ReduceAction391>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1085); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1086 = NEW_nitc__parser__ReduceAction1082(&type_nitc__parser__ReduceAction1082);
{
((void(*)(val* self, long p0))(var1086->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1086, 213l); /* goto= on <var1086:ReduceAction1082>*/
}
{
((void(*)(val* self))(var1086->class->vft[COLOR_core__kernel__Object__init]))(var1086); /* init on <var1086:ReduceAction1082>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1086); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1087 = NEW_nitc__parser__ReduceAction391(&type_nitc__parser__ReduceAction391);
{
((void(*)(val* self, long p0))(var1087->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1087, 214l); /* goto= on <var1087:ReduceAction391>*/
}
{
((void(*)(val* self))(var1087->class->vft[COLOR_core__kernel__Object__init]))(var1087); /* init on <var1087:ReduceAction391>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1087); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1088 = NEW_nitc__parser__ReduceAction1082(&type_nitc__parser__ReduceAction1082);
{
((void(*)(val* self, long p0))(var1088->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1088, 214l); /* goto= on <var1088:ReduceAction1082>*/
}
{
((void(*)(val* self))(var1088->class->vft[COLOR_core__kernel__Object__init]))(var1088); /* init on <var1088:ReduceAction1082>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1088); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1089 = NEW_nitc__parser__ReduceAction452(&type_nitc__parser__ReduceAction452);
{
((void(*)(val* self, long p0))(var1089->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1089, 215l); /* goto= on <var1089:ReduceAction452>*/
}
{
((void(*)(val* self))(var1089->class->vft[COLOR_core__kernel__Object__init]))(var1089); /* init on <var1089:ReduceAction452>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1089); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1090 = NEW_nitc__parser__ReduceAction1088(&type_nitc__parser__ReduceAction1088);
{
((void(*)(val* self, long p0))(var1090->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1090, 215l); /* goto= on <var1090:ReduceAction1088>*/
}
{
((void(*)(val* self))(var1090->class->vft[COLOR_core__kernel__Object__init]))(var1090); /* init on <var1090:ReduceAction1088>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1090); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1091 = NEW_nitc__parser__ReduceAction412(&type_nitc__parser__ReduceAction412);
{
((void(*)(val* self, long p0))(var1091->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1091, 216l); /* goto= on <var1091:ReduceAction412>*/
}
{
((void(*)(val* self))(var1091->class->vft[COLOR_core__kernel__Object__init]))(var1091); /* init on <var1091:ReduceAction412>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1091); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1092 = NEW_nitc__parser__ReduceAction1074(&type_nitc__parser__ReduceAction1074);
{
((void(*)(val* self, long p0))(var1092->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1092, 216l); /* goto= on <var1092:ReduceAction1074>*/
}
{
((void(*)(val* self))(var1092->class->vft[COLOR_core__kernel__Object__init]))(var1092); /* init on <var1092:ReduceAction1074>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1092); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1093 = NEW_nitc__parser__ReduceAction391(&type_nitc__parser__ReduceAction391);
{
((void(*)(val* self, long p0))(var1093->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1093, 217l); /* goto= on <var1093:ReduceAction391>*/
}
{
((void(*)(val* self))(var1093->class->vft[COLOR_core__kernel__Object__init]))(var1093); /* init on <var1093:ReduceAction391>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1093); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1094 = NEW_nitc__parser__ReduceAction1082(&type_nitc__parser__ReduceAction1082);
{
((void(*)(val* self, long p0))(var1094->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1094, 217l); /* goto= on <var1094:ReduceAction1082>*/
}
{
((void(*)(val* self))(var1094->class->vft[COLOR_core__kernel__Object__init]))(var1094); /* init on <var1094:ReduceAction1082>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1094); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1095 = NEW_nitc__parser__ReduceAction391(&type_nitc__parser__ReduceAction391);
{
((void(*)(val* self, long p0))(var1095->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1095, 218l); /* goto= on <var1095:ReduceAction391>*/
}
{
((void(*)(val* self))(var1095->class->vft[COLOR_core__kernel__Object__init]))(var1095); /* init on <var1095:ReduceAction391>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1095); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1096 = NEW_nitc__parser__ReduceAction1082(&type_nitc__parser__ReduceAction1082);
{
((void(*)(val* self, long p0))(var1096->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1096, 218l); /* goto= on <var1096:ReduceAction1082>*/
}
{
((void(*)(val* self))(var1096->class->vft[COLOR_core__kernel__Object__init]))(var1096); /* init on <var1096:ReduceAction1082>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1096); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1097 = NEW_nitc__parser__ReduceAction453(&type_nitc__parser__ReduceAction453);
{
((void(*)(val* self, long p0))(var1097->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1097, 219l); /* goto= on <var1097:ReduceAction453>*/
}
{
((void(*)(val* self))(var1097->class->vft[COLOR_core__kernel__Object__init]))(var1097); /* init on <var1097:ReduceAction453>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1097); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1098 = NEW_nitc__parser__ReduceAction1096(&type_nitc__parser__ReduceAction1096);
{
((void(*)(val* self, long p0))(var1098->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1098, 219l); /* goto= on <var1098:ReduceAction1096>*/
}
{
((void(*)(val* self))(var1098->class->vft[COLOR_core__kernel__Object__init]))(var1098); /* init on <var1098:ReduceAction1096>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1098); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1099 = NEW_nitc__parser__ReduceAction1097(&type_nitc__parser__ReduceAction1097);
{
((void(*)(val* self, long p0))(var1099->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1099, 220l); /* goto= on <var1099:ReduceAction1097>*/
}
{
((void(*)(val* self))(var1099->class->vft[COLOR_core__kernel__Object__init]))(var1099); /* init on <var1099:ReduceAction1097>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1099); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1100 = NEW_nitc__parser__ReduceAction1098(&type_nitc__parser__ReduceAction1098);
{
((void(*)(val* self, long p0))(var1100->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1100, 220l); /* goto= on <var1100:ReduceAction1098>*/
}
{
((void(*)(val* self))(var1100->class->vft[COLOR_core__kernel__Object__init]))(var1100); /* init on <var1100:ReduceAction1098>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1100); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1101 = NEW_nitc__parser__ReduceAction475(&type_nitc__parser__ReduceAction475);
{
((void(*)(val* self, long p0))(var1101->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1101, 221l); /* goto= on <var1101:ReduceAction475>*/
}
{
((void(*)(val* self))(var1101->class->vft[COLOR_core__kernel__Object__init]))(var1101); /* init on <var1101:ReduceAction475>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1101); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var1102 = NEW_nitc__parser__ReduceAction494(&type_nitc__parser__ReduceAction494);
{
((void(*)(val* self, long p0))(var1102->class->vft[COLOR_nitc__parser_work__ReduceAction__goto_61d]))(var1102, 221l); /* goto= on <var1102:ReduceAction494>*/
}
{
((void(*)(val* self))(var1102->class->vft[COLOR_core__kernel__Object__init]))(var1102); /* init on <var1102:ReduceAction494>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_reduce_table, var1102); /* Direct call array$Array$add on <var_reduce_table:Array[ReduceAction]>*/
}
var = var_reduce_table;
goto RET_LABEL;
RET_LABEL:;
return var;
}
