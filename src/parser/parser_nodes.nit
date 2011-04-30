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

import location

# Root of the AST hierarchy
abstract class ANode
	var _location: nullable Location
	# Location is set during AST building. Once built, location cannon be null
	# However, manual instanciated nodes may need mode care
	fun location: Location do return _location.as(not null)
	# The location of the important part of the node (identifier or whatever)
	fun hot_location: Location do return location
end

# Ancestor of all tokens
abstract class Token
	super ANode
end

# Ancestor of all productions
abstract class Prod
	super ANode
	fun location=(l: Location) do _location = l
end
class TEol
	super Token
end
class TComment
	super Token
end
class TKwmodule
	super Token
end
class TKwimport
	super Token
end
class TKwclass
	super Token
end
class TKwabstract
	super Token
end
class TKwinterface
	super Token
end
class TKwenum
	super Token
end
class TKwspecial
	super Token
end
class TKwend
	super Token
end
class TKwmeth
	super Token
end
class TKwtype
	super Token
end
class TKwinit
	super Token
end
class TKwredef
	super Token
end
class TKwis
	super Token
end
class TKwdo
	super Token
end
class TKwreadable
	super Token
end
class TKwwritable
	super Token
end
class TKwvar
	super Token
end
class TKwintern
	super Token
end
class TKwextern
	super Token
end
class TKwprotected
	super Token
end
class TKwprivate
	super Token
end
class TKwintrude
	super Token
end
class TKwif
	super Token
end
class TKwthen
	super Token
end
class TKwelse
	super Token
end
class TKwwhile
	super Token
end
class TKwloop
	super Token
end
class TKwfor
	super Token
end
class TKwin
	super Token
end
class TKwand
	super Token
end
class TKwor
	super Token
end
class TKwnot
	super Token
end
class TKwreturn
	super Token
end
class TKwcontinue
	super Token
end
class TKwbreak
	super Token
end
class TKwabort
	super Token
end
class TKwassert
	super Token
end
class TKwnew
	super Token
end
class TKwisa
	super Token
end
class TKwonce
	super Token
end
class TKwsuper
	super Token
end
class TKwself
	super Token
end
class TKwtrue
	super Token
end
class TKwfalse
	super Token
end
class TKwnull
	super Token
end
class TKwas
	super Token
end
class TKwnullable
	super Token
end
class TKwisset
	super Token
end
class TKwlabel
	super Token
end
class TOpar
	super Token
end
class TCpar
	super Token
end
class TObra
	super Token
end
class TCbra
	super Token
end
class TComma
	super Token
end
class TColumn
	super Token
end
class TQuad
	super Token
end
class TAssign
	super Token
end
class TPluseq
	super Token
end
class TMinuseq
	super Token
end
class TDotdotdot
	super Token
end
class TDotdot
	super Token
end
class TDot
	super Token
end
class TPlus
	super Token
end
class TMinus
	super Token
end
class TStar
	super Token
end
class TSlash
	super Token
end
class TPercent
	super Token
end
class TEq
	super Token
end
class TNe
	super Token
end
class TLt
	super Token
end
class TLe
	super Token
end
class TLl
	super Token
end
class TGt
	super Token
end
class TGe
	super Token
end
class TGg
	super Token
end
class TStarship
	super Token
end
class TBang
	super Token
end
class TClassid
	super Token
end
class TId
	super Token
end
class TAttrid
	super Token
end
class TNumber
	super Token
end
class TFloat
	super Token
end
class TChar
	super Token
end
class TString
	super Token
end
class TStartString
	super Token
end
class TMidString
	super Token
end
class TEndString
	super Token
end
class EOF
	super Token
private init noinit do end
end
class AError
	super EOF
private init noinit do end
end

class AModule
	super Prod
    readable var _n_moduledecl: nullable AModuledecl = null
    readable var _n_imports: List[AImport] = new List[AImport]
    readable var _n_classdefs: List[AClassdef] = new List[AClassdef]
end
class AModuledecl
	super Prod
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwmodule: TKwmodule
    readable var _n_id: TId
    redef fun hot_location do return n_id.location
