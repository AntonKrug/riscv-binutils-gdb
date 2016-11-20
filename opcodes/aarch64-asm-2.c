/* This file is automatically generated by aarch64-gen.  Do not edit!  */
/* Copyright (C) 2012-2016 Free Software Foundation, Inc.
   Contributed by ARM Ltd.

   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#include "sysdep.h"
#include "aarch64-asm.h"


const aarch64_opcode *
aarch64_find_real_opcode (const aarch64_opcode *opcode)
{
  /* Use the index as the key to locate the real opcode.  */
  int key = opcode - aarch64_opcode_table;
  int value;
  switch (key)
    {
    case 3:	/* ngc */
    case 2:	/* sbc */
      value = 2;	/* --> sbc.  */
      break;
    case 5:	/* ngcs */
    case 4:	/* sbcs */
      value = 4;	/* --> sbcs.  */
      break;
    case 8:	/* cmn */
    case 7:	/* adds */
      value = 7;	/* --> adds.  */
      break;
    case 11:	/* cmp */
    case 10:	/* subs */
      value = 10;	/* --> subs.  */
      break;
    case 13:	/* mov */
    case 12:	/* add */
      value = 12;	/* --> add.  */
      break;
    case 15:	/* cmn */
    case 14:	/* adds */
      value = 14;	/* --> adds.  */
      break;
    case 18:	/* cmp */
    case 17:	/* subs */
      value = 17;	/* --> subs.  */
      break;
    case 21:	/* cmn */
    case 20:	/* adds */
      value = 20;	/* --> adds.  */
      break;
    case 23:	/* neg */
    case 22:	/* sub */
      value = 22;	/* --> sub.  */
      break;
    case 26:	/* negs */
    case 25:	/* cmp */
    case 24:	/* subs */
      value = 24;	/* --> subs.  */
      break;
    case 151:	/* mov */
    case 150:	/* umov */
      value = 150;	/* --> umov.  */
      break;
    case 153:	/* mov */
    case 152:	/* ins */
      value = 152;	/* --> ins.  */
      break;
    case 155:	/* mov */
    case 154:	/* ins */
      value = 154;	/* --> ins.  */
      break;
    case 237:	/* mvn */
    case 236:	/* not */
      value = 236;	/* --> not.  */
      break;
    case 312:	/* mov */
    case 311:	/* orr */
      value = 311;	/* --> orr.  */
      break;
    case 383:	/* sxtl */
    case 382:	/* sshll */
      value = 382;	/* --> sshll.  */
      break;
    case 385:	/* sxtl2 */
    case 384:	/* sshll2 */
      value = 384;	/* --> sshll2.  */
      break;
    case 407:	/* uxtl */
    case 406:	/* ushll */
      value = 406;	/* --> ushll.  */
      break;
    case 409:	/* uxtl2 */
    case 408:	/* ushll2 */
      value = 408;	/* --> ushll2.  */
      break;
    case 530:	/* mov */
    case 529:	/* dup */
      value = 529;	/* --> dup.  */
      break;
    case 617:	/* sxtw */
    case 616:	/* sxth */
    case 615:	/* sxtb */
    case 618:	/* asr */
    case 614:	/* sbfx */
    case 613:	/* sbfiz */
    case 612:	/* sbfm */
      value = 612;	/* --> sbfm.  */
      break;
    case 621:	/* bfc */
    case 622:	/* bfxil */
    case 620:	/* bfi */
    case 619:	/* bfm */
      value = 619;	/* --> bfm.  */
      break;
    case 627:	/* uxth */
    case 626:	/* uxtb */
    case 629:	/* lsr */
    case 628:	/* lsl */
    case 625:	/* ubfx */
    case 624:	/* ubfiz */
    case 623:	/* ubfm */
      value = 623;	/* --> ubfm.  */
      break;
    case 659:	/* cset */
    case 658:	/* cinc */
    case 657:	/* csinc */
      value = 657;	/* --> csinc.  */
      break;
    case 662:	/* csetm */
    case 661:	/* cinv */
    case 660:	/* csinv */
      value = 660;	/* --> csinv.  */
      break;
    case 664:	/* cneg */
    case 663:	/* csneg */
      value = 663;	/* --> csneg.  */
      break;
    case 682:	/* rev */
    case 683:	/* rev64 */
      value = 682;	/* --> rev.  */
      break;
    case 708:	/* lsl */
    case 707:	/* lslv */
      value = 707;	/* --> lslv.  */
      break;
    case 710:	/* lsr */
    case 709:	/* lsrv */
      value = 709;	/* --> lsrv.  */
      break;
    case 712:	/* asr */
    case 711:	/* asrv */
      value = 711;	/* --> asrv.  */
      break;
    case 714:	/* ror */
    case 713:	/* rorv */
      value = 713;	/* --> rorv.  */
      break;
    case 725:	/* mul */
    case 724:	/* madd */
      value = 724;	/* --> madd.  */
      break;
    case 727:	/* mneg */
    case 726:	/* msub */
      value = 726;	/* --> msub.  */
      break;
    case 729:	/* smull */
    case 728:	/* smaddl */
      value = 728;	/* --> smaddl.  */
      break;
    case 731:	/* smnegl */
    case 730:	/* smsubl */
      value = 730;	/* --> smsubl.  */
      break;
    case 734:	/* umull */
    case 733:	/* umaddl */
      value = 733;	/* --> umaddl.  */
      break;
    case 736:	/* umnegl */
    case 735:	/* umsubl */
      value = 735;	/* --> umsubl.  */
      break;
    case 747:	/* ror */
    case 746:	/* extr */
      value = 746;	/* --> extr.  */
      break;
    case 960:	/* bic */
    case 959:	/* and */
      value = 959;	/* --> and.  */
      break;
    case 962:	/* mov */
    case 961:	/* orr */
      value = 961;	/* --> orr.  */
      break;
    case 965:	/* tst */
    case 964:	/* ands */
      value = 964;	/* --> ands.  */
      break;
    case 970:	/* uxtw */
    case 969:	/* mov */
    case 968:	/* orr */
      value = 968;	/* --> orr.  */
      break;
    case 972:	/* mvn */
    case 971:	/* orn */
      value = 971;	/* --> orn.  */
      break;
    case 976:	/* tst */
    case 975:	/* ands */
      value = 975;	/* --> ands.  */
      break;
    case 1102:	/* staddb */
    case 1006:	/* ldaddb */
      value = 1006;	/* --> ldaddb.  */
      break;
    case 1103:	/* staddh */
    case 1007:	/* ldaddh */
      value = 1007;	/* --> ldaddh.  */
      break;
    case 1104:	/* stadd */
    case 1008:	/* ldadd */
      value = 1008;	/* --> ldadd.  */
      break;
    case 1105:	/* staddlb */
    case 1010:	/* ldaddlb */
      value = 1010;	/* --> ldaddlb.  */
      break;
    case 1106:	/* staddlh */
    case 1013:	/* ldaddlh */
      value = 1013;	/* --> ldaddlh.  */
      break;
    case 1107:	/* staddl */
    case 1016:	/* ldaddl */
      value = 1016;	/* --> ldaddl.  */
      break;
    case 1108:	/* stclrb */
    case 1018:	/* ldclrb */
      value = 1018;	/* --> ldclrb.  */
      break;
    case 1109:	/* stclrh */
    case 1019:	/* ldclrh */
      value = 1019;	/* --> ldclrh.  */
      break;
    case 1110:	/* stclr */
    case 1020:	/* ldclr */
      value = 1020;	/* --> ldclr.  */
      break;
    case 1111:	/* stclrlb */
    case 1022:	/* ldclrlb */
      value = 1022;	/* --> ldclrlb.  */
      break;
    case 1112:	/* stclrlh */
    case 1025:	/* ldclrlh */
      value = 1025;	/* --> ldclrlh.  */
      break;
    case 1113:	/* stclrl */
    case 1028:	/* ldclrl */
      value = 1028;	/* --> ldclrl.  */
      break;
    case 1114:	/* steorb */
    case 1030:	/* ldeorb */
      value = 1030;	/* --> ldeorb.  */
      break;
    case 1115:	/* steorh */
    case 1031:	/* ldeorh */
      value = 1031;	/* --> ldeorh.  */
      break;
    case 1116:	/* steor */
    case 1032:	/* ldeor */
      value = 1032;	/* --> ldeor.  */
      break;
    case 1117:	/* steorlb */
    case 1034:	/* ldeorlb */
      value = 1034;	/* --> ldeorlb.  */
      break;
    case 1118:	/* steorlh */
    case 1037:	/* ldeorlh */
      value = 1037;	/* --> ldeorlh.  */
      break;
    case 1119:	/* steorl */
    case 1040:	/* ldeorl */
      value = 1040;	/* --> ldeorl.  */
      break;
    case 1120:	/* stsetb */
    case 1042:	/* ldsetb */
      value = 1042;	/* --> ldsetb.  */
      break;
    case 1121:	/* stseth */
    case 1043:	/* ldseth */
      value = 1043;	/* --> ldseth.  */
      break;
    case 1122:	/* stset */
    case 1044:	/* ldset */
      value = 1044;	/* --> ldset.  */
      break;
    case 1123:	/* stsetlb */
    case 1046:	/* ldsetlb */
      value = 1046;	/* --> ldsetlb.  */
      break;
    case 1124:	/* stsetlh */
    case 1049:	/* ldsetlh */
      value = 1049;	/* --> ldsetlh.  */
      break;
    case 1125:	/* stsetl */
    case 1052:	/* ldsetl */
      value = 1052;	/* --> ldsetl.  */
      break;
    case 1126:	/* stsmaxb */
    case 1054:	/* ldsmaxb */
      value = 1054;	/* --> ldsmaxb.  */
      break;
    case 1127:	/* stsmaxh */
    case 1055:	/* ldsmaxh */
      value = 1055;	/* --> ldsmaxh.  */
      break;
    case 1128:	/* stsmax */
    case 1056:	/* ldsmax */
      value = 1056;	/* --> ldsmax.  */
      break;
    case 1129:	/* stsmaxlb */
    case 1058:	/* ldsmaxlb */
      value = 1058;	/* --> ldsmaxlb.  */
      break;
    case 1130:	/* stsmaxlh */
    case 1061:	/* ldsmaxlh */
      value = 1061;	/* --> ldsmaxlh.  */
      break;
    case 1131:	/* stsmaxl */
    case 1064:	/* ldsmaxl */
      value = 1064;	/* --> ldsmaxl.  */
      break;
    case 1132:	/* stsminb */
    case 1066:	/* ldsminb */
      value = 1066;	/* --> ldsminb.  */
      break;
    case 1133:	/* stsminh */
    case 1067:	/* ldsminh */
      value = 1067;	/* --> ldsminh.  */
      break;
    case 1134:	/* stsmin */
    case 1068:	/* ldsmin */
      value = 1068;	/* --> ldsmin.  */
      break;
    case 1135:	/* stsminlb */
    case 1070:	/* ldsminlb */
      value = 1070;	/* --> ldsminlb.  */
      break;
    case 1136:	/* stsminlh */
    case 1073:	/* ldsminlh */
      value = 1073;	/* --> ldsminlh.  */
      break;
    case 1137:	/* stsminl */
    case 1076:	/* ldsminl */
      value = 1076;	/* --> ldsminl.  */
      break;
    case 1138:	/* stumaxb */
    case 1078:	/* ldumaxb */
      value = 1078;	/* --> ldumaxb.  */
      break;
    case 1139:	/* stumaxh */
    case 1079:	/* ldumaxh */
      value = 1079;	/* --> ldumaxh.  */
      break;
    case 1140:	/* stumax */
    case 1080:	/* ldumax */
      value = 1080;	/* --> ldumax.  */
      break;
    case 1141:	/* stumaxlb */
    case 1082:	/* ldumaxlb */
      value = 1082;	/* --> ldumaxlb.  */
      break;
    case 1142:	/* stumaxlh */
    case 1085:	/* ldumaxlh */
      value = 1085;	/* --> ldumaxlh.  */
      break;
    case 1143:	/* stumaxl */
    case 1088:	/* ldumaxl */
      value = 1088;	/* --> ldumaxl.  */
      break;
    case 1144:	/* stuminb */
    case 1090:	/* lduminb */
      value = 1090;	/* --> lduminb.  */
      break;
    case 1145:	/* stuminh */
    case 1091:	/* lduminh */
      value = 1091;	/* --> lduminh.  */
      break;
    case 1146:	/* stumin */
    case 1092:	/* ldumin */
      value = 1092;	/* --> ldumin.  */
      break;
    case 1147:	/* stuminlb */
    case 1094:	/* lduminlb */
      value = 1094;	/* --> lduminlb.  */
      break;
    case 1148:	/* stuminlh */
    case 1097:	/* lduminlh */
      value = 1097;	/* --> lduminlh.  */
      break;
    case 1149:	/* stuminl */
    case 1100:	/* lduminl */
      value = 1100;	/* --> lduminl.  */
      break;
    case 1151:	/* mov */
    case 1150:	/* movn */
      value = 1150;	/* --> movn.  */
      break;
    case 1153:	/* mov */
    case 1152:	/* movz */
      value = 1152;	/* --> movz.  */
      break;
    case 1191:	/* autibsp */
    case 1190:	/* autibz */
    case 1189:	/* autiasp */
    case 1188:	/* autiaz */
    case 1187:	/* pacibsp */
    case 1186:	/* pacibz */
    case 1185:	/* paciasp */
    case 1184:	/* paciaz */
    case 1171:	/* psb */
    case 1170:	/* esb */
    case 1169:	/* autib1716 */
    case 1168:	/* autia1716 */
    case 1167:	/* pacib1716 */
    case 1166:	/* pacia1716 */
    case 1165:	/* xpaclri */
    case 1164:	/* sevl */
    case 1163:	/* sev */
    case 1162:	/* wfi */
    case 1161:	/* wfe */
    case 1160:	/* yield */
    case 1159:	/* nop */
    case 1158:	/* hint */
      value = 1158;	/* --> hint.  */
      break;
    case 1180:	/* tlbi */
    case 1179:	/* ic */
    case 1178:	/* dc */
    case 1177:	/* at */
    case 1176:	/* sys */
      value = 1176;	/* --> sys.  */
      break;
    case 1934:	/* bic */
    case 1239:	/* and */
      value = 1239;	/* --> and.  */
      break;
    case 1222:	/* mov */
    case 1241:	/* and */
      value = 1241;	/* --> and.  */
      break;
    case 1226:	/* movs */
    case 1242:	/* ands */
      value = 1242;	/* --> ands.  */
      break;
    case 1935:	/* cmple */
    case 1277:	/* cmpge */
      value = 1277;	/* --> cmpge.  */
      break;
    case 1938:	/* cmplt */
    case 1280:	/* cmpgt */
      value = 1280;	/* --> cmpgt.  */
      break;
    case 1936:	/* cmplo */
    case 1282:	/* cmphi */
      value = 1282;	/* --> cmphi.  */
      break;
    case 1937:	/* cmpls */
    case 1285:	/* cmphs */
      value = 1285;	/* --> cmphs.  */
      break;
    case 1219:	/* mov */
    case 1307:	/* cpy */
      value = 1307;	/* --> cpy.  */
      break;
    case 1221:	/* mov */
    case 1308:	/* cpy */
      value = 1308;	/* --> cpy.  */
      break;
    case 1945:	/* fmov */
    case 1224:	/* mov */
    case 1309:	/* cpy */
      value = 1309;	/* --> cpy.  */
      break;
    case 1214:	/* mov */
    case 1321:	/* dup */
      value = 1321;	/* --> dup.  */
      break;
    case 1216:	/* mov */
    case 1213:	/* mov */
    case 1322:	/* dup */
      value = 1322;	/* --> dup.  */
      break;
    case 1944:	/* fmov */
    case 1218:	/* mov */
    case 1323:	/* dup */
      value = 1323;	/* --> dup.  */
      break;
    case 1217:	/* mov */
    case 1324:	/* dupm */
      value = 1324;	/* --> dupm.  */
      break;
    case 1939:	/* eon */
    case 1326:	/* eor */
      value = 1326;	/* --> eor.  */
      break;
    case 1227:	/* not */
    case 1328:	/* eor */
      value = 1328;	/* --> eor.  */
      break;
    case 1228:	/* nots */
    case 1329:	/* eors */
      value = 1329;	/* --> eors.  */
      break;
    case 1940:	/* facle */
    case 1334:	/* facge */
      value = 1334;	/* --> facge.  */
      break;
    case 1941:	/* faclt */
    case 1335:	/* facgt */
      value = 1335;	/* --> facgt.  */
      break;
    case 1942:	/* fcmle */
    case 1344:	/* fcmge */
      value = 1344;	/* --> fcmge.  */
      break;
    case 1943:	/* fcmlt */
    case 1346:	/* fcmgt */
      value = 1346;	/* --> fcmgt.  */
      break;
    case 1211:	/* fmov */
    case 1352:	/* fcpy */
      value = 1352;	/* --> fcpy.  */
      break;
    case 1210:	/* fmov */
    case 1369:	/* fdup */
      value = 1369;	/* --> fdup.  */
      break;
    case 1212:	/* mov */
    case 1667:	/* orr */
      value = 1667;	/* --> orr.  */
      break;
    case 1946:	/* orn */
    case 1668:	/* orr */
      value = 1668;	/* --> orr.  */
      break;
    case 1215:	/* mov */
    case 1670:	/* orr */
      value = 1670;	/* --> orr.  */
      break;
    case 1225:	/* movs */
    case 1671:	/* orrs */
      value = 1671;	/* --> orrs.  */
      break;
    case 1220:	/* mov */
    case 1727:	/* sel */
      value = 1727;	/* --> sel.  */
      break;
    case 1223:	/* mov */
    case 1728:	/* sel */
      value = 1728;	/* --> sel.  */
      break;
    default: return NULL;
    }

  return aarch64_opcode_table + value;
}

