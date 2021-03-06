#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " Engine.PointLightToggleable." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty Engine.PointLightToggleable." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty Engine.PointLightToggleable." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class PointLightToggleable : public PointLight
	{
	public:
			bool ShouldSaveForCheckpoint(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function Engine.PointLightToggleable.ShouldSaveForCheckpoint" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			void CreateCheckpointRecord( void* &Record )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function Engine.PointLightToggleable.CreateCheckpointRecord" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( void** )( params + 0 ) = Record;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				Record = *( void** )( params + 0 );
			}

			void ApplyCheckpointRecord( void* &Record )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function Engine.PointLightToggleable.ApplyCheckpointRecord" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( void** )( params + 0 ) = Record;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				Record = *( void** )( params + 0 );
			}

	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
