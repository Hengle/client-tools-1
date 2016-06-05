#ifndef CTENUM_H
#define CTENUM_H

namespace CTService
{

enum InternalErrorCodes
{
	CONFIG_PARAMS_MISSING=-1,
	FAIL_LOAD_CONFIG_FILE=-2
};

enum ServerStatus
{
	SERVER_READY = 0,
	SERVER_SHUTTING_DOWN,
	SERVER_DOWN
};

enum LOG_TYPES
{
    LOG_ERROR=1,
    LOG_REQUEST,
    LOG_CONNECTION,
    LOG_GENERAL,
	LOG_STATS
};

//-----------------------------------------
// Add New API requests Here
//-----------------------------------------
enum RequestTypes
{
	// ----- Store/Web API begins at 1 -----
	//CTWEB_REQUEST_TEST = 1,
	CTWEB_REQUEST_GET_GAMES = 2,
	CTWEB_REQUEST_GET_SUBSCRIPTIONS = 3,
	CTWEB_REQUEST_GET_CHARACTERS = 4,
	CTWEB_REQUEST_GET_SOURCE_SERVERS = 5,
	CTWEB_REQUEST_GET_DEST_SERVERS = 6,
	CTWEB_REQUEST_VALIDATE_TRANSACTION = 7,
	CTWEB_REQUEST_VALIDATE_ORDER = 8,
	CTWEB_REQUEST_SUBMIT_ORDER = 9,
	CTWEB_REQUEST_GET_ORDER_STATUS = 10,
	CTWEB_REQUEST_GET_ORDERS_BY_STATION_ID = 11,
	CTWEB_REQUEST_GET_TRANSACTIONS_BY_ORDER_ID = 12,
	CTWEB_REQUEST_CSR_MOVE = 13,
	CTWEB_REQUEST_CSR_DELETE = 14,
	CTWEB_REQUEST_CSR_RESTORE = 15,
	CTWEB_REQUEST_CSR_TRANSFER_ACCOUNT = 16,

	// ----- Game API begins at 1000 -----
	// first requests sent from API to server
	//CTGAME_REQUEST_TEST = 1000,
	CTGAME_REQUEST_CONNECT = 1001,
	CTGAME_REPLY_TEST,
	CTGAME_REPLY_MOVESTATUS,
	CTGAME_REPLY_VALIDATEMOVE,
	CTGAME_REPLY_MOVE,
	CTGAME_REPLY_CHARACTERLIST,
	CTGAME_REPLY_SERVERLIST,
	CTGAME_REPLY_DESTSERVERLIST,
	CTGAME_REPLY_DELETE,
	CTGAME_REPLY_RESTORE,
	CTGAME_REPLY_TRANSFER_ACCOUNT,
	// then requests send from server to API
	CTGAME_SERVER_TEST = 1100,
	CTGAME_SERVER_MOVESTATUS,
	CTGAME_SERVER_VALIDATEMOVE,
	CTGAME_SERVER_MOVE,
	CTGAME_SERVER_CHARACTERLIST,
	CTGAME_SERVER_SERVERLIST,
	CTGAME_SERVER_DESTSERVERLIST,
	CTGAME_SERVER_DELETE,
	CTGAME_SERVER_RESTORE,
	CTGAME_SERVER_TRANSFER_ACCOUNT,
	
	// ----- Login API begins at 2000 -----
	CTLOGIN_REQUEST_GET_ACCOUNT_STATUS = 2000,
	CTLOGIN_REQUEST_GET_ACCOUNT_SUBSCRIPTIONS,
	CTLOGIN_REQUEST_GET_MEMBER_INFO,
	
