# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008-2009 Jean Privat <jean@pryen.org>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# AST nodes of the Nit language
# Was previously based on parser_abs.nit.
package parser_nodes

import mmloader

# Root of the AST hierarchy
abstract class ANode
	readable var _location: nullable Location
end

# Ancestor of all tokens
abstract class Token
special ANode
end

# Ancestor of all productions
abstract class Prod
special ANode
	fun location=(loc: nullable Location) do _location = loc
end
class TEol
special Token
end
class TComment
special Token
end
class TKwpackage
special Token
end
class TKwimport
special Token
end
class TKwclass
special Token
end
class TKwabstract
special Token
end
class TKwinterface
special Token
end
class TKwuniversal
special Token
end
class TKwspecial
special Token
end
class TKwend
special Token
end
class TKwmeth
special Token
end
class TKwtype
special Token
end
class TKwattr
special Token
end
class TKwinit
special Token
end
class TKwredef
special Token
end
class TKwis
special Token
end
class TKwdo
special Token
end
class TKwreadable
special Token
end
class TKwwritable
special Token
end
class TKwvar
special Token
end
class TKwintern
special Token
end
class TKwextern
special Token
end
class TKwprotected
special Token
end
class TKwprivate
special Token
end
class TKwintrude
special Token
end
class TKwif
special Token
end
class TKwthen
special Token
end
class TKwelse
special Token
end
class TKwwhile
special Token
end
class TKwfor
special Token
end
class TKwin
special Token
end
class TKwand
special Token
end
class TKwor
special Token
end
class TKwnot
special Token
end
class TKwreturn
special Token
end
class TKwcontinue
special Token
end
class TKwbreak
special Token
end
class TKwabort
special Token
end
class TKwassert
special Token
end
class TKwnew
special Token
end
class TKwisa
special Token
end
class TKwonce
special Token
end
class TKwsuper
special Token
end
class TKwself
special Token
end
class TKwtrue
special Token
end
class TKwfalse
special Token
end
class TKwnull
special Token
end
class TKwas
special Token
end
class TKwwith
special Token
end
class TKwnullable
special Token
end
class TKwisset
special Token
end
class TKwlabel
special Token
end
class TOpar
special Token
end
class TCpar
special Token
end
class TObra
special Token
end
class TCbra
special Token
end
class TComma
special Token
end
class TColumn
special Token
end
class TQuad
special Token
end
class TAssign
special Token
end
class TPluseq
special Token
end
class TMinuseq
special Token
end
class TDotdotdot
special Token
end
class TDotdot
special Token
end
class TDot
special Token
end
class TPlus
special Token
end
class TMinus
special Token
end
class TStar
special Token
end
class TSlash
special Token
end
class TPercent
special Token
end
class TEq
special Token
end
class TNe
special Token
end
class TLt
special Token
end
class TLe
special Token
end
class TGt
special Token
end
class TGe
special Token
end
class TStarship
special Token
end
class TClassid
special Token
end
class TId
special Token
end
class TAttrid
special Token
end
class TNumber
special Token
end
class TFloat
special Token
end
class TChar
special Token
end
class TString
special Token
end
class TStartString
special Token
end
class TMidString
special Token
end
class TEndString
special Token
end
class EOF 
special Token
private init noinit do end
end
class AError
special EOF
private init noinit do end
end

class AModule
special Prod
    readable writable var _n_packagedecl: nullable APackagedecl = null
    readable writable var _n_imports: List[AImport] = new List[AImport]
    readable writable var _n_classdefs: List[AClassdef] = new List[AClassdef]
end
class APackagedecl
special Prod
    readable writable var _n_doc: nullable ADoc = null
    readable writable var _n_kwpackage: TKwpackage
    readable writable var _n_id: TId
end
class AImport special Prod end
class AStdImport
special AImport
    readable writable var _n_visibility: AVisibility
    readable writable var _n_kwimport: TKwimport
    readable writable var _n_id: TId
end
class ANoImport
special AImport
    readable writable var _n_visibility: AVisibility
    readable writable var _n_kwimport: TKwimport
    readable writable var _n_kwend: TKwend
