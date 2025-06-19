#ifndef CA_BLOCK_MONITOR_HEADER_GUARD
#define CA_BLOCK_MONITOR_HEADER_GUARD

#include <net/if.h>
#include <unistd.h>
#include <iostream>
#include <unistd.h>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <shared_mutex>
#include <mutex>

#include "../ca/global.h"
#include "../net/node.hpp"
#include "../net/peer_node.h"
#include "utils/magic_singleton.h"
#include "../include/logging.h"
#include "../proto/ca_protomsg.pb.h"
#include "../proto/block.pb.h"
#include "net/interface.h"
#include "utils/time_util.h"

/**
 * @brief       
 * 
 */
class BlockMonitor
{
public:
    BlockMonitor() = default;
    ~BlockMonitor() = default;
    BlockMonitor(BlockMonitor &&) = delete;
    BlockMonitor(const BlockMonitor &) = delete;
    BlockMonitor &operator=(BlockMonitor &&) = delete;
    BlockMonitor &operator=(const BlockMonitor &) = delete;

    /**
     * @brief       
     * 
     * @param       strBlock: 
     * @param       blockHeight: 
     * @return      int 
     */
    int sendBroadcastAddBlockRequest(std::string strBlock, uint64_t blockHeight);
    
    void dropshippingTxVec(const std::string& txHash);
    void addDoHandleTransactionVector(const std::string& txHash);
    void transactionSuccessRateChecker();

private:
    static uint32_t _maxSendSize;

    /**
     * @brief       
     * 
     */
    struct BlockAck
    {
        uint32_t isResponse = 0;
        std::string  id;
    };

    std::mutex mutex_;
    std::vector<std::string> dropshipping_tx_vec;
    std::vector<std::string> handleTransactionVector;

};  

#endif