	// ----- Ecomm API begins at 3000 -----
	CTECOMM_REQUEST_VALIDATE_CARD = 3000,
	CTECOMM_REQUEST_GET_PRODUCT,
	CTECOMM_REQUEST_GET_PRODUCT_LIST,
	CTECOMM_REQUEST_CALUCULATE_ORDER_AMOUNT,
	CTECOMM_REQUEST_GET_PRODUCTS_BY_GAME_AND_TYPE,
	CTECOMM_REQUEST_PREAUTH_ORDER,
	CTECOMM_REQUEST_DEPOSIT_CREDIT_CARD
};

//-----------------------------------------
// Add result codes for both API's Here
//-----------------------------------------
enum CTResultCodes
{
	CT_RESULT_SUCCESS = 0,				// general hardware/system type messages
	CT_RESULT_TIMEOUT,
	CT_RESULT_FAILURE,
	CT_RESULT_1OR_MORE_TRANSACTIONS_FAILED,
	CT_RESULT_NO_TRANS_IN_ORDER,
	CT_RESULT_ORDER_FOR_DIFFERENT_GAMES,//5
	CT_RESULT_ORDER_FOR_DIFFERENT_USERS,
	CT_RESULT_MULTI_TRANS_FOR_CHARACTER,
	CT_RESULT_DEST_STATIONNAME_PASSWORD_INVALID,
	CT_RESULT_SOURCE_STATION_ACCOUNT_NOT_ACTIVE,
	CT_RESULT_DEST_STATION_ACCOUNT_NOT_ACTIVE,//10
	CT_RESULT_INVALID_UID,
	CT_RESULT_SOURCE_UID_INVALID,
	CT_RESULT_ALL_REQUIRED_TRANSACTION_INFO_NOT_PROVIDED,
	CT_RESULT_NOT_SAME_FIRST_NAME_ON_STATION_ACCOUNTS,
	CT_RESULT_NOT_SAME_LAST_NAME_ON_STATION_ACCOUNTS,//15
	CT_RESULT_NOT_SAME_EMAIL_ON_STATION_ACCOUNTS,
	CT_RESULT_TRANSFER_TO_SAME_ACCOUNT,
	CT_RESULT_WEB_INFO_DOES_NOT_MATCH_STATION_INFO,
	CT_RESULT_SOURCE_SUBSCRIPTION_STATUS_NOT_ALLOWED,
	CT_RESULT_DEST_SUBSCRIPTION_STATUS_NOT_ALLOWED,//20
	CT_RESULT_BAD_CC_INFO,
	CT_RESULT_ZIP_FAILED_AVS,
	CT_RESULT_HARD_DECLINE_ECOMM,
	CT_RESULT_SOFT_DECLINE_ECOMM,
	CT_RESULT_OTHER_ECOMM_ERROR,//25
	CT_RESULT_INVALID_STOREFRONT,
	CT_RESULT_ILLEGAL_TRANSACTION_REQUESTED_FOR_GAME,
	CT_RESULT_ILLEGAL_GAME_CODE,
	CT_RESULT_UPDATE_ORDER_PRICE_FAILED,
	CT_RESULT_UPDATE_ORDER_PRICE_FAILED_TWICE,//30
	CT_RESULT_HARD_DECLINE_GAME,
	CT_RESULT_SOFT_DECLINE_GAME,
	CT_RESULT_TRANSACTION_DOES_NOT_DO_ANYTHING,
	//	ADDITIONS HERE SHOULD BE ADDED TO REQUESTSTRINGS.H AS WELL
};

//-----------------------------------------
// Add localized messages here
//-----------------------------------------
enum CTLocalizedMessages
{
	CT_MESSAGE_SOURCE_SUBSCRIPTION_STATUS_NOT_ALLOWED = 1,
    CT_MESSAGE_DEST_SUBSCRIPTION_STATUS_NOT_ALLOWED,
	CT_MESSAGE_TIMEOUT,
	CT_MESSAGE_FAILURE,
	CT_MESSAGE_SOURCE_STATION_ACCOUNT_NOT_ACTIVE,//5
	CT_MESSAGE_SOURCE_UID_INVALID,
	CT_MESSAGE_TRANSFER_TO_SAME_ACCOUNT,
	CT_MESSAGE_NOT_SAME_FIRST_NAME_ON_STATION_ACCOUNTS,
	CT_MESSAGE_NOT_SAME_LAST_NAME_ON_STATION_ACCOUNTS,
	CT_MESSAGE_NOT_SAME_EMAIL_ON_STATION_ACCOUNTS,//10
	CT_MESSAGE_INVALID_UID,
	CT_MESSAGE_DEST_STATION_ACCOUNT_NOT_ACTIVE,
	CT_MESSAGE_DEST_STATIONNAME_PASSWORD_INVALID,
	CT_MESSAGE_ALL_REQUIRED_TRANSACTION_INFO_NOT_PROVIDED,
	CT_MESSAGE_ILLEGAL_TRANSACTION_REQUESTED_FOR_GAME,//15
	CT_MESSAGE_ILLEGAL_GAME_CODE,
	//	ADDITIONS HERE SHOULD BE ADDED TO REQUESTSTRINGS.H AS WELL
};
//-----------------------------------------
// Add resource manager codes Here
//-----------------------------------------
enum ServiceTypes
{
    SERVICE_DATABASE=0,
	SERVICE_GAMEAPI,
	SERVICE_LOGIN_SERVER,
	SERVICE_ECOMM_SERVER,
	SERVICE_TRANSACTION
};

//-----------------------------------------
// Add resource request ID's Here
//-----------------------------------------
enum ResourceRequestTypes
{
	CTGAMEAPI_RESOURCE_TEST=1,
	CTGAMEAPI_RESOURCE_MOVESTATUS,
	CTGAMEAPI_RESOURCE_VALIDATEMOVE,
	CTGAMEAPI_RESOURCE_MOVE,
	CTGAMEAPI_RESOURCE_CHARACTERLIST,//5
	CTGAMEAPI_RESOURCE_SERVERLIST,
	CTGAMEAPI_RESOURCE_DESTSERVERLIST,
	CTGAMEAPI_RESOURCE_DELETE,
	CTGAMEAPI_RESOURCE_RESTORE,
	CTGAMEAPI_RESOURCE_TRANSFER_ACCOUNT,


