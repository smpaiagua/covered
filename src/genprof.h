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

#define NUM_PROFILES 864

#ifdef DEBUG
#define UNREGISTERED 0
#define OBFUSCATE_SET_MODE 1
#define OBFUSCATE_NAME 2
#define OBFUSCATE_DEALLOC 3
#define SYMTABLE_ADD_SYM_SIG 4
#define SYMTABLE_INIT 5
#define SYMTABLE_CREATE 6
#define SYMTABLE_ADD 7
#define SYMTABLE_SET_VALUE 8
#define SYMTABLE_ASSIGN 9
#define SYMTABLE_DEALLOC 10
#define FSM_CREATE 11
#define FSM_ADD_ARC 12
#define FSM_CREATE_TABLES 13
#define FSM_DB_WRITE 14
#define FSM_DB_READ 15
#define FSM_DB_MERGE 16
#define FSM_TABLE_SET 17
#define FSM_GET_STATS 18
#define FSM_GET_FUNIT_SUMMARY 19
#define FSM_GATHER_SIGNALS 20
#define FSM_COLLECT 21
#define FSM_GET_COVERAGE 22
#define FSM_DISPLAY_INSTANCE_SUMMARY 23
#define FSM_INSTANCE_SUMMARY 24
#define FSM_DISPLAY_FUNIT_SUMMARY 25
#define FSM_FUNIT_SUMMARY 26
#define FSM_DISPLAY_STATE_VERBOSE 27
#define FSM_DISPLAY_ARC_VERBOSE 28
#define FSM_DISPLAY_VERBOSE 29
#define FSM_INSTANCE_VERBOSE 30
#define FSM_FUNIT_VERBOSE 31
#define FSM_REPORT 32
#define FSM_DEALLOC 33
#define MOD_PARM_FIND 34
#define MOD_PARM_FIND_EXPR_AND_REMOVE 35
#define MOD_PARM_ADD 36
#define INST_PARM_FIND 37
#define INST_PARM_ADD 38
#define INST_PARM_ADD_GENVAR 39
#define INST_PARM_BIND 40
#define DEFPARAM_ADD 41
#define DEFPARAM_DEALLOC 42
#define PARAM_FIND_AND_SET_EXPR_VALUE 43
#define PARAM_SET_SIG_SIZE 44
#define PARAM_SIZE_FUNCTION 45
#define PARAM_EXPR_EVAL 46
#define PARAM_HAS_OVERRIDE 47
#define PARAM_HAS_DEFPARAM 48
#define PARAM_RESOLVE_DECLARED 49
#define PARAM_RESOLVE_OVERRIDE 50
#define PARAM_RESOLVE 51
#define PARAM_DB_WRITE 52
#define MOD_PARM_DEALLOC 53
#define INST_PARM_DEALLOC 54
#define PARSE_READLINE 55
#define PARSE_DESIGN 56
#define PARSE_AND_SCORE_DUMPFILE 57
#define TCL_FUNC_GET_RACE_REASON_MSGS 58
#define TCL_FUNC_GET_FUNIT_LIST 59
#define TCL_FUNC_GET_INSTANCES 60
#define TCL_FUNC_GET_INSTANCE_LIST 61
#define TCL_FUNC_GET_FILENAME 62
#define TCL_FUNC_GET_FUNIT_START_AND_END 63
#define TCL_FUNC_COLLECT_UNCOVERED_LINES 64
#define TCL_FUNC_COLLECT_COVERED_LINES 65
#define TCL_FUNC_COLLECT_RACE_LINES 66
#define TCL_FUNC_COLLECT_UNCOVERED_TOGGLES 67
#define TCL_FUNC_COLLECT_COVERED_TOGGLES 68
#define TCL_FUNC_COLLECT_MEMORIES 69
#define TCL_FUNC_GET_TOGGLE_COVERAGE 70
#define TCL_FUNC_GET_MEMORY_COVERAGE 71
#define TCL_FUNC_COLLECT_COMBS 72
#define TCL_FUNC_GET_COMB_EXPRESSION 73
#define TCL_FUNC_GET_COMB_COVERAGE 74
#define TCL_FUNC_COLLECT_FSMS 75
#define TCL_FUNC_GET_FSM_COVERAGE 76
#define TCL_FUNC_COLLECT_ASSERTIONS 77
#define TCL_FUNC_GET_ASSERT_COVERAGE 78
#define TCL_FUNC_OPEN_CDD 79
#define TCL_FUNC_CLOSE_CDD 80
#define TCL_FUNC_SAVE_CDD 81
#define TCL_FUNC_MERGE_CDD 82
#define TCL_FUNC_GET_LINE_SUMMARY 83
#define TCL_FUNC_GET_TOGGLE_SUMMARY 84
#define TCL_FUNC_GET_MEMORY_SUMMARY 85
#define TCL_FUNC_GET_COMB_SUMMARY 86
#define TCL_FUNC_GET_FSM_SUMMARY 87
#define TCL_FUNC_GET_ASSERT_SUMMARY 88
#define TCL_FUNC_PREPROCESS_VERILOG 89
#define TCL_FUNC_GET_SCORE_PATH 90
#define TCL_FUNC_GET_INCLUDE_PATHNAME 91
#define TCL_FUNC_GET_GENERATION 92
#define TCL_FUNC_SET_LINE_EXCLUDE 93
#define TCL_FUNC_SET_TOGGLE_EXCLUDE 94
#define TCL_FUNC_SET_MEMORY_EXCLUDE 95
#define TCL_FUNC_SET_COMB_EXCLUDE 96
#define TCL_FUNC_FSM_EXCLUDE 97
#define TCL_FUNC_SET_ASSERT_EXCLUDE 98
#define TCL_FUNC_GENERATE_REPORT 99
#define TCL_FUNC_INITIALIZE 100
#define ASSERTION_PARSE 101
#define ASSERTION_PARSE_ATTR 102
#define ASSERTION_GET_STATS 103
#define ASSERTION_DISPLAY_INSTANCE_SUMMARY 104
#define ASSERTION_INSTANCE_SUMMARY 105
#define ASSERTION_DISPLAY_FUNIT_SUMMARY 106
#define ASSERTION_FUNIT_SUMMARY 107
#define ASSERTION_DISPLAY_VERBOSE 108
#define ASSERTION_INSTANCE_VERBOSE 109
#define ASSERTION_FUNIT_VERBOSE 110
#define ASSERTION_REPORT 111
#define ASSERTION_GET_FUNIT_SUMMARY 112
#define ASSERTION_COLLECT 113
#define ASSERTION_GET_COVERAGE 114
#define ATTRIBUTE_CREATE 115
#define ATTRIBUTE_PARSE 116
#define ATTRIBUTE_DEALLOC 117
#define TOGGLE_GET_STATS 118
#define TOGGLE_COLLECT 119
#define TOGGLE_GET_COVERAGE 120
#define TOGGLE_GET_FUNIT_SUMMARY 121
#define TOGGLE_DISPLAY_INSTANCE_SUMMARY 122
#define TOGGLE_INSTANCE_SUMMARY 123
#define TOGGLE_DISPLAY_FUNIT_SUMMARY 124
#define TOGGLE_FUNIT_SUMMARY 125
#define TOGGLE_DISPLAY_VERBOSE 126
#define TOGGLE_INSTANCE_VERBOSE 127
#define TOGGLE_FUNIT_VERBOSE 128
#define TOGGLE_REPORT 129
#define VLERROR 130
#define VLWARN 131
#define PARSER_DEALLOC_SIG_RANGE 132
#define PARSER_COPY_CURR_RANGE 133
#define PARSER_COPY_RANGE_TO_CURR_RANGE 134
#define PARSER_EXPLICITLY_SET_CURR_RANGE 135
#define PARSER_IMPLICITLY_SET_CURR_RANGE 136
#define PARSER_CHECK_GENERATION 137
#define PERF_GEN_STATS 138
#define PERF_OUTPUT_MOD_STATS 139
#define PERF_OUTPUT_INST_REPORT_HELPER 140
#define PERF_OUTPUT_INST_REPORT 141
#define TREE_ADD 142
#define TREE_FIND 143
#define TREE_REMOVE 144
#define TREE_DEALLOC 145
#define CODEGEN_CREATE_EXPR_HELPER 146
#define CODEGEN_CREATE_EXPR 147
#define CODEGEN_GEN_EXPR 148
#define COMBINATION_CALC_DEPTH 149
#define COMBINATION_DOES_MULTI_EXP_NEED_UL 150
#define COMBINATION_MULTI_EXPR_CALC 151
#define COMBINATION_IS_EXPR_MULTI_NODE 152
#define COMBINATION_GET_TREE_STATS 153
#define COMBINATION_RESET_COUNTED_EXPRS 154
#define COMBINATION_RESET_COUNTED_EXPR_TREE 155
#define COMBINATION_GET_STATS 156
#define COMBINATION_GET_FUNIT_SUMMARY 157
#define COMBINATION_DISPLAY_INSTANCE_SUMMARY 158
#define COMBINATION_INSTANCE_SUMMARY 159
#define COMBINATION_DISPLAY_FUNIT_SUMMARY 160
#define COMBINATION_FUNIT_SUMMARY 161
#define COMBINATION_DRAW_LINE 162
#define COMBINATION_DRAW_CENTERED_LINE 163
#define COMBINATION_UNDERLINE_TREE 164
#define COMBINATION_PREP_LINE 165
#define COMBINATION_UNDERLINE 166
#define COMBINATION_UNARY 167
#define COMBINATION_EVENT 168
#define COMBINATION_TWO_VARS 169
#define COMBINATION_MULTI_VAR_EXPRS 170
#define COMBINATION_MULTI_EXPR_OUTPUT_LENGTH 171
#define COMBINATION_MULTI_EXPR_OUTPUT 172
#define COMBINATION_MULTI_VARS 173
#define COMBINATION_GET_MISSED_EXPR 174
#define COMBINATION_LIST_MISSED 175
#define COMBINATION_OUTPUT_EXPR 176
#define COMBINATION_DISPLAY_VERBOSE 177
#define COMBINATION_INSTANCE_VERBOSE 178
#define COMBINATION_FUNIT_VERBOSE 179
#define COMBINATION_COLLECT 180
#define COMBINATION_GET_EXCLUDE_LIST 181
#define COMBINATION_GET_EXPRESSION 182
#define COMBINATION_GET_COVERAGE 183
#define COMBINATION_REPORT 184
#define SET_OUTPUT_SUPPRESSION 185
#define CHECK_OPTION_VALUE 186
#define IS_VARIABLE 187
#define IS_FUNC_UNIT 188
#define IS_LEGAL_FILENAME 189
#define GET_BASENAME 190
#define GET_DIRNAME 191
#define DIRECTORY_EXISTS 192
#define DIRECTORY_LOAD 193
#define FILE_EXISTS 194
#define UTIL_READLINE 195
#define SUBSTITUTE_ENV_VARS 196
#define SCOPE_EXTRACT_FRONT 197
#define SCOPE_EXTRACT_BACK 198
#define SCOPE_EXTRACT_SCOPE 199
#define SCOPE_GEN_PRINTABLE 200
#define SCOPE_COMPARE 201
#define SCOPE_LOCAL 202
#define CONVERT_FILE_TO_MODULE 203
#define GET_NEXT_VFILE 204
#define GEN_SPACE 205
#define GET_FUNIT_TYPE 206
#define CALC_MISS_PERCENT 207
#define DB_CLOSE 208
#define DB_CHECK_FOR_TOP_MODULE 209
#define DB_WRITE 210
#define DB_READ 211
#define DB_SCALE_TO_PRECISION 212
#define DB_CREATE_UNNAMED_SCOPE 213
#define DB_IS_UNNAMED_SCOPE 214
#define DB_SET_TIMESCALE 215
#define DB_GET_CURR_FUNIT 216
#define DB_ADD_INSTANCE 217
#define DB_ADD_MODULE 218
#define DB_END_MODULE 219
#define DB_ADD_FUNCTION_TASK_NAMEDBLOCK 220
#define DB_END_FUNCTION_TASK_NAMEDBLOCK 221
#define DB_ADD_DECLARED_PARAM 222
#define DB_ADD_OVERRIDE_PARAM 223
#define DB_ADD_VECTOR_PARAM 224
#define DB_ADD_DEFPARAM 225
#define DB_ADD_SIGNAL 226
#define DB_ADD_ENUM 227
#define DB_END_ENUM_LIST 228
#define DB_ADD_TYPEDEF 229
#define DB_FIND_SIGNAL 230
#define DB_ADD_GEN_ITEM_BLOCK 231
#define DB_FIND_GEN_ITEM 232
#define DB_FIND_TYPEDEF 233
#define DB_GET_CURR_GEN_BLOCK 234
#define DB_CURR_SIGNAL_COUNT 235
#define DB_CREATE_EXPRESSION 236
#define DB_BIND_EXPR_TREE 237
#define DB_CREATE_EXPR_FROM_STATIC 238
#define DB_ADD_EXPRESSION 239
#define DB_CREATE_SENSITIVITY_LIST 240
#define DB_PARALLELIZE_STATEMENT 241
#define DB_CREATE_STATEMENT 242
#define DB_ADD_STATEMENT 243
#define DB_REMOVE_STATEMENT_FROM_CURRENT_FUNIT 244
#define DB_REMOVE_STATEMENT 245
#define DB_CONNECT_STATEMENT_TRUE 246
#define DB_CONNECT_STATEMENT_FALSE 247
#define DB_GEN_ITEM_CONNECT_TRUE 248
#define DB_GEN_ITEM_CONNECT_FALSE 249
#define DB_GEN_ITEM_CONNECT 250
#define DB_STATEMENT_CONNECT 251
#define DB_CREATE_ATTR_PARAM 252
#define DB_PARSE_ATTRIBUTE 253
#define DB_REMOVE_STMT_BLKS_CALLING_STATEMENT 254
#define DB_GEN_CURR_INST_SCOPE 255
#define DB_SYNC_CURR_INSTANCE 256
#define DB_SET_VCD_SCOPE 257
#define DB_VCD_UPSCOPE 258
#define DB_ASSIGN_SYMBOL 259
#define DB_SET_SYMBOL_CHAR 260
#define DB_SET_SYMBOL_STRING 261
#define DB_DO_TIMESTEP 262
#define VCD_PARSE_DEF_IGNORE 263
#define VCD_PARSE_DEF_VAR 264
#define VCD_PARSE_DEF_SCOPE 265
#define VCD_PARSE_DEF 266
#define VCD_PARSE_SIM_VECTOR 267
#define VCD_PARSE_SIM_IGNORE 268
#define VCD_PARSE_SIM 269
#define VCD_PARSE 270
#define RACE_BLK_CREATE 271
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT_HELPER 272
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT 273
#define RACE_GET_HEAD_STATEMENT 274
#define RACE_FIND_HEAD_STATEMENT 275
#define RACE_CALC_STMT_BLK_TYPE 276
#define RACE_CALC_EXPR_ASSIGNMENT 277
#define RACE_CALC_ASSIGNMENTS 278
#define RACE_HANDLE_RACE_CONDITION 279
#define RACE_CHECK_ASSIGNMENT_TYPES 280
#define RACE_CHECK_ONE_BLOCK_ASSIGNMENT 281
#define RACE_CHECK_RACE_COUNT 282
#define RACE_CHECK_MODULES 283
#define RACE_DB_WRITE 284
#define RACE_DB_READ 285
#define RACE_GET_STATS 286
#define RACE_REPORT_SUMMARY 287
#define RACE_REPORT_VERBOSE 288
#define RACE_REPORT 289
#define RACE_COLLECT_LINES 290
#define RACE_BLK_DELETE_LIST 291
#define ENUMERATE_ADD_ITEM 292
#define ENUMERATE_END_LIST 293
#define ENUMERATE_RESOLVE 294
#define ENUMERATE_DEALLOC 295
#define ENUMERATE_DEALLOC_LIST 296
#define REENTRANT_COUNT_AFU_BITS 297
#define REENTRANT_STORE_DATA_BITS 298
#define REENTRANT_RESTORE_DATA_BITS 299
#define REENTRANT_CREATE 300
#define REENTRANT_DEALLOC 301
#define ARC_GET_ENTRY_WIDTH 302
#define ARC_SET_WIDTH 303
#define ARC_GET_WIDTH 304
#define ARC_SET_MAX_SIZE 305
#define ARC_GET_MAX_SIZE 306
#define ARC_SET_CURR_SIZE 307
#define ARC_GET_CURR_SIZE 308
#define ARC_SET_SUPPL 309
#define ARC_GET_SUPPL 310
#define ARC_SET_STATES 311
#define ARC_SET_ENTRY_SUPPL 312
#define ARC_GET_ENTRY_SUPPL 313
#define ARC_FIND 314
#define ARC_CREATE 315
#define ARC_ADD 316
#define ARC_COMPARE_STATES 317
#define ARC_COMPARE_ALL_STATES 318
#define ARC_STATE_TOTAL 319
#define ARC_STATE_HITS 320
#define ARC_TRANSITION_TOTAL 321
#define ARC_TRANSITION_HITS 322
#define ARC_GET_STATS 323
#define ARC_DB_WRITE 324
#define ARC_READ_GET_NEXT_VALUE 325
#define ARC_DB_READ 326
#define ARC_STATE_TO_STRING 327
#define ARC_DB_MERGE 328
#define ARC_GET_STATES 329
#define ARC_GET_TRANSITIONS 330
#define ARC_ARE_ANY_EXCLUDED 331
#define ARC_DEALLOC 332
#define SYM_VALUE_STORE 333
#define ADD_SYM_VALUES_TO_SIM 334
#define COVERED_VALUE_CHANGE 335
#define COVERED_END_OF_SIM 336
#define COVERED_CB_ERROR_HANDLER 337
#define GEN_NEXT_SYMBOL 338
#define COVERED_CREATE_VALUE_CHANGE_CB 339
#define COVERED_PARSE_TASK_FUNC 340
#define COVERED_PARSE_SIGNALS 341
#define COVERED_PARSE_INSTANCE 342
#define COVERED_SIM_CALLTF 343
#define COVERED_REGISTER 344
#define REPORT_PARSE_METRICS 345
#define REPORT_PARSE_ARGS 346
#define REPORT_GATHER_INSTANCE_STATS 347
#define REPORT_GATHER_FUNIT_STATS 348
#define REPORT_PRINT_HEADER 349
#define REPORT_GENERATE 350
#define REPORT_READ_CDD_AND_READY 351
#define REPORT_CLOSE_CDD 352
#define REPORT_SAVE_CDD 353
#define COMMAND_REPORT 354
#define FSM_ARG_PARSE_STATE 355
#define FSM_ARG_PARSE 356
#define FSM_ARG_PARSE_VALUE 357
#define FSM_ARG_PARSE_TRANS 358
#define FSM_ARG_PARSE_ATTR 359
#define FSM_VAR_ADD 360
#define FSM_VAR_IS_OUTPUT_STATE 361
#define FSM_VAR_BIND_EXPR 362
#define FSM_VAR_ADD_EXPR 363
#define FSM_VAR_BIND_STMT 364
#define FSM_VAR_BIND_ADD 365
#define FSM_VAR_STMT_ADD 366
#define FSM_VAR_BIND 367
#define FSM_VAR_DEALLOC 368
#define FSM_VAR_REMOVE 369
#define SCOPE_FIND_FUNIT_FROM_SCOPE 370
#define SCOPE_FIND_PARAM 371
#define SCOPE_FIND_SIGNAL 372
#define SCOPE_FIND_TASK_FUNCTION_NAMEDBLOCK 373
#define SCOPE_GET_PARENT_FUNIT 374
#define SCOPE_GET_PARENT_MODULE 375
#define FUNC_ITER_DISPLAY 376
#define FUNC_ITER_SORT 377
#define FUNC_ITER_COUNT_STMT_ITERS 378
#define FUNC_ITER_ADD_STMT_ITERS 379
#define FUNC_ITER_INIT 380
#define FUNC_ITER_GET_NEXT_STATEMENT 381
#define FUNC_ITER_DEALLOC 382
#define SCORE_GENERATE_TOP_VPI_MODULE 383
#define SCORE_GENERATE_PLI_TAB_FILE 384
#define READ_COMMAND_FILE 385
#define SCORE_PARSE_DEFINE 386
#define SCORE_ADD_ARG 387
#define SCORE_PARSE_ARGS 388
#define COMMAND_SCORE 389
#define FUNIT_INIT 390
#define FUNIT_CREATE 391
#define FUNIT_GET_CURR_MODULE 392
#define FUNIT_GET_CURR_MODULE_SAFE 393
#define FUNIT_GET_CURR_FUNCTION 394
#define FUNIT_GET_CURR_TASK 395
#define FUNIT_GET_PORT_COUNT 396
#define FUNIT_FIND_PARAM 397
#define FUNIT_FIND_SIGNAL 398
#define FUNIT_REMOVE_STMT_BLKS_CALLING_STMT 399
#define FUNIT_GEN_TASK_FUNCTION_NAMEDBLOCK_NAME 400
#define FUNIT_SIZE_ELEMENTS 401
#define FUNIT_DB_WRITE 402
#define FUNIT_DB_READ 403
#define FUNIT_DB_MERGE 404
#define FUNIT_FLATTEN_NAME 405
#define FUNIT_FIND_BY_ID 406
#define FUNIT_IS_TOP_MODULE 407
#define FUNIT_IS_UNNAMED 408
#define FUNIT_IS_UNNAMED_CHILD_OF 409
#define FUNIT_IS_CHILD_OF 410
#define FUNIT_DISPLAY_SIGNALS 411
#define FUNIT_DISPLAY_EXPRESSIONS 412
#define STATEMENT_ADD_THREAD 413
#define FUNIT_PUSH_THREADS 414
#define STATEMENT_DELETE_THREAD 415
#define FUNIT_CLEAN 416
#define FUNIT_DEALLOC 417
#define SEARCH_INIT 418
#define SEARCH_ADD_INCLUDE_PATH 419
#define SEARCH_ADD_DIRECTORY_PATH 420
#define SEARCH_ADD_FILE 421
#define SEARCH_ADD_NO_SCORE_FUNIT 422
#define SEARCH_ADD_EXTENSIONS 423
#define SEARCH_FREE_LISTS 424
#define GEN_ITEM_STRINGIFY 425
#define GEN_ITEM_DISPLAY 426
#define GEN_ITEM_DISPLAY_BLOCK_HELPER 427
#define GEN_ITEM_DISPLAY_BLOCK 428
#define GEN_ITEM_COMPARE 429
#define GEN_ITEM_FIND 430
#define GEN_ITEM_REMOVE_IF_CONTAINS_EXPR_CALLING_STMT 431
#define GEN_ITEM_GET_GENVAR 432
#define GEN_ITEM_VARNAME_CONTAINS_GENVAR 433
#define GEN_ITEM_CALC_SIGNAL_NAME 434
#define GEN_ITEM_CREATE_EXPR 435
#define GEN_ITEM_CREATE_SIG 436
#define GEN_ITEM_CREATE_STMT 437
#define GEN_ITEM_CREATE_INST 438
#define GEN_ITEM_CREATE_TFN 439
#define GEN_ITEM_CREATE_BIND 440
#define GEN_ITEM_RESIZE_STMTS_AND_SIGS 441
#define GEN_ITEM_ASSIGN_EXPR_IDS 442
#define GEN_ITEM_DB_WRITE 443
#define GEN_ITEM_DB_WRITE_EXPR_TREE 444
#define GEN_ITEM_CONNECT 445
#define GEN_ITEM_RESOLVE 446
#define GEN_ITEM_BIND 447
#define GENERATE_RESOLVE 448
#define GENERATE_REMOVE_STMT_HELPER 449
#define GENERATE_REMOVE_STMT 450
#define GEN_ITEM_DEALLOC 451
#define SIM_CURRENT_THREAD 452
#define SIM_THREAD_POP_HEAD 453
#define SIM_THREAD_INSERT_INTO_DELAY_QUEUE 454
#define SIM_THREAD_PUSH 455
#define SIM_EXPR_CHANGED 456
#define SIM_CREATE_THREAD 457
#define SIM_ADD_THREAD 458
#define SIM_KILL_THREAD 459
#define SIM_KILL_THREAD_WITH_FUNIT 460
#define SIM_ADD_STATICS 461
#define SIM_EXPRESSION 462
#define SIM_THREAD 463
#define SIM_SIMULATE 464
#define SIM_INITIALIZE 465
#define SIM_STOP 466
#define SIM_FINISH 467
#define SIM_DEALLOC 468
#define STATISTIC_CREATE 469
#define STATISTIC_MERGE 470
#define STATISTIC_IS_EMPTY 471
#define STATISTIC_DEALLOC 472
#define FUNIT_GET_LIST 473
#define FUNIT_GET_FILENAME 474
#define FUNIT_GET_START_AND_END_LINES 475
#define VSIGNAL_INIT 476
#define VSIGNAL_CREATE 477
#define VSIGNAL_CREATE_VEC 478
#define VSIGNAL_DUPLICATE 479
#define VSIGNAL_DB_WRITE 480
#define VSIGNAL_DB_READ 481
#define VSIGNAL_DB_MERGE 482
#define VSIGNAL_PROPAGATE 483
#define VSIGNAL_VCD_ASSIGN 484
#define VSIGNAL_ADD_EXPRESSION 485
#define VSIGNAL_FROM_STRING 486
#define VSIGNAL_CALC_WIDTH_FOR_EXPR 487
#define VSIGNAL_CALC_LSB_FOR_EXPR 488
#define VSIGNAL_DEALLOC 489
#define INFO_INITIALIZE 490
#define INFO_DB_WRITE 491
#define INFO_DB_READ 492
#define ARGS_DB_READ 493
#define INFO_DEALLOC 494
#define STATEMENT_CREATE 495
#define STATEMENT_QUEUE_ADD 496
#define STATEMENT_QUEUE_COMPARE 497
#define STATEMENT_SIZE_ELEMENTS 498
#define STATEMENT_DB_WRITE 499
#define STATEMENT_DB_WRITE_TREE 500
#define STATEMENT_DB_WRITE_EXPR_TREE 501
#define STATEMENT_DB_READ 502
#define STATEMENT_ASSIGN_EXPR_IDS 503
#define STATEMENT_CONNECT 504
#define STATEMENT_GET_LAST_LINE_HELPER 505
#define STATEMENT_GET_LAST_LINE 506
#define STATEMENT_FIND_RHS_SIGS 507
#define STATEMENT_FIND_HEAD_STATEMENT 508
#define STATEMENT_FIND_STATEMENT 509
#define STATEMENT_CONTAINS_EXPR_CALLING_STMT 510
#define STATEMENT_DEALLOC_RECURSIVE 511
#define STATEMENT_DEALLOC 512
#define INSTANCE_DISPLAY_TREE_HELPER 513
#define INSTANCE_DISPLAY_TREE 514
#define INSTANCE_CREATE 515
#define INSTANCE_GEN_SCOPE 516
#define INSTANCE_COMPARE 517
#define INSTANCE_FIND_SCOPE 518
#define INSTANCE_FIND_BY_FUNIT 519
#define INSTANCE_ADD_CHILD 520
#define INSTANCE_COPY 521
#define INSTANCE_ATTACH_CHILD 522
#define INSTANCE_PARSE_ADD 523
#define INSTANCE_RESOLVE_INST 524
#define INSTANCE_RESOLVE_HELPER 525
#define INSTANCE_RESOLVE 526
#define INSTANCE_READ_ADD 527
#define INSTANCE_DB_WRITE 528
#define INSTANCE_FLATTEN_HELPER 529
#define INSTANCE_FLATTEN 530
#define INSTANCE_REMOVE_STMT_BLKS_CALLING_STMT 531
#define INSTANCE_REMOVE_PARMS_WITH_EXPR 532
#define INSTANCE_DEALLOC_SINGLE 533
#define INSTANCE_DEALLOC_TREE 534
#define INSTANCE_DEALLOC 535
#define STMT_ITER_RESET 536
#define STMT_ITER_COPY 537
#define STMT_ITER_NEXT 538
#define STMT_ITER_REVERSE 539
#define STMT_ITER_FIND_HEAD 540
#define STMT_ITER_GET_NEXT_IN_ORDER 541
#define STMT_ITER_GET_LINE_BEFORE 542
#define STATIC_EXPR_GEN_UNARY 543
#define STATIC_EXPR_GEN 544
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_PRE 545
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_POST 546
#define STATIC_EXPR_DEALLOC 547
#define PARSER_PORT_DECLARATION_A 548
#define PARSER_PORT_DECLARATION_B 549
#define PARSER_PORT_DECLARATION_C 550
#define PARSER_STATIC_EXPR_PRIMARY_A 551
#define PARSER_STATIC_EXPR_PRIMARY_B 552
#define PARSER_EXPRESSION_LIST_A 553
#define PARSER_EXPRESSION_LIST_B 554
#define PARSER_EXPRESSION_LIST_C 555
#define PARSER_EXPRESSION_LIST_D 556
#define PARSER_IDENTIFIER_A 557
#define PARSER_GENERATE_CASE_ITEM_A 558
#define PARSER_GENERATE_CASE_ITEM_B 559
#define PARSER_GENERATE_CASE_ITEM_C 560
#define PARSER_STATEMENT_BEGIN_A 561
#define PARSER_STATEMENT_FORK_A 562
#define PARSER_STATEMENT_FOR_A 563
#define PARSER_CASE_ITEM_A 564
#define PARSER_CASE_ITEM_B 565
#define PARSER_CASE_ITEM_C 566
#define PARSER_DELAY_VALUE_A 567
#define PARSER_DELAY_VALUE_B 568
#define PARSER_PARAMETER_VALUE_BYNAME_A 569
#define PARSER_GATE_INSTANCE_A 570
#define PARSER_GATE_INSTANCE_B 571
#define PARSER_GATE_INSTANCE_C 572
#define PARSER_GATE_INSTANCE_D 573
#define PARSER_LIST_OF_NAMES_A 574
#define PARSER_LIST_OF_NAMES_B 575
#define LINE_GET_STATS 576
#define LINE_COLLECT 577
#define LINE_GET_FUNIT_SUMMARY 578
#define LINE_DISPLAY_INSTANCE_SUMMARY 579
#define LINE_INSTANCE_SUMMARY 580
#define LINE_DISPLAY_FUNIT_SUMMARY 581
#define LINE_FUNIT_SUMMARY 582
#define LINE_DISPLAY_VERBOSE 583
#define LINE_INSTANCE_VERBOSE 584
#define LINE_FUNIT_VERBOSE 585
#define LINE_REPORT 586
#define STR_LINK_ADD 587
#define STMT_LINK_ADD_HEAD 588
#define STMT_LINK_ADD_TAIL 589
#define STMT_LINK_MERGE 590
#define EXP_LINK_ADD 591
#define SIG_LINK_ADD 592
#define FSM_LINK_ADD 593
#define FUNIT_LINK_ADD 594
#define GITEM_LINK_ADD 595
#define INST_LINK_ADD 596
#define STR_LINK_FIND 597
#define STMT_LINK_FIND 598
#define EXP_LINK_FIND 599
#define SIG_LINK_FIND 600
#define FSM_LINK_FIND 601
#define FUNIT_LINK_FIND 602
#define GITEM_LINK_FIND 603
#define INST_LINK_FIND_BY_SCOPE 604
#define INST_LINK_FIND_BY_FUNIT 605
#define STR_LINK_REMOVE 606
#define EXP_LINK_REMOVE 607
#define GITEM_LINK_REMOVE 608
#define FUNIT_LINK_REMOVE 609
#define INST_LINK_FLATTEN 610
#define STR_LINK_DELETE_LIST 611
#define STMT_LINK_UNLINK 612
#define STMT_LINK_DELETE_LIST 613
#define EXP_LINK_DELETE_LIST 614
#define SIG_LINK_DELETE_LIST 615
#define FSM_LINK_DELETE_LIST 616
#define FUNIT_LINK_DELETE_LIST 617
#define GITEM_LINK_DELETE_LIST 618
#define INST_LINK_DELETE_LIST 619
#define VCDID 620
#define VCD_CALLBACK 621
#define LXT_PARSE 622
#define LXT2_RD_EXPAND_INTEGER_TO_BITS 623
#define LXT2_RD_EXPAND_BITS_TO_INTEGER 624
#define LXT2_RD_ITER_RADIX 625
#define LXT2_RD_ITER_RADIX0 626
#define LXT2_RD_BUILD_RADIX 627
#define LXT2_RD_REGENERATE_PROCESS_MASK 628
#define LXT2_RD_PROCESS_BLOCK 629
#define LXT2_RD_INIT 630
#define LXT2_RD_CLOSE 631
#define LXT2_RD_GET_FACNAME 632
#define LXT2_RD_ITER_BLOCKS 633
#define LXT2_RD_LIMIT_TIME_RANGE 634
#define LXT2_RD_UNLIMIT_TIME_RANGE 635
#define MEMORY_GET_STAT 636
#define MEMORY_GET_STATS 637
#define MEMORY_GET_FUNIT_SUMMARY 638
#define MEMORY_CREATE_PDIM_BIT_ARRAY 639
#define MEMORY_GET_MEM_COVERAGE 640
#define MEMORY_GET_COVERAGE 641
#define MEMORY_COLLECT 642
#define MEMORY_DISPLAY_TOGGLE_INSTANCE_SUMMARY 643
#define MEMORY_TOGGLE_INSTANCE_SUMMARY 644
#define MEMORY_DISPLAY_AE_INSTANCE_SUMMARY 645
#define MEMORY_AE_INSTANCE_SUMMARY 646
#define MEMORY_DISPLAY_TOGGLE_FUNIT_SUMMARY 647
#define MEMORY_TOGGLE_FUNIT_SUMMARY 648
#define MEMORY_DISPLAY_AE_FUNIT_SUMMARY 649
#define MEMORY_AE_FUNIT_SUMMARY 650
#define MEMORY_DISPLAY_MEMORY 651
#define MEMORY_DISPLAY_VERBOSE 652
#define MEMORY_INSTANCE_VERBOSE 653
#define MEMORY_FUNIT_VERBOSE 654
#define MEMORY_REPORT 655
#define COMMAND_MERGE 656
#define OVL_IS_ASSERTION_NAME 657
#define OVL_IS_ASSERTION_MODULE 658
#define OVL_IS_COVERAGE_POINT 659
#define OVL_ADD_ASSERTIONS_TO_NO_SCORE_LIST 660
#define OVL_GET_FNIT_STATS 661
#define OVL_GET_COVERAGE_POINT 662
#define OVL_DISPLAY_VERBOSE 663
#define OVL_COLLECT 664
#define OVL_GET_COVERAGE 665
#define STRUCT_UNION_LENGTH 666
#define STRUCT_UNION_ADD_MEMBER 667
#define STRUCT_UNION_ADD_MEMBER_VOID 668
#define STRUCT_UNION_ADD_MEMBER_SIG 669
#define STRUCT_UNION_ADD_MEMBER_TYPEDEF 670
#define STRUCT_UNION_ADD_MEMBER_ENUM 671
#define STRUCT_UNION_ADD_MEMBER_STRUCT_UNION 672
#define STRUCT_UNION_CREATE 673
#define STRUCT_UNION_MEMBER_DEALLOC 674
#define STRUCT_UNION_DEALLOC 675
#define STRUCT_UNION_DEALLOC_LIST 676
#define LEXER_KEYWORD_1995_CODE 677
#define LEXER_CSTRING_A 678
#define LEXER_KEYWORD_A 679
#define LEXER_ESCAPED_NAME 680
#define LEXER_SYSTEM_CALL 681
#define LINE_DIRECTIVE 682
#define LINE_DIRECTIVE2 683
#define PROCESS_TIMESCALE_TOKEN 684
#define PROCESS_TIMESCALE 685
#define LEXER_YYWRAP 686
#define RESET_LEXER 687
#define CHECK_FOR_PRAGMA 688
#define VECTOR_INIT 689
#define VECTOR_CREATE 690
#define VECTOR_COPY 691
#define VECTOR_CLONE 692
#define VECTOR_NIBBLES_TO_UINT 693
#define VECTOR_UINT_TO_NIBBLES 694
#define VECTOR_DB_WRITE 695
#define VECTOR_DB_READ 696
#define VECTOR_DB_MERGE 697
#define VECTOR_GET_TOGGLE01 698
#define VECTOR_GET_TOGGLE10 699
#define VECTOR_DISPLAY_TOGGLE01 700
#define VECTOR_DISPLAY_TOGGLE10 701
#define VECTOR_TOGGLE_COUNT 702
#define VECTOR_MEM_RW_COUNT 703
#define VECTOR_SET_ASSIGNED 704
#define VECTOR_SET_VALUE 705
#define VECTOR_BIT_FILL 706
#define VECTOR_IS_SET 707
#define VECTOR_TO_INT 708
#define VECTOR_TO_UINT64 709
#define VECTOR_TO_SIM_TIME 710
#define VECTOR_FROM_INT 711
#define VECTOR_FROM_UINT64 712
#define VECTOR_SET_STATIC 713
#define VECTOR_TO_STRING 714
#define VECTOR_FROM_STRING 715
#define VECTOR_VCD_ASSIGN 716
#define VECTOR_BITWISE_OP 717
#define VECTOR_OP_COMPARE 718
#define VECTOR_OP_LSHIFT 719
#define VECTOR_OP_RSHIFT 720
#define VECTOR_OP_ARSHIFT 721
#define VECTOR_OP_ADD 722
#define VECTOR_OP_NEGATE 723
#define VECTOR_OP_SUBTRACT 724
#define VECTOR_OP_MULTIPLY 725
#define VECTOR_OP_INC 726
#define VECTOR_OP_DEC 727
#define VECTOR_UNARY_INV 728
#define VECTOR_UNARY_OP 729
#define VECTOR_UNARY_NOT 730
#define VECTOR_DEALLOC 731
#define BIND_ADD 732
#define BIND_APPEND_FSM_EXPR 733
#define BIND_REMOVE 734
#define BIND_FIND_SIG_NAME 735
#define BIND_PARAM 736
#define BIND_SIGNAL 737
#define BIND_TASK_FUNCTION_PORTS 738
#define BIND_TASK_FUNCTION_NAMEDBLOCK 739
#define BIND_PERFORM 740
#define BIND_DEALLOC 741
#define LEXER_KEYWORD_SV_CODE 742
#define EXPRESSION_CREATE_VALUE 743
#define EXPRESSION_CREATE 744
#define EXPRESSION_SET_VALUE 745
#define EXPRESSION_SET_SIGNED 746
#define EXPRESSION_RESIZE 747
#define EXPRESSION_GET_ID 748
#define EXPRESSION_GET_FIRST_LINE_EXPR 749
#define EXPRESSION_GET_LAST_LINE_EXPR 750
#define EXPRESSION_GET_CURR_DIMENSION 751
#define EXPRESSION_FIND_RHS_SIGS 752
#define EXPRESSION_FIND_PARAMS 753
#define EXPRESSION_FIND_ULINE_ID 754
#define EXPRESSION_FIND_EXPR 755
#define EXPRESSION_CONTAINS_EXPR_CALLING_STMT 756
#define EXPRESSION_GET_ROOT_STATEMENT 757
#define EXPRESSION_ASSIGN_EXPR_IDS 758
#define EXPRESSION_DB_WRITE 759
#define EXPRESSION_DB_WRITE_TREE 760
#define EXPRESSION_DB_READ 761
#define EXPRESSION_DB_MERGE 762
#define EXPRESSION_STRING_OP 763
#define EXPRESSION_STRING 764
#define EXPRESSION_OP_FUNC__XOR 765
#define EXPRESSION_OP_FUNC__MULTIPLY 766
#define EXPRESSION_OP_FUNC__DIVIDE 767
#define EXPRESSION_OP_FUNC__MOD 768
#define EXPRESSION_OP_FUNC__ADD 769
#define EXPRESSION_OP_FUNC__SUBTRACT 770
#define EXPRESSION_OP_FUNC__AND 771
#define EXPRESSION_OP_FUNC__OR 772
#define EXPRESSION_OP_FUNC__NAND 773
#define EXPRESSION_OP_FUNC__NOR 774
#define EXPRESSION_OP_FUNC__NXOR 775
#define EXPRESSION_OP_FUNC__LT 776
#define EXPRESSION_OP_FUNC__GT 777
#define EXPRESSION_OP_FUNC__LSHIFT 778
#define EXPRESSION_OP_FUNC__RSHIFT 779
#define EXPRESSION_OP_FUNC__ARSHIFT 780
#define EXPRESSION_OP_FUNC__EQ 781
#define EXPRESSION_OP_FUNC__CEQ 782
#define EXPRESSION_OP_FUNC__LE 783
#define EXPRESSION_OP_FUNC__GE 784
#define EXPRESSION_OP_FUNC__NE 785
#define EXPRESSION_OP_FUNC__CNE 786
#define EXPRESSION_OP_FUNC__LOR 787
#define EXPRESSION_OP_FUNC__LAND 788
#define EXPRESSION_OP_FUNC__COND 789
#define EXPRESSION_OP_FUNC__COND_SEL 790
#define EXPRESSION_OP_FUNC__UINV 791
#define EXPRESSION_OP_FUNC__UAND 792
#define EXPRESSION_OP_FUNC__UNOT 793
#define EXPRESSION_OP_FUNC__UOR 794
#define EXPRESSION_OP_FUNC__UXOR 795
#define EXPRESSION_OP_FUNC__UNAND 796
#define EXPRESSION_OP_FUNC__UNOR 797
#define EXPRESSION_OP_FUNC__UNXOR 798
#define EXPRESSION_OP_FUNC__NULL 799
#define EXPRESSION_OP_FUNC__SIG 800
#define EXPRESSION_OP_FUNC__SBIT 801
#define EXPRESSION_OP_FUNC__MBIT 802
#define EXPRESSION_OP_FUNC__EXPAND 803
#define EXPRESSION_OP_FUNC__LIST 804
#define EXPRESSION_OP_FUNC__CONCAT 805
#define EXPRESSION_OP_FUNC__PEDGE 806
#define EXPRESSION_OP_FUNC__NEDGE 807
#define EXPRESSION_OP_FUNC__AEDGE 808
#define EXPRESSION_OP_FUNC__EOR 809
#define EXPRESSION_OP_FUNC__SLIST 810
#define EXPRESSION_OP_FUNC__DELAY 811
#define EXPRESSION_OP_FUNC__TRIGGER 812
#define EXPRESSION_OP_FUNC__CASE 813
#define EXPRESSION_OP_FUNC__CASEX 814
#define EXPRESSION_OP_FUNC__CASEZ 815
#define EXPRESSION_OP_FUNC__DEFAULT 816
#define EXPRESSION_OP_FUNC__BASSIGN 817
#define EXPRESSION_OP_FUNC__FUNC_CALL 818
#define EXPRESSION_OP_FUNC__TASK_CALL 819
#define EXPRESSION_OP_FUNC__NB_CALL 820
#define EXPRESSION_OP_FUNC__FORK 821
#define EXPRESSION_OP_FUNC__JOIN 822
#define EXPRESSION_OP_FUNC__DISABLE 823
#define EXPRESSION_OP_FUNC__REPEAT 824
#define EXPRESSION_OP_FUNC__EXPONENT 825
#define EXPRESSION_OP_FUNC__PASSIGN 826
#define EXPRESSION_OP_FUNC__MBIT_POS 827
#define EXPRESSION_OP_FUNC__MBIT_NEG 828
#define EXPRESSION_OP_FUNC__NEGATE 829
#define EXPRESSION_OP_FUNC__IINC 830
#define EXPRESSION_OP_FUNC__PINC 831
#define EXPRESSION_OP_FUNC__IDEC 832
#define EXPRESSION_OP_FUNC__PDEC 833
#define EXPRESSION_OP_FUNC__DLY_ASSIGN 834
#define EXPRESSION_OP_FUNC__DLY_OP 835
#define EXPRESSION_OP_FUNC__REPEAT_DLY 836
#define EXPRESSION_OP_FUNC__WAIT 837
#define EXPRESSION_OP_FUNC__FINISH 838
#define EXPRESSION_OP_FUNC__STOP 839
#define EXPRESSION_OPERATE 840
#define EXPRESSION_OPERATE_RECURSIVELY 841
#define EXPRESSION_IS_STATIC_ONLY 842
#define EXPRESSION_IS_ASSIGNED 843
#define EXPRESSION_IS_BIT_SELECT 844
#define EXPRESSION_IS_LAST_SELECT 845
#define EXPRESSION_IS_IN_RASSIGN 846
#define EXPRESSION_SET_ASSIGNED 847
#define EXPRESSION_ASSIGN 848
#define EXPRESSION_DEALLOC 849
#define LEXER_KEYWORD_2001_CODE 850
#define DEF_LOOKUP 851
#define IS_DEFINED 852
#define DEF_MATCH 853
#define DEF_START 854
#define DEFINE_MACRO 855
#define DO_DEFINE 856
#define DEF_IS_DONE 857
#define DEF_FINISH 858
#define DEF_UNDEFINE 859
#define INCLUDE_FILENAME 860
#define DO_INCLUDE 861
#define YYWRAP 862
#define RESET_PPLEXER 863

extern profiler profiles[NUM_PROFILES];
#endif

extern unsigned int profile_index;

#endif

