#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " TribesGame.TrVGSCommandList." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty TribesGame.TrVGSCommandList." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty TribesGame.TrVGSCommandList." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class TrVGSCommandList : public Object
	{
	public:
			ADD_VAR( ::StrProperty, MenuString_TeamWait, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TeamThanks, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TeamSorry, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TeamMove, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TeamHelp, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TeamDontKnow, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TeamCeaseFire, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TeamBaseSecure, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TeamAnytime, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TeamNo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TeamYes, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_WarnVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_WarnEnemies, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_UpgradeTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_UpgradeSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_UpgradeGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TargetWait, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TargetVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TargetTurret, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TargetSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TargetNeed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TargetFireOnMy, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TargetFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TargetDestroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TargetBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_TargetAcquired, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfUpgradeTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfUpgradeSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfUpgradeGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfTaskVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfTaskDeployTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfTaskDeploySensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfTaskOnIt, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfTaskForcefield, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfTaskDefenses, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfTaskCover, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfRepairVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfRepairTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfRepairSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfRepairGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfRepairBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendPointE, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendPointD, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendPointC, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendPointB, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendPointA, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefend, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfDefendBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackPointE, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackPointD, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackPointC, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackPointB, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackPointA, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttackBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_SelfAttack, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_NeedWhereTo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_NeedVehicleReady, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_NeedSupport, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_NeedRide, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_NeedHoldVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_NeedEscort, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_NeedDriver, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_NeedCover, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_FlagTake, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_FlagSecure, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_FlagSelfRetrieve, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_FlagRetrieve, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_FlagGiveMe, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_FlagIHave, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_FlagDefend, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_EnemyVehicleDestroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_EnemyTurretsDestroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_EnemySensorsDestroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_EnemyGeneratorDestroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_EnemyDisarray, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_CommandAssignment, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_CommandDeclined, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_CommandCompleted, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_CommandAcknowledged, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_BaseSecure, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_BaseRetake, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_EnemyInBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_BaseClear, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_RepairVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_RepairTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_RepairSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_RepairGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendPointE, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendPointD, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendPointC, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendPointB, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendPointA, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendReinforce, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendMe, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendEntrances, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendFlagCarrier, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_DefendBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackPointE, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackPointD, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackPointC, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackPointB, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackPointA, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackWait, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackReinforce, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackDisrupt, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackChase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_AttackBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_Attack, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalTauntLearn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalTauntSarcasm, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalTauntBrag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalTauntObnoxious, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalTauntAww, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalRespondWait, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalRespondThanks, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalRespondDontKnow, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalRespondAnyTime, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalComplimentGreatShot, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalComplimentYouRock, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalComplimentNiceMove, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalComplimentGoodGame, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalComplimentAwesome, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalWoohoo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalShazbot, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalQuiet, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalOoops, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalBye, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalHi, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalNo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MenuString_GlobalYes, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamWait, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamThanks, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamSorry, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamMove, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamHelp, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamDontKnow, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamCeaseFire, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamBaseSecure, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamAnytime, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamNo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TeamYes, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_ActorDeployable, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_ActorVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_ActorSensor, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_ActorTurret, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_ActorHeavyPawn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_ActorMediumPawn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_ActorLightPawn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyNearby, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyNearEnemyVehiclePad, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyNearOurVehiclePad, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyNearEnemyBaseTurret, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyNearOurBaseTurret, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyNearEnemyFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyNearOurFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyNearEnemyGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyNearOurGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyInMidfield, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyBehindEnemyBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyBehindOurBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyAroundEnemyBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyAroundOurBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyInsideEnemyBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnContext_EnemyInsideOurBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_WarnEnemies, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_UpgradeTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_UpgradeSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_UpgradeGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TargetWait, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TargetVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TargetTurret, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TargetSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TargetNeed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TargetFireOnMy, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TargetFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TargetDestroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TargetBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_TargetAcquired, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfUpgradeTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfUpgradeSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfUpgradeGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfTaskVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfTaskDeployTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfTaskDeploySensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfTaskOnIt, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfTaskForcefield, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfTaskDefenses, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfTaskCover, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfRepairVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfRepairTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfRepairSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfRepairGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfRepairBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendPointE, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendPointD, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendPointC, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendPointB, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendPointA, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefend, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfDefendBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackPointE, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackPointD, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackPointC, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackPointB, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackPointA, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttackBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_SelfAttack, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_NeedWhereTo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_NeedVehicleReady, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_NeedSupport, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_NeedRide, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_NeedHoldVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_NeedEscort, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_NeedDriver, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_NeedCover, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_FlagTake, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_FlagSecure, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_FlagSelfRetrieve, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_FlagRetrieve, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_FlagGiveMe, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_FlagIHave, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_FlagDefend, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_EnemyVehicleDestroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_EnemyTurretsDestroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_EnemySensorsDestroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_EnemyGeneratorDestroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_EnemyDisarray, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_CommandAssignment, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_CommandDeclined, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_CommandCompleted, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_CommandAcknowledged, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_BaseSecure, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_BaseRetake, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_EnemyInBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_BaseClear, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_RepairVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_RepairTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_RepairSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_RepairGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendPointE, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendPointD, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendPointC, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendPointB, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendPointA, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendReinforce, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendMe, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendEntrances, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendFlagCarrier, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_DefendBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackPointE, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackPointD, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackPointC, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackPointB, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackPointA, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackWait, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackVehicle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackTurrets, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackSensors, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackReinforce, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackGenerator, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackDisrupt, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackChase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_AttackBase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_Attack, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalTauntLearn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalTauntSarcasm, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalTauntBrag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalTauntObnoxious, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalTauntAww, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalRespondWait, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalRespondThanks, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalRespondDontKnow, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalRespondAnyTime, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalComplimentGreatShot, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalComplimentYouRock, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalComplimentNiceMove, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalComplimentGoodGame, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalComplimentAwesome, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalWoohoo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalShazbot, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalQuiet, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalOoops, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalBye, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalHi, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalNo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChatString_GlobalYes, 0xFFFFFFFF )
			void Init(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrVGSCommandList.Init" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			ScriptArray< wchar_t > GetContextLocationString( byte Loc, bool bEnemyLocation )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrVGSCommandList.GetContextLocationString" );
				byte *params = ( byte* )( malloc( 5 ) );
				*( byte* )( params + 0 ) = Loc;
				*( bool* )( params + 4 ) = bEnemyLocation;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( ScriptArray< wchar_t >* )( params + function->return_val_offset() );
			}

	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