	LOGIN_SERVER_REQUEST_VALIDATE_STATION_ACCOUNT=101,
	LOGIN_SERVER_REQUEST_VALIDATE_STATION_ACCOUNT_WITH_ID,
	LOGIN_SERVER_REQUEST_GET_ACCOUNT_SUBSCRIPTIONS,
	LOGIN_SERVER_REQUEST_VALIDATE_TRANSFER_OWNERSHIP,


	ECOMM_VALIDATE_CARD=201,
	ECOMM_GET_PRODUCT,
	ECOMM_GET_PRODUCT_LIST,
	ECOMM_CALCULATE_ORDER_AMOUNTS,
	ECOMM_GET_PRODUCTS_BY_GAME_AND_TYPE,//205
	ECOMM_PREAUTH_ORDER,
	ECOMM_DEPOSIT_CREDIT_CARD,

	// DB Requests
	DB_REQUEST_GET_GAMES=301,
	DB_REQUEST_GET_GAME,
	DB_REQUEST_SUBMIT_ORDER,
	DB_REQUEST_CREATE_TRANSACTION,
	DB_REQUEST_FINISH_TRANSACTION,//305
	DB_REQUEST_GET_OLDEST_TRANSACTION,
	DB_REQUEST_GET_ORDER_BY_ORDER_ID,
	DB_REQUEST_GET_ORDER_STATUS,
	DB_REQUEST_GET_TRANSACTION,
	DB_REQUEST_GET_TRANSACTIONS_BY_SERVER,//310
	DB_REQUEST_GET_TRANSACTIONS_FOR_ORDER,
	DB_REQUEST_GET_ORDERS_BY_STATION_ID,
	DB_REQUEST_SET_TRANSACTION_WAITING,
	DB_REQUEST_UPDATE_ORDER_PRICE,
	DB_REQUEST_UPDATE_ORDER_STATUS,//315
	DB_REQUEST_UPDATE_TRANSACTION_STATUS,
	DB_REQUEST_GET_ALL_LOCALIZED_MESSAGES,
	DB_REQUEST_GET_LOCALIZED_MESSAGE_LANGUAGES,
	DB_REQUEST_CREATE_LOCALIZED_MESSAGE,
	DB_REQUEST_MODIFY_LOCALIZED_MESSAGE_TEXT,//320
	DB_REQUEST_MODIFY_GAME,
	DB_REQUEST_ADD_GAME,

};

//-----------------------------------------
// Status codes used by onGetOrderStatus for webAPI
//-----------------------------------------
enum CTOrderStatus
{
	CT_ORDER_STATUS_UNKNOWN = 0,				//	A problem occured retrieving the status of an order
	CT_ORDER_STATUS_NEW,						//	Just created in DB
	CT_ORDER_STATUS_PENDING,					//	Pre-Auth of Credit Card OK. Waiting for TransactionManager to process.
	CT_ORDER_STATUS_PREAUTH_FAILED,				//	Pre-Auth of Credit Card Failed
	CT_ORDER_STATUS_ABOUT_TO_DEPOSIT,			//	All game transactions are complete, fixing to deposit credit card
	CT_ORDER_STATUS_FINISHED,//5				//	Deposit successful. Order is complete. (some transaction may not have been processed by game, deposit amount was adjusted in this case
	CT_ORDER_STATUS_BILLING_FAILED,				//	Deposit failed, CS Alerted
	CT_ORDER_STATUS_ORDER_ID_NOT_FOUND_IN_DB,	//	DB Call was successful, but the order does not exist
	CSR_NEW,
	CSR_HARD_FAIL,
	CSR_SOFT_FAIL,//10
	CSR_SPECIFIC_HARD_FAIL,
	CSR_FINISHED,
	CSR_SOFT_GAME_FAIL,
	CSR_FAILED_GAME
};


//-----------------------------------------
// Status codes used by replyMoveStatus in game API
//-----------------------------------------
enum CTMoveStatus
{
	CT_STATUS_COMPLETE = 0,			// operation completed by game server
	CT_STATUS_INPROGRESS,			// operation still in progress
	CT_STATUS_UNKNOWN,				// transaction ID unrecognised by game server
};

//-----------------------------------------
// Result codes used by replyMove, replyDelete, replyRestore, and replyTransferAccount in game API
//-----------------------------------------
enum CTMoveResult
{
	CT_GAMERESULT_SUCCESS = 0,		// operation completed ok
	CT_GAMERESULT_SOFTERROR,		// operation cannot be completed at this time, a "temporary" fail
	CT_GAMERESULT_HARDERROR,		// operation failed and cannot succeed even if retried
	// any values below this are game-specific HARDERRORS. Use these to help provide feedback to the customers and CSR's
	CT_GAMERESULT_INVALID_NAME = 1000,
	CT_GAMERESULT_NAME_ALREADY_TAKE,
	CT_GAMERESULT_HAS_CORPSE,
	CT_GAMERESULT_SERVER_IS_DOWN,
	CT_GAMERESULT_MAX_CHAR_ON_DEST_SERVER,
	CT_GAMERESULT_CHAR_HAS_ITEM_NOT_ALLOWED_TO_LEAVE_SRC_SERVER,//1005
	CT_GAMERESULT_CHAR_HAS_ITEM_NOT_ALLOWED_ON_DEST_SERVER,
	CT_GAMERESULT_CHAR_NOT_ALLOWED_TO_MOVE_FROM_SRC_SERVER,
	CT_GAMERESULT_CHAR_NOT_ALLOWED_TO_MOVE_TO_DEST_SERVER,
	CT_GAMERESULT_CHAR_NOT_ALLOWED_TO_MOVE_FROM_THIS_SRC_SERVER_TO_THIS_DEST_SERVER,
	CT_GAMERESULT_CHAR_TYPE_NOT_ALLOWED_TO_LEAVE_SRC_SERVER,//1010 this type of character is not allowed to leave source server(faction, race, class, etc)
	CT_GAMERESULT_CHAR_TYPE_NOT_ALLOWED_ON_DEST_SERVER, // this type of character is not allowed on dest server(faction, race, class, etc)
	CT_GAMERESULT_SOFTERROR_FOR_LOCALIZED_TEXT, // ctserver will convert CT_GAMERESULT_SOFTERROR to this for getting localized text
	CT_GAMERESULT_HARDERROR_FOR_LOCALIZED_TEXT, // ctserver will convert CT_GAMERESULT_HARDERROR to this for getting localized text
};
enum CTLocalizedEmailMessages
{
	// 2000 - 2999 CUSTOMER EMAIL SUBJECT
	CT_EMAIL_ORDER_COMP_SUCCESS = 2001,				// NO PROBLEMS AT ALL IN THE ORDER, ALL TRANSACTIONS SUCCESSFUL
	CT_EMAIL_ORDER_COMP = 2002,						// ORDER WAS BILLED FOR A CORRECTED AMOUNT (NOT ALL TRANSACTIONS WERE SUCCESFUL)
	CT_EMAIL_ORDER_PROCESSING = 2003,				// ORDER PASSED VALIDATION AND GOT WRITTEN TO DB, PREAUTH DONE, TRANSACTION MANAGER HAS NOT BEGUN TO PROCESS IT YET
	CT_EMAIL_ORDER_NOT_PROCESSED = 2004,			// A FAIL OCCURED THAT WILL NOT ALLOW THE ORDER TO BE PROCESSED. ALTHOUGH A PREAUTH WAS DONE, NO TRANSACTIONS WERE COMPLETED, AND DEPOSIT WAS NOT CALLED
	CT_EMAIL_ORDER_PROBLEM = 2005,					// AT LEAST ONE TRANSACTION WAS COMPLETED, ORDER WAS NOT BILLED. CSR INTERVENTION A MUST AT THIS POINT

