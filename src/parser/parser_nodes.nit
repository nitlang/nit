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
	init do end

	# Display a message for the colored location of the node
	fun debug(message: String)
	do
		print "{hot_location} {self.class_name}: {message}\n{hot_location.colored_line("0;32")}"
	end
end

# Ancestor of all tokens
abstract class Token
	super ANode
	fun text: String is abstract

	redef fun to_s: String do
		return "'{text}'"
	end
end

# Ancestor of all productions
abstract class Prod
	super ANode
	fun location=(l: Location) do _location = l
end
class TEol
	super Token
	redef fun to_s
	do
		return "end of line"
	end
end
class TComment
	super Token
end
abstract class TokenKeyword
	super Token
	redef fun to_s
	do
		return "keyword '{text}'"
	end
end
class TKwmodule
	super TokenKeyword
end
class TKwimport
	super TokenKeyword
end
class TKwclass
	super TokenKeyword
end
class TKwabstract
	super TokenKeyword
end
class TKwinterface
	super TokenKeyword
end
class TKwenum
	super TokenKeyword
end
class TKwspecial
	super TokenKeyword
end
class TKwend
	super TokenKeyword
end
class TKwmeth
	super TokenKeyword
end
class TKwtype
	super TokenKeyword
end
class TKwinit
	super TokenKeyword
end
class TKwredef
	super TokenKeyword
end
class TKwis
	super TokenKeyword
end
class TKwdo
	super TokenKeyword
end
class TKwreadable
	super TokenKeyword
end
class TKwwritable
	super TokenKeyword
end
class TKwvar
	super TokenKeyword
end
class TKwintern
	super TokenKeyword
end
class TKwextern
	super TokenKeyword
end
class TKwprotected
	super TokenKeyword
end
class TKwprivate
	super TokenKeyword
end
class TKwintrude
	super TokenKeyword
end
class TKwif
	super TokenKeyword
end
class TKwthen
	super TokenKeyword
end
class TKwelse
	super TokenKeyword
end
class TKwwhile
	super TokenKeyword
end
class TKwloop
	super TokenKeyword
end
class TKwfor
	super TokenKeyword
end
class TKwin
	super TokenKeyword
end
class TKwand
	super TokenKeyword
end
class TKwor
	super TokenKeyword
end
class TKwnot
	super TokenKeyword
end
class TKwreturn
	super TokenKeyword
end
class TKwcontinue
	super TokenKeyword
end
class TKwbreak
	super TokenKeyword
end
class TKwabort
	super TokenKeyword
end
class TKwassert
	super TokenKeyword
end
class TKwnew
	super TokenKeyword
end
class TKwisa
	super TokenKeyword
end
class TKwonce
	super TokenKeyword
end
class TKwsuper
	super TokenKeyword
end
class TKwself
	super TokenKeyword
end
class TKwtrue
	super TokenKeyword
end
class TKwfalse
	super TokenKeyword
end
class TKwnull
	super TokenKeyword
end
class TKwas
	super TokenKeyword
end
class TKwnullable
	super TokenKeyword
end
class TKwisset
	super TokenKeyword
end
class TKwlabel
	super TokenKeyword
end
class TKwdebug
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
abstract class TokenOperator
	super Token
	redef fun to_s
	do
		return "operator '{text}'"
	end
end
class TPluseq
	super TokenOperator
end
class TMinuseq
	super TokenOperator
end
class TDotdotdot
	super TokenOperator
end
class TDotdot
	super TokenOperator
end
class TDot
	super TokenOperator
end
class TPlus
	super TokenOperator
end
class TMinus
	super TokenOperator
end
class TStar
	super TokenOperator
end
class TSlash
	super TokenOperator
end
class TPercent
	super TokenOperator
end
class TEq
	super TokenOperator
end
class TNe
	super TokenOperator
end
class TLt
	super TokenOperator
end
class TLe
	super TokenOperator
end
class TLl
	super TokenOperator
end
class TGt
	super TokenOperator
end
class TGe
	super TokenOperator
end
class TGg
	super TokenOperator
end
class TStarship
	super TokenOperator
end
class TBang
	super TokenOperator
end
class TClassid
	super Token
	redef fun to_s
	do
		do return "type identifier '{text}'"
	end
end
class TId
	super Token
	redef fun to_s
	do
		do return "identifier '{text}'"
	end
end
class TAttrid
	super Token
	redef fun to_s
	do
		do return "attribute '{text}'"
	end
end
abstract class TokenLiteral
	super Token
	redef fun to_s
	do
		do return "literal value '{text}'"
	end
end
class TNumber
	super TokenLiteral
end
class TFloat
	super TokenLiteral
end
class TChar
	super TokenLiteral
end
class TString
	super TokenLiteral
