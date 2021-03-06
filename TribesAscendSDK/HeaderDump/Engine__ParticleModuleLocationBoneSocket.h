#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " Engine.ParticleModuleLocationBoneSocket." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty Engine.ParticleModuleLocationBoneSocket." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty Engine.ParticleModuleLocationBoneSocket." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class ParticleModuleLocationBoneSocket : public ParticleModuleLocationBase
	{
	public:
			ADD_OBJECT( SkeletalMesh, EditorSkelMesh )
			ADD_VAR( ::NameProperty, SkelMeshActorParamName, 0xFFFFFFFF )
			ADD_VAR( ::BoolProperty, bOrientMeshEmitters, 0x2 )
			ADD_VAR( ::BoolProperty, bUpdatePositionEachFrame, 0x1 )
			ADD_STRUCT( ::VectorProperty, UniversalOffset, 0xFFFFFFFF )
			ADD_VAR( ::ByteProperty, SelectionMethod, 0xFFFFFFFF )
			ADD_VAR( ::ByteProperty, SourceType, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