	// 3000 - 3999 CUSTOMER EMAIL CONTENT (ENGLISH)
	CT_EMAIL_PRE_NAME_GREETING = 3001, //ALL EMAILS (ex. Dear)
	// AUTO EMAIL ONCE ORDER HAS BEEN WRITTEN TO DB AND BEFORE TRANSACTION MANAGER STARTS
	CT_EMAIL_ORDER_BEING_PROCESSED_LINE_1 = 3002,
	CT_EMAIL_ORDER_BEING_PROCESSED_LINE_2 = 3003,
	CT_EMAIL_ORDER_BEING_PROCESSED_LINE_3 = 3004,
	CT_EMAIL_ORDER_BEING_PROCESSED_LINE_4 = 3005,
	CT_EMAIL_ORDER_BEING_PROCESSED_LINE_5 = 3006,
	CT_EMAIL_ORDER_BEING_PROCESSED_LINE_6 = 3007,
	CT_EMAIL_ORDER_BEING_PROCESSED_LINE_7 = 3008,
	CT_EMAIL_ORDER_BEING_PROCESSED_LINE_8 = 3009,
	CT_EMAIL_ORDER_BEING_PROCESSED_LINE_9 = 3010,
	CT_EMAIL_ORDER_BEING_PROCESSED_CLOSING_LINE_1 = 3011,
	CT_EMAIL_ORDER_BEING_PROCESSED_CLOSING_LINE_2 = 3012,
	CT_EMAIL_ORDER_BEING_PROCESSED_CLOSING_LINE_3 = 3013,
	CT_EMAIL_ORDER_BEING_PROCESSED_CLOSING_LINE_4 = 3014,
	CT_EMAIL_ORDER_BEING_PROCESSED_CLOSING_LINE_5 = 3015,
	CT_EMAIL_ORDER_BEING_PROCESSED_CLOSING_LINE_6 = 3016,

