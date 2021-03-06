#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " Engine.UICharacterSummary." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty Engine.UICharacterSummary." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty Engine.UICharacterSummary." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class UICharacterSummary : public UIResourceDataProvider
	{
	public:
			ADD_VAR( ::BoolProperty, bIsDisabled, 0x1 )
			ADD_VAR( ::StrProperty, CharacterBio, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CharacterName, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ClassPathName, 0xFFFFFFFF )
			bool IsProviderDisabled(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function Engine.UICharacterSummary.IsProviderDisabled" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