end
class AImport super Prod end
class AStdImport
	super AImport
    readable var _n_visibility: AVisibility
    readable var _n_kwimport: TKwimport
    readable var _n_id: TId
end
class ANoImport
	super AImport
    readable var _n_visibility: AVisibility
    readable var _n_kwimport: TKwimport
    readable var _n_kwend: TKwend
end
class AVisibility super Prod end
class APublicVisibility
	super AVisibility
end
class APrivateVisibility
	super AVisibility
    readable var _n_kwprivate: TKwprivate
end
class AProtectedVisibility
	super AVisibility
    readable var _n_kwprotected: TKwprotected
end
class AIntrudeVisibility
	super AVisibility
    readable var _n_kwintrude: TKwintrude
end
class AClassdef super Prod end
class AStdClassdef
	super AClassdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_classkind: AClasskind
    readable var _n_id: nullable TClassid = null
    readable var _n_formaldefs: List[AFormaldef] = new List[AFormaldef]
    readable var _n_superclasses: List[ASuperclass] = new List[ASuperclass]
    readable var _n_propdefs: List[APropdef] = new List[APropdef]
    redef fun hot_location do return n_id.location
end
class ATopClassdef
	super AClassdef
    readable var _n_propdefs: List[APropdef] = new List[APropdef]
end
class AMainClassdef
	super AClassdef
    readable var _n_propdefs: List[APropdef] = new List[APropdef]
end
class AClasskind super Prod end
class AConcreteClasskind
	super AClasskind
    readable var _n_kwclass: TKwclass
end
class AAbstractClasskind
	super AClasskind
    readable var _n_kwabstract: TKwabstract
    readable var _n_kwclass: TKwclass
end
class AInterfaceClasskind
	super AClasskind
    readable var _n_kwinterface: TKwinterface
end
class AEnumClasskind
	super AClasskind
    readable var _n_kwenum: TKwenum
end
class AFormaldef
	super Prod
    readable var _n_id: TClassid
    readable var _n_type: nullable AType = null
end
class ASuperclass
	super Prod
    readable var _n_kwspecial: nullable TKwspecial = null
    readable var _n_kwsuper: nullable TKwsuper = null
    readable var _n_type: AType
end
class APropdef super Prod
    readable var _n_doc: nullable ADoc = null
end
class AAttrPropdef
	super APropdef
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwvar: TKwvar
    readable var _n_id: nullable TAttrid
    readable var _n_id2: nullable TId
    readable var _n_type: nullable AType = null
    readable var _n_readable: nullable AAble = null
    readable var _n_writable: nullable AAble = null
    readable var _n_expr: nullable AExpr = null
    redef fun hot_location
    do
	    if n_id != null then return n_id.location else return n_id2.location
    end
end
class AMethPropdef
	super APropdef
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: nullable AVisibility
    readable var _n_methid: nullable AMethid = null
    readable var _n_signature: nullable ASignature
    redef fun hot_location
    do
	    if n_methid != null then
		    return n_methid.location
	    else
		    return location
	    end
    end
end
class ADeferredMethPropdef
	super AMethPropdef
    readable var _n_kwmeth: TKwmeth
end
class AInternMethPropdef
	super AMethPropdef
    readable var _n_kwmeth: TKwmeth
end
class AExternMethPropdef
	super AMethPropdef
    readable var _n_kwmeth: TKwmeth
    readable var _n_extern: nullable TString = null
end
class AConcreteMethPropdef
	super AMethPropdef
    readable var _n_kwmeth: nullable TKwmeth
    readable var _n_block: nullable AExpr = null
end
class AConcreteInitPropdef
	super AConcreteMethPropdef
    readable var _n_kwinit: TKwinit
    redef fun hot_location do return n_kwinit.location
end
class AMainMethPropdef
	super AConcreteMethPropdef
end
class ATypePropdef
	super APropdef
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwtype: TKwtype
    readable var _n_id: TClassid
    readable var _n_type: AType
end
class AAble super Prod
    readable var _n_visibility: nullable AVisibility = null
    readable var _n_kwredef: nullable TKwredef = null
end
class AReadAble
	super AAble
    readable var _n_kwreadable: TKwreadable
