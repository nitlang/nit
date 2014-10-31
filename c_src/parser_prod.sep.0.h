#include "nit.common.h"
#define COLOR_parser_nodes__AModule___n_moduledecl 4
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_parser_nodes__ANode___parent 1
#define COLOR_parser_nodes__AModule___n_imports 5
void parser_nodes__ANodes__unsafe_add_all(val* self, val* p0);
#define COLOR_parser_nodes__AModule___n_extern_code_blocks 6
#define COLOR_parser_nodes__AModule___n_classdefs 7
void parser_prod__AModule__init_amodule(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_nullable_parser_nodes__AModuledecl;
void parser_prod__AModule__n_moduledecl_61d(val* self, val* p0);
short int parser_nodes__ANodes__replace_child(val* self, val* p0, val* p1);
void parser_prod__AModule__replace_child(val* self, val* p0, val* p1);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
void parser_nodes__ANodes__visit_all(val* self, val* p0);
void parser_prod__AModule__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AModuledecl___n_doc 4
#define COLOR_parser_nodes__AModuledecl___n_kwredef 5
#define COLOR_parser_nodes__AModuledecl___n_visibility 6
#define COLOR_parser_nodes__AModuledecl___n_kwmodule 7
#define COLOR_parser_nodes__AModuledecl___n_name 8
#define COLOR_parser_nodes__Prod___n_annotations 2
void parser_prod__AModuledecl__init_amoduledecl(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5);
extern const struct type type_nullable_parser_nodes__ADoc;
void parser_prod__AModuledecl__n_doc_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TKwredef;
void parser_prod__AModuledecl__n_kwredef_61d(val* self, val* p0);
extern const struct type type_parser_nodes__AVisibility;
void parser_prod__AModuledecl__n_visibility_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TKwmodule;
void parser_prod__AModuledecl__n_kwmodule_61d(val* self, val* p0);
extern const struct type type_parser_nodes__AModuleName;
void parser_prod__AModuledecl__n_name_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__AAnnotations;
void parser_prod__AModuledecl__n_annotations_61d(val* self, val* p0);
void parser_prod__AModuledecl__replace_child(val* self, val* p0, val* p1);
void parser_prod__AModuledecl__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AStdImport___n_visibility 4
#define COLOR_parser_nodes__AStdImport___n_kwimport 5
#define COLOR_parser_nodes__AStdImport___n_name 6
void parser_prod__AStdImport__init_astdimport(val* self, val* p0, val* p1, val* p2, val* p3);
void parser_prod__AStdImport__n_visibility_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TKwimport;
void parser_prod__AStdImport__n_kwimport_61d(val* self, val* p0);
void parser_prod__AStdImport__n_name_61d(val* self, val* p0);
void parser_prod__AStdImport__n_annotations_61d(val* self, val* p0);
void parser_prod__AStdImport__replace_child(val* self, val* p0, val* p1);
void parser_prod__AStdImport__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ANoImport___n_visibility 4
#define COLOR_parser_nodes__ANoImport___n_kwimport 5
#define COLOR_parser_nodes__ANoImport___n_kwend 6
void parser_prod__ANoImport__init_anoimport(val* self, val* p0, val* p1, val* p2);
void parser_prod__ANoImport__n_visibility_61d(val* self, val* p0);
void parser_prod__ANoImport__n_kwimport_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TKwend;
void parser_prod__ANoImport__n_kwend_61d(val* self, val* p0);
void parser_prod__ANoImport__replace_child(val* self, val* p0, val* p1);
void parser_prod__ANoImport__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__APublicVisibility___n_kwpublic 4
void parser_prod__APublicVisibility__init_apublicvisibility(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TKwpublic;
void parser_prod__APublicVisibility__n_kwpublic_61d(val* self, val* p0);
void parser_prod__APublicVisibility__replace_child(val* self, val* p0, val* p1);
void parser_prod__APublicVisibility__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__APrivateVisibility___n_kwprivate 4
void parser_prod__APrivateVisibility__init_aprivatevisibility(val* self, val* p0);
extern const struct type type_parser_nodes__TKwprivate;
void parser_prod__APrivateVisibility__n_kwprivate_61d(val* self, val* p0);
void parser_prod__APrivateVisibility__replace_child(val* self, val* p0, val* p1);
void parser_prod__APrivateVisibility__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AProtectedVisibility___n_kwprotected 4
void parser_prod__AProtectedVisibility__init_aprotectedvisibility(val* self, val* p0);
extern const struct type type_parser_nodes__TKwprotected;
void parser_prod__AProtectedVisibility__n_kwprotected_61d(val* self, val* p0);
void parser_prod__AProtectedVisibility__replace_child(val* self, val* p0, val* p1);
void parser_prod__AProtectedVisibility__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude 4
void parser_prod__AIntrudeVisibility__init_aintrudevisibility(val* self, val* p0);
extern const struct type type_parser_nodes__TKwintrude;
void parser_prod__AIntrudeVisibility__n_kwintrude_61d(val* self, val* p0);
void parser_prod__AIntrudeVisibility__replace_child(val* self, val* p0, val* p1);
void parser_prod__AIntrudeVisibility__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AStdClassdef___n_doc 10
#define COLOR_parser_nodes__AStdClassdef___n_kwredef 11
#define COLOR_parser_nodes__AStdClassdef___n_visibility 12
#define COLOR_parser_nodes__AStdClassdef___n_classkind 13
#define COLOR_parser_nodes__AStdClassdef___n_id 14
#define COLOR_parser_nodes__AStdClassdef___n_formaldefs 15
#define COLOR_parser_nodes__AStdClassdef___n_extern_code_block 16
#define COLOR_parser_nodes__AStdClassdef___n_superclasses 17
#define COLOR_parser_nodes__AClassdef___n_propdefs 4
#define COLOR_parser_nodes__AStdClassdef___n_kwend 18
void parser_prod__AStdClassdef__init_astdclassdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10);
void parser_prod__AStdClassdef__n_doc_61d(val* self, val* p0);
void parser_prod__AStdClassdef__n_kwredef_61d(val* self, val* p0);
void parser_prod__AStdClassdef__n_visibility_61d(val* self, val* p0);
extern const struct type type_parser_nodes__AClasskind;
void parser_prod__AStdClassdef__n_classkind_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TClassid;
void parser_prod__AStdClassdef__n_id_61d(val* self, val* p0);
void parser_prod__AStdClassdef__n_annotations_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__AExternCodeBlock;
void parser_prod__AStdClassdef__n_extern_code_block_61d(val* self, val* p0);
void parser_prod__AStdClassdef__n_kwend_61d(val* self, val* p0);
void parser_prod__AStdClassdef__replace_child(val* self, val* p0, val* p1);
void parser_prod__AStdClassdef__visit_all(val* self, val* p0);
void parser_prod__ATopClassdef__init_atopclassdef(val* self, val* p0);
void parser_prod__ATopClassdef__replace_child(val* self, val* p0, val* p1);
void parser_prod__ATopClassdef__visit_all(val* self, val* p0);
void parser_prod__AMainClassdef__init_amainclassdef(val* self, val* p0);
void parser_prod__AMainClassdef__replace_child(val* self, val* p0, val* p1);
void parser_prod__AMainClassdef__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AConcreteClasskind___n_kwclass 4
void parser_prod__AConcreteClasskind__init_aconcreteclasskind(val* self, val* p0);
extern const struct type type_parser_nodes__TKwclass;
void parser_prod__AConcreteClasskind__n_kwclass_61d(val* self, val* p0);
void parser_prod__AConcreteClasskind__replace_child(val* self, val* p0, val* p1);
void parser_prod__AConcreteClasskind__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAbstractClasskind___n_kwabstract 4
#define COLOR_parser_nodes__AAbstractClasskind___n_kwclass 5
void parser_prod__AAbstractClasskind__init_aabstractclasskind(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwabstract;
void parser_prod__AAbstractClasskind__n_kwabstract_61d(val* self, val* p0);
void parser_prod__AAbstractClasskind__n_kwclass_61d(val* self, val* p0);
void parser_prod__AAbstractClasskind__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAbstractClasskind__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface 4
void parser_prod__AInterfaceClasskind__init_ainterfaceclasskind(val* self, val* p0);
extern const struct type type_parser_nodes__TKwinterface;
void parser_prod__AInterfaceClasskind__n_kwinterface_61d(val* self, val* p0);
void parser_prod__AInterfaceClasskind__replace_child(val* self, val* p0, val* p1);
void parser_prod__AInterfaceClasskind__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AEnumClasskind___n_kwenum 4
void parser_prod__AEnumClasskind__init_aenumclasskind(val* self, val* p0);
extern const struct type type_parser_nodes__TKwenum;
void parser_prod__AEnumClasskind__n_kwenum_61d(val* self, val* p0);
void parser_prod__AEnumClasskind__replace_child(val* self, val* p0, val* p1);
void parser_prod__AEnumClasskind__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AExternClasskind___n_kwextern 4
#define COLOR_parser_nodes__AExternClasskind___n_kwclass 5
void parser_prod__AExternClasskind__init_aexternclasskind(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwextern;
void parser_prod__AExternClasskind__n_kwextern_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TKwclass;
void parser_prod__AExternClasskind__n_kwclass_61d(val* self, val* p0);
void parser_prod__AExternClasskind__replace_child(val* self, val* p0, val* p1);
void parser_prod__AExternClasskind__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AFormaldef___n_id 4
#define COLOR_parser_nodes__AFormaldef___n_type 5
void parser_prod__AFormaldef__init_aformaldef(val* self, val* p0, val* p1, val* p2);
extern const struct type type_parser_nodes__TClassid;
void parser_prod__AFormaldef__n_id_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__AType;
void parser_prod__AFormaldef__n_type_61d(val* self, val* p0);
void parser_prod__AFormaldef__n_annotations_61d(val* self, val* p0);
void parser_prod__AFormaldef__replace_child(val* self, val* p0, val* p1);
void parser_prod__AFormaldef__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ASuperclass___n_kwsuper 4
#define COLOR_parser_nodes__ASuperclass___n_type 5
void parser_prod__ASuperclass__init_asuperclass(val* self, val* p0, val* p1, val* p2);
extern const struct type type_parser_nodes__TKwsuper;
void parser_prod__ASuperclass__n_kwsuper_61d(val* self, val* p0);
extern const struct type type_parser_nodes__AType;
void parser_prod__ASuperclass__n_type_61d(val* self, val* p0);
void parser_prod__ASuperclass__n_annotations_61d(val* self, val* p0);
void parser_prod__ASuperclass__replace_child(val* self, val* p0, val* p1);
void parser_prod__ASuperclass__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__APropdef___n_doc 4
#define COLOR_parser_nodes__APropdef___n_kwredef 5
#define COLOR_parser_nodes__APropdef___n_visibility 6
#define COLOR_parser_nodes__AAttrPropdef___n_kwvar 11
#define COLOR_parser_nodes__AAttrPropdef___n_id2 12
#define COLOR_parser_nodes__AAttrPropdef___n_type 13
#define COLOR_parser_nodes__AAttrPropdef___n_expr 14
#define COLOR_parser_nodes__AAttrPropdef___n_block 15
void parser_prod__AAttrPropdef__init_aattrpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8);
void parser_prod__AAttrPropdef__n_doc_61d(val* self, val* p0);
void parser_prod__AAttrPropdef__n_kwredef_61d(val* self, val* p0);
void parser_prod__AAttrPropdef__n_visibility_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TKwvar;
void parser_prod__AAttrPropdef__n_kwvar_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TId;
void parser_prod__AAttrPropdef__n_id2_61d(val* self, val* p0);
void parser_prod__AAttrPropdef__n_type_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__AExpr;
void parser_prod__AAttrPropdef__n_expr_61d(val* self, val* p0);
void parser_prod__AAttrPropdef__n_annotations_61d(val* self, val* p0);
void parser_prod__AAttrPropdef__n_block_61d(val* self, val* p0);
void parser_prod__AAttrPropdef__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAttrPropdef__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AMethPropdef___n_block 16
void parser_prod__AMainMethPropdef__init_amainmethpropdef(val* self, val* p0, val* p1);
void parser_prod__AMainMethPropdef__n_kwredef_61d(val* self, val* p0);
void parser_prod__AMainMethPropdef__n_block_61d(val* self, val* p0);
void parser_prod__AMainMethPropdef__replace_child(val* self, val* p0, val* p1);
void parser_prod__AMainMethPropdef__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ATypePropdef___n_kwtype 11
#define COLOR_parser_nodes__ATypePropdef___n_id 12
#define COLOR_parser_nodes__ATypePropdef___n_type 13
void parser_prod__ATypePropdef__init_atypepropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6);
void parser_prod__ATypePropdef__n_doc_61d(val* self, val* p0);
void parser_prod__ATypePropdef__n_kwredef_61d(val* self, val* p0);
void parser_prod__ATypePropdef__n_visibility_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TKwtype;
void parser_prod__ATypePropdef__n_kwtype_61d(val* self, val* p0);
void parser_prod__ATypePropdef__n_id_61d(val* self, val* p0);
void parser_prod__ATypePropdef__n_type_61d(val* self, val* p0);
void parser_prod__ATypePropdef__n_annotations_61d(val* self, val* p0);
void parser_prod__ATypePropdef__replace_child(val* self, val* p0, val* p1);
void parser_prod__ATypePropdef__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AMethPropdef___n_kwmeth 11
#define COLOR_parser_nodes__AMethPropdef___n_kwinit 12
#define COLOR_parser_nodes__AMethPropdef___n_kwnew 13
#define COLOR_parser_nodes__AMethPropdef___n_methid 14
#define COLOR_parser_nodes__AMethPropdef___n_signature 15
#define COLOR_parser_nodes__AMethPropdef___n_extern_calls 17
#define COLOR_parser_nodes__AMethPropdef___n_extern_code_block 18
void parser_prod__AMethPropdef__init_amethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11);
void parser_prod__AMethPropdef__n_doc_61d(val* self, val* p0);
#define COLOR_parser_nodes__APropdef__n_kwredef_61d 57
void parser_prod__AMethPropdef__n_visibility_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TKwmeth;
void parser_prod__AMethPropdef__n_kwmeth_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TKwinit;
void parser_prod__AMethPropdef__n_kwinit_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TKwnew;
void parser_prod__AMethPropdef__n_kwnew_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__AMethid;
void parser_prod__AMethPropdef__n_methid_61d(val* self, val* p0);
extern const struct type type_parser_nodes__ASignature;
void parser_prod__AMethPropdef__n_signature_61d(val* self, val* p0);
void parser_prod__AMethPropdef__n_annotations_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__AExternCalls;
void parser_prod__AMethPropdef__n_extern_calls_61d(val* self, val* p0);
void parser_prod__AMethPropdef__n_extern_code_block_61d(val* self, val* p0);
#define COLOR_parser_nodes__AMethPropdef__n_block_61d 89
void parser_prod__AMethPropdef__replace_child(val* self, val* p0, val* p1);
void parser_prod__AMethPropdef__n_kwredef_61d(val* self, val* p0);
void parser_prod__AMethPropdef__n_block_61d(val* self, val* p0);
void parser_prod__AMethPropdef__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AIdMethid___n_id 4
void parser_prod__AIdMethid__init_aidmethid(val* self, val* p0);
void parser_prod__AIdMethid__n_id_61d(val* self, val* p0);
void parser_prod__AIdMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AIdMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__APlusMethid___n_plus 4
void parser_prod__APlusMethid__init_aplusmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TPlus;
void parser_prod__APlusMethid__n_plus_61d(val* self, val* p0);
void parser_prod__APlusMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__APlusMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AMinusMethid___n_minus 4
void parser_prod__AMinusMethid__init_aminusmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TMinus;
void parser_prod__AMinusMethid__n_minus_61d(val* self, val* p0);
void parser_prod__AMinusMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AMinusMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AStarMethid___n_star 4
void parser_prod__AStarMethid__init_astarmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TStar;
void parser_prod__AStarMethid__n_star_61d(val* self, val* p0);
void parser_prod__AStarMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AStarMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AStarstarMethid___n_starstar 4
void parser_prod__AStarstarMethid__init_astarstarmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TStarstar;
void parser_prod__AStarstarMethid__n_starstar_61d(val* self, val* p0);
void parser_prod__AStarstarMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AStarstarMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ASlashMethid___n_slash 4
void parser_prod__ASlashMethid__init_aslashmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TSlash;
void parser_prod__ASlashMethid__n_slash_61d(val* self, val* p0);
void parser_prod__ASlashMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__ASlashMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__APercentMethid___n_percent 4
void parser_prod__APercentMethid__init_apercentmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TPercent;
void parser_prod__APercentMethid__n_percent_61d(val* self, val* p0);
void parser_prod__APercentMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__APercentMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AEqMethid___n_eq 4
void parser_prod__AEqMethid__init_aeqmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TEq;
void parser_prod__AEqMethid__n_eq_61d(val* self, val* p0);
void parser_prod__AEqMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AEqMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ANeMethid___n_ne 4
void parser_prod__ANeMethid__init_anemethid(val* self, val* p0);
extern const struct type type_parser_nodes__TNe;
void parser_prod__ANeMethid__n_ne_61d(val* self, val* p0);
void parser_prod__ANeMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__ANeMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ALeMethid___n_le 4
void parser_prod__ALeMethid__init_alemethid(val* self, val* p0);
extern const struct type type_parser_nodes__TLe;
void parser_prod__ALeMethid__n_le_61d(val* self, val* p0);
void parser_prod__ALeMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__ALeMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AGeMethid___n_ge 4
void parser_prod__AGeMethid__init_agemethid(val* self, val* p0);
extern const struct type type_parser_nodes__TGe;
void parser_prod__AGeMethid__n_ge_61d(val* self, val* p0);
void parser_prod__AGeMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AGeMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ALtMethid___n_lt 4
void parser_prod__ALtMethid__init_altmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TLt;
void parser_prod__ALtMethid__n_lt_61d(val* self, val* p0);
void parser_prod__ALtMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__ALtMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AGtMethid___n_gt 4
void parser_prod__AGtMethid__init_agtmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TGt;
void parser_prod__AGtMethid__n_gt_61d(val* self, val* p0);
void parser_prod__AGtMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AGtMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ALlMethid___n_ll 4
void parser_prod__ALlMethid__init_allmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TLl;
void parser_prod__ALlMethid__n_ll_61d(val* self, val* p0);
void parser_prod__ALlMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__ALlMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AGgMethid___n_gg 4
void parser_prod__AGgMethid__init_aggmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TGg;
void parser_prod__AGgMethid__n_gg_61d(val* self, val* p0);
void parser_prod__AGgMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AGgMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ABraMethid___n_obra 4
#define COLOR_parser_nodes__ABraMethid___n_cbra 5
void parser_prod__ABraMethid__init_abramethid(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TObra;
void parser_prod__ABraMethid__n_obra_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TCbra;
void parser_prod__ABraMethid__n_cbra_61d(val* self, val* p0);
void parser_prod__ABraMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__ABraMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AStarshipMethid___n_starship 4
void parser_prod__AStarshipMethid__init_astarshipmethid(val* self, val* p0);
extern const struct type type_parser_nodes__TStarship;
void parser_prod__AStarshipMethid__n_starship_61d(val* self, val* p0);
void parser_prod__AStarshipMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AStarshipMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAssignMethid___n_id 4
#define COLOR_parser_nodes__AAssignMethid___n_assign 5
void parser_prod__AAssignMethid__init_aassignmethid(val* self, val* p0, val* p1);
void parser_prod__AAssignMethid__n_id_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TAssign;
void parser_prod__AAssignMethid__n_assign_61d(val* self, val* p0);
void parser_prod__AAssignMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAssignMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ABraassignMethid___n_obra 4
#define COLOR_parser_nodes__ABraassignMethid___n_cbra 5
#define COLOR_parser_nodes__ABraassignMethid___n_assign 6
void parser_prod__ABraassignMethid__init_abraassignmethid(val* self, val* p0, val* p1, val* p2);
void parser_prod__ABraassignMethid__n_obra_61d(val* self, val* p0);
void parser_prod__ABraassignMethid__n_cbra_61d(val* self, val* p0);
void parser_prod__ABraassignMethid__n_assign_61d(val* self, val* p0);
void parser_prod__ABraassignMethid__replace_child(val* self, val* p0, val* p1);
void parser_prod__ABraassignMethid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ASignature___n_opar 4
#define COLOR_parser_nodes__ASignature___n_params 5
#define COLOR_parser_nodes__ASignature___n_cpar 6
#define COLOR_parser_nodes__ASignature___n_type 7
void parser_prod__ASignature__init_asignature(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_nullable_parser_nodes__TOpar;
void parser_prod__ASignature__n_opar_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TCpar;
void parser_prod__ASignature__n_cpar_61d(val* self, val* p0);
void parser_prod__ASignature__n_type_61d(val* self, val* p0);
void parser_prod__ASignature__replace_child(val* self, val* p0, val* p1);
void parser_prod__ASignature__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AParam___n_id 4
#define COLOR_parser_nodes__AParam___n_type 5
#define COLOR_parser_nodes__AParam___n_dotdotdot 6
void parser_prod__AParam__init_aparam(val* self, val* p0, val* p1, val* p2, val* p3);
void parser_prod__AParam__n_id_61d(val* self, val* p0);
void parser_prod__AParam__n_type_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TDotdotdot;
void parser_prod__AParam__n_dotdotdot_61d(val* self, val* p0);
void parser_prod__AParam__n_annotations_61d(val* self, val* p0);
void parser_prod__AParam__replace_child(val* self, val* p0, val* p1);
void parser_prod__AParam__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AType___n_kwnullable 4
#define COLOR_parser_nodes__AType___n_id 5
#define COLOR_parser_nodes__AType___n_types 6
void parser_prod__AType__init_atype(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_nullable_parser_nodes__TKwnullable;
void parser_prod__AType__n_kwnullable_61d(val* self, val* p0);
void parser_prod__AType__n_id_61d(val* self, val* p0);
void parser_prod__AType__n_annotations_61d(val* self, val* p0);
void parser_prod__AType__replace_child(val* self, val* p0, val* p1);
void parser_prod__AType__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ALabel___n_kwlabel 4
#define COLOR_parser_nodes__ALabel___n_id 5
void parser_prod__ALabel__init_alabel(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwlabel;
void parser_prod__ALabel__n_kwlabel_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TId;
void parser_prod__ALabel__n_id_61d(val* self, val* p0);
void parser_prod__ALabel__replace_child(val* self, val* p0, val* p1);
void parser_prod__ALabel__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ABlockExpr___n_expr 9
#define COLOR_parser_nodes__ABlockExpr___n_kwend 10
void parser_prod__ABlockExpr__init_ablockexpr(val* self, val* p0, val* p1);
extern const struct type type_nullable_parser_nodes__TKwend;
void parser_prod__ABlockExpr__n_kwend_61d(val* self, val* p0);
void parser_prod__ABlockExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ABlockExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AVardeclExpr___n_kwvar 9
#define COLOR_parser_nodes__AVardeclExpr___n_id 10
#define COLOR_parser_nodes__AVardeclExpr___n_type 11
#define COLOR_parser_nodes__AVardeclExpr___n_assign 12
#define COLOR_parser_nodes__AVardeclExpr___n_expr 13
void parser_prod__AVardeclExpr__init_avardeclexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5);
void parser_prod__AVardeclExpr__n_kwvar_61d(val* self, val* p0);
void parser_prod__AVardeclExpr__n_id_61d(val* self, val* p0);
void parser_prod__AVardeclExpr__n_type_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TAssign;
void parser_prod__AVardeclExpr__n_assign_61d(val* self, val* p0);
void parser_prod__AVardeclExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AVardeclExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__AVardeclExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AVardeclExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AReturnExpr___n_kwreturn 9
#define COLOR_parser_nodes__AReturnExpr___n_expr 10
void parser_prod__AReturnExpr__init_areturnexpr(val* self, val* p0, val* p1);
extern const struct type type_nullable_parser_nodes__TKwreturn;
void parser_prod__AReturnExpr__n_kwreturn_61d(val* self, val* p0);
void parser_prod__AReturnExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AReturnExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AReturnExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ABreakExpr___n_kwbreak 12
#define COLOR_parser_nodes__ALabelable___n_label 9
void parser_prod__ABreakExpr__init_abreakexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwbreak;
void parser_prod__ABreakExpr__n_kwbreak_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__ALabel;
void parser_prod__ABreakExpr__n_label_61d(val* self, val* p0);
void parser_prod__ABreakExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ABreakExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAbortExpr___n_kwabort 9
void parser_prod__AAbortExpr__init_aabortexpr(val* self, val* p0);
extern const struct type type_parser_nodes__TKwabort;
void parser_prod__AAbortExpr__n_kwabort_61d(val* self, val* p0);
void parser_prod__AAbortExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAbortExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AContinueExpr___n_kwcontinue 12
void parser_prod__AContinueExpr__init_acontinueexpr(val* self, val* p0, val* p1);
extern const struct type type_nullable_parser_nodes__TKwcontinue;
void parser_prod__AContinueExpr__n_kwcontinue_61d(val* self, val* p0);
void parser_prod__AContinueExpr__n_label_61d(val* self, val* p0);
void parser_prod__AContinueExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AContinueExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ADoExpr___n_kwdo 10
#define COLOR_parser_nodes__ADoExpr___n_block 11
void parser_prod__ADoExpr__init_adoexpr(val* self, val* p0, val* p1, val* p2);
extern const struct type type_parser_nodes__TKwdo;
void parser_prod__ADoExpr__n_kwdo_61d(val* self, val* p0);
void parser_prod__ADoExpr__n_block_61d(val* self, val* p0);
void parser_prod__ADoExpr__n_label_61d(val* self, val* p0);
void parser_prod__ADoExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ADoExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AIfExpr___n_kwif 9
#define COLOR_parser_nodes__AIfExpr___n_expr 10
#define COLOR_parser_nodes__AIfExpr___n_then 11
#define COLOR_parser_nodes__AIfExpr___n_else 12
void parser_prod__AIfExpr__init_aifexpr(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_parser_nodes__TKwif;
void parser_prod__AIfExpr__n_kwif_61d(val* self, val* p0);
extern const struct type type_parser_nodes__AExpr;
void parser_prod__AIfExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AIfExpr__n_then_61d(val* self, val* p0);
void parser_prod__AIfExpr__n_else_61d(val* self, val* p0);
void parser_prod__AIfExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AIfExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AIfexprExpr___n_kwif 9
#define COLOR_parser_nodes__AIfexprExpr___n_expr 10
#define COLOR_parser_nodes__AIfexprExpr___n_kwthen 11
#define COLOR_parser_nodes__AIfexprExpr___n_then 12
#define COLOR_parser_nodes__AIfexprExpr___n_kwelse 13
#define COLOR_parser_nodes__AIfexprExpr___n_else 14
void parser_prod__AIfexprExpr__init_aifexprexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5);
void parser_prod__AIfexprExpr__n_kwif_61d(val* self, val* p0);
void parser_prod__AIfexprExpr__n_expr_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TKwthen;
void parser_prod__AIfexprExpr__n_kwthen_61d(val* self, val* p0);
void parser_prod__AIfexprExpr__n_then_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TKwelse;
void parser_prod__AIfexprExpr__n_kwelse_61d(val* self, val* p0);
void parser_prod__AIfexprExpr__n_else_61d(val* self, val* p0);
void parser_prod__AIfexprExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AIfexprExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AWhileExpr___n_kwwhile 10
#define COLOR_parser_nodes__AWhileExpr___n_expr 11
#define COLOR_parser_nodes__AWhileExpr___n_kwdo 12
#define COLOR_parser_nodes__AWhileExpr___n_block 13
void parser_prod__AWhileExpr__init_awhileexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4);
extern const struct type type_parser_nodes__TKwwhile;
void parser_prod__AWhileExpr__n_kwwhile_61d(val* self, val* p0);
void parser_prod__AWhileExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AWhileExpr__n_kwdo_61d(val* self, val* p0);
void parser_prod__AWhileExpr__n_block_61d(val* self, val* p0);
void parser_prod__AWhileExpr__n_label_61d(val* self, val* p0);
void parser_prod__AWhileExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AWhileExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ALoopExpr___n_kwloop 10
#define COLOR_parser_nodes__ALoopExpr___n_block 11
void parser_prod__ALoopExpr__init_aloopexpr(val* self, val* p0, val* p1, val* p2);
extern const struct type type_parser_nodes__TKwloop;
void parser_prod__ALoopExpr__n_kwloop_61d(val* self, val* p0);
void parser_prod__ALoopExpr__n_block_61d(val* self, val* p0);
void parser_prod__ALoopExpr__n_label_61d(val* self, val* p0);
void parser_prod__ALoopExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ALoopExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AForExpr___n_kwfor 10
#define COLOR_parser_nodes__AForExpr___n_ids 11
#define COLOR_parser_nodes__AForExpr___n_expr 12
#define COLOR_parser_nodes__AForExpr___n_kwdo 13
#define COLOR_parser_nodes__AForExpr___n_block 14
void parser_prod__AForExpr__init_aforexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5);
extern const struct type type_parser_nodes__TKwfor;
void parser_prod__AForExpr__n_kwfor_61d(val* self, val* p0);
void parser_prod__AForExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AForExpr__n_kwdo_61d(val* self, val* p0);
void parser_prod__AForExpr__n_block_61d(val* self, val* p0);
void parser_prod__AForExpr__n_label_61d(val* self, val* p0);
void parser_prod__AForExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AForExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAssertExpr___n_kwassert 9
#define COLOR_parser_nodes__AAssertExpr___n_id 10
#define COLOR_parser_nodes__AAssertExpr___n_expr 11
#define COLOR_parser_nodes__AAssertExpr___n_else 12
void parser_prod__AAssertExpr__init_aassertexpr(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_parser_nodes__TKwassert;
void parser_prod__AAssertExpr__n_kwassert_61d(val* self, val* p0);
void parser_prod__AAssertExpr__n_id_61d(val* self, val* p0);
void parser_prod__AAssertExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AAssertExpr__n_else_61d(val* self, val* p0);
void parser_prod__AAssertExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAssertExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AOnceExpr___n_kwonce 9
#define COLOR_parser_nodes__AOnceExpr___n_expr 10
void parser_prod__AOnceExpr__init_aonceexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwonce;
void parser_prod__AOnceExpr__n_kwonce_61d(val* self, val* p0);
void parser_prod__AOnceExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AOnceExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AOnceExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AOrExpr___n_expr 9
#define COLOR_parser_nodes__AOrExpr___n_expr2 10
void parser_prod__AOrExpr__init_aorexpr(val* self, val* p0, val* p1);
void parser_prod__AOrExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AOrExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AOrExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AOrExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAndExpr___n_expr 9
#define COLOR_parser_nodes__AAndExpr___n_expr2 10
void parser_prod__AAndExpr__init_aandexpr(val* self, val* p0, val* p1);
void parser_prod__AAndExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AAndExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AAndExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAndExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AOrElseExpr___n_expr 9
#define COLOR_parser_nodes__AOrElseExpr___n_expr2 10
void parser_prod__AOrElseExpr__init_aorelseexpr(val* self, val* p0, val* p1);
void parser_prod__AOrElseExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AOrElseExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AOrElseExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AOrElseExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AImpliesExpr___n_expr 9
#define COLOR_parser_nodes__AImpliesExpr___n_expr2 10
void parser_prod__AImpliesExpr__init_aimpliesexpr(val* self, val* p0, val* p1);
void parser_prod__AImpliesExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AImpliesExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AImpliesExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AImpliesExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ANotExpr___n_kwnot 9
#define COLOR_parser_nodes__ANotExpr___n_expr 10
void parser_prod__ANotExpr__init_anotexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwnot;
void parser_prod__ANotExpr__n_kwnot_61d(val* self, val* p0);
void parser_prod__ANotExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ANotExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ANotExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ASendExpr___n_expr 9
#define COLOR_parser_nodes__ABinopExpr___n_expr2 11
void parser_prod__AEqExpr__init_aeqexpr(val* self, val* p0, val* p1);
void parser_prod__AEqExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AEqExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AEqExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AEqExpr__visit_all(val* self, val* p0);
void parser_prod__ANeExpr__init_aneexpr(val* self, val* p0, val* p1);
void parser_prod__ANeExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ANeExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__ANeExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ANeExpr__visit_all(val* self, val* p0);
void parser_prod__ALtExpr__init_altexpr(val* self, val* p0, val* p1);
void parser_prod__ALtExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ALtExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__ALtExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ALtExpr__visit_all(val* self, val* p0);
void parser_prod__ALeExpr__init_aleexpr(val* self, val* p0, val* p1);
void parser_prod__ALeExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ALeExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__ALeExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ALeExpr__visit_all(val* self, val* p0);
void parser_prod__ALlExpr__init_allexpr(val* self, val* p0, val* p1);
void parser_prod__ALlExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ALlExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__ALlExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ALlExpr__visit_all(val* self, val* p0);
void parser_prod__AGtExpr__init_agtexpr(val* self, val* p0, val* p1);
void parser_prod__AGtExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AGtExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AGtExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AGtExpr__visit_all(val* self, val* p0);
void parser_prod__AGeExpr__init_ageexpr(val* self, val* p0, val* p1);
void parser_prod__AGeExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AGeExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AGeExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AGeExpr__visit_all(val* self, val* p0);
void parser_prod__AGgExpr__init_aggexpr(val* self, val* p0, val* p1);
void parser_prod__AGgExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AGgExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AGgExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AGgExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AIsaExpr___n_expr 9
#define COLOR_parser_nodes__AIsaExpr___n_type 10
void parser_prod__AIsaExpr__init_aisaexpr(val* self, val* p0, val* p1);
void parser_prod__AIsaExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AIsaExpr__n_type_61d(val* self, val* p0);
void parser_prod__AIsaExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AIsaExpr__visit_all(val* self, val* p0);
void parser_prod__APlusExpr__init_aplusexpr(val* self, val* p0, val* p1);
void parser_prod__APlusExpr__n_expr_61d(val* self, val* p0);
void parser_prod__APlusExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__APlusExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__APlusExpr__visit_all(val* self, val* p0);
void parser_prod__AMinusExpr__init_aminusexpr(val* self, val* p0, val* p1);
void parser_prod__AMinusExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AMinusExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AMinusExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AMinusExpr__visit_all(val* self, val* p0);
void parser_prod__AStarshipExpr__init_astarshipexpr(val* self, val* p0, val* p1);
void parser_prod__AStarshipExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AStarshipExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AStarshipExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AStarshipExpr__visit_all(val* self, val* p0);
void parser_prod__AStarExpr__init_astarexpr(val* self, val* p0, val* p1);
void parser_prod__AStarExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AStarExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AStarExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AStarExpr__visit_all(val* self, val* p0);
void parser_prod__AStarstarExpr__init_astarstarexpr(val* self, val* p0, val* p1);
void parser_prod__AStarstarExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AStarstarExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AStarstarExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AStarstarExpr__visit_all(val* self, val* p0);
void parser_prod__ASlashExpr__init_aslashexpr(val* self, val* p0, val* p1);
void parser_prod__ASlashExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ASlashExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__ASlashExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ASlashExpr__visit_all(val* self, val* p0);
void parser_prod__APercentExpr__init_apercentexpr(val* self, val* p0, val* p1);
void parser_prod__APercentExpr__n_expr_61d(val* self, val* p0);
void parser_prod__APercentExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__APercentExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__APercentExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AUminusExpr___n_minus 11
void parser_prod__AUminusExpr__init_auminusexpr(val* self, val* p0, val* p1);
void parser_prod__AUminusExpr__n_minus_61d(val* self, val* p0);
void parser_prod__AUminusExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AUminusExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AUminusExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ANewExpr___n_kwnew 9
#define COLOR_parser_nodes__ANewExpr___n_type 10
#define COLOR_parser_nodes__ANewExpr___n_id 11
#define COLOR_parser_nodes__ANewExpr___n_args 12
void parser_prod__ANewExpr__init_anewexpr(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_parser_nodes__TKwnew;
void parser_prod__ANewExpr__n_kwnew_61d(val* self, val* p0);
void parser_prod__ANewExpr__n_type_61d(val* self, val* p0);
void parser_prod__ANewExpr__n_id_61d(val* self, val* p0);
extern const struct type type_parser_nodes__AExprs;
void parser_prod__ANewExpr__n_args_61d(val* self, val* p0);
void parser_prod__ANewExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ANewExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAttrFormExpr___n_expr 9
#define COLOR_parser_nodes__AAttrFormExpr___n_id 10
void parser_prod__AAttrExpr__init_aattrexpr(val* self, val* p0, val* p1);
void parser_prod__AAttrExpr__n_expr_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TAttrid;
void parser_prod__AAttrExpr__n_id_61d(val* self, val* p0);
void parser_prod__AAttrExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAttrExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAssignFormExpr___n_assign 11
#define COLOR_parser_nodes__AAssignFormExpr___n_value 12
void parser_prod__AAttrAssignExpr__init_aattrassignexpr(val* self, val* p0, val* p1, val* p2, val* p3);
void parser_prod__AAttrAssignExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AAttrAssignExpr__n_id_61d(val* self, val* p0);
void parser_prod__AAttrAssignExpr__n_assign_61d(val* self, val* p0);
void parser_prod__AAttrAssignExpr__n_value_61d(val* self, val* p0);
void parser_prod__AAttrAssignExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAttrAssignExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AReassignFormExpr___n_assign_op 11
#define COLOR_parser_nodes__AReassignFormExpr___n_value 12
void parser_prod__AAttrReassignExpr__init_aattrreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3);
void parser_prod__AAttrReassignExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AAttrReassignExpr__n_id_61d(val* self, val* p0);
extern const struct type type_parser_nodes__AAssignOp;
void parser_prod__AAttrReassignExpr__n_assign_op_61d(val* self, val* p0);
void parser_prod__AAttrReassignExpr__n_value_61d(val* self, val* p0);
void parser_prod__AAttrReassignExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAttrReassignExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ACallFormExpr___n_id 15
#define COLOR_parser_nodes__ACallFormExpr___n_args 16
void parser_prod__ACallExpr__init_acallexpr(val* self, val* p0, val* p1, val* p2);
void parser_prod__ACallExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ACallExpr__n_id_61d(val* self, val* p0);
void parser_prod__ACallExpr__n_args_61d(val* self, val* p0);
void parser_prod__ACallExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ACallExpr__visit_all(val* self, val* p0);
void parser_prod__ACallAssignExpr__init_acallassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4);
void parser_prod__ACallAssignExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ACallAssignExpr__n_id_61d(val* self, val* p0);
void parser_prod__ACallAssignExpr__n_args_61d(val* self, val* p0);
void parser_prod__ACallAssignExpr__n_assign_61d(val* self, val* p0);
void parser_prod__ACallAssignExpr__n_value_61d(val* self, val* p0);
void parser_prod__ACallAssignExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ACallAssignExpr__visit_all(val* self, val* p0);
void parser_prod__ACallReassignExpr__init_acallreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4);
void parser_prod__ACallReassignExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ACallReassignExpr__n_id_61d(val* self, val* p0);
void parser_prod__ACallReassignExpr__n_args_61d(val* self, val* p0);
void parser_prod__ACallReassignExpr__n_assign_op_61d(val* self, val* p0);
void parser_prod__ACallReassignExpr__n_value_61d(val* self, val* p0);
void parser_prod__ACallReassignExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ACallReassignExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ASuperExpr___n_qualified 9
#define COLOR_parser_nodes__ASuperExpr___n_kwsuper 10
#define COLOR_parser_nodes__ASuperExpr___n_args 11
void parser_prod__ASuperExpr__init_asuperexpr(val* self, val* p0, val* p1, val* p2);
extern const struct type type_nullable_parser_nodes__AQualified;
void parser_prod__ASuperExpr__n_qualified_61d(val* self, val* p0);
void parser_prod__ASuperExpr__n_kwsuper_61d(val* self, val* p0);
void parser_prod__ASuperExpr__n_args_61d(val* self, val* p0);
void parser_prod__ASuperExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ASuperExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AInitExpr___n_kwinit 11
#define COLOR_parser_nodes__AInitExpr___n_args 12
void parser_prod__AInitExpr__init_ainitexpr(val* self, val* p0, val* p1, val* p2);
void parser_prod__AInitExpr__n_expr_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TKwinit;
void parser_prod__AInitExpr__n_kwinit_61d(val* self, val* p0);
void parser_prod__AInitExpr__n_args_61d(val* self, val* p0);
void parser_prod__AInitExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AInitExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ABraFormExpr___n_args 15
void parser_prod__ABraExpr__init_abraexpr(val* self, val* p0, val* p1);
void parser_prod__ABraExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ABraExpr__n_args_61d(val* self, val* p0);
void parser_prod__ABraExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ABraExpr__visit_all(val* self, val* p0);
void parser_prod__ABraAssignExpr__init_abraassignexpr(val* self, val* p0, val* p1, val* p2, val* p3);
void parser_prod__ABraAssignExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ABraAssignExpr__n_args_61d(val* self, val* p0);
void parser_prod__ABraAssignExpr__n_assign_61d(val* self, val* p0);
void parser_prod__ABraAssignExpr__n_value_61d(val* self, val* p0);
void parser_prod__ABraAssignExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ABraAssignExpr__visit_all(val* self, val* p0);
void parser_prod__ABraReassignExpr__init_abrareassignexpr(val* self, val* p0, val* p1, val* p2, val* p3);
void parser_prod__ABraReassignExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ABraReassignExpr__n_args_61d(val* self, val* p0);
void parser_prod__ABraReassignExpr__n_assign_op_61d(val* self, val* p0);
void parser_prod__ABraReassignExpr__n_value_61d(val* self, val* p0);
void parser_prod__ABraReassignExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ABraReassignExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AVarFormExpr___n_id 9
void parser_prod__AVarExpr__init_avarexpr(val* self, val* p0);
void parser_prod__AVarExpr__n_id_61d(val* self, val* p0);
void parser_prod__AVarExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AVarExpr__visit_all(val* self, val* p0);
void parser_prod__AVarAssignExpr__init_avarassignexpr(val* self, val* p0, val* p1, val* p2);
void parser_prod__AVarAssignExpr__n_id_61d(val* self, val* p0);
void parser_prod__AVarAssignExpr__n_assign_61d(val* self, val* p0);
void parser_prod__AVarAssignExpr__n_value_61d(val* self, val* p0);
void parser_prod__AVarAssignExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AVarAssignExpr__visit_all(val* self, val* p0);
void parser_prod__AVarReassignExpr__init_avarreassignexpr(val* self, val* p0, val* p1, val* p2);
void parser_prod__AVarReassignExpr__n_id_61d(val* self, val* p0);
void parser_prod__AVarReassignExpr__n_assign_op_61d(val* self, val* p0);
void parser_prod__AVarReassignExpr__n_value_61d(val* self, val* p0);
void parser_prod__AVarReassignExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AVarReassignExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ACrangeExpr___n_obra 12
#define COLOR_parser_nodes__ARangeExpr___n_expr 9
#define COLOR_parser_nodes__ARangeExpr___n_expr2 10
#define COLOR_parser_nodes__ACrangeExpr___n_cbra 13
void parser_prod__ACrangeExpr__init_acrangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4);
void parser_prod__ACrangeExpr__n_obra_61d(val* self, val* p0);
void parser_prod__ACrangeExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ACrangeExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__ACrangeExpr__n_cbra_61d(val* self, val* p0);
void parser_prod__ACrangeExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__ACrangeExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ACrangeExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AOrangeExpr___n_obra 12
#define COLOR_parser_nodes__AOrangeExpr___n_cbra 13
void parser_prod__AOrangeExpr__init_aorangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4);
void parser_prod__AOrangeExpr__n_obra_61d(val* self, val* p0);
void parser_prod__AOrangeExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AOrangeExpr__n_expr2_61d(val* self, val* p0);
void parser_prod__AOrangeExpr__n_cbra_61d(val* self, val* p0);
void parser_prod__AOrangeExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__AOrangeExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AOrangeExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AArrayExpr___n_obra 9
#define COLOR_parser_nodes__AArrayExpr___n_exprs 10
#define COLOR_parser_nodes__AArrayExpr___n_type 11
#define COLOR_parser_nodes__AArrayExpr___n_cbra 12
void parser_prod__AArrayExpr__init_aarrayexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4);
void parser_prod__AArrayExpr__n_obra_61d(val* self, val* p0);
void parser_prod__AArrayExpr__n_exprs_61d(val* self, val* p0);
void parser_prod__AArrayExpr__n_type_61d(val* self, val* p0);
void parser_prod__AArrayExpr__n_cbra_61d(val* self, val* p0);
void parser_prod__AArrayExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__AArrayExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AArrayExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ASelfExpr___n_kwself 9
void parser_prod__ASelfExpr__init_aselfexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwself;
void parser_prod__ASelfExpr__n_kwself_61d(val* self, val* p0);
void parser_prod__ASelfExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__ASelfExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ASelfExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ATrueExpr___n_kwtrue 9
void parser_prod__ATrueExpr__init_atrueexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwtrue;
void parser_prod__ATrueExpr__n_kwtrue_61d(val* self, val* p0);
void parser_prod__ATrueExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__ATrueExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ATrueExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AFalseExpr___n_kwfalse 9
void parser_prod__AFalseExpr__init_afalseexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwfalse;
void parser_prod__AFalseExpr__n_kwfalse_61d(val* self, val* p0);
void parser_prod__AFalseExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__AFalseExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AFalseExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ANullExpr___n_kwnull 9
void parser_prod__ANullExpr__init_anullexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwnull;
void parser_prod__ANullExpr__n_kwnull_61d(val* self, val* p0);
void parser_prod__ANullExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__ANullExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ANullExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ADecIntExpr___n_number 10
void parser_prod__ADecIntExpr__init_adecintexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TNumber;
void parser_prod__ADecIntExpr__n_number_61d(val* self, val* p0);
void parser_prod__ADecIntExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__ADecIntExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ADecIntExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AHexIntExpr___n_hex_number 10
void parser_prod__AHexIntExpr__init_ahexintexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__THexNumber;
void parser_prod__AHexIntExpr__n_hex_number_61d(val* self, val* p0);
void parser_prod__AHexIntExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__AHexIntExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AHexIntExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AFloatExpr___n_float 9
void parser_prod__AFloatExpr__init_afloatexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TFloat;
void parser_prod__AFloatExpr__n_float_61d(val* self, val* p0);
void parser_prod__AFloatExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__AFloatExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AFloatExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ACharExpr___n_char 9
void parser_prod__ACharExpr__init_acharexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TChar;
void parser_prod__ACharExpr__n_char_61d(val* self, val* p0);
void parser_prod__ACharExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__ACharExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ACharExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AStringFormExpr___n_string 9
void parser_prod__AStringExpr__init_astringexpr(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TString;
void parser_prod__AStringExpr__n_string_61d(val* self, val* p0);
void parser_prod__AStringExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__AStringExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AStringExpr__visit_all(val* self, val* p0);
void parser_prod__AStartStringExpr__init_astartstringexpr(val* self, val* p0);
extern const struct type type_parser_nodes__TStartString;
void parser_prod__AStartStringExpr__n_string_61d(val* self, val* p0);
void parser_prod__AStartStringExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AStartStringExpr__visit_all(val* self, val* p0);
void parser_prod__AMidStringExpr__init_amidstringexpr(val* self, val* p0);
extern const struct type type_parser_nodes__TMidString;
void parser_prod__AMidStringExpr__n_string_61d(val* self, val* p0);
void parser_prod__AMidStringExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AMidStringExpr__visit_all(val* self, val* p0);
void parser_prod__AEndStringExpr__init_aendstringexpr(val* self, val* p0);
extern const struct type type_parser_nodes__TEndString;
void parser_prod__AEndStringExpr__n_string_61d(val* self, val* p0);
void parser_prod__AEndStringExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AEndStringExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ASuperstringExpr___n_exprs 9
void parser_prod__ASuperstringExpr__init_asuperstringexpr(val* self, val* p0, val* p1);
void parser_prod__ASuperstringExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__ASuperstringExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ASuperstringExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AParExpr___n_opar 9
#define COLOR_parser_nodes__AParExpr___n_expr 10
#define COLOR_parser_nodes__AParExpr___n_cpar 11
void parser_prod__AParExpr__init_aparexpr(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_parser_nodes__TOpar;
void parser_prod__AParExpr__n_opar_61d(val* self, val* p0);
void parser_prod__AParExpr__n_expr_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TCpar;
void parser_prod__AParExpr__n_cpar_61d(val* self, val* p0);
void parser_prod__AParExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__AParExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AParExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAsCastExpr___n_expr 9
#define COLOR_parser_nodes__AAsCastExpr___n_kwas 10
#define COLOR_parser_nodes__AAsCastExpr___n_opar 11
#define COLOR_parser_nodes__AAsCastExpr___n_type 12
#define COLOR_parser_nodes__AAsCastExpr___n_cpar 13
void parser_prod__AAsCastExpr__init_aascastexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4);
void parser_prod__AAsCastExpr__n_expr_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TKwas;
void parser_prod__AAsCastExpr__n_kwas_61d(val* self, val* p0);
void parser_prod__AAsCastExpr__n_opar_61d(val* self, val* p0);
void parser_prod__AAsCastExpr__n_type_61d(val* self, val* p0);
void parser_prod__AAsCastExpr__n_cpar_61d(val* self, val* p0);
void parser_prod__AAsCastExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAsCastExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAsNotnullExpr___n_expr 9
#define COLOR_parser_nodes__AAsNotnullExpr___n_kwas 10
#define COLOR_parser_nodes__AAsNotnullExpr___n_opar 11
#define COLOR_parser_nodes__AAsNotnullExpr___n_kwnot 12
#define COLOR_parser_nodes__AAsNotnullExpr___n_kwnull 13
#define COLOR_parser_nodes__AAsNotnullExpr___n_cpar 14
void parser_prod__AAsNotnullExpr__init_aasnotnullexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5);
void parser_prod__AAsNotnullExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AAsNotnullExpr__n_kwas_61d(val* self, val* p0);
void parser_prod__AAsNotnullExpr__n_opar_61d(val* self, val* p0);
void parser_prod__AAsNotnullExpr__n_kwnot_61d(val* self, val* p0);
void parser_prod__AAsNotnullExpr__n_kwnull_61d(val* self, val* p0);
void parser_prod__AAsNotnullExpr__n_cpar_61d(val* self, val* p0);
void parser_prod__AAsNotnullExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAsNotnullExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AIssetAttrExpr___n_kwisset 17
void parser_prod__AIssetAttrExpr__init_aissetattrexpr(val* self, val* p0, val* p1, val* p2);
extern const struct type type_parser_nodes__TKwisset;
void parser_prod__AIssetAttrExpr__n_kwisset_61d(val* self, val* p0);
void parser_prod__AIssetAttrExpr__n_expr_61d(val* self, val* p0);
void parser_prod__AIssetAttrExpr__n_id_61d(val* self, val* p0);
void parser_prod__AIssetAttrExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AIssetAttrExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug 9
#define COLOR_parser_nodes__ADebugTypeExpr___n_kwtype 10
#define COLOR_parser_nodes__ADebugTypeExpr___n_expr 11
#define COLOR_parser_nodes__ADebugTypeExpr___n_type 12
void parser_prod__ADebugTypeExpr__init_adebugtypeexpr(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_parser_nodes__TKwdebug;
void parser_prod__ADebugTypeExpr__n_kwdebug_61d(val* self, val* p0);
void parser_prod__ADebugTypeExpr__n_kwtype_61d(val* self, val* p0);
void parser_prod__ADebugTypeExpr__n_expr_61d(val* self, val* p0);
void parser_prod__ADebugTypeExpr__n_type_61d(val* self, val* p0);
void parser_prod__ADebugTypeExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ADebugTypeExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AVarargExpr___n_expr 9
#define COLOR_parser_nodes__AVarargExpr___n_dotdotdot 10
void parser_prod__AVarargExpr__init_avarargexpr(val* self, val* p0, val* p1);
void parser_prod__AVarargExpr__n_expr_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TDotdotdot;
void parser_prod__AVarargExpr__n_dotdotdot_61d(val* self, val* p0);
void parser_prod__AVarargExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AVarargExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ATypeExpr___n_type 9
void parser_prod__ATypeExpr__init_atypeexpr(val* self, val* p0);
void parser_prod__ATypeExpr__n_type_61d(val* self, val* p0);
void parser_prod__ATypeExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__ATypeExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AMethidExpr___n_expr 9
#define COLOR_parser_nodes__AMethidExpr___n_id 10
void parser_prod__AMethidExpr__init_amethidexpr(val* self, val* p0, val* p1);
void parser_prod__AMethidExpr__n_expr_61d(val* self, val* p0);
extern const struct type type_parser_nodes__AMethid;
void parser_prod__AMethidExpr__n_id_61d(val* self, val* p0);
void parser_prod__AMethidExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AMethidExpr__visit_all(val* self, val* p0);
void parser_prod__AAtExpr__init_aatexpr(val* self, val* p0);
extern const struct type type_parser_nodes__AAnnotations;
void parser_prod__AAtExpr__n_annotations_61d(val* self, val* p0);
void parser_prod__AAtExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAtExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AManyExpr___n_exprs 9
void parser_prod__AManyExpr__init_amanyexpr(val* self, val* p0);
void parser_prod__AManyExpr__replace_child(val* self, val* p0, val* p1);
void parser_prod__AManyExpr__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AExprs___n_exprs 4
void parser_prod__AListExprs__init_alistexprs(val* self, val* p0);
void parser_prod__AListExprs__replace_child(val* self, val* p0, val* p1);
void parser_prod__AListExprs__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AParExprs___n_opar 5
#define COLOR_parser_nodes__AParExprs___n_cpar 6
void parser_prod__AParExprs__init_aparexprs(val* self, val* p0, val* p1, val* p2);
void parser_prod__AParExprs__n_opar_61d(val* self, val* p0);
void parser_prod__AParExprs__n_cpar_61d(val* self, val* p0);
void parser_prod__AParExprs__replace_child(val* self, val* p0, val* p1);
void parser_prod__AParExprs__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ABraExprs___n_obra 5
#define COLOR_parser_nodes__ABraExprs___n_cbra 6
void parser_prod__ABraExprs__init_abraexprs(val* self, val* p0, val* p1, val* p2);
void parser_prod__ABraExprs__n_obra_61d(val* self, val* p0);
void parser_prod__ABraExprs__n_cbra_61d(val* self, val* p0);
void parser_prod__ABraExprs__replace_child(val* self, val* p0, val* p1);
void parser_prod__ABraExprs__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__APlusAssignOp___n_pluseq 4
void parser_prod__APlusAssignOp__init_aplusassignop(val* self, val* p0);
extern const struct type type_parser_nodes__TPluseq;
void parser_prod__APlusAssignOp__n_pluseq_61d(val* self, val* p0);
void parser_prod__APlusAssignOp__replace_child(val* self, val* p0, val* p1);
void parser_prod__APlusAssignOp__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AMinusAssignOp___n_minuseq 4
void parser_prod__AMinusAssignOp__init_aminusassignop(val* self, val* p0);
extern const struct type type_parser_nodes__TMinuseq;
void parser_prod__AMinusAssignOp__n_minuseq_61d(val* self, val* p0);
void parser_prod__AMinusAssignOp__replace_child(val* self, val* p0, val* p1);
void parser_prod__AMinusAssignOp__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AModuleName___n_quad 4
#define COLOR_parser_nodes__AModuleName___n_path 5
#define COLOR_parser_nodes__AModuleName___n_id 6
void parser_prod__AModuleName__init_amodulename(val* self, val* p0, val* p1, val* p2);
extern const struct type type_nullable_parser_nodes__TQuad;
void parser_prod__AModuleName__n_quad_61d(val* self, val* p0);
void parser_prod__AModuleName__n_id_61d(val* self, val* p0);
void parser_prod__AModuleName__replace_child(val* self, val* p0, val* p1);
void parser_prod__AModuleName__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AExternCalls___n_kwimport 4
#define COLOR_parser_nodes__AExternCalls___n_extern_calls 5
void parser_prod__AExternCalls__init_aexterncalls(val* self, val* p0, val* p1);
void parser_prod__AExternCalls__n_kwimport_61d(val* self, val* p0);
void parser_prod__AExternCalls__replace_child(val* self, val* p0, val* p1);
void parser_prod__AExternCalls__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ASuperExternCall___n_kwsuper 4
void parser_prod__ASuperExternCall__init_asuperexterncall(val* self, val* p0);
void parser_prod__ASuperExternCall__n_kwsuper_61d(val* self, val* p0);
void parser_prod__ASuperExternCall__replace_child(val* self, val* p0, val* p1);
void parser_prod__ASuperExternCall__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ALocalPropExternCall___n_methid 4
void parser_prod__ALocalPropExternCall__init_alocalpropexterncall(val* self, val* p0);
void parser_prod__ALocalPropExternCall__n_methid_61d(val* self, val* p0);
void parser_prod__ALocalPropExternCall__replace_child(val* self, val* p0, val* p1);
void parser_prod__ALocalPropExternCall__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AFullPropExternCall___n_type 4
#define COLOR_parser_nodes__AFullPropExternCall___n_dot 5
#define COLOR_parser_nodes__AFullPropExternCall___n_methid 6
void parser_prod__AFullPropExternCall__init_afullpropexterncall(val* self, val* p0, val* p1, val* p2);
void parser_prod__AFullPropExternCall__n_type_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__TDot;
void parser_prod__AFullPropExternCall__n_dot_61d(val* self, val* p0);
void parser_prod__AFullPropExternCall__n_methid_61d(val* self, val* p0);
void parser_prod__AFullPropExternCall__replace_child(val* self, val* p0, val* p1);
void parser_prod__AFullPropExternCall__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AInitPropExternCall___n_type 4
void parser_prod__AInitPropExternCall__init_ainitpropexterncall(val* self, val* p0);
void parser_prod__AInitPropExternCall__n_type_61d(val* self, val* p0);
void parser_prod__AInitPropExternCall__replace_child(val* self, val* p0, val* p1);
void parser_prod__AInitPropExternCall__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ACastAsExternCall___n_from_type 4
#define COLOR_parser_nodes__ACastAsExternCall___n_dot 5
#define COLOR_parser_nodes__ACastAsExternCall___n_kwas 6
#define COLOR_parser_nodes__ACastAsExternCall___n_to_type 7
void parser_prod__ACastAsExternCall__init_acastasexterncall(val* self, val* p0, val* p1, val* p2, val* p3);
void parser_prod__ACastAsExternCall__n_from_type_61d(val* self, val* p0);
void parser_prod__ACastAsExternCall__n_dot_61d(val* self, val* p0);
void parser_prod__ACastAsExternCall__n_kwas_61d(val* self, val* p0);
void parser_prod__ACastAsExternCall__n_to_type_61d(val* self, val* p0);
void parser_prod__ACastAsExternCall__replace_child(val* self, val* p0, val* p1);
void parser_prod__ACastAsExternCall__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAsNullableExternCall___n_type 4
#define COLOR_parser_nodes__AAsNullableExternCall___n_kwas 5
#define COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable 6
void parser_prod__AAsNullableExternCall__init_aasnullableexterncall(val* self, val* p0, val* p1, val* p2);
void parser_prod__AAsNullableExternCall__n_type_61d(val* self, val* p0);
void parser_prod__AAsNullableExternCall__n_kwas_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TKwnullable;
void parser_prod__AAsNullableExternCall__n_kwnullable_61d(val* self, val* p0);
void parser_prod__AAsNullableExternCall__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAsNullableExternCall__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAsNotNullableExternCall___n_type 4
#define COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas 5
#define COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot 6
#define COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable 7
void parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall(val* self, val* p0, val* p1, val* p2, val* p3);
void parser_prod__AAsNotNullableExternCall__n_type_61d(val* self, val* p0);
void parser_prod__AAsNotNullableExternCall__n_kwas_61d(val* self, val* p0);
void parser_prod__AAsNotNullableExternCall__n_kwnot_61d(val* self, val* p0);
void parser_prod__AAsNotNullableExternCall__n_kwnullable_61d(val* self, val* p0);
void parser_prod__AAsNotNullableExternCall__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAsNotNullableExternCall__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AInLanguage___n_kwin 4
#define COLOR_parser_nodes__AInLanguage___n_string 5
void parser_prod__AInLanguage__init_ainlanguage(val* self, val* p0, val* p1);
extern const struct type type_parser_nodes__TKwin;
void parser_prod__AInLanguage__n_kwin_61d(val* self, val* p0);
void parser_prod__AInLanguage__n_string_61d(val* self, val* p0);
void parser_prod__AInLanguage__replace_child(val* self, val* p0, val* p1);
void parser_prod__AInLanguage__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AExternCodeBlock___n_in_language 4
#define COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment 5
void parser_prod__AExternCodeBlock__init_aexterncodeblock(val* self, val* p0, val* p1);
extern const struct type type_nullable_parser_nodes__AInLanguage;
void parser_prod__AExternCodeBlock__n_in_language_61d(val* self, val* p0);
extern const struct type type_parser_nodes__TExternCodeSegment;
void parser_prod__AExternCodeBlock__n_extern_code_segment_61d(val* self, val* p0);
void parser_prod__AExternCodeBlock__replace_child(val* self, val* p0, val* p1);
void parser_prod__AExternCodeBlock__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AQualified___n_id 5
#define COLOR_parser_nodes__AQualified___n_classid 6
void parser_prod__AQualified__init_aqualified(val* self, val* p0, val* p1);
void parser_prod__AQualified__n_classid_61d(val* self, val* p0);
void parser_prod__AQualified__replace_child(val* self, val* p0, val* p1);
void parser_prod__AQualified__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ADoc___n_comment 4
void parser_prod__ADoc__init_adoc(val* self, val* p0);
void parser_prod__ADoc__replace_child(val* self, val* p0, val* p1);
void parser_prod__ADoc__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAnnotations___n_at 4
#define COLOR_parser_nodes__AAnnotations___n_opar 5
#define COLOR_parser_nodes__AAnnotations___n_items 6
#define COLOR_parser_nodes__AAnnotations___n_cpar 7
void parser_prod__AAnnotations__init_aannotations(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_nullable_parser_nodes__TAt;
void parser_prod__AAnnotations__n_at_61d(val* self, val* p0);
void parser_prod__AAnnotations__n_opar_61d(val* self, val* p0);
void parser_prod__AAnnotations__n_cpar_61d(val* self, val* p0);
void parser_prod__AAnnotations__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAnnotations__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAnnotation___n_doc 4
#define COLOR_parser_nodes__AAnnotation___n_kwredef 5
#define COLOR_parser_nodes__AAnnotation___n_visibility 6
#define COLOR_parser_nodes__AAnnotation___n_atid 7
#define COLOR_parser_nodes__AAnnotation___n_opar 8
#define COLOR_parser_nodes__AAnnotation___n_args 9
#define COLOR_parser_nodes__AAnnotation___n_cpar 10
void parser_prod__AAnnotation__init_aannotation(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7);
void parser_prod__AAnnotation__n_doc_61d(val* self, val* p0);
void parser_prod__AAnnotation__n_kwredef_61d(val* self, val* p0);
extern const struct type type_nullable_parser_nodes__AVisibility;
void parser_prod__AAnnotation__n_visibility_61d(val* self, val* p0);
extern const struct type type_parser_nodes__AAtid;
void parser_prod__AAnnotation__n_atid_61d(val* self, val* p0);
void parser_prod__AAnnotation__n_opar_61d(val* self, val* p0);
void parser_prod__AAnnotation__n_cpar_61d(val* self, val* p0);
void parser_prod__AAnnotation__n_annotations_61d(val* self, val* p0);
void parser_prod__AAnnotation__replace_child(val* self, val* p0, val* p1);
void parser_prod__AAnnotation__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__AAtid___n_id 4
void parser_prod__AIdAtid__init_aidatid(val* self, val* p0);
void parser_prod__AIdAtid__n_id_61d(val* self, val* p0);
void parser_prod__AIdAtid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AIdAtid__visit_all(val* self, val* p0);
void parser_prod__AKwexternAtid__init_akwexternatid(val* self, val* p0);
void parser_prod__AKwexternAtid__n_id_61d(val* self, val* p0);
void parser_prod__AKwexternAtid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AKwexternAtid__visit_all(val* self, val* p0);
void parser_prod__AKwabstractAtid__init_akwabstractatid(val* self, val* p0);
void parser_prod__AKwabstractAtid__n_id_61d(val* self, val* p0);
void parser_prod__AKwabstractAtid__replace_child(val* self, val* p0, val* p1);
void parser_prod__AKwabstractAtid__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__Start___n_base 4
extern const struct type type_parser_nodes__AModule;
void parser_prod__Start__replace_child(val* self, val* p0, val* p1);
#define COLOR_parser_nodes__Start___n_eof 5
void parser_prod__Start__visit_all(val* self, val* p0);