end
class TStartString
	super TokenLiteral
end
class TMidString
	super TokenLiteral
end
class TEndString
	super Token
end
class TBadString
	super Token
	redef fun to_s
	do
		do return "malformed string {text}"
	end
end
class TBadChar
	super Token
	redef fun to_s
	do
		do return "malformed character {text}"
	end
end
class TExternCodeSegment
	super Token
end
class EOF
	super Token
private init noinit do end
	redef fun to_s
	do
		return "end of file"
	end
end
class AError
	super EOF
private init noinit do end
end

class AModule
	super Prod
    readable var _n_moduledecl: nullable AModuledecl = null
    readable var _n_imports: List[AImport] = new List[AImport]
	readable var _n_extern_code_blocks: List[AExternCodeBlock] = new List[AExternCodeBlock]
    readable var _n_classdefs: List[AClassdef] = new List[AClassdef]
end
class AModuledecl
	super Prod
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwmodule: TKwmodule
    readable var _n_name: AModuleName
end
abstract class AImport super Prod end
class AStdImport
	super AImport
    readable var _n_visibility: AVisibility
    readable var _n_kwimport: TKwimport
    readable var _n_name: AModuleName
end
class ANoImport
	super AImport
    readable var _n_visibility: AVisibility
    readable var _n_kwimport: TKwimport
    readable var _n_kwend: TKwend
end
abstract class AVisibility super Prod end
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
abstract class AClassdef super Prod
    readable var _n_propdefs: List[APropdef] = new List[APropdef]
end
class AStdClassdef
	super AClassdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_classkind: AClasskind
    readable var _n_id: nullable TClassid = null
    readable var _n_formaldefs: List[AFormaldef] = new List[AFormaldef]
	readable var _n_extern_code_block: nullable AExternCodeBlock = null
    readable var _n_superclasses: List[ASuperclass] = new List[ASuperclass]
    readable var _n_kwend: TKwend
    redef fun hot_location do return n_id.location
end
class ATopClassdef
	super AClassdef
end
class AMainClassdef
	super AClassdef
end
abstract class AClasskind super Prod end
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
class AExternClasskind
       super AClasskind
    readable var _n_kwextern: TKwextern
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
abstract class APropdef super Prod
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
abstract class AMethPropdef
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
abstract class AExternPropdef
	super AMethPropdef
    readable var _n_extern: nullable TString = null
    readable var _n_extern_calls: nullable AExternCalls = null
    readable var _n_extern_code_block: nullable AExternCodeBlock = null
end
class AExternMethPropdef
	super AMethPropdef
	super AExternPropdef
    readable var _n_kwmeth: TKwmeth
end
class AConcreteMethPropdef
	super AMethPropdef
    readable var _n_kwmeth: nullable TKwmeth
    readable var _n_block: nullable AExpr = null
end
abstract class AInitPropdef
	super AMethPropdef
end
class AConcreteInitPropdef
	super AConcreteMethPropdef
	super AInitPropdef
    readable var _n_kwinit: TKwinit
    redef fun hot_location do return n_kwinit.location
end
class AExternInitPropdef
	super AExternPropdef
	super AInitPropdef
    readable var _n_kwnew: TKwnew
end
class AMainMethPropdef
	super AConcreteMethPropdef
end
class AExternCalls
	super Prod
    readable var _n_kwimport: TKwimport
    readable var _n_extern_calls: List[AExternCall] = new List[AExternCall]
end
abstract class AExternCall
	super Prod
end
abstract class APropExternCall
special AExternCall
end
class ALocalPropExternCall
special APropExternCall
    readable var _n_methid: AMethid
end
class AFullPropExternCall
special APropExternCall
    readable var _n_classid: TClassid
    readable var _n_quad: nullable TQuad = null
    readable var _n_methid: AMethid
end
class AInitPropExternCall
special APropExternCall
    readable var _n_classid: TClassid
end
class ASuperExternCall
special AExternCall
    readable var _n_kwsuper: TKwsuper
end
abstract class ACastExternCall
special AExternCall
end
class ACastAsExternCall
special ACastExternCall
    readable var _n_from_type: AType
    readable var _n_kwas: TKwas
    readable var _n_to_type: AType
end
class AAsNullableExternCall
special ACastExternCall
    readable var _n_type: AType
    readable var _n_kwas: TKwas
    readable var _n_kwnullable: TKwnullable
end
class AAsNotNullableExternCall
special ACastExternCall
    readable var _n_type: AType
    readable var _n_kwas: TKwas
    readable var _n_kwnot: TKwnot
    readable var _n_kwnullable: TKwnullable
end
class ATypePropdef
	super APropdef
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwtype: TKwtype
    readable var _n_id: TClassid
    readable var _n_type: AType