	// EMAIL SENT TO CUSTOMER AFTER ALL TRANSACTIONS ARE SUCCESSFUL AND BILLING IS SUCCESFUL
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_LINE_1 = 3102,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_LINE_2 = 3103,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_LINE_3 = 3104,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_LINE_4 = 3105,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_LINE_5 = 3106,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_LINE_6 = 3107,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_LINE_7 = 3108,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_LINE_8 = 3109,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_LINE_9 = 3110,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_CLOSING_LINE_1 = 3111,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_CLOSING_LINE_2 = 3112,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_CLOSING_LINE_3 = 3113,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_CLOSING_LINE_4 = 3114,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_CLOSING_LINE_5 = 3115,
	CT_EMAIL_ORDER_COMPLETE_SUCCESS_CLOSING_LINE_6 = 3116,

	// EMAIL SENT TO CUSTOMER AFTER ALL TRANSACTIONS ARE COMPLETE
	// (SOME TRANSACTION MAY NOT HAVE BEEN SUCCESFUL, BUT THE CUSTOMER WAS BILLED ONLY FOR THE SUCCESSFUL ONES) AND BILLING IS SUCCESFUL
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_LINE_1 = 3202,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_LINE_2 = 3203,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_LINE_3 = 3204,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_LINE_4 = 3205,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_LINE_5 = 3206,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_LINE_6 = 3207,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_LINE_7 = 3208,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_LINE_8 = 3209,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_LINE_9 = 3210,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_CLOSING_LINE_1 = 3211,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_CLOSING_LINE_2 = 3212,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_CLOSING_LINE_3 = 3213,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_CLOSING_LINE_4 = 3214,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_CLOSING_LINE_5 = 3215,
	CT_EMAIL_ORDER_PARTIAL_SUCCESS_CLOSING_LINE_6 = 3216,

