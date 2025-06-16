#ifndef _HTTP_RPC_
#define _HTTP_RPC_
#include "../../net/http_server.h"
#include "../../net/unregister_node.h"
#include "../../net/httplib.h"
#include "test.h"



void InitializeHttpCallbacks();

/**
 * @brief  
 * @param  req: 
 * @param  res: 
 */
void _ApiJsonRpc(const Request & req, Response & res);
/**
 * @brief  
 * @param  req: 
 * @param  res: 
 */
void getTxInfo(const Request &req,Response &res);

/**
 * @brief  Get the Stake object
 * @param  req: 
 * @param  res: 
 */
void _GetStake(const Request & req, Response & res);

/**
 * @brief  Get the Unstake object
 * @param  req: 
 * @param  res: 
 */
void _GetUnstake(const Request & req, Response & res);

/**
 * @brief  Get the Delegating object
 * @param  req: 
 * @param  res: 
 */
void _GetDelegating(const Request & req, Response & res);

/**
 * @brief  Get the Undelegating object
 * @param  req: 
 * @param  res: 
 */
void _GetUndelegating(const Request & req, Response & res);

/**
 * @brief  Get stake rates info and other messages
 * @param  req: 
 * @param  res: 
 */
void _ApiGetYieldInfo(const Request &req,Response &res);
/**
 * @brief  Get the Bonus object
 * @param  req: 
 * @param  res: 
 */
void _GetBonus(const Request & req, Response & res);


/**
 * @brief  Get the Undelegating Utxo object
 * @param  req: 
 * @param  res: 
 */
void _GetUndelegatingUtxo(const Request & req, Response & res);
/**
 * @brief  Get the Stake Utxo object
 * @param  req: 
 * @param  res: 
 */
void _GetStakeUtxo(const Request & req, Response & res);
/**
 * @brief  Get the Transaction object
 * @param  req: 
 * @param  res: 
 */
void _GetTransaction(const Request & req, Response & res);
/**
 * @brief  
 * @param  req: 
 * @param  res: 
 */
void _DeployContract(const Request & req, Response & res);
/**
 * @brief  
 * @param  req: 
 * @param  res: 
 */
void _CallContract(const Request & req, Response & res);
/**
 * @brief  
 * @param  req: 
 * @param  res: 
 */
void _ApiGetAllBonusInfo(const Request &req,Response &res);
/**
 * @brief  Get the All Stake Node List Acknowledge object
 * @param  req: 
 * @param  res: 
 */
void _GetAllStakeNodes(const Request & req,Response & res);
/**
 * @brief  Confirm whether a high level transaction is on the chain through the whole network
 * @param  req: 
 * @param  res: 
 */
void _ConfirmTransaction(const Request & req, Response & res);
/**
 * @brief  Get the BlockNumber object
 * @param  req: 
 * @param  res: 
 */
void _GetBlockHeight(const Request &req, Response &res);
/**
 * @brief  Get the Version object
 * @param  req: 
 * @param  res: 
 */
void _GetVersion(const Request &req, Response &res);
/**
 * @brief  Get the Balance object
 * @param  req: 
 * @param  res: 
 */
void _GetBalance(const Request &req, Response &res);
/**
 * @brief  Get the TransactionCount object
 * @param  req: 
 * @param  res: 
 */
void _GetBlockTransactionCountByHash(const Request &req, Response &res);
/**
 * @brief  Get the Accounts object
 * @param  req: 
 * @param  res: 
 */
void _GetAccounts(const Request &req, Response &res);
/**
 * @brief  Get the ChainId object
 * @param  req: 
 * @param  res: 
 */
void _GetChainId(const Request &req, Response &res);
/**
 * @brief  Get the PeerList object
 * @param  req: 
 * @param  res: 
 */
void _GetPeerList(const Request &req, Response &res) ;
/**
 * @brief  Get the Transaction object
 * @param  req: 
 * @param  res: 
 */
void _ApiIp(const Request &req, Response &res);
/**
 * @brief  Get the Transaction object
 * @param  req: 
 * @param  res: 
 */
void _ApiPub(const Request &req, Response &res);
void _ApiNode(const Request &req, Response &res);
void _ApiAccount(const Request &req, Response &res);

void _GetAddrType(const Request &req, Response &res);
void _GetBonusAddrByDelegatingAddr(const Request &req, Response &res);

void _ShowValidatedVRFs(const Request &req, Response &res);
void _ShowNewValidatedVRFs(const Request &req, Response &res);

void getTransactionInfo(const Request &req,Response &res);
void RetrieveBlockByTxHash(const Request & req, Response & res);
void _ApiGetBlockByHash(const Request &req,Response &res);
void _ApiGetBlockByHeight(const Request &req,Response &res);
void _ApiSendMessage(const Request &req, Response &res);
void handleSendContractMessage(const Request &req, Response &res);
void fetch_delegate_info_request(const Request &req, Response &res);

void _ApiGetBlock(const Request & req, Response & res);
void print_block_info(const Request & req, Response & res);
void _GetRequesterIP(const Request &req, Response & res);

void _ApiPrintHundredSumHash(const Request & req, Response & res);
void _ApiPrintCalc1000SumHash(const Request &req,Response &res);
void _ApiPrintAllBlocks(const Request &req,Response &res);
void _GetAllSystemInfo(const Request &req, Response &res);

//vote==============================
void _ApiPrintVoteInfo(const Request &req,Response &res);
void _ApiPrintLockAddrs(const Request &req,Response &res);
void _ApiPrintProposalInfo(const Request &req,Response &res);
void _ApiPrintAvailableAssetType(const Request &req,Response &res);
void _ApiGetAsseTypeByContractAddr(const Request &req,Response &res);

void _ApiGetAssetType(const Request & req, Response & res);
void _ApiGetAssetTypeInfo(const Request & req, Response & res);
void _ApiGetVoteAddrsByHash(const Request & req, Response & res);
void _ApiGetVoteTxHashByAssetType(const Request & req, Response & res);

void _GetLock(const Request &req,Response &res);
void _GetLockUtxo(const Request & req, Response & res);
void _GetUnLock(const Request & req, Response & res);
void _GetProposal(const Request & req, Response & res);
void _GetRevokeProposal(const Request & req, Response & res);
void _GetVote(const Request & req, Response & res);
void _GetFund(const Request & req, Response & res);
//==================================

#endif
