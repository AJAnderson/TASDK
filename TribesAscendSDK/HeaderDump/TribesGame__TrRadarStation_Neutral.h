#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " TribesGame.TrRadarStation_Neutral." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty TribesGame.TrRadarStation_Neutral." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty TribesGame.TrRadarStation_Neutral." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class TrRadarStation_Neutral : public TrDeployable_RadarSensor
	{
	public:
			bool ShouldShowHelpText( byte HelpTextType )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrRadarStation_Neutral.ShouldShowHelpText" );
				byte *params = ( byte* )( malloc( 1 ) );
				*( byte* )( params + 0 ) = HelpTextType;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			class Texture2D* GetMarker(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrRadarStation_Neutral.GetMarker" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( class Texture2D** )( params + function->return_val_offset() );
			}

	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