end
class AVisibility special Prod end
class APublicVisibility
special AVisibility
end
class APrivateVisibility
special AVisibility
    readable writable var _n_kwprivate: TKwprivate
end
class AProtectedVisibility
special AVisibility
    readable writable var _n_kwprotected: TKwprotected
end
class AIntrudeVisibility
special AVisibility
    readable writable var _n_kwintrude: TKwintrude
end
class AClassdef special Prod end
class AStdClassdef
special AClassdef
    readable writable var _n_doc: nullable ADoc = null
    readable writable var _n_kwredef: nullable TKwredef = null
    readable writable var _n_visibility: AVisibility
    readable writable var _n_classkind: AClasskind
    readable writable var _n_id: nullable TClassid = null
    readable writable var _n_formaldefs: List[AFormaldef] = new List[AFormaldef]
    readable writable var _n_superclasses: List[ASuperclass] = new List[ASuperclass]
    readable writable var _n_propdefs: List[APropdef] = new List[APropdef]
end
class ATopClassdef
special AClassdef
    readable writable var _n_propdefs: List[APropdef] = new List[APropdef]
end
class AMainClassdef
special AClassdef
    readable writable var _n_propdefs: List[APropdef] = new List[APropdef]
end
class AClasskind special Prod end
class AConcreteClasskind
special AClasskind
    readable writable var _n_kwclass: TKwclass
end
class AAbstractClasskind
special AClasskind
    readable writable var _n_kwabstract: TKwabstract
    readable writable var _n_kwclass: TKwclass
end
class AInterfaceClasskind
special AClasskind
    readable writable var _n_kwinterface: TKwinterface
end
class AUniversalClasskind
special AClasskind
    readable writable var _n_kwuniversal: TKwuniversal
end
class AFormaldef
special Prod
    readable writable var _n_id: TClassid
    readable writable var _n_type: nullable AType = null
end
class ASuperclass
special Prod
    readable writable var _n_kwspecial: TKwspecial
    readable writable var _n_type: AType
end
class APropdef special Prod 
    readable writable var _n_doc: nullable ADoc = null
end
class AAttrPropdef
special APropdef
    readable writable var _n_kwredef: nullable TKwredef = null
    readable writable var _n_visibility: AVisibility
    readable writable var _n_kwattr: nullable TKwattr = null
    readable writable var _n_kwvar: nullable TKwvar = null
    readable writable var _n_id: TAttrid
    readable writable var _n_type: nullable AType = null
    readable writable var _n_readable: nullable AAble = null
    readable writable var _n_writable: nullable AAble = null
    readable writable var _n_expr: nullable AExpr = null
end
class AMethPropdef
special APropdef
    readable writable var _n_kwredef: nullable TKwredef = null
    readable writable var _n_visibility: nullable AVisibility
    readable writable var _n_methid: nullable AMethid = null
    readable writable var _n_signature: nullable ASignature
end
class ADeferredMethPropdef
special AMethPropdef
    readable writable var _n_kwmeth: TKwmeth
end
class AInternMethPropdef
special AMethPropdef
    readable writable var _n_kwmeth: TKwmeth
end
class AExternMethPropdef
special AMethPropdef
    readable writable var _n_kwmeth: TKwmeth
    readable writable var _n_extern: nullable TString = null
end
class AConcreteMethPropdef
special AMethPropdef
    readable writable var _n_kwmeth: nullable TKwmeth
    readable writable var _n_block: nullable AExpr = null
end
class AConcreteInitPropdef
special AConcreteMethPropdef
    readable writable var _n_kwinit: TKwinit
end
class AMainMethPropdef
special AConcreteMethPropdef
end
class ATypePropdef
special APropdef
    readable writable var _n_kwredef: nullable TKwredef = null
    readable writable var _n_visibility: AVisibility
    readable writable var _n_kwtype: TKwtype
    readable writable var _n_id: TClassid
    readable writable var _n_type: AType
end
class AAble special Prod
    readable writable var _n_kwredef: nullable TKwredef = null
end
class AReadAble
special AAble
    readable writable var _n_kwreadable: TKwreadable
end
class AWriteAble
special AAble
    readable writable var _n_kwwritable: TKwwritable
