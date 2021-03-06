#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " GameFramework.GameAICmd_Hover_MoveToGoal_Mesh." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty GameFramework.GameAICmd_Hover_MoveToGoal_Mesh." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty GameFramework.GameAICmd_Hover_MoveToGoal_Mesh." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class GameAICmd_Hover_MoveToGoal_Mesh : public GameAICommand
	{
	public:
			ADD_VAR( ::IntProperty, MaxMoveFails, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, MoveFailCounter, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, InitialFinalDestination, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, LastMoveVectDest, 0xFFFFFFFF )
			ADD_STRUCT( ::VectorProperty, MoveVectDest, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, GoalDistance, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, SubGoalReachDist, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, CurrentHoverHeight, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, DesiredHoverHeight, 0xFFFFFFFF )
			ADD_VAR( ::BoolProperty, bWasFiring, 0x1 )
			ADD_VAR( ::FloatProperty, Radius, 0xFFFFFFFF )
			ADD_OBJECT( Actor, Goal )
			ADD_OBJECT( Actor, Find )
			ADD_STRUCT( ::VectorProperty, Transient_FinalDest, 0xFFFFFFFF )
			bool HoverToGoal( class GameAIController* AI, class Actor* InGoal, float InGoalDistance, float InHoverHeight )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal" );
				byte *params = ( byte* )( malloc( 16 ) );
				*( class GameAIController** )( params + 0 ) = AI;
				*( class Actor** )( params + 4 ) = InGoal;
				*( float* )( params + 8 ) = InGoalDistance;
				*( float* )( params + 12 ) = InHoverHeight;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool HoverToPoint( class GameAIController* AI, Vector InPoint, float InGoalDistance, float InHoverHeight )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint" );
				byte *params = ( byte* )( malloc( 24 ) );
				*( class GameAIController** )( params + 0 ) = AI;
				*( Vector* )( params + 4 ) = InPoint;
				*( float* )( params + 16 ) = InGoalDistance;
				*( float* )( params + 20 ) = InHoverHeight;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			void Pushed(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void Popped(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			bool HandlePathObstruction( class Actor* BlockedBy )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( class Actor** )( params + 0 ) = BlockedBy;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool IsEnemyBasedOnInterpActor( class Pawn* InEnemy )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( class Pawn** )( params + 0 ) = InEnemy;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			void DrawDebug( class HUD* H, ScriptName Category )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( class HUD** )( params + 0 ) = H;
				*( ScriptName* )( params + 4 ) = Category;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
