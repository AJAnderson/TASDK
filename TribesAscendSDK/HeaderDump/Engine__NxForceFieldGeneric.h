#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " Engine.NxForceFieldGeneric." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty Engine.NxForceFieldGeneric." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty Engine.NxForceFieldGeneric." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class NxForceFieldGeneric : public NxForceField
	{
	public:
			ADD_VAR( ::FloatProperty, TorusRadius, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, FalloffQuadratic, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, FalloffLinear, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, Noise, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, VelocityTarget, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, VelocityMultiplierZ, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, VelocityMultiplierY, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, VelocityMultiplierX, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, PositionTarget, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, PositionMultiplierZ, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, PositionMultiplierY, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, PositionMultiplierX, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, Constant, 0xFFFFFFFF )
			ADD_VAR( ::ByteProperty, Coordinates, 0xFFFFFFFF )
			ADD_OBJECT( ForceFieldShape, Shape )
			ADD_VAR( ::FloatProperty, RoughExtentZ, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, RoughExtentY, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, RoughExtentX, 0xFFFFFFFF )
			void DoInitRBPhys(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function Engine.NxForceFieldGeneric.DoInitRBPhys" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