end
class AMethid special Prod end
class AIdMethid
special AMethid
    readable writable var _n_id: TId
end
class APlusMethid
special AMethid
    readable writable var _n_plus: TPlus
end
class AMinusMethid
special AMethid
    readable writable var _n_minus: TMinus
end
class AStarMethid
special AMethid
    readable writable var _n_star: TStar
end
class ASlashMethid
special AMethid
    readable writable var _n_slash: TSlash
end
class APercentMethid
special AMethid
    readable writable var _n_percent: TPercent
end
class AEqMethid
special AMethid
    readable writable var _n_eq: TEq
end
class ANeMethid
special AMethid
    readable writable var _n_ne: TNe
end
class ALeMethid
special AMethid
    readable writable var _n_le: TLe
end
class AGeMethid
special AMethid
    readable writable var _n_ge: TGe
end
class ALtMethid
special AMethid
    readable writable var _n_lt: TLt
end
class AGtMethid
special AMethid
    readable writable var _n_gt: TGt
end
class ABraMethid
special AMethid
    readable writable var _n_obra: TObra
    readable writable var _n_cbra: TCbra
end
class AStarshipMethid
special AMethid
    readable writable var _n_starship: TStarship
end
class AAssignMethid
special AMethid
    readable writable var _n_id: TId
    readable writable var _n_assign: TAssign
end
class ABraassignMethid
special AMethid
    readable writable var _n_obra: TObra
    readable writable var _n_cbra: TCbra
    readable writable var _n_assign: TAssign
end
class ASignature
special Prod
    readable writable var _n_params: List[AParam] = new List[AParam]
    readable writable var _n_type: nullable AType = null
    readable writable var _n_closure_decls: List[AClosureDecl] = new List[AClosureDecl]
end
class AParam
special Prod
    readable writable var _n_id: TId
    readable writable var _n_type: nullable AType = null
    readable writable var _n_dotdotdot: nullable TDotdotdot = null
end
class AClosureDecl
special Prod
    readable writable var _n_kwwith: TKwwith
    readable writable var _n_kwbreak: nullable TKwbreak = null
    readable writable var _n_id: TId
    readable writable var _n_signature: ASignature
    readable writable var _n_expr: nullable AExpr = null
end
class AType
special Prod
    readable writable var _n_kwnullable: nullable TKwnullable = null
    readable writable var _n_id: TClassid
    readable writable var _n_types: List[AType] = new List[AType]
end
class ALabel
special Prod
    readable writable var _n_kwlabel: TKwlabel
    readable writable var _n_id: TId
end
class AExpr special Prod end
class ABlockExpr
special AExpr
    readable writable var _n_expr: List[AExpr] = new List[AExpr]
end
class AVardeclExpr
special AExpr
    readable writable var _n_kwvar: TKwvar
    readable writable var _n_id: TId
    readable writable var _n_type: nullable AType = null
    readable writable var _n_assign: nullable TAssign = null
    readable writable var _n_expr: nullable AExpr = null
end
class AReturnExpr
special AExpr
    readable writable var _n_kwreturn: TKwreturn
    readable writable var _n_expr: nullable AExpr = null
end
class ALabelable
special Prod
    readable writable var _n_label: nullable ALabel = null
end
class ABreakExpr
special AExpr
special ALabelable
    readable writable var _n_kwbreak: TKwbreak
    readable writable var _n_expr: nullable AExpr = null
end
class AAbortExpr
special AExpr
    readable writable var _n_kwabort: TKwabort
end
class AContinueExpr
special AExpr
special ALabelable
    readable writable var _n_kwcontinue: TKwcontinue
    readable writable var _n_expr: nullable AExpr = null
end
class ADoExpr
special AExpr
special ALabelable
    readable writable var _n_kwdo: TKwdo
    readable writable var _n_block: nullable AExpr = null
end
class AIfExpr
special AExpr
    readable writable var _n_kwif: TKwif
    readable writable var _n_expr: AExpr
    readable writable var _n_then: nullable AExpr = null
    readable writable var _n_else: nullable AExpr = null
end
class AIfexprExpr
special AExpr
    readable writable var _n_kwif: TKwif
    readable writable var _n_expr: AExpr
    readable writable var _n_kwthen: TKwthen
    readable writable var _n_then: AExpr
    readable writable var _n_kwelse: TKwelse
    readable writable var _n_else: AExpr
