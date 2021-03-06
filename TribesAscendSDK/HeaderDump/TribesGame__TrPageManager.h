#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " TribesGame.TrPageManager." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty TribesGame.TrPageManager." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty TribesGame.TrPageManager." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class TrPageManager : public Object
	{
	public:
			ADD_OBJECT( GFxTrPage_Classes, ClassesPage )
			ADD_OBJECT( GFxTrPage_Store, StorePage )
			ADD_OBJECT( GFxTrPage_Main, MainPage )
			ADD_OBJECT( GFxTrPage_RegionSettings, RegionSettingsPage )
			class GFxTrPage* GetActivePage(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.GetActivePage" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( class GFxTrPage** )( params + function->return_val_offset() );
			}

			ADD_OBJECT( GFxTrPage_Party, PartyPage )
			ADD_OBJECT( GFxTrPage_ClassSelect, ClassSelectPage )
			ADD_OBJECT( GFxTrPage_Equip, EquipPage )
			ADD_OBJECT( GFxTrPage_Class, ClassPage )
			ADD_OBJECT( GFxTrPage_Loadouts, LoadoutsPage )
			ADD_OBJECT( GFxTrPage_Bundles, BundlesPage )
			ADD_OBJECT( GFxTrPage_ClanTagChange, ClanTagChangePage )
			ADD_OBJECT( GFxTrPage_ManageServers, ManageServersPage )
			ADD_OBJECT( GFxTrPage_ServerActions, ServerActionsPage )
			ADD_OBJECT( GFxTrPage_ServerAddTime, ServerAddTimePage )
			ADD_OBJECT( GFxTrPage_Game, GamePage )
			ADD_OBJECT( GFxTrPage_Login, LoginPage )
			ADD_OBJECT( GFxTrPage_Vehicle, VehiclePage )
			ADD_OBJECT( GFxTrPage_VideoTexture, VideoTexturePage )
			ADD_OBJECT( GFxTrPage_BuyGoldSteam, BuyGoldSteamPage )
			ADD_VAR( ::IntProperty, FocusIndex, 0xFFFFFFFF )
			class GFxTrPage* PopPage(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PopPage" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( class GFxTrPage** )( params + function->return_val_offset() );
			}

			ADD_VAR( ::BoolProperty, bPopBack, 0x1 )
			bool NavigateGold( bool bViaStore )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.NavigateGold" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( bool* )( params + 0 ) = bViaStore;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			ADD_OBJECT( GFxTrPage_Friends, FriendsPage )
			ADD_OBJECT( GFxTrPage_Followers, FollowersPage )
			ADD_OBJECT( GFxTrPage_BlockedPlayers, BlockedPlayersPage )
			ADD_OBJECT( GFxTrPage_BuyGoldPortal, BuyGoldPortalPage )
			ADD_OBJECT( GFxTrPage_GameTypeFilter, GameTypeFilterPage )
			ADD_OBJECT( GFxTrPage_FollowerActions, FollowerActionsPage )
			ADD_OBJECT( GFxTrPage_Social, SocialPage )
			ADD_OBJECT( GFxTrPage_FriendActions, FriendActionsPage )
			ADD_OBJECT( GFxTrPage_Settings, SettingsPage )
			ADD_OBJECT( GFxTrPage_GameType, GameTypePage )
			ADD_OBJECT( GFxTrPage_RotationType, RotationTypePage )
			ADD_OBJECT( GFxTrPage_MapRotation, MapRotationPage )
			ADD_OBJECT( GFxTrPage_ServerTime, ServerTimePage )
			ADD_OBJECT( GFxTrPage_ServerScoring, ServerScoringPage )
			ADD_OBJECT( GFxTrPage_ServerPlayer, ServerPlayerPage )
			ADD_OBJECT( GFxTrPage_ServerTeam, ServerTeamPage )
			ADD_OBJECT( GFxTrPage_ServerBase, ServerBasePage )
			ADD_OBJECT( GFxTrPage_ServerVehicle, ServerVehiclePage )
			ADD_OBJECT( GFxTrPage_ServerCallin, ServerCallinPage )
			ADD_OBJECT( GFxTrPage_ServerFF, ServerFFPage )
			ADD_OBJECT( GFxTrPage_KeybindMovement, KeybindMovementPage )
			ADD_OBJECT( GFxTrPage_KeybindGameplay, KeybindGameplayPage )
			ADD_OBJECT( GFxTrPage_KeybindWeapon, KeybindWeaponPage )
			ADD_OBJECT( GFxTrPage_KeybindVehicle, KeybindVehiclePage )
			ADD_OBJECT( GFxTrPage_KeybindCommunication, KeybindCommunicationPage )
			ADD_OBJECT( GFxTrPage_KeybindInterface, KeybindInterfacePage )
			ADD_OBJECT( GFxTrPage_KeybindHotkeys, KeybindHotkeysPage )
			ADD_OBJECT( GFxTrPage_KeybindSpectator, KeybindSpectatorPage )
			ADD_OBJECT( GFxTrPage_KeybindSpecMovement, KeybindSpecMovementPage )
			ADD_OBJECT( GFxTrPage_KeybindSpecTargeting, KeybindSpecTargetingPage )
			ADD_OBJECT( GFxTrPage_KeybindSpecInterface, KeybindSpecInterfacePage )
			ADD_OBJECT( GFxTrPage_PlayNow, PlayNowPage )
			ADD_OBJECT( GFxTrPage_TrainingMatch, TrainingMatchPage )
			ADD_OBJECT( GFxTrPage_WatchNow, WatchNowPage )
			ADD_VAR( ::IntProperty, NumGold, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, NumBundle, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, NumDeal, 0xFFFFFFFF )
			ADD_OBJECT( GFxTrPage_ServerSettings, ServerSettingsPage )
			ADD_OBJECT( GFxTrPage_GameMapSetup, GameMapSetupPage )
			ADD_OBJECT( GFxTrPage_GameRules, GameRulesPage )
			ADD_OBJECT( GFxTrPage_ManageServer, ManageServerPage )
			ADD_OBJECT( GFxTrPage_ChangeMap, ChangeMapPage )
			ADD_OBJECT( GFxTrPage_WhisperSettings, WhisperSettingsPage )
			ADD_OBJECT( GFxTrPage_PartyInvite, PartyInvitePage )
			ADD_OBJECT( GFxTrPage_PartyMember, PartyMemberPage )
			ADD_OBJECT( GFxTrPage_PartyAction, PartyActionPage )
			ADD_OBJECT( GFxTrPage_FriendJoin, FriendJoinPage )
			ADD_OBJECT( GFxTrPage_RankedMatch, RankedMatchPage )
			ADD_OBJECT( GFxTrPage_CustomMatch, CustomMatchPage )
			ADD_OBJECT( GFxTrPage_Badges, BadgesPage )
			ADD_OBJECT( GFxTrPage_Accolades, AccoladesPage )
			ADD_OBJECT( GFxTrPage_JoinMatch, JoinMatchPage )
			ADD_OBJECT( GFxTrPage_RoamTDM, RoamTDMPage )
			ADD_OBJECT( GFxTrPage_RoamCTF, RoamCTFPage )
			ADD_OBJECT( GFxTrPage_RoamArena, RoamArenaPage )
			ADD_OBJECT( GFxTrPage_RoamCAH, RoamCAHPage )
			ADD_OBJECT( GFxTrPage_ServerEditCallin, ServerEditCallinPage )
			ADD_OBJECT( GFxTrPage_ServerClasses, ServerClassesPage )
			ADD_OBJECT( GFxTrPage_ServerSpawn, ServerSpawnPage )
			ADD_OBJECT( GFxTrPage_ServerTeamJoin, ServerTeamJoinPage )
			ADD_OBJECT( GFxTrPage_VideoSettings, VideoSettingsPage )
			ADD_OBJECT( GFxTrPage_AudioSettings, AudioSettingsPage )
			ADD_OBJECT( GFxTrPage_ControlSettings, ControlSettingsPage )
			ADD_OBJECT( GFxTrPage_HUDSettings, HUDSettingsPage )
			ADD_OBJECT( GFxTrPage_KeybindSettings, KeybindSettingsPage )
			ADD_OBJECT( GFxTrPage_NotificationSettings, NotificationSettingsPage )
			ADD_OBJECT( GFxTrPage_Profile, ProfilePage )
			ADD_OBJECT( GFxTrPage_BuyBoost, BuyBoostPage )
			ADD_OBJECT( GFxTrPage_NameChange, NameChangePage )
			ADD_OBJECT( GFxTrPage_BuyGold, BuyGoldPage )
			ADD_OBJECT( GFxTrPage_TrainVideo, TrainVideoPage )
			ADD_OBJECT( GFxTrPage_RoamingMatch, RoamingMatchPage )
			ADD_OBJECT( GFxTrPage_VideoResolution, VideoResolutionPage )
			ADD_OBJECT( GFxTrPage_VideoGraphics, VideoGraphicsPage )
			ADD_OBJECT( GFxTrPage_VideoWindow, VideoWindowPage )
			ADD_OBJECT( GFxTrPage_VideoResolutionTypes, VideoResolutionTypesPage )
			ADD_OBJECT( GFxTrPage_LiveStream, LiveStreamPage )
			ADD_OBJECT( GFxTrPage_HiRezVideo, HiRezVideoPage )
			ADD_OBJECT( GFxTrPage_CmntyVideo, CmntyVideoPage )
			ADD_VAR( ::BoolProperty, bSelectRequired, 0x2 )
			ADD_OBJECT( GFxTrPage_ManageProfile, ManageProfilePage )
			ADD_OBJECT( GFxTrPage_ManageProfiles, ManageProfilesPage )
			ADD_OBJECT( GFxTrPage_RentServer, RentServerPage )
			ADD_OBJECT( GFxTrPage_QuickMatch, QuickMatchPage )
			ADD_OBJECT( GFxTrPage_RoamRabbit, RoamRabbitPage )
			ADD_OBJECT( GFxTrPage_Extras, ExtrasPage )
			ADD_OBJECT( GFxTrPage_Queued, QueuedPage )
			void Initialize(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.Initialize" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void PopupData( class GFxObject* Obj )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PopupData" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( class GFxObject** )( params + 0 ) = Obj;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void PopupComplete( int Action, ScriptArray< wchar_t > TextInput )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PopupComplete" );
				byte *params = ( byte* )( malloc( 16 ) );
				*( int* )( params + 0 ) = Action;
				*( ScriptArray< wchar_t >* )( params + 4 ) = TextInput;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			int TakeFocus( int Index, class GFxObject* DataList )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.TakeFocus" );
				byte *params = ( byte* )( malloc( 8 ) );
				*( int* )( params + 0 ) = Index;
				*( class GFxObject** )( params + 4 ) = DataList;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int TakeAction( int Index, class GFxObject* DataList )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.TakeAction" );
				byte *params = ( byte* )( malloc( 8 ) );
				*( int* )( params + 0 ) = Index;
				*( class GFxObject** )( params + 4 ) = DataList;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			void ActionUp(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.ActionUp" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void ActionDown(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.ActionDown" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			int ModifyAction( int ActionIndex, class GFxObject* DataList )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.ModifyAction" );
				byte *params = ( byte* )( malloc( 8 ) );
				*( int* )( params + 0 ) = ActionIndex;
				*( class GFxObject** )( params + 4 ) = DataList;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			void ModifyFocus( int ActionIndex )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.ModifyFocus" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = ActionIndex;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void HelpButton( int ActionIndex )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.HelpButton" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = ActionIndex;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void ProfileUp( int ActionIndex )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.ProfileUp" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = ActionIndex;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void ProfileDown( int ActionIndex )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.ProfileDown" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = ActionIndex;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void PushPage( class GFxTrPage* Page )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PushPage" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( class GFxTrPage** )( params + 0 ) = Page;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void PushOpen( class GFxTrPage* Page )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PushOpen" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( class GFxTrPage** )( params + 0 ) = Page;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void PopBack(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PopBack" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void ClearStack(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.ClearStack" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void PushOpenMain(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PushOpenMain" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void PushOpenParty(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PushOpenParty" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void PushOpenClassSelect(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PushOpenClassSelect" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void PushOpenLogin(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PushOpenLogin" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void TravelToMain(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.TravelToMain" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void TravelToClasses(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.TravelToClasses" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void TravelToFriends(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.TravelToFriends" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void TravelToSettings(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.TravelToSettings" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void TravelToBundles(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.TravelToBundles" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void TravelToStore(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.TravelToStore" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void ShowInGameModel(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.ShowInGameModel" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void PromoAction( int ActionIndex )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.PromoAction" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = ActionIndex;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void SelectedFeature( int ActionIndex )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.SelectedFeature" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = ActionIndex;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void ShowReticule( int Index )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.ShowReticule" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = Index;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void SaveReticule( class GFxObject* Data )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrPageManager.SaveReticule" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( class GFxObject** )( params + 0 ) = Data;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
