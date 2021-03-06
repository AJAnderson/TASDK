#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " TribesGame.TrEquipInterface." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty TribesGame.TrEquipInterface." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty TribesGame.TrEquipInterface." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class TrEquipInterface : public Object
	{
	public:
			bool IsClassOwned( int ClassId )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.IsClassOwned" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = ClassId;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool IsLoadoutOwned( int ClassId, int Loadout )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.IsLoadoutOwned" );
				byte *params = ( byte* )( malloc( 8 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Loadout;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			ScriptArray< wchar_t > GetLoadoutName( int ClassId, int Loadout )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetLoadoutName" );
				byte *params = ( byte* )( malloc( 8 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Loadout;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( ScriptArray< wchar_t >* )( params + function->return_val_offset() );
			}

			float GetClassUnlockPercent( int ClassId )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetClassUnlockPercent" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = ClassId;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( float* )( params + function->return_val_offset() );
			}

			int GetClassPrice( int ClassId, int Currency )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetClassPrice" );
				byte *params = ( byte* )( malloc( 8 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Currency;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetDailyDealItemId(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetDailyDealItemId" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetDailyDealPercentOff(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetDailyDealPercentOff" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetBundleParent( int BundleId )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetBundleParent" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = BundleId;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			bool IsBundleOwned( int BundleId )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.IsBundleOwned" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = BundleId;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			int GetVendorSize( int VendorId )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetVendorSize" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = VendorId;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetVendorItemId( int VendorId, int Index )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetVendorItemId" );
				byte *params = ( byte* )( malloc( 8 ) );
				*( int* )( params + 0 ) = VendorId;
				*( int* )( params + 4 ) = Index;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			bool GetVendorItemPrice( int VendorId, int VendorItemId, int Currency, int &Price )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetVendorItemPrice" );
				byte *params = ( byte* )( malloc( 16 ) );
				*( int* )( params + 0 ) = VendorId;
				*( int* )( params + 4 ) = VendorItemId;
				*( int* )( params + 8 ) = Currency;
				*( int* )( params + 12 ) = Price;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				Price = *( int* )( params + 12 );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool GetVendorItemInfo( int VendorId, int VendorItemId, ScriptArray< wchar_t > &ItemName, ScriptArray< wchar_t > &itemDescr, ScriptArray< wchar_t > &ribbonDesc )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetVendorItemInfo" );
				byte *params = ( byte* )( malloc( 44 ) );
				*( int* )( params + 0 ) = VendorId;
				*( int* )( params + 4 ) = VendorItemId;
				*( ScriptArray< wchar_t >* )( params + 8 ) = ItemName;
				*( ScriptArray< wchar_t >* )( params + 20 ) = itemDescr;
				*( ScriptArray< wchar_t >* )( params + 32 ) = ribbonDesc;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				ItemName = *( ScriptArray< wchar_t >* )( params + 8 );
				itemDescr = *( ScriptArray< wchar_t >* )( params + 20 );
				ribbonDesc = *( ScriptArray< wchar_t >* )( params + 32 );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool RequestPurchaseGeneral( int VendorId, int VendorItemId, int Currency, ScriptArray< wchar_t > UserCustomInput )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.RequestPurchaseGeneral" );
				byte *params = ( byte* )( malloc( 24 ) );
				*( int* )( params + 0 ) = VendorId;
				*( int* )( params + 4 ) = VendorItemId;
				*( int* )( params + 8 ) = Currency;
				*( ScriptArray< wchar_t >* )( params + 12 ) = UserCustomInput;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			int GetActiveEquipId( int ClassId, int Type, int Loadout )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetActiveEquipId" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = Loadout;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetEquipCount( int ClassId, int Type )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetEquipCount" );
				byte *params = ( byte* )( malloc( 8 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetEquipId( int ClassId, int Type, int Index )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetEquipId" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = Index;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			bool SetLoadoutName( int ClassId, int Loadout, ScriptArray< wchar_t > loadoutName )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.SetLoadoutName" );
				byte *params = ( byte* )( malloc( 20 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Loadout;
				*( ScriptArray< wchar_t >* )( params + 8 ) = loadoutName;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			int GetFirstClassId(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetFirstClassId" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetNextClassId( int PrevClass )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetNextClassId" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = PrevClass;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetClassId( int Index )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetClassId" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = Index;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			bool RequestPurchaseClass( int ClassId, int Currency )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.RequestPurchaseClass" );
				byte *params = ( byte* )( malloc( 8 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Currency;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			int GetReticuleValue( int EquipId, byte Type )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetReticuleValue" );
				byte *params = ( byte* )( malloc( 5 ) );
				*( int* )( params + 0 ) = EquipId;
				*( byte* )( params + 4 ) = Type;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			ScriptArray< wchar_t > GetReticuleString( int EquipId, byte Type )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetReticuleString" );
				byte *params = ( byte* )( malloc( 5 ) );
				*( int* )( params + 0 ) = EquipId;
				*( byte* )( params + 4 ) = Type;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( ScriptArray< wchar_t >* )( params + function->return_val_offset() );
			}

			bool SetActiveEquipId( int ClassId, int Type, int Loadout, int equip )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.SetActiveEquipId" );
				byte *params = ( byte* )( malloc( 16 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = Loadout;
				*( int* )( params + 12 ) = equip;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool IsEquipOwned( int ClassId, int Type, int equip )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.IsEquipOwned" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool IsEquipMaxed( int ClassId, int Type, int equip )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.IsEquipMaxed" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			int GetEquipLevel( int ClassId, int Type, int equip )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetEquipLevel" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			bool HasReticule( int EquipId )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.HasReticule" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = EquipId;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			int GetMasteryPrice( int ClassId, int Type, int equip )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetMasteryPrice" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetEquipPrice( int ClassId, int Type, int equip, int Currency )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetEquipPrice" );
				byte *params = ( byte* )( malloc( 16 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				*( int* )( params + 12 ) = Currency;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			bool RequestPurchaseMastery( int ClassId, int Type, int equip )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.RequestPurchaseMastery" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool RequestPurchaseEquip( int ClassId, int Type, int equip, int Currency )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.RequestPurchaseEquip" );
				byte *params = ( byte* )( malloc( 16 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				*( int* )( params + 12 ) = Currency;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool SetReticuleValue( int EquipId, byte Type, int nValue )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.SetReticuleValue" );
				byte *params = ( byte* )( malloc( 9 ) );
				*( int* )( params + 0 ) = EquipId;
				*( byte* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = nValue;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool SetReticuleString( int EquipId, byte Type, ScriptArray< wchar_t > sValue )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.SetReticuleString" );
				byte *params = ( byte* )( malloc( 17 ) );
				*( int* )( params + 0 ) = EquipId;
				*( byte* )( params + 4 ) = Type;
				*( ScriptArray< wchar_t >* )( params + 8 ) = sValue;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			int GetLoadoutPrice( int ClassId, int Loadout, int Currency )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetLoadoutPrice" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Loadout;
				*( int* )( params + 8 ) = Currency;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			bool RequestPurchaseLoadout( int ClassId, int Loadout, int Currency )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.RequestPurchaseLoadout" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Loadout;
				*( int* )( params + 8 ) = Currency;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool IsDailyDealOwned(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.IsDailyDealOwned" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			int GetDailyDealOldPrice(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetDailyDealOldPrice" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetDailyDealNewPrice(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetDailyDealNewPrice" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetDailyDealClass(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetDailyDealClass" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetDailyDealType(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetDailyDealType" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetDailyDealSecsLeft(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetDailyDealSecsLeft" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetDailyDealXPPrice(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetDailyDealXPPrice" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			bool RequestPurchaseDeal( int Currency )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.RequestPurchaseDeal" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = Currency;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool OwnsReticule( int EquipId )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.OwnsReticule" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = EquipId;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			void DelegateOnMarshalEvent( void* pMarEvent )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.DelegateOnMarshalEvent" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( void** )( params + 0 ) = pMarEvent;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			ADD_VAR( ::BoolProperty, m_bLoadComplete, 0x1 )
			void LoadInventory(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.LoadInventory" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void InitClass( int ClassId )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.InitClass" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = ClassId;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void SetDefaultEquip( int ClassId, int Type, int equip )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.SetDefaultEquip" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void OnMarshalEvent( void* pMarEvent )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.OnMarshalEvent" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( void** )( params + 0 ) = pMarEvent;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			bool RegisterMarshalCallback(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.RegisterMarshalCallback" );
				byte *params = ( byte* )( malloc( 12 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			int GetClassCount(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetClassCount" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetClassRibbon( int ClassId )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetClassRibbon" );
				byte *params = ( byte* )( malloc( 4 ) );
				*( int* )( params + 0 ) = ClassId;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetNextEquipId( int ClassId, int Type, int PrevClass )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetNextEquipId" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = PrevClass;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetEquipRibbon( int ClassId, int Type, int equip )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetEquipRibbon" );
				byte *params = ( byte* )( malloc( 12 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetFirstEquipId( int ClassId, int Type )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetFirstEquipId" );
				byte *params = ( byte* )( malloc( 8 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			int GetDailyDealLootId(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetDailyDealLootId" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			void RetrieveActives(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.RetrieveActives" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			int GetUpgradePrice( int ClassId, int Type, int equip, int Upgrade, int Currency )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.GetUpgradePrice" );
				byte *params = ( byte* )( malloc( 20 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				*( int* )( params + 12 ) = Upgrade;
				*( int* )( params + 16 ) = Currency;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( int* )( params + function->return_val_offset() );
			}

			bool RequestPurchaseReticule( int ClassId, int Type, int equip, int Currency )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.RequestPurchaseReticule" );
				byte *params = ( byte* )( malloc( 16 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				*( int* )( params + 12 ) = Currency;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			bool RequestPurchaseUpgrade( int ClassId, int Type, int equip, int Upgrade, int Currency )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.RequestPurchaseUpgrade" );
				byte *params = ( byte* )( malloc( 20 ) );
				*( int* )( params + 0 ) = ClassId;
				*( int* )( params + 4 ) = Type;
				*( int* )( params + 8 ) = equip;
				*( int* )( params + 12 ) = Upgrade;
				*( int* )( params + 16 ) = Currency;
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
				return *( bool* )( params + function->return_val_offset() );
			}

			void SaveProfile(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.SaveProfile" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void InitEquipManager(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.InitEquipManager" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

			void InitClassList(  )
			{
				static ScriptFunction *function = ScriptObject::Find< ScriptFunction >( "Function TribesGame.TrEquipInterface.InitClassList" );
				byte *params = ( byte* )( malloc( 0 ) );
				ScriptObject *object = ( ScriptObject* )( this );
				object->ProcessEvent( function, params, NULL );
			}

	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
