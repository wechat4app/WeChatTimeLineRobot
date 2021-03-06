/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WCPayBindCardInfo, NSDate, WCPayTransferPrepayRequestStruct, NSDictionary, TenpayBindCardInfo, NSError, TenpayBindCardSubscribeAppInfo, WCPayAuthenticationPayStatusStruct, WCPayUserInfo, WCPaySwitchInfo, WCPayBalanceInfo, WCPayNoticeInfo, WCPayOfflinePayQueryInfoRequest, WCPayOfflinePayQueryInfo, WCPayFetchInfo, WCPayCardBinInfo, WCPayLoanEntryInfo, WCPayBindUserInfo, WCPayWalletInfo, WCPayBindInfo, WCPayOfflinePayChangeLimitFeeRequestStruct, WCPayResetPasswordInfo, NSArray, CContact, WCPayMultiOrderDetail, NSString, WCPayVirtualNoBindCard, WCPayIAPOrderDetail, WCPayAuthenticationPay, NSMutableArray, WCPayAuthenticationPayVerifySMSStruct, WCPayAppAuthRequestStruct, WCPayCreditCardInfo;

@interface WCPayControlData : XXUnknownSuperclass {
	NSString* nsCardHodlerName;
	NSString* nsCardHodlerCredit;
	NSString* nsCardHodlerIdentifyCard;
	NSString* nsCardNumber;
	NSString* nsPhoneNumber;
	NSString* nsResetPhoneNumber;
	NSString* nsResetCVVCode;
	NSString* nsCVVCode;
	NSString* nsResetValidDate;
	NSString* nsValidDate;
	NSString* nsPhoneVerifyCode;
	NSString* nsPayPasswd;
	NSString* nsRepeatPayPasswd;
	NSString* nsVerifiedPasswd;
	NSString* nsSaveBalanceMoney;
	NSString* nsFetchBalanceMoney;
	NSString* nsTransferMoney;
	NSString* nsTransferExtMoney;
	NSString* nsFetchArriveTime;
	BOOL m_bAutoFilledCardInfo;
	NSString* nsTransferRemark;
	NSString* nsWCLanguage;
	NSString* nsFirstName;
	NSString* nsLastName;
	NSString* nsCountry;
	NSString* nsArea;
	NSString* nsCity;
	NSString* nsAddress;
	NSString* nsPhoneNumber_Overseas;
	NSString* nsZipCode;
	NSString* nsEmail;
	NSString* nsCreditPayFirstName;
	NSString* nsCreditPayLast4IDNumber;
	NSString* nsCreditPayName;
	NSString* nsCreditPayIDNumber;
	unsigned long uiFlag;
	unsigned long uiPayScene;
	unsigned long uiBindScene;
	unsigned long uiJSApiPayScene;
	NSString* nsOrderID;
	NSString* nsUUID;
	NSString* nsImportCode;
	NSString* nsProductsID;
	NSString* nsBindSerial;
	NSString* m_nsToken;
	NSString* nsServiceAppID;
	NSString* nsServiceAppUserName;
	NSString* nsServiceAppName;
	NSString* nsServiceAppLogoUrl;
	NSString* nsServiceDetail;
	NSString* nsServiceSubscribeUrl;
	NSString* nsWapPayUrl;
	NSString* nsShareToFriendURL;
	NSString* nsPaidSuccessDetail;
	int uiServiceSubscribeStrategy;
	NSString* nsAppName;
	NSString* nsAppID;
	NSString* nsAppSource;
	WCPayAppAuthRequestStruct* structAppAuthRequest;
	WCPayBindUserInfo* bindUserInfo;
	unsigned long uiCardBankTag;
	NSError* m_oPaidError;
	WCPayAuthenticationPay* m_structAuthenticationPay;
	WCPayAuthenticationPayVerifySMSStruct* m_structAuthenticationPayVerifySMS;
	WCPayResetPasswordInfo* m_structResetPayPasswordInfo;
	NSArray* m_arrTenpayImportBindCard;
	TenpayBindCardInfo* m_structSelectedTenpayBindCardInfo;
	TenpayBindCardSubscribeAppInfo* m_structSelectedTenpayBindCardSubscribeAppInfo;
	WCPayBindInfo* m_structBindInfo;
	NSArray* m_arrBindedCard;
	NSArray* m_arrHistoryCard;
	NSArray* m_arrVirtualNoBindCard;
	NSArray* m_arrWXBorrowMoneyItemList;
	WCPayBindCardInfo* m_structSelectedCardInfo;
	WCPayBindCardInfo* m_structSelectedResetBalanceTelCardInfo;
	WCPayUserInfo* m_structUserInfo;
	WCPaySwitchInfo* m_structSwitchInfo;
	WCPayBalanceInfo* m_structBalanceInfo;
	WCPayNoticeInfo* m_structNoticeInfo;
	WCPayCardBinInfo* m_structSelectedCardType;
	NSArray* m_arrAvailableBank;
	WCPayIAPOrderDetail* m_structIAPOrderDetail;
	WCPayMultiOrderDetail* m_structOrderDetail;
	NSMutableArray* m_arrStatusChangeOrderArray;
	NSMutableArray* m_arrOrderArray;
	NSMutableArray* m_arrNotifyMsgArray;
	WCPayAuthenticationPayStatusStruct* m_structAuthenticationPayStatus;
	WCPayVirtualNoBindCard* m_structVirtualCardInfo;
	NSDate* startPayDate;
	NSDate* startVerifySMSDate;
	BOOL bNeedGetSMSAgain;
	NSString* nsOfflinePayQRCode;
	NSString* nsOfflinepayBarCode;
	BOOL m_bNeedOfflinePayLoading;
	long long uiOfflinePayLimit;
	int offlinePayAmount;
	int offlinePayNumber;
	long long uiOfflinePayChangedLimit;
	WCPayOfflinePayChangeLimitFeeRequestStruct* m_structWCPayOfflinePayChangeLimitFeeRequestStruct;
	NSString* nsOfflinePayConfirmViewTips;
	WCPayOfflinePayQueryInfo* m_structWCPayOfflinePayQueryInfo;
	unsigned long uiInitalMoney;
	WCPayOfflinePayQueryInfoRequest* m_sturctWCPayOfflinePayQueryInfoRequest;
	int m_enWCPayOfflinePayCodeDisplayScene;
	BOOL m_bBankUser;
	NSString* m_nsSessionKey;
	BOOL m_bNeedBind;
	NSString* m_nsIDNumberMask;
	NSString* m_nsNameMask;
	NSArray* m_arrIncreaseLimitQuestionArray;
	WCPayCreditCardInfo* m_sturctWCPayCreditCardInfo;
	unsigned long m_uiQueryQuestionCnt;
	CContact* m_oSelectedContact;
	NSString* m_nsSelectedUserNameFromQRCode;
	NSString* m_nsSelectedTruthNameFromQRCode;
	NSString* m_nsControlTransationID;
	NSString* m_nsTransferID;
	NSString* m_nsCurrentUserName;
	NSString* m_nsTranferMoneyString;
	unsigned long long m_uiTransferInvalidTime;
	unsigned long m_uiEffectiveDate;
	WCPayTransferPrepayRequestStruct* m_oWCPayTransferPrepayRequestStruct;
	NSMutableArray* m_arrFacingReceiveMoneyPayer;
	unsigned long m_uiStepInFacingReceiveViewTimestamp;
	NSString* m_nsFixedAmountReceiveMoneyQRCode;
	NSString* m_nsFixedAmountReceiveMoneyDesc;
	long long m_llFixedAmountReceiveMoneyTotalMoney;
	int m_enWCPayFacingReceiveMoneyScene;
	NSString* m_nsFacingPaidID;
	NSString* m_nsInterruptDesc;
	unsigned long m_uiHasUnarriveMoney;
	unsigned long m_uiChargeFee;
	unsigned long m_uiAccFee;
	unsigned long m_uiFeeLimit;
	unsigned long m_uiRemainFee;
	unsigned long m_uiExceedFee;
	NSString* m_nsChargeRate;
	NSString* m_nsTransferInterruptChargeDesc;
	unsigned long m_uiUsedFee;
	BOOL m_isShowCharge;
	NSString* m_nsChargeDesc;
	NSString* m_nsChargeShortDesc;
	unsigned long m_uiShortRemainFee;
	NSString* m_c2c_sender_title;
	NSString* m_c2c_receiver_title;
	NSString* m_c2c_des;
	NSString* m_c2c_sender_des;
	NSString* m_c2c_receiver_des;
	NSString* m_c2c_url;
	NSString* m_c2c_templateId;
	unsigned long m_c2c_sceneId;
	WCPayLoanEntryInfo* m_loanEntryInfo;
	NSString* m_loanJsApiToken;
	unsigned long m_uiPayChannel;
	unsigned long m_uiPayEntry;
	unsigned long m_uiRealnameActionFlag;
	NSString* m_nsRealnameToken;
	WCPayWalletInfo* m_walletInfo;
	NSArray* m_arrAvailableWalletInfo;
	NSDictionary* m_dicBanners;
	BOOL bNeedInputNewTelToResetBalanceTel;
	BOOL _m_bTouchIDAuthOrder;
	NSString* m_nsTransferMoneySuccessMsgContent;
	WCPayCardBinInfo* m_structSelectedResetBalanceTelCardType;
	NSArray* m_arrBalanceNotice;
	NSArray* m_arrFetchNotice;
	unsigned long m_pay_msg_type;
	WCPayFetchInfo* _m_structFetchInfo;
	NSArray* _offlinePayCardIcons;
	unsigned long _m_uiFetchChargeFee;
	long long m_placeHolderMoney;
}
@property(retain, nonatomic) NSDictionary* m_dicBanners;
@property(retain, nonatomic) NSArray* m_arrAvailableWalletInfo;
@property(retain, nonatomic) WCPayWalletInfo* m_walletInfo;
@property(assign, nonatomic) unsigned long m_uiFetchChargeFee;
@property(assign, nonatomic) unsigned long m_pay_msg_type;
@property(retain, nonatomic) NSArray* m_arrBalanceNotice;
@property(retain, nonatomic) NSArray* m_arrFetchNotice;
@property(retain, nonatomic) NSString* m_nsRealnameToken;
@property(assign, nonatomic) unsigned long m_uiRealnameActionFlag;
@property(assign, nonatomic) unsigned long m_uiPayEntry;
@property(assign, nonatomic) unsigned long m_uiPayChannel;
@property(assign, nonatomic) unsigned long m_uiShortRemainFee;
@property(retain, nonatomic) NSString* m_nsChargeShortDesc;
@property(retain, nonatomic) NSString* m_nsChargeDesc;
@property(assign, nonatomic) BOOL m_isShowCharge;
@property(assign, nonatomic) unsigned long m_uiUsedFee;
@property(retain, nonatomic) NSString* m_nsTransferInterruptChargeDesc;
@property(retain, nonatomic) NSString* m_nsChargeRate;
@property(assign, nonatomic) unsigned long m_uiExceedFee;
@property(assign, nonatomic) unsigned long m_uiRemainFee;
@property(assign, nonatomic) unsigned long m_uiFeeLimit;
@property(assign, nonatomic) unsigned long m_uiAccFee;
@property(assign, nonatomic) unsigned long m_uiChargeFee;
@property(retain, nonatomic) NSString* m_loanJsApiToken;
@property(retain, nonatomic) WCPayLoanEntryInfo* m_loanEntryInfo;
@property(assign, nonatomic) unsigned long m_uiHasUnarriveMoney;
@property(retain, nonatomic) NSString* m_nsInterruptDesc;
@property(retain, nonatomic) NSString* nsTransferRemark;
@property(assign, nonatomic) BOOL m_bTouchIDAuthOrder;
@property(assign, nonatomic) unsigned long m_c2c_sceneId;
@property(retain, nonatomic) NSString* m_c2c_templateId;
@property(retain, nonatomic) NSString* m_c2c_url;
@property(retain, nonatomic) NSString* m_c2c_receiver_des;
@property(retain, nonatomic) NSString* m_c2c_sender_des;
@property(retain, nonatomic) NSString* m_c2c_des;
@property(retain, nonatomic) NSString* m_c2c_receiver_title;
@property(retain, nonatomic) NSString* m_c2c_sender_title;
@property(retain, nonatomic) NSString* m_nsTransferMoneySuccessMsgContent;
@property(retain, nonatomic) NSString* m_nsFacingPaidID;
@property(assign, nonatomic) int m_enWCPayFacingReceiveMoneyScene;
@property(assign, nonatomic) long long m_llFixedAmountReceiveMoneyTotalMoney;
@property(retain, nonatomic) NSString* m_nsFixedAmountReceiveMoneyDesc;
@property(retain, nonatomic) NSString* m_nsFixedAmountReceiveMoneyQRCode;
@property(assign, nonatomic) unsigned long m_uiStepInFacingReceiveViewTimestamp;
@property(retain, nonatomic) NSMutableArray* m_arrFacingReceiveMoneyPayer;
@property(retain, nonatomic) WCPayTransferPrepayRequestStruct* m_oWCPayTransferPrepayRequestStruct;
@property(assign, nonatomic) unsigned long m_uiEffectiveDate;
@property(assign, nonatomic) unsigned long long m_uiTransferInvalidTime;
@property(retain, nonatomic) NSString* m_nsTranferMoneyString;
@property(retain, nonatomic) NSString* m_nsCurrentUserName;
@property(retain, nonatomic) NSString* m_nsTransferID;
@property(retain, nonatomic) NSString* m_nsControlTransationID;
@property(retain, nonatomic) NSString* m_nsSelectedTruthNameFromQRCode;
@property(retain, nonatomic) NSString* m_nsSelectedUserNameFromQRCode;
@property(assign, nonatomic) long long m_placeHolderMoney;
@property(retain, nonatomic) CContact* m_oSelectedContact;
@property(assign, nonatomic) BOOL bNeedInputNewTelToResetBalanceTel;
@property(retain, nonatomic) WCPayCardBinInfo* m_structSelectedResetBalanceTelCardType;
@property(retain, nonatomic) WCPayBindCardInfo* m_structSelectedResetBalanceTelCardInfo;
@property(assign, nonatomic) unsigned long m_uiQueryQuestionCnt;
@property(retain, nonatomic) WCPayCreditCardInfo* m_sturctWCPayCreditCardInfo;
@property(retain, nonatomic) NSString* m_nsIDNumberMask;
@property(retain, nonatomic) NSString* m_nsNameMask;
@property(retain, nonatomic) NSArray* m_arrIncreaseLimitQuestionArray;
@property(assign, nonatomic) BOOL m_bNeedBind;
@property(retain, nonatomic) NSString* m_nsSessionKey;
@property(assign, nonatomic) BOOL m_bBankUser;
@property(retain, nonatomic) NSArray* m_arrVirtualNoBindCard;
@property(retain, nonatomic) NSString* nsWapPayUrl;
@property(assign, nonatomic) int m_enWCPayOfflinePayCodeDisplayScene;
@property(retain, nonatomic) WCPayOfflinePayQueryInfoRequest* m_sturctWCPayOfflinePayQueryInfoRequest;
@property(assign, nonatomic) unsigned long uiInitalMoney;
@property(retain, nonatomic) WCPayOfflinePayQueryInfo* m_structWCPayOfflinePayQueryInfo;
@property(retain, nonatomic) NSString* nsOfflinePayConfirmViewTips;
@property(retain, nonatomic) WCPayOfflinePayChangeLimitFeeRequestStruct* m_structWCPayOfflinePayChangeLimitFeeRequestStruct;
@property(assign, nonatomic) long long uiOfflinePayChangedLimit;
@property(assign, nonatomic) BOOL m_bNeedOfflinePayLoading;
@property(retain, nonatomic) NSArray* offlinePayCardIcons;
@property(assign, nonatomic) int offlinePayNumber;
@property(assign, nonatomic) int offlinePayAmount;
@property(assign, nonatomic) long long uiOfflinePayLimit;
@property(retain, nonatomic) NSString* nsOfflinepayBarCode;
@property(retain, nonatomic) NSString* nsOfflinePayQRCode;
@property(assign, nonatomic) BOOL bNeedGetSMSAgain;
@property(retain, nonatomic) NSDate* startVerifySMSDate;
@property(retain, nonatomic) NSDate* startPayDate;
@property(retain, nonatomic) WCPayAuthenticationPayStatusStruct* m_structAuthenticationPayStatus;
@property(retain, nonatomic) NSMutableArray* m_arrNotifyMsgArray;
@property(retain, nonatomic) NSMutableArray* m_arrOrderArray;
@property(retain, nonatomic) NSMutableArray* m_arrStatusChangeOrderArray;
@property(retain, nonatomic) WCPayResetPasswordInfo* m_structResetPayPasswordInfo;
@property(retain, nonatomic) WCPayVirtualNoBindCard* m_structVirtualCardInfo;
@property(retain, nonatomic) WCPayBindInfo* m_structBindInfo;
@property(retain, nonatomic) WCPayFetchInfo* m_structFetchInfo;
@property(retain, nonatomic) WCPayAuthenticationPayVerifySMSStruct* m_structAuthenticationPayVerifySMS;
@property(retain, nonatomic) WCPayAuthenticationPay* m_structAuthenticationPay;
@property(retain, nonatomic) NSArray* m_arrAvailableBank;
@property(retain, nonatomic) WCPayMultiOrderDetail* m_structOrderDetail;
@property(retain, nonatomic) WCPayIAPOrderDetail* m_structIAPOrderDetail;
@property(retain, nonatomic) WCPayNoticeInfo* m_structNoticeInfo;
@property(retain, nonatomic) WCPayBalanceInfo* m_structBalanceInfo;
@property(retain, nonatomic) WCPaySwitchInfo* m_structSwitchInfo;
@property(retain, nonatomic) WCPayUserInfo* m_structUserInfo;
@property(retain, nonatomic) WCPayCardBinInfo* m_structSelectedCardType;
@property(retain, nonatomic) WCPayBindCardInfo* m_structSelectedCardInfo;
@property(retain, nonatomic) TenpayBindCardSubscribeAppInfo* m_structSelectedTenpayBindCardSubscribeAppInfo;
@property(retain, nonatomic) TenpayBindCardInfo* m_structSelectedTenpayBindCardInfo;
@property(retain, nonatomic) NSArray* m_arrTenpayImportBindCard;
@property(retain, nonatomic) NSArray* m_arrHistoryCard;
@property(retain, nonatomic) NSArray* m_arrBindedCard;
@property(retain, nonatomic) NSArray* m_arrWXBorrowMoneyItemList;
@property(retain, nonatomic) NSString* m_nsToken;
@property(retain, nonatomic) NSString* nsCreditPayIDNumber;
@property(retain, nonatomic) NSString* nsCreditPayName;
@property(retain, nonatomic) NSString* nsCreditPayLast4IDNumber;
@property(retain, nonatomic) NSString* nsCreditPayFirstName;
@property(retain, nonatomic) NSError* m_oPaidError;
@property(retain, nonatomic) NSString* nsEmail;
@property(retain, nonatomic) NSString* nsZipCode;
@property(retain, nonatomic) NSString* nsPhoneNumber_Overseas;
@property(retain, nonatomic) NSString* nsAddress;
@property(retain, nonatomic) NSString* nsCity;
@property(retain, nonatomic) NSString* nsArea;
@property(retain, nonatomic) NSString* nsCountry;
@property(retain, nonatomic) NSString* nsLastName;
@property(retain, nonatomic) NSString* nsFirstName;
@property(retain, nonatomic) NSString* nsWCLanguage;
@property(assign, nonatomic) unsigned long uiCardBankTag;
@property(retain, nonatomic) WCPayBindUserInfo* bindUserInfo;
@property(retain, nonatomic) WCPayAppAuthRequestStruct* structAppAuthRequest;
@property(retain, nonatomic) NSString* nsAppSource;
@property(retain, nonatomic) NSString* nsAppID;
@property(assign, nonatomic) int uiServiceSubscribeStrategy;
@property(retain, nonatomic) NSString* nsServiceAppLogoUrl;
@property(retain, nonatomic) NSString* nsAppName;
@property(assign, nonatomic) unsigned long uiJSApiPayScene;
@property(assign, nonatomic) unsigned long uiBindScene;
@property(assign, nonatomic) unsigned long uiPayScene;
@property(retain, nonatomic) NSString* nsVerifiedPasswd;
@property(assign, nonatomic) unsigned long uiFlag;
@property(retain, nonatomic) NSString* nsRepeatPayPasswd;
@property(retain, nonatomic) NSString* nsPayPasswd;
@property(retain, nonatomic) NSString* nsPaidSuccessDetail;
@property(retain, nonatomic) NSString* nsShareToFriendURL;
@property(retain, nonatomic) NSString* nsServiceSubscribeUrl;
@property(retain, nonatomic) NSString* nsServiceDetail;
@property(retain, nonatomic) NSString* nsServiceAppUserName;
@property(retain, nonatomic) NSString* nsServiceAppName;
@property(retain, nonatomic) NSString* nsServiceAppID;
@property(retain, nonatomic) NSString* nsImportCode;
@property(retain, nonatomic) NSString* nsProductsID;
@property(retain, nonatomic) NSString* nsUUID;
@property(retain, nonatomic) NSString* nsOrderID;
@property(assign, nonatomic) BOOL m_bAutoFilledCardInfo;
@property(retain, nonatomic) NSString* nsFetchArriveTime;
@property(retain, nonatomic) NSString* nsTransferExtMoney;
@property(retain, nonatomic) NSString* nsTransferMoney;
@property(retain, nonatomic) NSString* nsFetchBalanceMoney;
@property(retain, nonatomic) NSString* nsSaveBalanceMoney;
@property(retain, nonatomic) NSString* nsPhoneVerifyCode;
@property(retain, nonatomic) NSString* nsValidDate;
@property(retain, nonatomic) NSString* nsResetValidDate;
@property(retain, nonatomic) NSString* nsResetCVVCode;
@property(retain, nonatomic) NSString* nsCVVCode;
@property(retain, nonatomic) NSString* nsResetPhoneNumber;
@property(retain, nonatomic) NSString* nsPhoneNumber;
@property(retain, nonatomic) NSString* nsCardNumber;
@property(retain, nonatomic) NSString* nsCardHodlerIdentifyCard;
@property(retain, nonatomic) NSString* nsCardHodlerCredit;
@property(retain, nonatomic) NSString* nsCardHodlerName;
-(void).cxx_destruct;
-(void)dealloc;
-(id)init;
@end