end
abstract class AAble super Prod
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
abstract class AMethid super Prod end
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
    readable var _n_opar: nullable TOpar = null
    readable var _n_params: List[AParam] = new List[AParam]
    readable var _n_cpar: nullable TCpar = null
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
abstract class AExpr super Prod end
class ABlockExpr
	super AExpr
    readable var _n_expr: List[AExpr] = new List[AExpr]
    readable var _n_kwend: nullable TKwend = null
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
abstract class ALabelable
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
abstract class AAssignFormExpr
	super AExpr
    readable var _n_assign: TAssign
    readable var _n_value: AExpr
end
abstract class AReassignFormExpr
	super AExpr
    readable var _n_assign_op: AAssignOp
    readable var _n_value: AExpr
end
class AOnceExpr
	super AProxyExpr
    readable var _n_kwonce: TKwonce
end
abstract class ASendExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_closure_defs: List[AClosureDef] = new List[AClosureDef]
end
abstract class ABinopExpr
	super ASendExpr
    readable var _n_expr2: AExpr
end
abstract class ABoolExpr
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
    readable var _n_args: AExprs
end
abstract class AAttrFormExpr
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
abstract class ACallFormExpr
	super ASendExpr
    readable var _n_id: TId
    readable var _n_args: AExprs
end
abstract class ASendReassignFormExpr
	super ASendExpr
	super AReassignFormExpr
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
	super ASendReassignFormExpr
end
class ASuperExpr
	super AExpr
    readable var _n_qualified: nullable AQualified = null
    readable var _n_kwsuper: TKwsuper
    readable var _n_args: AExprs
end
class AInitExpr
	super ASendExpr
    readable var _n_kwinit: TKwinit
    readable var _n_args: AExprs
end
abstract class ABraFormExpr
	super ASendExpr
    readable var _n_args: AExprs
end
class ABraExpr
	super ABraFormExpr
end
class ABraAssignExpr
	super ABraFormExpr
	super AAssignFormExpr
end
abstract class AVarFormExpr
	super AExpr
    readable var _n_id: TId
end
class ABraReassignExpr
	super ABraFormExpr
	super ASendReassignFormExpr
end
class AClosureCallExpr
	super AExpr
    readable var _n_id: TId
    readable var _n_args: AExprs
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
abstract class ARangeExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class ACrangeExpr
	super ARangeExpr
	readable var _n_obra: TObra
	readable var _n_cbra: TCbra
end
class AOrangeExpr
	super ARangeExpr
	readable var _n_obra: TObra
	readable var _n_cbra: TObra
end
class AArrayExpr
	super AExpr
    readable var _n_exprs: AExprs
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
abstract class AStringFormExpr
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
    readable var _n_opar: TOpar
    readable var _n_cpar: TCpar
end
abstract class AProxyExpr
	super AExpr
    readable var _n_expr: AExpr
end
class AAsCastExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_kwas: TKwas
    readable var _n_opar: TOpar
    readable var _n_type: AType
    readable var _n_cpar: TCpar
end
class AAsNotnullExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_kwas: TKwas
    readable var _n_opar: TOpar
    readable var _n_kwnot: TKwnot
    readable var _n_kwnull: TKwnull
    readable var _n_cpar: TCpar
end
class AIssetAttrExpr
	super AAttrFormExpr
    readable var _n_kwisset: TKwisset
end
abstract class AExprs
	super Prod 
    readable var _n_exprs: List[AExpr] = new List[AExpr]
end
class ADebugTypeExpr
	super AExpr
    readable var _n_kwdebug: TKwdebug
    readable var _n_kwtype: TKwtype
    readable var _n_expr: AExpr
    readable var _n_type: AType
end
class AListExprs
	super AExprs
end
class AParExprs
	super AExprs
    readable var _n_opar: TOpar
    readable var _n_cpar: TCpar
end
class ABraExprs
	super AExprs
    readable var _n_obra: TObra
    readable var _n_cbra: TCbra
end
abstract class AAssignOp super Prod end
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
    redef fun hot_location do return n_id.location
end
abstract class AClosureId
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
class AModuleName
special Prod
    readable var _n_quad: nullable TQuad = null
    readable var _n_path: List[TId] = new List[TId]
    readable var _n_id: TId
end
class AInLanguage
	super Prod
    readable var _n_kwin: TKwin
    readable var _n_string: TString
end
class AExternCodeBlock
	super Prod
    readable var _n_in_language: nullable AInLanguage = null
    readable var _n_extern_code_segment: TExternCodeSegment
end
class AQualified
	super Prod
    readable var _n_quad: nullable TQuad = null
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
    init(n_base: nullable AModule, n_eof: EOF)
    do
	    self._n_base = n_base
	    self._n_eof = n_eof
    end
end