end
class AWriteAble
	super AAble
    readable var _n_kwwritable: TKwwritable
end
class AMethid super Prod end
class AIdMethid
	super AMethid
    readable var _n_id: TId
end
class APlusMethid
	super AMethid
    readable var _n_plus: TPlus
end
class AMinusMethid
	super AMethid
    readable var _n_minus: TMinus
end
class AStarMethid
	super AMethid
    readable var _n_star: TStar
end
class ASlashMethid
	super AMethid
    readable var _n_slash: TSlash
end
class APercentMethid
	super AMethid
    readable var _n_percent: TPercent
end
class AEqMethid
	super AMethid
    readable var _n_eq: TEq
end
class ANeMethid
	super AMethid
    readable var _n_ne: TNe
end
class ALeMethid
	super AMethid
    readable var _n_le: TLe
end
class AGeMethid
	super AMethid
    readable var _n_ge: TGe
end
class ALtMethid
	super AMethid
    readable var _n_lt: TLt
end
class AGtMethid
	super AMethid
    readable var _n_gt: TGt
end
class ALlMethid
	super AMethid
    readable writable var _n_ll: TLl
end
class AGgMethid
	super AMethid
    readable writable var _n_gg: TGg
end
class ABraMethid
	super AMethid
    readable var _n_obra: TObra
    readable var _n_cbra: TCbra
end
class AStarshipMethid
	super AMethid
    readable var _n_starship: TStarship
end
class AAssignMethid
	super AMethid
    readable var _n_id: TId
    readable var _n_assign: TAssign
end
class ABraassignMethid
	super AMethid
    readable var _n_obra: TObra
    readable var _n_cbra: TCbra
    readable var _n_assign: TAssign
end
class ASignature
	super Prod
    readable var _n_params: List[AParam] = new List[AParam]
    readable var _n_type: nullable AType = null
    readable var _n_closure_decls: List[AClosureDecl] = new List[AClosureDecl]
end
class AParam
	super Prod
    readable var _n_id: TId
    readable var _n_type: nullable AType = null
    readable var _n_dotdotdot: nullable TDotdotdot = null
end
class AClosureDecl
	super Prod
    readable var _n_kwbreak: nullable TKwbreak = null
    readable var _n_bang: TBang
    readable var _n_id: TId
    readable var _n_signature: ASignature
    readable var _n_expr: nullable AExpr = null
end
class AType
	super Prod
    readable var _n_kwnullable: nullable TKwnullable = null
    readable var _n_id: TClassid
    readable var _n_types: List[AType] = new List[AType]
end
class ALabel
	super Prod
    readable var _n_kwlabel: TKwlabel
    readable var _n_id: TId
end
class AExpr super Prod end
class ABlockExpr
	super AExpr
    readable var _n_expr: List[AExpr] = new List[AExpr]
end
class AVardeclExpr
	super AExpr
    readable var _n_kwvar: TKwvar
    readable var _n_id: TId
    readable var _n_type: nullable AType = null
    readable var _n_assign: nullable TAssign = null
    readable var _n_expr: nullable AExpr = null
end
class AReturnExpr
	super AExpr
    readable var _n_kwreturn: nullable TKwreturn = null
    readable var _n_expr: nullable AExpr = null
end
class ALabelable
	super Prod
    readable var _n_label: nullable ALabel = null
end
class ABreakExpr
	super AExpr
	super ALabelable
    readable var _n_kwbreak: TKwbreak
    readable var _n_expr: nullable AExpr = null
end
class AAbortExpr
	super AExpr
    readable var _n_kwabort: TKwabort
end
class AContinueExpr
	super AExpr
	super ALabelable
    readable var _n_kwcontinue: nullable TKwcontinue = null
    readable var _n_expr: nullable AExpr = null
end
class ADoExpr
	super AExpr
	super ALabelable
    readable var _n_kwdo: TKwdo
    readable var _n_block: nullable AExpr = null
end
class AIfExpr
	super AExpr
    readable var _n_kwif: TKwif
    readable var _n_expr: AExpr
    readable var _n_then: nullable AExpr = null
    readable var _n_else: nullable AExpr = null