	// EMAIL SENT TO CUSTOMER IF AN ERROR OCCURED THAT PREVENTS ANY TRANSACTION BEING PROCESS. NO BILLING IS DONE.
	CT_EMAIL_ORDER_NOT_PROCESSED_LINE_1 = 3302,
	CT_EMAIL_ORDER_NOT_PROCESSED_LINE_2 = 3303,
	CT_EMAIL_ORDER_NOT_PROCESSED_LINE_3 = 3304,
	CT_EMAIL_ORDER_NOT_PROCESSED_LINE_4 = 3305,
	CT_EMAIL_ORDER_NOT_PROCESSED_LINE_5 = 3306,
	CT_EMAIL_ORDER_NOT_PROCESSED_LINE_6 = 3307,
	CT_EMAIL_ORDER_NOT_PROCESSED_LINE_7 = 3308,
	CT_EMAIL_ORDER_NOT_PROCESSED_LINE_8 = 3309,
	CT_EMAIL_ORDER_NOT_PROCESSED_LINE_9 = 3310,
	CT_EMAIL_ORDER_NOT_PROCESSED_CLOSING_LINE_1 = 3311,
	CT_EMAIL_ORDER_NOT_PROCESSED_CLOSING_LINE_2 = 3312,
	CT_EMAIL_ORDER_NOT_PROCESSED_CLOSING_LINE_3 = 3313,
	CT_EMAIL_ORDER_NOT_PROCESSED_CLOSING_LINE_4 = 3314,
	CT_EMAIL_ORDER_NOT_PROCESSED_CLOSING_LINE_5 = 3315,
	CT_EMAIL_ORDER_NOT_PROCESSED_CLOSING_LINE_6 = 3316,

	// EMAIL SENT TO CUSTOMER AFTER 1 TO ALL TRANSACTIONS ARE COMPLETE
	// BUT BILLING WAS NOT SUCCESSFUL
	CT_EMAIL_ORDER_FAILED_TO_BILL_LINE_1 = 3402,
	CT_EMAIL_ORDER_FAILED_TO_BILL_LINE_2 = 3403,
	CT_EMAIL_ORDER_FAILED_TO_BILL_LINE_3 = 3404,
	CT_EMAIL_ORDER_FAILED_TO_BILL_LINE_4 = 3405,
	CT_EMAIL_ORDER_FAILED_TO_BILL_LINE_5 = 3406,
	CT_EMAIL_ORDER_FAILED_TO_BILL_LINE_6 = 3407,
	CT_EMAIL_ORDER_FAILED_TO_BILL_LINE_7 = 3408,
	CT_EMAIL_ORDER_FAILED_TO_BILL_LINE_8 = 3409,
	CT_EMAIL_ORDER_FAILED_TO_BILL_LINE_9 = 3410,
	CT_EMAIL_ORDER_FAILED_TO_BILL_CLOSING_LINE_1 = 3411,
	CT_EMAIL_ORDER_FAILED_TO_BILL_CLOSING_LINE_2 = 3412,
	CT_EMAIL_ORDER_FAILED_TO_BILL_CLOSING_LINE_3 = 3413,
	CT_EMAIL_ORDER_FAILED_TO_BILL_CLOSING_LINE_4 = 3414,
	CT_EMAIL_ORDER_FAILED_TO_BILL_CLOSING_LINE_5 = 3415,
	CT_EMAIL_ORDER_FAILED_TO_BILL_CLOSING_LINE_6 = 3416,
	