end
class AWhileExpr
special AExpr
special ALabelable
    readable writable var _n_kwwhile:  TKwwhile
    readable writable var _n_expr: AExpr
    readable writable var _n_kwdo: TKwdo
    readable writable var _n_block: nullable AExpr = null
end
class AForExpr
special AExpr
special ALabelable
    readable writable var _n_kwfor: TKwfor
    readable writable var _n_id: TId
    readable writable var _n_expr: AExpr
    readable writable var _n_kwdo: TKwdo
    readable writable var _n_block: nullable AExpr = null
end
class AAssertExpr
special AExpr
    readable writable var _n_kwassert: TKwassert
    readable writable var _n_id: nullable TId = null
    readable writable var _n_expr: AExpr
end
class AAssignFormExpr
special AExpr
    readable writable var _n_assign: TAssign
    readable writable var _n_value: AExpr
end
class AReassignFormExpr
special AExpr
    readable writable var _n_assign_op: AAssignOp
    readable writable var _n_value: AExpr
end
class AOnceExpr
special AProxyExpr
    readable writable var _n_kwonce: TKwonce
end
class ASendExpr
special AExpr
    readable writable var _n_expr: AExpr
    readable writable var _n_closure_defs: List[AClosureDef] = new List[AClosureDef]
end
class ABinopExpr
special ASendExpr
    readable writable var _n_expr2: AExpr
end
class ABoolExpr
special AExpr
end
class AOrExpr
special ABoolExpr
    readable writable var _n_expr: AExpr
    readable writable var _n_expr2: AExpr
end
class AAndExpr
special ABoolExpr
    readable writable var _n_expr: AExpr
    readable writable var _n_expr2: AExpr
end
class ANotExpr
special ABoolExpr
    readable writable var _n_kwnot: TKwnot
    readable writable var _n_expr: AExpr
end
class AEqExpr
special ABinopExpr
end
class AEeExpr
special ABoolExpr
    readable writable var _n_expr: AExpr
    readable writable var _n_expr2: AExpr
end
class ANeExpr
special ABinopExpr
end
class ALtExpr
special ABinopExpr
end
class ALeExpr
special ABinopExpr
end
class AGtExpr
special ABinopExpr
end
class AGeExpr
special ABinopExpr
end
class AIsaExpr
special ABoolExpr
    readable writable var _n_expr: AExpr
    readable writable var _n_type: AType
end
class APlusExpr
special ABinopExpr
end
class AMinusExpr
special ABinopExpr
end
class AStarshipExpr
special ABinopExpr
end
class AStarExpr
special ABinopExpr
end
class ASlashExpr
special ABinopExpr
end
class APercentExpr
special ABinopExpr
end
class AUminusExpr
special ASendExpr
    readable writable var _n_minus: TMinus
end
class ANewExpr
special AExpr
    readable writable var _n_kwnew: TKwnew
    readable writable var _n_type: AType
    readable writable var _n_id: nullable TId = null
    readable writable var _n_args: List[AExpr] = new List[AExpr]
end
class AAttrFormExpr
special AExpr
    readable writable var _n_expr: AExpr
    readable writable var _n_id: TAttrid
end
class AAttrExpr
special AAttrFormExpr
end
class AAttrAssignExpr
special AAttrFormExpr
special AAssignFormExpr
end
class ACallFormExpr
special ASendExpr
    readable writable var _n_id: TId
    readable writable var _n_args: List[AExpr] = new List[AExpr]
end
class AAttrReassignExpr
special AExpr
special AAttrFormExpr 
special AReassignFormExpr 
end
class ACallExpr
special ACallFormExpr
end
class ACallAssignExpr
special ACallFormExpr
special AAssignFormExpr 
end
class ACallReassignExpr
special AExpr
special ACallFormExpr
special AReassignFormExpr 
end
class ASuperExpr
special AExpr
    readable writable var _n_qualified: nullable AQualified = null
    readable writable var _n_kwsuper: TKwsuper
    readable writable var _n_args: List[AExpr] = new List[AExpr]