end
class AIfexprExpr
	super AExpr
    readable var _n_kwif: TKwif
    readable var _n_expr: AExpr
    readable var _n_kwthen: TKwthen
    readable var _n_then: AExpr
    readable var _n_kwelse: TKwelse
    readable var _n_else: AExpr
end
class AWhileExpr
	super AExpr
	super ALabelable
    readable var _n_kwwhile:  TKwwhile
    readable var _n_expr: AExpr
    readable var _n_kwdo: TKwdo
    readable var _n_block: nullable AExpr = null
end
class ALoopExpr
	super AExpr
	super ALabelable
    readable var _n_kwloop: TKwloop
    readable var _n_block: nullable AExpr = null
end
class AForExpr
	super AExpr
	super ALabelable
    readable var _n_kwfor: TKwfor
    readable var _n_ids: List[TId] = new List[TId]
    readable var _n_expr: AExpr
    readable var _n_kwdo: TKwdo
    readable var _n_block: nullable AExpr = null
end
class AAssertExpr
	super AExpr
    readable var _n_kwassert: TKwassert
    readable var _n_id: nullable TId = null
    readable var _n_expr: AExpr
    readable var _n_else: nullable AExpr = null
end
class AAssignFormExpr
	super AExpr
    readable var _n_assign: TAssign
    readable var _n_value: AExpr
end
class AReassignFormExpr
	super AExpr
    readable var _n_assign_op: AAssignOp
    readable var _n_value: AExpr
end
class AOnceExpr
	super AProxyExpr
    readable var _n_kwonce: TKwonce
end
class ASendExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_closure_defs: List[AClosureDef] = new List[AClosureDef]
end
class ABinopExpr
	super ASendExpr
    readable var _n_expr2: AExpr
end
class ABoolExpr
	super AExpr
end
class AOrExpr
	super ABoolExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AAndExpr
	super ABoolExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AOrElseExpr
	super ABoolExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class ANotExpr
	super ABoolExpr
    readable var _n_kwnot: TKwnot
    readable var _n_expr: AExpr
end
class AEqExpr
	super ABinopExpr
end
class AEeExpr
	super ABoolExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class ANeExpr
	super ABinopExpr
end
class ALtExpr
	super ABinopExpr
end
class ALeExpr
	super ABinopExpr
end
class ALlExpr
	super ABinopExpr
end
class AGtExpr
	super ABinopExpr
end
class AGeExpr
	super ABinopExpr
end
class AGgExpr
	super ABinopExpr
end
class AIsaExpr
	super ABoolExpr
    readable var _n_expr: AExpr
    readable var _n_type: AType
end
class APlusExpr
	super ABinopExpr
end
class AMinusExpr
	super ABinopExpr
end
class AStarshipExpr
	super ABinopExpr
end
class AStarExpr
	super ABinopExpr
end
class ASlashExpr
	super ABinopExpr
end
class APercentExpr
	super ABinopExpr
end
class AUminusExpr
	super ASendExpr
    readable var _n_minus: TMinus
end
class ANewExpr
	super AExpr
    readable var _n_kwnew: TKwnew
    readable var _n_type: AType
    readable var _n_id: nullable TId = null
    readable var _n_args: List[AExpr] = new List[AExpr]
end
class AAttrFormExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_id: TAttrid
end
class AAttrExpr
	super AAttrFormExpr
end
class AAttrAssignExpr
	super AAttrFormExpr
	super AAssignFormExpr
end
class ACallFormExpr
	super ASendExpr
    readable var _n_id: TId
    readable var _n_args: List[AExpr] = new List[AExpr]
end
class AAttrReassignExpr
	super AExpr
	super AAttrFormExpr
	super AReassignFormExpr
end
class ACallExpr
	super ACallFormExpr
end
class ACallAssignExpr
	super ACallFormExpr
	super AAssignFormExpr
end
class ACallReassignExpr
	super AExpr
	super ACallFormExpr
	super AReassignFormExpr
end
class ASuperExpr
	super AExpr
    readable var _n_qualified: nullable AQualified = null
    readable var _n_kwsuper: TKwsuper
    readable var _n_args: List[AExpr] = new List[AExpr]
