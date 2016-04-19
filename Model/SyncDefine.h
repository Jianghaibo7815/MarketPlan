
#define kClass  @"Class"
#define kSyncKey  @"SyncKey"

#define kSynchronize_LastSyncStatus         @"lastSyncStatus"   // -1:服务器还有数据要同步下来。0:同步完成
#define kSynchronize_LastSyncMarker         @"lastSyncMarker"   // 同步业务时间戳
#define kSynchronize_Content                @"content"          // 同步业务内容
#define kSynchronize_Datas                  @"datas"            // 同步业务数据

#define kSynchronize_Users_Info             @"userInfo"
#define kSynchronize_Roles_Info             @"role"
#define kSynchronize_Tables_Info            @"tables"
#define kSynchronize_TableTypes_Info        @"tableType"
#define kSynchronize_Trade_Info             @"trade"
#define kSynchronize_TradeTable_Info        @"tradeTable"
#define kSynchronize_TradeCustomer_Info     @"tradeCustomer"
#define kSynchronize_TradePrivilege_Info   @"tradePrivilege"
#define kSynchronize_TradeItem_Info        @"tradeItem"
#define kSynchronize_TradeExtra_Info       @"tradeExtra"
#define kSynchronize_TradeItemProperty_Info @"tradeItemProperty"
#define kSynchronize_Payment_Info          @"payment"
#define kSynchronize_PaymentItem_Info      @"paymentItem"
#define kSynchronize_PaymentItemExtra_Info @"paymentItemExtra"
#define kSynchronize_TradeStatusLog_Info   @"tradeStatusLog"
#define kSynchronize_TradeItemLog_Info     @"tradeItemLog"
#define kSynchronize_ServerTime_Info       @"serverTime"
#define kSynchronize_OpenTime_Info         @"openTime"
#define kSynchronize_CashHandover_Info     @"cashHandover"
#define kSynchronize_CashHandoverItem_Info @"cashHandoverItem"
//新菜品表同步结构
#define kSynchronize_DishBrand_Info        @"dishBrand"
#define kSynchronize_DishBrandMedia_Info   @"dishBrandMedia"
#define kSynchronize_DishBrandProperty_Info   @"dishBrandProperty"
#define kSynchronize_DishShop_Info            @"dishShop"
#define kSynchronize_DishBrandType_Info       @"dishBrandType"
#define kSynchronize_DishUnitDictionary_Info  @"dishUnitDictionary"
#define kSynchronize_DishProperty_Info        @"dishProperty"
#define kSynchronize_DishPropertyType_Info    @"dishPropertyType"
#define kSynchronize_DishSetmeal_Info         @"dishSetmeal"
#define kSynchronize_DishSetmealGroup_Info         @"dishSetmealGroup"
#define kSynchronize_Customer_Info         @"customer"
#define kSynchronize_CustomerGroup_Info         @"customerGroup"

#define kSynchronize_PrinterDocument_Info         @"printerDocument"
#define kSynchronize_PrinterDevice_Info         @"printerDevice"
#define kSynchronize_PrinterDishDocument_Info         @"printerDishDocument"

#define kSynchronize_PaymentModeShop_Info         @"paymentModeShop"
#define kSynchronize_TakeawayAddress_Info         @"takeawayAddress"
#define kSynchronize_SendArea_Info                @"sendArea"
#define kSynchronize_TradeDealSetting_Info        @"tradeDealSetting"
#define kSynchronize_TradeDealSettingItem_Info    @"tradeDealSettingItem"

#define kSynchronize_TakeAwayMemos_Info     @"takeawayMemo"
#define kSynchronize_RejectReason_Info     @"rejectReason"
#define kSynchronize_Call_Logs_Info         @"phoneRecordLog"


//点菜数量
#define kSyncDishChangeNotification      @"kSyncDishChangeNotification"    //同步回来数据发生变化，通知
#define kSyncTradeChangeNotification      @"kSyncTradeChangeNotification"    //同步回来数据发生变化，通知
#define kSyncCustomerChangeNotification      @"kSyncCustomerChangeNotification"    //同步回来数据发生变化，通知客户信息变化
#define kSyncPrinterServiceChangeNotification      @"kSyncPrinterServiceChangeNotification"    //同步回来数据发生变化，通知打印服务
#define kRefreshDishAndDishTypeDataNotification      @"kRefreshDishAndDishTypeDataNotification"    //刷新菜品数据与，通知
#define kShopingDishCountNotification      @"kShopingDishCountNotification"    //增加与减少菜的数量时候，通知
#define kCancelSelecetdStateNotification    @"kCancelSelecetdStateNotification"     //当点加商品详情界面的 X 按钮时,刷新购物车 取消选中状态