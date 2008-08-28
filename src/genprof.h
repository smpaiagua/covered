#ifndef __GENPROF_H__
#define __GENPROF_H__

/*
 Copyright (c) 2006 Trevor Williams

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by the Free Software
 Foundation; either version 2 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 See the GNU General Public License for more details.

 You should have received a copy of the GNU General Public License along with this program;
 if not, write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

/*!
 \file    genprof.h
 \author  Trevor Williams  (phase1geo@gmail.com)
 \date    12/10/2007
*/

#include "defines.h"

#define NUM_PROFILES 963

#ifdef DEBUG
#define UNREGISTERED 0
#define ARC_FIND_FROM_STATE 1
#define ARC_FIND_TO_STATE 2
#define ARC_FIND_ARC 3
#define ARC_CREATE 4
#define ARC_ADD 5
#define ARC_STATE_HITS 6
#define ARC_TRANSITION_HITS 7
#define ARC_TRANSITION_EXCLUDED 8
#define ARC_GET_STATS 9
#define ARC_DB_WRITE 10
#define ARC_DB_READ 11
#define ARC_DB_MERGE 12
#define ARC_MERGE 13
#define ARC_GET_STATES 14
#define ARC_GET_TRANSITIONS 15
#define ARC_ARE_ANY_EXCLUDED 16
#define ARC_DEALLOC 17
#define ASSERTION_PARSE 18
#define ASSERTION_PARSE_ATTR 19
#define ASSERTION_GET_STATS 20
#define ASSERTION_DISPLAY_INSTANCE_SUMMARY 21
#define ASSERTION_INSTANCE_SUMMARY 22
#define ASSERTION_DISPLAY_FUNIT_SUMMARY 23
#define ASSERTION_FUNIT_SUMMARY 24
#define ASSERTION_DISPLAY_VERBOSE 25
#define ASSERTION_INSTANCE_VERBOSE 26
#define ASSERTION_FUNIT_VERBOSE 27
#define ASSERTION_REPORT 28
#define ASSERTION_GET_FUNIT_SUMMARY 29
#define ASSERTION_COLLECT 30
#define ASSERTION_GET_COVERAGE 31
#define ATTRIBUTE_CREATE 32
#define ATTRIBUTE_PARSE 33
#define ATTRIBUTE_DEALLOC 34
#define BIND_ADD 35
#define BIND_APPEND_FSM_EXPR 36
#define BIND_REMOVE 37
#define BIND_FIND_SIG_NAME 38
#define BIND_PARAM 39
#define BIND_SIGNAL 40
#define BIND_TASK_FUNCTION_PORTS 41
#define BIND_TASK_FUNCTION_NAMEDBLOCK 42
#define BIND_PERFORM 43
#define BIND_DEALLOC 44
#define CODEGEN_CREATE_EXPR_HELPER 45
#define CODEGEN_CREATE_EXPR 46
#define CODEGEN_GEN_EXPR 47
#define COMBINATION_CALC_DEPTH 48
#define COMBINATION_DOES_MULTI_EXP_NEED_UL 49
#define COMBINATION_MULTI_EXPR_CALC 50
#define COMBINATION_IS_EXPR_MULTI_NODE 51
#define COMBINATION_GET_TREE_STATS 52
#define COMBINATION_RESET_COUNTED_EXPRS 53
#define COMBINATION_RESET_COUNTED_EXPR_TREE 54
#define COMBINATION_GET_STATS 55
#define COMBINATION_GET_FUNIT_SUMMARY 56
#define COMBINATION_GET_INST_SUMMARY 57
#define COMBINATION_DISPLAY_INSTANCE_SUMMARY 58
#define COMBINATION_INSTANCE_SUMMARY 59
#define COMBINATION_DISPLAY_FUNIT_SUMMARY 60
#define COMBINATION_FUNIT_SUMMARY 61
#define COMBINATION_DRAW_LINE 62
#define COMBINATION_DRAW_CENTERED_LINE 63
#define COMBINATION_UNDERLINE_TREE 64
#define COMBINATION_PREP_LINE 65
#define COMBINATION_UNDERLINE 66
#define COMBINATION_UNARY 67
#define COMBINATION_EVENT 68
#define COMBINATION_TWO_VARS 69
#define COMBINATION_MULTI_VAR_EXPRS 70
#define COMBINATION_MULTI_EXPR_OUTPUT_LENGTH 71
#define COMBINATION_MULTI_EXPR_OUTPUT 72
#define COMBINATION_MULTI_VARS 73
#define COMBINATION_GET_MISSED_EXPR 74
#define COMBINATION_LIST_MISSED 75
#define COMBINATION_OUTPUT_EXPR 76
#define COMBINATION_DISPLAY_VERBOSE 77
#define COMBINATION_INSTANCE_VERBOSE 78
#define COMBINATION_FUNIT_VERBOSE 79
#define COMBINATION_COLLECT 80
#define COMBINATION_GET_EXCLUDE_LIST 81
#define COMBINATION_GET_EXPRESSION 82
#define COMBINATION_GET_COVERAGE 83
#define COMBINATION_REPORT 84
#define DB_CREATE 85
#define DB_CLOSE 86
#define DB_CHECK_FOR_TOP_MODULE 87
#define DB_WRITE 88
#define DB_READ 89
#define DB_MERGE_FUNITS 90
#define DB_SCALE_TO_PRECISION 91
#define DB_CREATE_UNNAMED_SCOPE 92
#define DB_IS_UNNAMED_SCOPE 93
#define DB_SET_TIMESCALE 94
#define DB_GET_CURR_FUNIT 95
#define DB_GEN_EXCLUSION_ID 96
#define DB_ADD_INSTANCE 97
#define DB_ADD_MODULE 98
#define DB_END_MODULE 99
#define DB_ADD_FUNCTION_TASK_NAMEDBLOCK 100
#define DB_END_FUNCTION_TASK_NAMEDBLOCK 101
#define DB_ADD_DECLARED_PARAM 102
#define DB_ADD_OVERRIDE_PARAM 103
#define DB_ADD_VECTOR_PARAM 104
#define DB_ADD_DEFPARAM 105
#define DB_ADD_SIGNAL 106
#define DB_ADD_ENUM 107
#define DB_END_ENUM_LIST 108
#define DB_ADD_TYPEDEF 109
#define DB_FIND_SIGNAL 110
#define DB_ADD_GEN_ITEM_BLOCK 111
#define DB_FIND_GEN_ITEM 112
#define DB_FIND_TYPEDEF 113
#define DB_GET_CURR_GEN_BLOCK 114
#define DB_CURR_SIGNAL_COUNT 115
#define DB_CREATE_EXPRESSION 116
#define DB_BIND_EXPR_TREE 117
#define DB_CREATE_EXPR_FROM_STATIC 118
#define DB_ADD_EXPRESSION 119
#define DB_CREATE_SENSITIVITY_LIST 120
#define DB_PARALLELIZE_STATEMENT 121
#define DB_CREATE_STATEMENT 122
#define DB_ADD_STATEMENT 123
#define DB_REMOVE_STATEMENT_FROM_CURRENT_FUNIT 124
#define DB_REMOVE_STATEMENT 125
#define DB_CONNECT_STATEMENT_TRUE 126
#define DB_CONNECT_STATEMENT_FALSE 127
#define DB_GEN_ITEM_CONNECT_TRUE 128
#define DB_GEN_ITEM_CONNECT_FALSE 129
#define DB_GEN_ITEM_CONNECT 130
#define DB_STATEMENT_CONNECT 131
#define DB_CREATE_ATTR_PARAM 132
#define DB_PARSE_ATTRIBUTE 133
#define DB_REMOVE_STMT_BLKS_CALLING_STATEMENT 134
#define DB_GEN_CURR_INST_SCOPE 135
#define DB_SYNC_CURR_INSTANCE 136
#define DB_SET_VCD_SCOPE 137
#define DB_VCD_UPSCOPE 138
#define DB_ASSIGN_SYMBOL 139
#define DB_SET_SYMBOL_CHAR 140
#define DB_SET_SYMBOL_STRING 141
#define DB_DO_TIMESTEP 142
#define ENUMERATE_ADD_ITEM 143
#define ENUMERATE_END_LIST 144
#define ENUMERATE_RESOLVE 145
#define ENUMERATE_DEALLOC 146
#define ENUMERATE_DEALLOC_LIST 147
#define EXCLUDE_EXPR_ASSIGN_AND_RECALC 148
#define EXCLUDE_SIG_ASSIGN_AND_RECALC 149
#define EXCLUDE_ARC_ASSIGN_AND_RECALC 150
#define EXCLUDE_IS_LINE_EXCLUDED 151
#define EXCLUDE_SET_LINE_EXCLUDE 152
#define EXCLUDE_IS_TOGGLE_EXCLUDED 153
#define EXCLUDE_SET_TOGGLE_EXCLUDE 154
#define EXCLUDE_IS_COMB_EXCLUDED 155
#define EXCLUDE_SET_COMB_EXCLUDE 156
#define EXCLUDE_IS_FSM_EXCLUDED 157
#define EXCLUDE_SET_FSM_EXCLUDE 158
#define EXCLUDE_IS_ASSERT_EXCLUDED 159
#define EXCLUDE_SET_ASSERT_EXCLUDE 160
#define EXPRESSION_CREATE_TMP_VECS 161
#define EXPRESSION_CREATE_VALUE 162
#define EXPRESSION_CREATE 163
#define EXPRESSION_SET_VALUE 164
#define EXPRESSION_SET_SIGNED 165
#define EXPRESSION_RESIZE 166
#define EXPRESSION_GET_ID 167
#define EXPRESSION_GET_FIRST_LINE_EXPR 168
#define EXPRESSION_GET_LAST_LINE_EXPR 169
#define EXPRESSION_GET_CURR_DIMENSION 170
#define EXPRESSION_FIND_RHS_SIGS 171
#define EXPRESSION_FIND_PARAMS 172
#define EXPRESSION_FIND_ULINE_ID 173
#define EXPRESSION_FIND_EXPR 174
#define EXPRESSION_CONTAINS_EXPR_CALLING_STMT 175
#define EXPRESSION_GET_ROOT_STATEMENT 176
#define EXPRESSION_ASSIGN_EXPR_IDS 177
#define EXPRESSION_DB_WRITE 178
#define EXPRESSION_DB_WRITE_TREE 179
#define EXPRESSION_DB_READ 180
#define EXPRESSION_DB_MERGE 181
#define EXPRESSION_MERGE 182
#define EXPRESSION_STRING_OP 183
#define EXPRESSION_STRING 184
#define EXPRESSION_OP_FUNC__XOR 185
#define EXPRESSION_OP_FUNC__XOR_A 186
#define EXPRESSION_OP_FUNC__MULTIPLY 187
#define EXPRESSION_OP_FUNC__MULTIPLY_A 188
#define EXPRESSION_OP_FUNC__DIVIDE 189
#define EXPRESSION_OP_FUNC__DIVIDE_A 190
#define EXPRESSION_OP_FUNC__MOD 191
#define EXPRESSION_OP_FUNC__MOD_A 192
#define EXPRESSION_OP_FUNC__ADD 193
#define EXPRESSION_OP_FUNC__ADD_A 194
#define EXPRESSION_OP_FUNC__SUBTRACT 195
#define EXPRESSION_OP_FUNC__SUB_A 196
#define EXPRESSION_OP_FUNC__AND 197
#define EXPRESSION_OP_FUNC__AND_A 198
#define EXPRESSION_OP_FUNC__OR 199
#define EXPRESSION_OP_FUNC__OR_A 200
#define EXPRESSION_OP_FUNC__NAND 201
#define EXPRESSION_OP_FUNC__NOR 202
#define EXPRESSION_OP_FUNC__NXOR 203
#define EXPRESSION_OP_FUNC__LT 204
#define EXPRESSION_OP_FUNC__GT 205
#define EXPRESSION_OP_FUNC__LSHIFT 206
#define EXPRESSION_OP_FUNC__LSHIFT_A 207
#define EXPRESSION_OP_FUNC__RSHIFT 208
#define EXPRESSION_OP_FUNC__RSHIFT_A 209
#define EXPRESSION_OP_FUNC__ARSHIFT 210
#define EXPRESSION_OP_FUNC__ARSHIFT_A 211
#define EXPRESSION_OP_FUNC__EQ 212
#define EXPRESSION_OP_FUNC__CEQ 213
#define EXPRESSION_OP_FUNC__LE 214
#define EXPRESSION_OP_FUNC__GE 215
#define EXPRESSION_OP_FUNC__NE 216
#define EXPRESSION_OP_FUNC__CNE 217
#define EXPRESSION_OP_FUNC__LOR 218
#define EXPRESSION_OP_FUNC__LAND 219
#define EXPRESSION_OP_FUNC__COND 220
#define EXPRESSION_OP_FUNC__COND_SEL 221
#define EXPRESSION_OP_FUNC__UINV 222
#define EXPRESSION_OP_FUNC__UAND 223
#define EXPRESSION_OP_FUNC__UNOT 224
#define EXPRESSION_OP_FUNC__UOR 225
#define EXPRESSION_OP_FUNC__UXOR 226
#define EXPRESSION_OP_FUNC__UNAND 227
#define EXPRESSION_OP_FUNC__UNOR 228
#define EXPRESSION_OP_FUNC__UNXOR 229
#define EXPRESSION_OP_FUNC__NULL 230
#define EXPRESSION_OP_FUNC__SIG 231
#define EXPRESSION_OP_FUNC__SBIT 232
#define EXPRESSION_OP_FUNC__MBIT 233
#define EXPRESSION_OP_FUNC__EXPAND 234
#define EXPRESSION_OP_FUNC__LIST 235
#define EXPRESSION_OP_FUNC__CONCAT 236
#define EXPRESSION_OP_FUNC__PEDGE 237
#define EXPRESSION_OP_FUNC__NEDGE 238
#define EXPRESSION_OP_FUNC__AEDGE 239
#define EXPRESSION_OP_FUNC__EOR 240
#define EXPRESSION_OP_FUNC__SLIST 241
#define EXPRESSION_OP_FUNC__DELAY 242
#define EXPRESSION_OP_FUNC__TRIGGER 243
#define EXPRESSION_OP_FUNC__CASE 244
#define EXPRESSION_OP_FUNC__CASEX 245
#define EXPRESSION_OP_FUNC__CASEZ 246
#define EXPRESSION_OP_FUNC__DEFAULT 247
#define EXPRESSION_OP_FUNC__BASSIGN 248
#define EXPRESSION_OP_FUNC__FUNC_CALL 249
#define EXPRESSION_OP_FUNC__TASK_CALL 250
#define EXPRESSION_OP_FUNC__NB_CALL 251
#define EXPRESSION_OP_FUNC__FORK 252
#define EXPRESSION_OP_FUNC__JOIN 253
#define EXPRESSION_OP_FUNC__DISABLE 254
#define EXPRESSION_OP_FUNC__REPEAT 255
#define EXPRESSION_OP_FUNC__EXPONENT 256
#define EXPRESSION_OP_FUNC__PASSIGN 257
#define EXPRESSION_OP_FUNC__MBIT_POS 258
#define EXPRESSION_OP_FUNC__MBIT_NEG 259
#define EXPRESSION_OP_FUNC__NEGATE 260
#define EXPRESSION_OP_FUNC__IINC 261
#define EXPRESSION_OP_FUNC__PINC 262
#define EXPRESSION_OP_FUNC__IDEC 263
#define EXPRESSION_OP_FUNC__PDEC 264
#define EXPRESSION_OP_FUNC__DLY_ASSIGN 265
#define EXPRESSION_OP_FUNC__DLY_OP 266
#define EXPRESSION_OP_FUNC__REPEAT_DLY 267
#define EXPRESSION_OP_FUNC__DIM 268
#define EXPRESSION_OP_FUNC__WAIT 269
#define EXPRESSION_OP_FUNC__FINISH 270
#define EXPRESSION_OP_FUNC__STOP 271
#define EXPRESSION_OPERATE 272
#define EXPRESSION_OPERATE_RECURSIVELY 273
#define EXPRESSION_IS_STATIC_ONLY 274
#define EXPRESSION_IS_ASSIGNED 275
#define EXPRESSION_IS_BIT_SELECT 276
#define EXPRESSION_IS_LAST_SELECT 277
#define EXPRESSION_IS_IN_RASSIGN 278
#define EXPRESSION_SET_ASSIGNED 279
#define EXPRESSION_SET_CHANGED 280
#define EXPRESSION_ASSIGN 281
#define EXPRESSION_DEALLOC 282
#define FSM_CREATE 283
#define FSM_ADD_ARC 284
#define FSM_CREATE_TABLES 285
#define FSM_DB_WRITE 286
#define FSM_DB_READ 287
#define FSM_DB_MERGE 288
#define FSM_MERGE 289
#define FSM_TABLE_SET 290
#define FSM_GET_STATS 291
#define FSM_GET_FUNIT_SUMMARY 292
#define FSM_GET_INST_SUMMARY 293
#define FSM_GATHER_SIGNALS 294
#define FSM_COLLECT 295
#define FSM_GET_COVERAGE 296
#define FSM_DISPLAY_INSTANCE_SUMMARY 297
#define FSM_INSTANCE_SUMMARY 298
#define FSM_DISPLAY_FUNIT_SUMMARY 299
#define FSM_FUNIT_SUMMARY 300
#define FSM_DISPLAY_STATE_VERBOSE 301
#define FSM_DISPLAY_ARC_VERBOSE 302
#define FSM_DISPLAY_VERBOSE 303
#define FSM_INSTANCE_VERBOSE 304
#define FSM_FUNIT_VERBOSE 305
#define FSM_REPORT 306
#define FSM_DEALLOC 307
#define FSM_ARG_PARSE_STATE 308
#define FSM_ARG_PARSE 309
#define FSM_ARG_PARSE_VALUE 310
#define FSM_ARG_PARSE_TRANS 311
#define FSM_ARG_PARSE_ATTR 312
#define FSM_VAR_ADD 313
#define FSM_VAR_IS_OUTPUT_STATE 314
#define FSM_VAR_BIND_EXPR 315
#define FSM_VAR_ADD_EXPR 316
#define FSM_VAR_BIND_STMT 317
#define FSM_VAR_BIND_ADD 318
#define FSM_VAR_STMT_ADD 319
#define FSM_VAR_BIND 320
#define FSM_VAR_DEALLOC 321
#define FSM_VAR_REMOVE 322
#define FSM_VAR_CLEANUP 323
#define FUNC_ITER_DISPLAY 324
#define FUNC_ITER_SORT 325
#define FUNC_ITER_COUNT_STMT_ITERS 326
#define FUNC_ITER_ADD_STMT_ITERS 327
#define FUNC_ITER_ADD_SIG_LINKS 328
#define FUNC_ITER_INIT 329
#define FUNC_ITER_GET_NEXT_STATEMENT 330
#define FUNC_ITER_GET_NEXT_SIGNAL 331
#define FUNC_ITER_DEALLOC 332
#define FUNIT_INIT 333
#define FUNIT_CREATE 334
#define FUNIT_GET_CURR_MODULE 335
#define FUNIT_GET_CURR_MODULE_SAFE 336
#define FUNIT_GET_CURR_FUNCTION 337
#define FUNIT_GET_CURR_TASK 338
#define FUNIT_GET_PORT_COUNT 339
#define FUNIT_FIND_PARAM 340
#define FUNIT_FIND_SIGNAL 341
#define FUNIT_REMOVE_STMT_BLKS_CALLING_STMT 342
#define FUNIT_GEN_TASK_FUNCTION_NAMEDBLOCK_NAME 343
#define FUNIT_SIZE_ELEMENTS 344
#define FUNIT_DB_WRITE 345
#define FUNIT_DB_READ 346
#define FUNIT_DB_MERGE 347
#define FUNIT_MERGE 348
#define FUNIT_FLATTEN_NAME 349
#define FUNIT_FIND_BY_ID 350
#define FUNIT_IS_TOP_MODULE 351
#define FUNIT_IS_UNNAMED 352
#define FUNIT_IS_UNNAMED_CHILD_OF 353
#define FUNIT_IS_CHILD_OF 354
#define FUNIT_DISPLAY_SIGNALS 355
#define FUNIT_DISPLAY_EXPRESSIONS 356
#define STATEMENT_ADD_THREAD 357
#define FUNIT_PUSH_THREADS 358
#define STATEMENT_DELETE_THREAD 359
#define FUNIT_CLEAN 360
#define FUNIT_DEALLOC 361
#define GEN_ITEM_STRINGIFY 362
#define GEN_ITEM_DISPLAY 363
#define GEN_ITEM_DISPLAY_BLOCK_HELPER 364
#define GEN_ITEM_DISPLAY_BLOCK 365
#define GEN_ITEM_COMPARE 366
#define GEN_ITEM_FIND 367
#define GEN_ITEM_REMOVE_IF_CONTAINS_EXPR_CALLING_STMT 368
#define GEN_ITEM_GET_GENVAR 369
#define GEN_ITEM_VARNAME_CONTAINS_GENVAR 370
#define GEN_ITEM_CALC_SIGNAL_NAME 371
#define GEN_ITEM_CREATE_EXPR 372
#define GEN_ITEM_CREATE_SIG 373
#define GEN_ITEM_CREATE_STMT 374
#define GEN_ITEM_CREATE_INST 375
#define GEN_ITEM_CREATE_TFN 376
#define GEN_ITEM_CREATE_BIND 377
#define GEN_ITEM_RESIZE_STMTS_AND_SIGS 378
#define GEN_ITEM_ASSIGN_IDS 379
#define GEN_ITEM_DB_WRITE 380
#define GEN_ITEM_DB_WRITE_EXPR_TREE 381
#define GEN_ITEM_CONNECT 382
#define GEN_ITEM_RESOLVE 383
#define GEN_ITEM_BIND 384
#define GENERATE_RESOLVE 385
#define GENERATE_REMOVE_STMT_HELPER 386
#define GENERATE_REMOVE_STMT 387
#define GEN_ITEM_DEALLOC 388
#define INFO_INITIALIZE 389
#define INFO_SET_VECTOR_ELEM_SIZE 390
#define INFO_DB_WRITE 391
#define INFO_DB_READ 392
#define ARGS_DB_READ 393
#define MESSAGE_DB_READ 394
#define MERGED_CDD_DB_READ 395
#define INFO_DEALLOC 396
#define INSTANCE_DISPLAY_TREE_HELPER 397
#define INSTANCE_DISPLAY_TREE 398
#define INSTANCE_CREATE 399
#define INSTANCE_GEN_SCOPE 400
#define INSTANCE_COMPARE 401
#define INSTANCE_FIND_SCOPE 402
#define INSTANCE_FIND_BY_FUNIT 403
#define INSTANCE_ADD_CHILD 404
#define INSTANCE_COPY 405
#define INSTANCE_ATTACH_CHILD 406
#define INSTANCE_PARSE_ADD 407
#define INSTANCE_RESOLVE_INST 408
#define INSTANCE_RESOLVE_HELPER 409
#define INSTANCE_RESOLVE 410
#define INSTANCE_READ_ADD 411
#define INSTANCE_DB_WRITE 412
#define INSTANCE_FLATTEN_HELPER 413
#define INSTANCE_FLATTEN 414
#define INSTANCE_REMOVE_STMT_BLKS_CALLING_STMT 415
#define INSTANCE_REMOVE_PARMS_WITH_EXPR 416
#define INSTANCE_DEALLOC_SINGLE 417
#define INSTANCE_DEALLOC_TREE 418
#define INSTANCE_DEALLOC 419
#define STMT_ITER_RESET 420
#define STMT_ITER_COPY 421
#define STMT_ITER_NEXT 422
#define STMT_ITER_REVERSE 423
#define STMT_ITER_FIND_HEAD 424
#define STMT_ITER_GET_NEXT_IN_ORDER 425
#define STMT_ITER_GET_LINE_BEFORE 426
#define LEXER_KEYWORD_1995_CODE 427
#define LEXER_KEYWORD_2001_CODE 428
#define LEXER_KEYWORD_SV_CODE 429
#define LEXER_CSTRING_A 430
#define LEXER_KEYWORD_A 431
#define LEXER_ESCAPED_NAME 432
#define LEXER_SYSTEM_CALL 433
#define LINE_DIRECTIVE 434
#define LINE_DIRECTIVE2 435
#define PROCESS_TIMESCALE_TOKEN 436
#define PROCESS_TIMESCALE 437
#define LEXER_YYWRAP 438
#define RESET_LEXER 439
#define CHECK_FOR_PRAGMA 440
#define LINE_GET_STATS 441
#define LINE_COLLECT 442
#define LINE_GET_FUNIT_SUMMARY 443
#define LINE_GET_INST_SUMMARY 444
#define LINE_DISPLAY_INSTANCE_SUMMARY 445
#define LINE_INSTANCE_SUMMARY 446
#define LINE_DISPLAY_FUNIT_SUMMARY 447
#define LINE_FUNIT_SUMMARY 448
#define LINE_DISPLAY_VERBOSE 449
#define LINE_INSTANCE_VERBOSE 450
#define LINE_FUNIT_VERBOSE 451
#define LINE_REPORT 452
#define STR_LINK_ADD 453
#define STMT_LINK_ADD_HEAD 454
#define STMT_LINK_ADD_TAIL 455
#define STMT_LINK_MERGE 456
#define EXP_LINK_ADD 457
#define SIG_LINK_ADD 458
#define FSM_LINK_ADD 459
#define FUNIT_LINK_ADD 460
#define GITEM_LINK_ADD 461
#define INST_LINK_ADD 462
#define STR_LINK_FIND 463
#define STMT_LINK_FIND 464
#define EXP_LINK_FIND 465
#define SIG_LINK_FIND 466
#define FSM_LINK_FIND 467
#define FUNIT_LINK_FIND 468
#define GITEM_LINK_FIND 469
#define INST_LINK_FIND_BY_SCOPE 470
#define INST_LINK_FIND_BY_FUNIT 471
#define STR_LINK_REMOVE 472
#define EXP_LINK_REMOVE 473
#define GITEM_LINK_REMOVE 474
#define FUNIT_LINK_REMOVE 475
#define INST_LINK_FLATTEN 476
#define STR_LINK_DELETE_LIST 477
#define STMT_LINK_UNLINK 478
#define STMT_LINK_DELETE_LIST 479
#define EXP_LINK_DELETE_LIST 480
#define SIG_LINK_DELETE_LIST 481
#define FSM_LINK_DELETE_LIST 482
#define FUNIT_LINK_DELETE_LIST 483
#define GITEM_LINK_DELETE_LIST 484
#define INST_LINK_DELETE_LIST 485
#define VCDID 486
#define VCD_CALLBACK 487
#define LXT_PARSE 488
#define LXT2_RD_EXPAND_INTEGER_TO_BITS 489
#define LXT2_RD_EXPAND_BITS_TO_INTEGER 490
#define LXT2_RD_ITER_RADIX 491
#define LXT2_RD_ITER_RADIX0 492
#define LXT2_RD_BUILD_RADIX 493
#define LXT2_RD_REGENERATE_PROCESS_MASK 494
#define LXT2_RD_PROCESS_BLOCK 495
#define LXT2_RD_INIT 496
#define LXT2_RD_CLOSE 497
#define LXT2_RD_GET_FACNAME 498
#define LXT2_RD_ITER_BLOCKS 499
#define LXT2_RD_LIMIT_TIME_RANGE 500
#define LXT2_RD_UNLIMIT_TIME_RANGE 501
#define MEMORY_GET_STAT 502
#define MEMORY_GET_STATS 503
#define MEMORY_GET_FUNIT_SUMMARY 504
#define MEMORY_GET_INST_SUMMARY 505
#define MEMORY_CREATE_PDIM_BIT_ARRAY 506
#define MEMORY_GET_MEM_COVERAGE 507
#define MEMORY_GET_COVERAGE 508
#define MEMORY_COLLECT 509
#define MEMORY_DISPLAY_TOGGLE_INSTANCE_SUMMARY 510
#define MEMORY_TOGGLE_INSTANCE_SUMMARY 511
#define MEMORY_DISPLAY_AE_INSTANCE_SUMMARY 512
#define MEMORY_AE_INSTANCE_SUMMARY 513
#define MEMORY_DISPLAY_TOGGLE_FUNIT_SUMMARY 514
#define MEMORY_TOGGLE_FUNIT_SUMMARY 515
#define MEMORY_DISPLAY_AE_FUNIT_SUMMARY 516
#define MEMORY_AE_FUNIT_SUMMARY 517
#define MEMORY_DISPLAY_MEMORY 518
#define MEMORY_DISPLAY_VERBOSE 519
#define MEMORY_INSTANCE_VERBOSE 520
#define MEMORY_FUNIT_VERBOSE 521
#define MEMORY_REPORT 522
#define COMMAND_MERGE 523
#define OBFUSCATE_SET_MODE 524
#define OBFUSCATE_NAME 525
#define OBFUSCATE_DEALLOC 526
#define OVL_IS_ASSERTION_NAME 527
#define OVL_IS_ASSERTION_MODULE 528
#define OVL_IS_COVERAGE_POINT 529
#define OVL_ADD_ASSERTIONS_TO_NO_SCORE_LIST 530
#define OVL_GET_FUNIT_STATS 531
#define OVL_GET_COVERAGE_POINT 532
#define OVL_DISPLAY_VERBOSE 533
#define OVL_COLLECT 534
#define OVL_GET_COVERAGE 535
#define MOD_PARM_FIND 536
#define MOD_PARM_FIND_EXPR_AND_REMOVE 537
#define MOD_PARM_ADD 538
#define INST_PARM_FIND 539
#define INST_PARM_ADD 540
#define INST_PARM_ADD_GENVAR 541
#define INST_PARM_BIND 542
#define DEFPARAM_ADD 543
#define DEFPARAM_DEALLOC 544
#define PARAM_FIND_AND_SET_EXPR_VALUE 545
#define PARAM_SET_SIG_SIZE 546
#define PARAM_SIZE_FUNCTION 547
#define PARAM_EXPR_EVAL 548
#define PARAM_HAS_OVERRIDE 549
#define PARAM_HAS_DEFPARAM 550
#define PARAM_RESOLVE_DECLARED 551
#define PARAM_RESOLVE_OVERRIDE 552
#define PARAM_RESOLVE 553
#define PARAM_DB_WRITE 554
#define MOD_PARM_DEALLOC 555
#define INST_PARM_DEALLOC 556
#define PARSE_READLINE 557
#define PARSE_DESIGN 558
#define PARSE_AND_SCORE_DUMPFILE 559
#define PARSER_PORT_DECLARATION_A 560
#define PARSER_PORT_DECLARATION_B 561
#define PARSER_PORT_DECLARATION_C 562
#define PARSER_STATIC_EXPR_PRIMARY_A 563
#define PARSER_STATIC_EXPR_PRIMARY_B 564
#define PARSER_EXPRESSION_LIST_A 565
#define PARSER_EXPRESSION_LIST_B 566
#define PARSER_EXPRESSION_LIST_C 567
#define PARSER_EXPRESSION_LIST_D 568
#define PARSER_IDENTIFIER_A 569
#define PARSER_GENERATE_CASE_ITEM_A 570
#define PARSER_GENERATE_CASE_ITEM_B 571
#define PARSER_GENERATE_CASE_ITEM_C 572
#define PARSER_STATEMENT_BEGIN_A 573
#define PARSER_STATEMENT_FORK_A 574
#define PARSER_STATEMENT_FOR_A 575
#define PARSER_CASE_ITEM_A 576
#define PARSER_CASE_ITEM_B 577
#define PARSER_CASE_ITEM_C 578
#define PARSER_DELAY_VALUE_A 579
#define PARSER_DELAY_VALUE_B 580
#define PARSER_PARAMETER_VALUE_BYNAME_A 581
#define PARSER_GATE_INSTANCE_A 582
#define PARSER_GATE_INSTANCE_B 583
#define PARSER_GATE_INSTANCE_C 584
#define PARSER_GATE_INSTANCE_D 585
#define PARSER_LIST_OF_NAMES_A 586
#define PARSER_LIST_OF_NAMES_B 587
#define VLERROR 588
#define VLWARN 589
#define PARSER_DEALLOC_SIG_RANGE 590
#define PARSER_COPY_CURR_RANGE 591
#define PARSER_COPY_RANGE_TO_CURR_RANGE 592
#define PARSER_EXPLICITLY_SET_CURR_RANGE 593
#define PARSER_IMPLICITLY_SET_CURR_RANGE 594
#define PARSER_CHECK_GENERATION 595
#define PERF_GEN_STATS 596
#define PERF_OUTPUT_MOD_STATS 597
#define PERF_OUTPUT_INST_REPORT_HELPER 598
#define PERF_OUTPUT_INST_REPORT 599
#define DEF_LOOKUP 600
#define IS_DEFINED 601
#define DEF_MATCH 602
#define DEF_START 603
#define DEFINE_MACRO 604
#define DO_DEFINE 605
#define DEF_IS_DONE 606
#define DEF_FINISH 607
#define DEF_UNDEFINE 608
#define INCLUDE_FILENAME 609
#define DO_INCLUDE 610
#define YYWRAP 611
#define RESET_PPLEXER 612
#define RACE_BLK_CREATE 613
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT_HELPER 614
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT 615
#define RACE_GET_HEAD_STATEMENT 616
#define RACE_FIND_HEAD_STATEMENT 617
#define RACE_CALC_STMT_BLK_TYPE 618
#define RACE_CALC_EXPR_ASSIGNMENT 619
#define RACE_CALC_ASSIGNMENTS 620
#define RACE_HANDLE_RACE_CONDITION 621
#define RACE_CHECK_ASSIGNMENT_TYPES 622
#define RACE_CHECK_ONE_BLOCK_ASSIGNMENT 623
#define RACE_CHECK_RACE_COUNT 624
#define RACE_CHECK_MODULES 625
#define RACE_DB_WRITE 626
#define RACE_DB_READ 627
#define RACE_GET_STATS 628
#define RACE_REPORT_SUMMARY 629
#define RACE_REPORT_VERBOSE 630
#define RACE_REPORT 631
#define RACE_COLLECT_LINES 632
#define RACE_BLK_DELETE_LIST 633
#define RANK_CREATE_COMP_CDD_COV 634
#define RANK_DEALLOC_COMP_CDD_COV 635
#define RANK_CHECK_INDEX 636
#define RANK_GATHER_SIGNAL_COV 637
#define RANK_GATHER_COMB_COV 638
#define RANK_GATHER_EXPRESSION_COV 639
#define RANK_GATHER_FSM_COV 640
#define RANK_CALC_NUM_CPS 641
#define RANK_GATHER_COMP_CDD_COV 642
#define RANK_READ_CDD 643
#define RANK_SELECTED_CDD_COV 644
#define RANK_PERFORM_WEIGHTED_SELECTION 645
#define RANK_PERFORM_GREEDY_SORT 646
#define RANK_COUNT_CPS 647
#define RANK_PERFORM 648
#define RANK_OUTPUT 649
#define COMMAND_RANK 650
#define REENTRANT_COUNT_AFU_BITS 651
#define REENTRANT_STORE_DATA_BITS 652
#define REENTRANT_RESTORE_DATA_BITS 653
#define REENTRANT_CREATE 654
#define REENTRANT_DEALLOC 655
#define REPORT_PARSE_METRICS 656
#define REPORT_PARSE_ARGS 657
#define REPORT_GATHER_INSTANCE_STATS 658
#define REPORT_GATHER_FUNIT_STATS 659
#define REPORT_PRINT_HEADER 660
#define REPORT_GENERATE 661
#define REPORT_READ_CDD_AND_READY 662
#define REPORT_CLOSE_CDD 663
#define REPORT_SAVE_CDD 664
#define COMMAND_REPORT 665
#define SCOPE_FIND_FUNIT_FROM_SCOPE 666
#define SCOPE_FIND_PARAM 667
#define SCOPE_FIND_SIGNAL 668
#define SCOPE_FIND_TASK_FUNCTION_NAMEDBLOCK 669
#define SCOPE_GET_PARENT_FUNIT 670
#define SCOPE_GET_PARENT_MODULE 671
#define SCORE_GENERATE_TOP_VPI_MODULE 672
#define SCORE_GENERATE_PLI_TAB_FILE 673
#define SCORE_PARSE_DEFINE 674
#define SCORE_ADD_ARG 675
#define SCORE_PARSE_ARGS 676
#define COMMAND_SCORE 677
#define SEARCH_INIT 678
#define SEARCH_ADD_INCLUDE_PATH 679
#define SEARCH_ADD_DIRECTORY_PATH 680
#define SEARCH_ADD_FILE 681
#define SEARCH_ADD_NO_SCORE_FUNIT 682
#define SEARCH_ADD_EXTENSIONS 683
#define SEARCH_FREE_LISTS 684
#define SIM_CURRENT_THREAD 685
#define SIM_THREAD_POP_HEAD 686
#define SIM_THREAD_INSERT_INTO_DELAY_QUEUE 687
#define SIM_THREAD_PUSH 688
#define SIM_EXPR_CHANGED 689
#define SIM_CREATE_THREAD 690
#define SIM_ADD_THREAD 691
#define SIM_KILL_THREAD 692
#define SIM_KILL_THREAD_WITH_FUNIT 693
#define SIM_ADD_STATICS 694
#define SIM_EXPRESSION 695
#define SIM_THREAD 696
#define SIM_SIMULATE 697
#define SIM_INITIALIZE 698
#define SIM_STOP 699
#define SIM_FINISH 700
#define SIM_DEALLOC 701
#define STATISTIC_CREATE 702
#define STATISTIC_IS_EMPTY 703
#define STATISTIC_DEALLOC 704
#define STATEMENT_CREATE 705
#define STATEMENT_QUEUE_ADD 706
#define STATEMENT_QUEUE_COMPARE 707
#define STATEMENT_SIZE_ELEMENTS 708
#define STATEMENT_DB_WRITE 709
#define STATEMENT_DB_WRITE_TREE 710
#define STATEMENT_DB_WRITE_EXPR_TREE 711
#define STATEMENT_DB_READ 712
#define STATEMENT_ASSIGN_EXPR_IDS 713
#define STATEMENT_CONNECT 714
#define STATEMENT_GET_LAST_LINE_HELPER 715
#define STATEMENT_GET_LAST_LINE 716
#define STATEMENT_FIND_RHS_SIGS 717
#define STATEMENT_FIND_HEAD_STATEMENT 718
#define STATEMENT_FIND_STATEMENT 719
#define STATEMENT_CONTAINS_EXPR_CALLING_STMT 720
#define STATEMENT_DEALLOC_RECURSIVE 721
#define STATEMENT_DEALLOC 722
#define STATIC_EXPR_GEN_UNARY 723
#define STATIC_EXPR_GEN 724
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_PRE 725
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_POST 726
#define STATIC_EXPR_DEALLOC 727
#define STRUCT_UNION_LENGTH 728
#define STRUCT_UNION_ADD_MEMBER 729
#define STRUCT_UNION_ADD_MEMBER_VOID 730
#define STRUCT_UNION_ADD_MEMBER_SIG 731
#define STRUCT_UNION_ADD_MEMBER_TYPEDEF 732
#define STRUCT_UNION_ADD_MEMBER_ENUM 733
#define STRUCT_UNION_ADD_MEMBER_STRUCT_UNION 734
#define STRUCT_UNION_CREATE 735
#define STRUCT_UNION_MEMBER_DEALLOC 736
#define STRUCT_UNION_DEALLOC 737
#define STRUCT_UNION_DEALLOC_LIST 738
#define SYMTABLE_ADD_SYM_SIG 739
#define SYMTABLE_INIT 740
#define SYMTABLE_CREATE 741
#define SYMTABLE_ADD 742
#define SYMTABLE_SET_VALUE 743
#define SYMTABLE_ASSIGN 744
#define SYMTABLE_DEALLOC 745
#define TCL_FUNC_GET_RACE_REASON_MSGS 746
#define TCL_FUNC_GET_FUNIT_LIST 747
#define TCL_FUNC_GET_INSTANCES 748
#define TCL_FUNC_GET_INSTANCE_LIST 749
#define TCL_FUNC_IS_FUNIT 750
#define TCL_FUNC_GET_FUNIT 751
#define TCL_FUNC_GET_INST 752
#define TCL_FUNC_GET_FUNIT_NAME 753
#define TCL_FUNC_GET_FILENAME 754
#define TCL_FUNC_INST_SCOPE 755
#define TCL_FUNC_GET_FUNIT_START_AND_END 756
#define TCL_FUNC_COLLECT_UNCOVERED_LINES 757
#define TCL_FUNC_COLLECT_COVERED_LINES 758
#define TCL_FUNC_COLLECT_RACE_LINES 759
#define TCL_FUNC_COLLECT_UNCOVERED_TOGGLES 760
#define TCL_FUNC_COLLECT_COVERED_TOGGLES 761
#define TCL_FUNC_COLLECT_UNCOVERED_MEMORIES 762
#define TCL_FUNC_COLLECT_COVERED_MEMORIES 763
#define TCL_FUNC_GET_TOGGLE_COVERAGE 764
#define TCL_FUNC_GET_MEMORY_COVERAGE 765
#define TCL_FUNC_COLLECT_UNCOVERED_COMBS 766
#define TCL_FUNC_COLLECT_COVERED_COMBS 767
#define TCL_FUNC_GET_COMB_EXPRESSION 768
#define TCL_FUNC_GET_COMB_COVERAGE 769
#define TCL_FUNC_COLLECT_UNCOVERED_FSMS 770
#define TCL_FUNC_COLLECT_COVERED_FSMS 771
#define TCL_FUNC_GET_FSM_COVERAGE 772
#define TCL_FUNC_COLLECT_UNCOVERED_ASSERTIONS 773
#define TCL_FUNC_COLLECT_COVERED_ASSERTIONS 774
#define TCL_FUNC_GET_ASSERT_COVERAGE 775
#define TCL_FUNC_OPEN_CDD 776
#define TCL_FUNC_CLOSE_CDD 777
#define TCL_FUNC_SAVE_CDD 778
#define TCL_FUNC_MERGE_CDD 779
#define TCL_FUNC_GET_LINE_SUMMARY 780
#define TCL_FUNC_GET_TOGGLE_SUMMARY 781
#define TCL_FUNC_GET_MEMORY_SUMMARY 782
#define TCL_FUNC_GET_COMB_SUMMARY 783
#define TCL_FUNC_GET_FSM_SUMMARY 784
#define TCL_FUNC_GET_ASSERT_SUMMARY 785
#define TCL_FUNC_PREPROCESS_VERILOG 786
#define TCL_FUNC_GET_SCORE_PATH 787
#define TCL_FUNC_GET_INCLUDE_PATHNAME 788
#define TCL_FUNC_GET_GENERATION 789
#define TCL_FUNC_SET_LINE_EXCLUDE 790
#define TCL_FUNC_SET_TOGGLE_EXCLUDE 791
#define TCL_FUNC_SET_MEMORY_EXCLUDE 792
#define TCL_FUNC_SET_COMB_EXCLUDE 793
#define TCL_FUNC_FSM_EXCLUDE 794
#define TCL_FUNC_SET_ASSERT_EXCLUDE 795
#define TCL_FUNC_GENERATE_REPORT 796
#define TCL_FUNC_INITIALIZE 797
#define TOGGLE_GET_STATS 798
#define TOGGLE_COLLECT 799
#define TOGGLE_GET_COVERAGE 800
#define TOGGLE_GET_FUNIT_SUMMARY 801
#define TOGGLE_GET_INST_SUMMARY 802
#define TOGGLE_DISPLAY_INSTANCE_SUMMARY 803
#define TOGGLE_INSTANCE_SUMMARY 804
#define TOGGLE_DISPLAY_FUNIT_SUMMARY 805
#define TOGGLE_FUNIT_SUMMARY 806
#define TOGGLE_DISPLAY_VERBOSE 807
#define TOGGLE_INSTANCE_VERBOSE 808
#define TOGGLE_FUNIT_VERBOSE 809
#define TOGGLE_REPORT 810
#define TREE_ADD 811
#define TREE_FIND 812
#define TREE_REMOVE 813
#define TREE_DEALLOC 814
#define CHECK_OPTION_VALUE 815
#define IS_VARIABLE 816
#define IS_FUNC_UNIT 817
#define IS_LEGAL_FILENAME 818
#define GET_BASENAME 819
#define GET_DIRNAME 820
#define DIRECTORY_EXISTS 821
#define DIRECTORY_LOAD 822
#define FILE_EXISTS 823
#define UTIL_READLINE 824
#define GET_QUOTED_STRING 825
#define SUBSTITUTE_ENV_VARS 826
#define SCOPE_EXTRACT_FRONT 827
#define SCOPE_EXTRACT_BACK 828
#define SCOPE_EXTRACT_SCOPE 829
#define SCOPE_GEN_PRINTABLE 830
#define SCOPE_COMPARE 831
#define SCOPE_LOCAL 832
#define CONVERT_FILE_TO_MODULE 833
#define GET_NEXT_VFILE 834
#define GEN_SPACE 835
#define GET_FUNIT_TYPE 836
#define CALC_MISS_PERCENT 837
#define READ_COMMAND_FILE 838
#define VCD_PARSE_DEF_IGNORE 839
#define VCD_PARSE_DEF_VAR 840
#define VCD_PARSE_DEF_SCOPE 841
#define VCD_PARSE_DEF 842
#define VCD_PARSE_SIM_VECTOR 843
#define VCD_PARSE_SIM_IGNORE 844
#define VCD_PARSE_SIM 845
#define VCD_PARSE 846
#define VECTOR_INIT 847
#define VECTOR_CREATE 848
#define VECTOR_COPY 849
#define VECTOR_COPY_RANGE 850
#define VECTOR_CLONE 851
#define VECTOR_DB_WRITE 852
#define VECTOR_DB_READ 853
#define VECTOR_DB_MERGE 854
#define VECTOR_MERGE 855
#define VECTOR_GET_EVAL_A 856
#define VECTOR_GET_EVAL_B 857
#define VECTOR_GET_EVAL_C 858
#define VECTOR_GET_EVAL_D 859
#define VECTOR_GET_EVAL_AB_COUNT 860
#define VECTOR_GET_EVAL_ABC_COUNT 861
#define VECTOR_GET_EVAL_ABCD_COUNT 862
#define VECTOR_GET_TOGGLE01_ULONG 863
#define VECTOR_GET_TOGGLE10_ULONG 864
#define VECTOR_DISPLAY_TOGGLE01_ULONG 865
#define VECTOR_DISPLAY_TOGGLE10_ULONG 866
#define VECTOR_TOGGLE_COUNT 867
#define VECTOR_MEM_RW_COUNT 868
#define VECTOR_SET_ASSIGNED 869
#define VECTOR_SET_COVERAGE_AND_ASSIGN 870
#define VECTOR_GET_SIGN_EXTEND_VECTOR_ULONG 871
#define VECTOR_SIGN_EXTEND_ULONG 872
#define VECTOR_LSHIFT_ULONG 873
#define VECTOR_RSHIFT_ULONG 874
#define VECTOR_SET_VALUE 875
#define VECTOR_PART_SELECT_PULL 876
#define VECTOR_PART_SELECT_PUSH 877
#define VECTOR_SET_UNARY_EVALS 878
#define VECTOR_SET_AND_COMB_EVALS 879
#define VECTOR_SET_OR_COMB_EVALS 880
#define VECTOR_SET_OTHER_COMB_EVALS 881
#define VECTOR_IS_UKNOWN 882
#define VECTOR_IS_NOT_ZERO 883
#define VECTOR_SET_TO_X 884
#define VECTOR_TO_INT 885
#define VECTOR_TO_UINT64 886
#define VECTOR_TO_SIM_TIME 887
#define VECTOR_FROM_INT 888
#define VECTOR_FROM_UINT64 889
#define VECTOR_SET_STATIC 890
#define VECTOR_TO_STRING 891
#define VECTOR_FROM_STRING 892
#define VECTOR_VCD_ASSIGN 893
#define VECTOR_BITWISE_AND_OP 894
#define VECTOR_BITWISE_NAND_OP 895
#define VECTOR_BITWISE_OR_OP 896
#define VECTOR_BITWISE_NOR_OP 897
#define VECTOR_BITWISE_XOR_OP 898
#define VECTOR_BITWISE_NXOR_OP 899
#define VECTOR_OP_LT 900
#define VECTOR_OP_LE 901
#define VECTOR_OP_GT 902
#define VECTOR_OP_GE 903
#define VECTOR_OP_EQ 904
#define VECTOR_CEQ_ULONG 905
#define VECTOR_OP_CEQ 906
#define VECTOR_OP_CXEQ 907
#define VECTOR_OP_CZEQ 908
#define VECTOR_OP_NE 909
#define VECTOR_OP_CNE 910
#define VECTOR_OP_LOR 911
#define VECTOR_OP_LAND 912
#define VECTOR_OP_LSHIFT 913
#define VECTOR_OP_RSHIFT 914
#define VECTOR_OP_ARSHIFT 915
#define VECTOR_OP_ADD 916
#define VECTOR_OP_NEGATE 917
#define VECTOR_OP_SUBTRACT 918
#define VECTOR_OP_MULTIPLY 919
#define VECTOR_OP_DIVIDE 920
#define VECTOR_OP_MODULUS 921
#define VECTOR_OP_INC 922
#define VECTOR_OP_DEC 923
#define VECTOR_UNARY_INV 924
#define VECTOR_UNARY_AND 925
#define VECTOR_UNARY_NAND 926
#define VECTOR_UNARY_OR 927
#define VECTOR_UNARY_NOR 928
#define VECTOR_UNARY_XOR 929
#define VECTOR_UNARY_NXOR 930
#define VECTOR_UNARY_NOT 931
#define VECTOR_OP_EXPAND 932
#define VECTOR_OP_LIST 933
#define VECTOR_DEALLOC_VALUE 934
#define VECTOR_DEALLOC 935
#define SYM_VALUE_STORE 936
#define ADD_SYM_VALUES_TO_SIM 937
#define COVERED_VALUE_CHANGE 938
#define COVERED_END_OF_SIM 939
#define COVERED_CB_ERROR_HANDLER 940
#define GEN_NEXT_SYMBOL 941
#define COVERED_CREATE_VALUE_CHANGE_CB 942
#define COVERED_PARSE_TASK_FUNC 943
#define COVERED_PARSE_SIGNALS 944
#define COVERED_PARSE_INSTANCE 945
#define COVERED_SIM_CALLTF 946
#define COVERED_REGISTER 947
#define VSIGNAL_INIT 948
#define VSIGNAL_CREATE 949
#define VSIGNAL_CREATE_VEC 950
#define VSIGNAL_DUPLICATE 951
#define VSIGNAL_DB_WRITE 952
#define VSIGNAL_DB_READ 953
#define VSIGNAL_DB_MERGE 954
#define VSIGNAL_MERGE 955
#define VSIGNAL_PROPAGATE 956
#define VSIGNAL_VCD_ASSIGN 957
#define VSIGNAL_ADD_EXPRESSION 958
#define VSIGNAL_FROM_STRING 959
#define VSIGNAL_CALC_WIDTH_FOR_EXPR 960
#define VSIGNAL_CALC_LSB_FOR_EXPR 961
#define VSIGNAL_DEALLOC 962

extern profiler profiles[NUM_PROFILES];
#endif

extern unsigned int profile_index;

#endif

