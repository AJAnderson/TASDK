#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " Engine.SeqAct_ToggleCinematicMode." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty Engine.SeqAct_ToggleCinematicMode." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty Engine.SeqAct_ToggleCinematicMode." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class SeqAct_ToggleCinematicMode : public SequenceAction
	{
	public:
			ADD_VAR( ::BoolProperty, bHidePlayer, 0x4 )
			ADD_VAR( ::BoolProperty, bHideHUD, 0x10 )
			ADD_VAR( ::BoolProperty, bDisableMovement, 0x1 )
			ADD_VAR( ::BoolProperty, bDisableTurning, 0x2 )
			ADD_VAR( ::BoolProperty, bDisableInput, 0x8 )
			ADD_VAR( ::BoolProperty, bDroppedPickups, 0x40 )
			ADD_VAR( ::BoolProperty, bDeadBodies, 0x20 )
			void Activated(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function Engine.SeqAct_ToggleCinematicMode.Activated" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
