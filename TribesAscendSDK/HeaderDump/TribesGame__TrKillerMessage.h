#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " TribesGame.TrKillerMessage." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty TribesGame.TrKillerMessage." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty TribesGame.TrKillerMessage." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class TrKillerMessage : public UTLocalMessage
	{
	public:
			ScriptArray< wchar_t > GetString( int Switch, bool bPRI1HUD, class PlayerReplicationInfo* RelatedPRI, class PlayerReplicationInfo* RelatedPRI_, class Object* OptionalObject )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrKillerMessage.GetString" );
				byte *params = ( byte* )( malloc( 20 ) );
				*( int* )( params + 0 ) = Switch;
				*( bool* )( params + 4 ) = bPRI1HUD;
				*( class PlayerReplicationInfo** )( params + 8 ) = RelatedPRI;
				*( class PlayerReplicationInfo** )( params + 12 ) = RelatedPRI_;
				*( class Object** )( params + 16 ) = OptionalObject;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( ScriptArray< wchar_t >* )( params + function->return_val_offset() );
			}

			ADD_VAR( ::StrProperty, KillCreditFor, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, YouKilled, 0xFFFFFFFF )
			void ClientReceive( class PlayerController* P, int Switch, class PlayerReplicationInfo* RelatedPRI, class PlayerReplicationInfo* RelatedPRI_, class Object* OptionalObject )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrKillerMessage.ClientReceive" );
				byte *params = ( byte* )( malloc( 20 ) );
				*( class PlayerController** )( params + 0 ) = P;
				*( int* )( params + 4 ) = Switch;
				*( class PlayerReplicationInfo** )( params + 8 ) = RelatedPRI;
				*( class PlayerReplicationInfo** )( params + 12 ) = RelatedPRI_;
				*( class Object** )( params + 16 ) = OptionalObject;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