	// INDIVIDUAL LINES IN THE CUSTOMER EMAIL THAT WILL BE APPENDED WITH INFORMATION
	// example: "YOUR ORDER TRACKING NUMBER IS:"
	CT_EMAIL_ORDER_DETAIL_FOR_ORDER_TEXT = 3500,
	CT_EMAIL_SWG_GAME_NAME_TEXT = 3501,
	CT_EMAIL_EQ_GAME_NAME_TEXT = 3502,
	CT_EMAIL_PS_GAME_NAME_TEXT = 3503,
	CT_EMAIL_EQ2_GAME_NAME_TEXT = 3504,
	CT_EMAIL_CHARACTER_TEXT = 3505,
	CT_EMAIL_SERVER_NAME_TEXT = 3506,
	CT_EMAIL_NAME_CHANGED_TO_TEXT = 3507,
	CT_EMAIL_MOVED_TO_SERVER_NAME_TEXT = 3508,
	CT_EMAIL_TRANSFERED_TO_STATION_ACCOUNT_TEXT = 3509,
	CT_EMAIL_WITH_ITEMS_TEXT = 3510,
	CT_EMAIL_WITHOUT_ITEMS_TEXT = 3511,
	CT_EMAIL_TRANSACTIONS_REQUESTED_TEXT = 3512,
	CT_EMAIL_TOTAL_RENAMES_TEXT = 3513,
	CT_EMAIL_TOTAL_SERVER_TO_SERVER_MOVES_WITH_ITMES_TEXT = 3514,
	CT_EMAIL_TOTAL_SERVER_TO_SERVER_MOVES_WITHOUT_ITMES_TEXT = 3515,
	CT_EMAIL_TOTAL_ACCOUNT_TO_ACCOUNT_TRANSFERS_WITH_ITEMS_TEXT = 3516,
	CT_EMAIL_TOTAL_ACCOUNT_TO_ACCOUNT_TRANSFERS_WITHOUT_ITEMS_TEXT = 3517,
	CT_EMAIL_SUBTOTAL_FOR_ALL_TRANSACTIONS_BILLED_TEXT = 3518,
	CT_EMAIL_TAX_FOR_ALL_TRANSACTIONS_BILLED_TEXT = 3519,
	CT_EMAIL_VAT_TAX_FOR_ALL_TRANSACTIONS_BILLED_TEXT = 3520,
	CT_EMAIL_DISCOUNTS_FOR_ALL_TRANSACTIONS_BILLED_TEXT = 3521,
	CT_EMAIL_TOTAL_AMOUNT_BILLED_TEXT = 3522,
	CT_EMAIL_FAILED_TO_MOVE_TO_SERVER_TEXT = 3523,
	CT_EMAIL_FAILED_TO_RENAME_CHARACTER_TEXT = 3524,
	CT_EMAIL_FAILED_TO_TRANSFER_CHARACTER_TO_STATION_ACCOUNT_TEXT = 3525,
	CT_EMAIL_REASON_TEXT = 3526,
	CT_EMAIL_TRANSACTIONS_BILLED_TEXT = 3527,
	CT_EMAIL_YOUR_ORDER_TRACKING_NUMBER_TEXT = 3528,
	CT_EMAIL_OVERRIDE_TRUE_TEXT = 3529,
	CT_EMAIL_OVERRIDE_FALSE_TEXT = 3530,





};
/*
enum StationAccountStatus
{
    ACCOUNT_STATUS_NULL,                            //  Invalid account status
    ACCOUNT_STATUS_ACTIVE,
    ACCOUNT_STATUS_CLOSED,
    //  Add new account status codes here
    ACCOUNT_STATUS_END
};
*/
}; // namespace

#endif