end
class AInitExpr
	super ASendExpr
    readable var _n_kwinit: TKwinit
    readable var _n_args: List[AExpr] = new List[AExpr]
end
class ABraFormExpr
	super ASendExpr
    readable var _n_args: List[AExpr] = new List[AExpr]
end
class ABraExpr
	super ABraFormExpr
end
class ABraAssignExpr
	super ABraFormExpr
	super AAssignFormExpr
end
class AVarFormExpr
	super AExpr
    readable var _n_id: TId
end
class ABraReassignExpr
	super ABraFormExpr
	super AReassignFormExpr
end
class AClosureCallExpr
	super AExpr
    readable var _n_id: TId
    readable var _n_args: List[AExpr] = new List[AExpr]
    readable var _n_closure_defs: List[AClosureDef] = new List[AClosureDef]
end
class AVarExpr
	super AVarFormExpr
end
class AVarAssignExpr
	super AVarFormExpr
	super AAssignFormExpr
end
class AVarReassignExpr
	super AVarFormExpr
	super AReassignFormExpr
end
class ARangeExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class ACrangeExpr
	super ARangeExpr
end
class AOrangeExpr
	super ARangeExpr
end
class AArrayExpr
	super AExpr
    readable var _n_exprs: List[AExpr] = new List[AExpr]
end
class ASelfExpr
	super AExpr
    readable var _n_kwself: nullable TKwself
end
class AImplicitSelfExpr
	super ASelfExpr
end
class ATrueExpr
	super ABoolExpr
    readable var _n_kwtrue: TKwtrue
end
class AFalseExpr
	super ABoolExpr
    readable var _n_kwfalse: TKwfalse
end
class ANullExpr
	super AExpr
    readable var _n_kwnull: TKwnull
end
class AIntExpr
	super AExpr
    readable var _n_number: TNumber
end
class AFloatExpr
	super AExpr
    readable var _n_float: TFloat
end
class ACharExpr
	super AExpr
    readable var _n_char: TChar
end
class AStringFormExpr
	super AExpr
end
class AStringExpr
	super AStringFormExpr
    readable var _n_string: TString
end
class AStartStringExpr
	super AStringFormExpr
    readable var _n_string: TStartString
end
class AMidStringExpr
	super AStringFormExpr
    readable var _n_string: TMidString
end
class AEndStringExpr
	super AStringFormExpr
    readable var _n_string: TEndString
end
class ASuperstringExpr
	super AExpr
    readable var _n_exprs: List[AExpr] = new List[AExpr]
end
class AParExpr
	super AProxyExpr
end
class AProxyExpr
	super AExpr
    readable var _n_expr: AExpr
end
class AAsCastExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_kwas: TKwas
    readable var _n_type: AType
end
class AAsNotnullExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_kwas: TKwas
    readable var _n_kwnot: TKwnot
    readable var _n_kwnull: TKwnull
end
class AIssetAttrExpr
	super AAttrFormExpr
    readable var _n_kwisset: TKwisset
end
class AAssignOp super Prod end
class APlusAssignOp
	super AAssignOp
    readable var _n_pluseq: TPluseq
end
class AMinusAssignOp
	super AAssignOp
    readable var _n_minuseq: TMinuseq
end
class AClosureDef
	super ALabelable
    readable var _n_bang: TBang
    readable var _n_id: AClosureId
    readable var _n_ids: List[TId] = new List[TId]
    readable var _n_kwdo: nullable TKwdo = null
    readable var _n_expr: nullable AExpr = null
end
class AClosureId
	super Prod
end
class ASimpleClosureId
	super AClosureId
    readable var _n_id: TId
end
class ABreakClosureId
	super AClosureId
    readable var _n_kwbreak: TKwbreak
end
class AQualified
	super Prod
    readable var _n_id: List[TId] = new List[TId]
    readable var _n_classid: nullable TClassid = null
end
class ADoc
	super Prod
    readable var _n_comment: List[TComment] = new List[TComment]
end

class Start
	super Prod
    readable var _n_base: nullable AModule
    readable var _n_eof: EOF
end