end
class AInitExpr
special ASendExpr
    readable writable var _n_kwinit: TKwinit
    readable writable var _n_args: List[AExpr] = new List[AExpr]
end
class ABraFormExpr
special ASendExpr
    readable writable var _n_args: List[AExpr] = new List[AExpr]
end
class ABraExpr
special ABraFormExpr
end
class ABraAssignExpr
special ABraFormExpr
special AAssignFormExpr 
end
class AVarFormExpr
special AExpr
    readable writable var _n_id: TId
end
class ABraReassignExpr
special ABraFormExpr
special AReassignFormExpr 
end
class AClosureCallExpr
special AExpr
    readable writable var _n_id: TId
    readable writable var _n_args: List[AExpr] = new List[AExpr]
    readable writable var _n_closure_defs: List[AClosureDef] = new List[AClosureDef]
end
class AVarExpr
special AVarFormExpr
end
class AVarAssignExpr
special AVarFormExpr
special AAssignFormExpr 
end
class AVarReassignExpr
special AVarFormExpr
special AReassignFormExpr 
end
class ARangeExpr
special AExpr
    readable writable var _n_expr: AExpr
    readable writable var _n_expr2: AExpr
end
class ACrangeExpr
special ARangeExpr
end
class AOrangeExpr
special ARangeExpr
end
class AArrayExpr
special AExpr
    readable writable var _n_exprs: List[AExpr] = new List[AExpr]
end
class ASelfExpr
special AExpr
    readable writable var _n_kwself: nullable TKwself
end
class AImplicitSelfExpr
special ASelfExpr
end
class ATrueExpr
special ABoolExpr
    readable writable var _n_kwtrue: TKwtrue
end
class AFalseExpr
special ABoolExpr
    readable writable var _n_kwfalse: TKwfalse
end
class ANullExpr
special AExpr
    readable writable var _n_kwnull: TKwnull
end
class AIntExpr
special AExpr
    readable writable var _n_number: TNumber
end
class AFloatExpr
special AExpr
    readable writable var _n_float: TFloat
end
class ACharExpr
special AExpr
    readable writable var _n_char: TChar
end
class AStringFormExpr
special AExpr
end
class AStringExpr
special AStringFormExpr
    readable writable var _n_string: TString
end
class AStartStringExpr
special AStringFormExpr
    readable writable var _n_string: TStartString
end
class AMidStringExpr
special AStringFormExpr
    readable writable var _n_string: TMidString
end
class AEndStringExpr
special AStringFormExpr
    readable writable var _n_string: TEndString
end
class ASuperstringExpr
special AExpr
    readable writable var _n_exprs: List[AExpr] = new List[AExpr]
end
class AParExpr
special AProxyExpr
end
class AProxyExpr
special AExpr
    readable writable var _n_expr: AExpr
end
class AAsCastExpr
special AExpr
    readable writable var _n_expr: AExpr
    readable writable var _n_kwas: TKwas
    readable writable var _n_type: AType
end
class AAsNotnullExpr
special AExpr
    readable writable var _n_expr: AExpr
    readable writable var _n_kwas: TKwas
    readable writable var _n_kwnot: TKwnot
    readable writable var _n_kwnull: TKwnull
end
class AIssetAttrExpr
special AAttrFormExpr
    readable writable var _n_kwisset: TKwisset
end
class AAssignOp special Prod end
class APlusAssignOp
special AAssignOp
    readable writable var _n_pluseq: TPluseq
end
class AMinusAssignOp
special AAssignOp
    readable writable var _n_minuseq: TMinuseq
end
class AClosureDef
special ALabelable
    readable writable var _n_kwwith: TKwwith
    readable writable var _n_id: List[TId] = new List[TId]
    readable writable var _n_kwdo: TKwdo
    readable writable var _n_expr: nullable AExpr = null
end
class AQualified
special Prod
    readable writable var _n_id: List[TId] = new List[TId]
    readable writable var _n_classid: nullable TClassid = null
end
class ADoc
special Prod
    readable writable var _n_comment: List[TComment] = new List[TComment]
end

class Start
special Prod
    readable writable var _n_base: nullable AModule
    readable writable var _n_eof: EOF
end