const char*
aarch64_insert_operand (const aarch64_operand *self,
			   const aarch64_opnd_info *info,
			   aarch64_insn *code, const aarch64_inst *inst)
{
  /* Use the index as the key.  */
  int key = self - aarch64_operands;
  switch (key)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 15:
    case 16:
    case 17:
    case 18:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 36:
    case 37:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
    case 152:
    case 153:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
    case 175:
    case 178:
      return aarch64_ins_regno (self, info, code, inst);
    case 13:
      return aarch64_ins_reg_extended (self, info, code, inst);
    case 14:
      return aarch64_ins_reg_shifted (self, info, code, inst);
    case 19:
      return aarch64_ins_ft (self, info, code, inst);
    case 29:
    case 30:
    case 31:
      return aarch64_ins_reglane (self, info, code, inst);
    case 32:
      return aarch64_ins_reglist (self, info, code, inst);
    case 33:
      return aarch64_ins_ldst_reglist (self, info, code, inst);
    case 34:
      return aarch64_ins_ldst_reglist_r (self, info, code, inst);
    case 35:
      return aarch64_ins_ldst_elemlist (self, info, code, inst);
    case 38:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 72:
    case 73:
    case 74:
    case 75:
    case 141:
    case 143:
    case 158:
    case 159:
    case 160:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
      return aarch64_ins_imm (self, info, code, inst);
    case 39:
    case 40:
      return aarch64_ins_advsimd_imm_shift (self, info, code, inst);
    case 41:
    case 42:
    case 43:
      return aarch64_ins_advsimd_imm_modified (self, info, code, inst);
    case 47:
    case 134:
      return aarch64_ins_fpimm (self, info, code, inst);
    case 61:
    case 139:
      return aarch64_ins_limm (self, info, code, inst);
    case 62:
      return aarch64_ins_aimm (self, info, code, inst);
    case 63:
      return aarch64_ins_imm_half (self, info, code, inst);
    case 64:
      return aarch64_ins_fbits (self, info, code, inst);
    case 66:
    case 67:
    case 68:
      return aarch64_ins_imm_rotate (self, info, code, inst);
    case 69:
    case 70:
      return aarch64_ins_cond (self, info, code, inst);
    case 76:
    case 83:
      return aarch64_ins_addr_simple (self, info, code, inst);
    case 77:
      return aarch64_ins_addr_regoff (self, info, code, inst);
    case 78:
    case 79:
    case 80:
      return aarch64_ins_addr_simm (self, info, code, inst);
    case 81:
      return aarch64_ins_addr_simm10 (self, info, code, inst);
    case 82:
      return aarch64_ins_addr_uimm12 (self, info, code, inst);
    case 84:
      return aarch64_ins_simd_addr_post (self, info, code, inst);
    case 85:
      return aarch64_ins_sysreg (self, info, code, inst);
    case 86:
      return aarch64_ins_pstatefield (self, info, code, inst);
    case 87:
    case 88:
    case 89:
    case 90:
      return aarch64_ins_sysins_op (self, info, code, inst);
    case 91:
    case 92:
      return aarch64_ins_barrier (self, info, code, inst);
    case 93:
      return aarch64_ins_prfop (self, info, code, inst);
    case 94:
      return aarch64_ins_hint (self, info, code, inst);
    case 95:
    case 96:
    case 97:
    case 98:
      return aarch64_ins_sve_addr_ri_s4xvl (self, info, code, inst);
    case 99:
      return aarch64_ins_sve_addr_ri_s6xvl (self, info, code, inst);
    case 100:
      return aarch64_ins_sve_addr_ri_s9xvl (self, info, code, inst);
    case 101:
    case 102:
    case 103:
    case 104:
      return aarch64_ins_sve_addr_ri_u6 (self, info, code, inst);
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
      return aarch64_ins_sve_addr_rr_lsl (self, info, code, inst);
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
      return aarch64_ins_sve_addr_rz_xtw (self, info, code, inst);
    case 125:
    case 126:
    case 127:
    case 128:
      return aarch64_ins_sve_addr_zi_u5 (self, info, code, inst);
    case 129:
      return aarch64_ins_sve_addr_zz_lsl (self, info, code, inst);
    case 130:
      return aarch64_ins_sve_addr_zz_sxtw (self, info, code, inst);
    case 131:
      return aarch64_ins_sve_addr_zz_uxtw (self, info, code, inst);
    case 132:
      return aarch64_ins_sve_aimm (self, info, code, inst);
    case 133:
      return aarch64_ins_sve_asimm (self, info, code, inst);
    case 135:
      return aarch64_ins_sve_float_half_one (self, info, code, inst);
    case 136:
      return aarch64_ins_sve_float_half_two (self, info, code, inst);
    case 137:
      return aarch64_ins_sve_float_zero_one (self, info, code, inst);
    case 138:
      return aarch64_ins_inv_limm (self, info, code, inst);
    case 140:
      return aarch64_ins_sve_limm_mov (self, info, code, inst);
    case 142:
      return aarch64_ins_sve_scale (self, info, code, inst);
    case 154:
    case 155:
      return aarch64_ins_sve_shlimm (self, info, code, inst);
    case 156:
    case 157:
      return aarch64_ins_sve_shrimm (self, info, code, inst);
    case 176:
      return aarch64_ins_sve_index (self, info, code, inst);
    case 177:
    case 179:
      return aarch64_ins_sve_reglist (self, info, code, inst);
    default: assert (0); abort ();
    }
}
