
; Class Structures

%class_Object = type {%class_Object_vft*}

%class_Int = type {%class_Int_vft*}

%class_A = type {%class_A_vft*}

%class_B = type {%class_B_vft*}

%class_Sys = type {%class_Sys_vft*}

; Functions
define void @Object_init(%class_Sys* %this) nounwind {
	; Method body TODO
	ret void
}
define void @Int_output(%class_Int* %this) nounwind {
	; Method body TODO
	ret void
}
define void @A_foo(%class_B* %this,%class_Int %i) nounwind {
	; Method body TODO
	ret void
}
define void @A_bar(%class_B* %this,%class_Int %i) nounwind {
	; Method body TODO
	ret void
}
define void @B_this_is_a_dead_method(%class_B* %this) nounwind {
	; Method body TODO
	ret void
}
define void @B_bar(%class_B* %this,%class_Int %i) nounwind {
	; Method body TODO
	ret void
}
define void @B_init(%class_B* %this) nounwind {
	; Method body TODO
	ret void
}
define void @Sys_main(%class_Sys* %this) nounwind {
	; Method body TODO
	ret void
}

; Classes VFTs
%class_Object_vft = type {
	void(%class_Object*)*
}

%class_Int_vft = type {
	void(%class_Int*)*,
	void(%class_Object*)*
}

%class_A_vft = type {
	void(%class_A*,%class_Int)*,
	void(%class_A*,%class_Int)*,
	void(%class_Object*)*
}

%class_B_vft = type {
	void(%class_B*)*,
	void(%class_B*,%class_Int)*,
	void(%class_A*,%class_Int)*,
	void(%class_B*)*,
	void(%class_Object*)*,
	void(%class_A*,%class_Int)*
}

%class_Sys_vft = type {
	void(%class_Sys*)*,
	void(%class_Object*)*
}

define i32 @main(i32 %argc, i8** %argv) nounwind {
	; TODO
	ret i32 7 ; for debugging purposes
}
