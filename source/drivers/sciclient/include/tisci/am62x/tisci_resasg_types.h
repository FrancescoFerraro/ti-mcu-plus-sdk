/*
 *  Copyright (C) 2017-2023 Texas Instruments Incorporated
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
/**
 * \ingroup TISCI
 * \defgroup tisci_resasg_types tisci_resasg_types
 *
 * DMSC controls the power management, security and resource management
 * of the device.
 *
 *
 * @{
 */
/**
 *
 *  \brief  This file contains:
 *
 *          WARNING!!: Autogenerated file from SYSFW. DO NOT MODIFY!!
 * Resource Management
 *
 * Resource Assignment Subtype definitions
 *
 * Data version: 221107_151433
 *
 */
#ifndef TISCI_RESASG_TYPES_H
#define TISCI_RESASG_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif


/**
 * Resource assignment type shift
 */
#define TISCI_RESASG_TYPE_SHIFT (0x0006U)
/**
 * Resource assignment type mask
 */
#define TISCI_RESASG_TYPE_MASK (0xFFC0U)
/**
 * Resource assignment subtype shift
 */
#define TISCI_RESASG_SUBTYPE_SHIFT (0x0000U)
/**
 * Resource assignment subtype mask
 */
#define TISCI_RESASG_SUBTYPE_MASK (0x003FU)
/**
 * Macro to create unique resource assignment types using type and subtype
 */

#define TISCI_RESASG_UTYPE(type, subtype) \
    (((type << TISCI_RESASG_TYPE_SHIFT) & TISCI_RESASG_TYPE_MASK) | \
     ((subtype << TISCI_RESASG_SUBTYPE_SHIFT) & TISCI_RESASG_SUBTYPE_MASK))

/**
 * IA subtypes definitions
 */
#define TISCI_RESASG_SUBTYPE_IA_VINT (0x000AU)
#define TISCI_RESASG_SUBTYPE_GLOBAL_EVENT_GEVT (0x000BU)
#define TISCI_RESASG_SUBTYPE_GLOBAL_EVENT_MEVT (0x000CU)
#define TISCI_RESASG_SUBTYPE_GLOBAL_EVENT_SEVT (0x000DU)
#define TISCI_RESASG_SUBTYPE_GLOBAL_EVENT_LEVT (0x000EU)
#define TISCI_RESASG_SUBTYPE_IA_TIMERMGR_EVT_OES (0x000FU)
#define TISCI_RESASG_SUBTYPE_IA_PKTDMA_TX_CHAN_ERROR_OES (0x0010U)
#define TISCI_RESASG_SUBTYPE_IA_PKTDMA_TX_FLOW_COMPLETION_OES (0x0011U)
#define TISCI_RESASG_SUBTYPE_IA_PKTDMA_RX_CHAN_ERROR_OES (0x0012U)
#define TISCI_RESASG_SUBTYPE_IA_PKTDMA_RX_FLOW_COMPLETION_OES (0x0013U)
#define TISCI_RESASG_SUBTYPE_IA_PKTDMA_RX_FLOW_STARVATION_OES (0x0014U)
#define TISCI_RESASG_SUBTYPE_IA_PKTDMA_RX_FLOW_FIREWALL_OES (0x0015U)
#define TISCI_RESASG_SUBTYPE_IA_BCDMA_CHAN_ERROR_OES (0x0016U)
#define TISCI_RESASG_SUBTYPE_IA_BCDMA_CHAN_DATA_COMPLETION_OES (0x0017U)
#define TISCI_RESASG_SUBTYPE_IA_BCDMA_CHAN_RING_COMPLETION_OES (0x0018U)
#define TISCI_RESASG_SUBTYPE_IA_BCDMA_TX_CHAN_ERROR_OES (0x0019U)
#define TISCI_RESASG_SUBTYPE_IA_BCDMA_TX_CHAN_DATA_COMPLETION_OES (0x001AU)
#define TISCI_RESASG_SUBTYPE_IA_BCDMA_TX_CHAN_RING_COMPLETION_OES (0x001BU)
#define TISCI_RESASG_SUBTYPE_IA_BCDMA_RX_CHAN_ERROR_OES (0x001CU)
#define TISCI_RESASG_SUBTYPE_IA_BCDMA_RX_CHAN_DATA_COMPLETION_OES (0x001DU)
#define TISCI_RESASG_SUBTYPE_IA_BCDMA_RX_CHAN_RING_COMPLETION_OES (0x001EU)
#define TISCI_RESASG_SUBTYPES_IA_CNT (0x0015U)

/**
 * IR subtypes definitions
 */
#define TISCI_RESASG_SUBTYPE_IR_OUTPUT (0x0000U)
#define TISCI_RESASG_SUBTYPES_IR_CNT (0x0001U)

/**
 * RA subtypes definitions
 */
#define TISCI_RESASG_SUBTYPE_RA_ERROR_OES (0x0000U)
#define TISCI_RESASG_SUBTYPE_RA_VIRTID (0x000AU)
#define TISCI_RESASG_SUBTYPE_BCDMA_RING_BLOCK_COPY_CHAN (0x000DU)
#define TISCI_RESASG_SUBTYPE_BCDMA_RING_SPLIT_TR_RX_CHAN (0x000EU)
#define TISCI_RESASG_SUBTYPE_BCDMA_RING_SPLIT_TR_TX_CHAN (0x000FU)
#define TISCI_RESASG_SUBTYPE_PKTDMA_RING_UNMAPPED_TX_CHAN (0x0010U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_RING_CPSW_TX_CHAN (0x0011U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_RING_SAUL_TX_0_CHAN (0x0012U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_RING_SAUL_TX_1_CHAN (0x0013U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_RING_UNMAPPED_RX_CHAN (0x0016U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_RING_CPSW_RX_CHAN (0x0017U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_RING_SAUL_RX_0_CHAN (0x0018U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_RING_SAUL_RX_1_CHAN (0x0019U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_RING_SAUL_RX_2_CHAN (0x001AU)
#define TISCI_RESASG_SUBTYPE_PKTDMA_RING_SAUL_RX_3_CHAN (0x001BU)
#define TISCI_RESASG_SUBTYPES_RA_CNT (0x000FU)

/**
 * UDMAP subtypes definitions
 */
#define TISCI_RESASG_SUBTYPE_GLOBAL_EVENT_TRIGGER (0x0002U)
#define TISCI_RESASG_SUBTYPE_UDMAP_GLOBAL_CONFIG (0x0003U)
#define TISCI_RESASG_SUBTYPE_BCDMA_BLOCK_COPY_CHAN (0x0020U)
#define TISCI_RESASG_SUBTYPE_BCDMA_SPLIT_TR_RX_CHAN (0x0021U)
#define TISCI_RESASG_SUBTYPE_BCDMA_SPLIT_TR_TX_CHAN (0x0022U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_UNMAPPED_TX_CHAN (0x0023U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_CPSW_TX_CHAN (0x0024U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_SAUL_TX_0_CHAN (0x0025U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_SAUL_TX_1_CHAN (0x0026U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_UNMAPPED_RX_CHAN (0x0029U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_FLOW_UNMAPPED_RX_CHAN (0x002AU)
#define TISCI_RESASG_SUBTYPE_PKTDMA_CPSW_RX_CHAN (0x002BU)
#define TISCI_RESASG_SUBTYPE_PKTDMA_FLOW_CPSW_RX_CHAN (0x002CU)
#define TISCI_RESASG_SUBTYPE_PKTDMA_SAUL_RX_0_CHAN (0x002DU)
#define TISCI_RESASG_SUBTYPE_PKTDMA_FLOW_SAUL_RX_0_CHAN (0x002EU)
#define TISCI_RESASG_SUBTYPE_PKTDMA_SAUL_RX_1_CHAN (0x002FU)
#define TISCI_RESASG_SUBTYPE_PKTDMA_FLOW_SAUL_RX_1_CHAN (0x0030U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_SAUL_RX_2_CHAN (0x0031U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_FLOW_SAUL_RX_2_CHAN (0x0032U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_SAUL_RX_3_CHAN (0x0033U)
#define TISCI_RESASG_SUBTYPE_PKTDMA_FLOW_SAUL_RX_3_CHAN (0x0034U)
#define TISCI_RESASG_SUBTYPES_UDMAP_CNT (0x0015U)


/**
 * Total number of unique resource types for SoC
 */
#define TISCI_RESASG_UTYPE_CNT 61U

/**
 * Total number of resource entries allowed for SoC
 */
#define TISCI_RESASG_ENTRIES_MAX (TISCI_RESASG_UTYPE_CNT * 5U)


#ifdef __cplusplus
}
#endif

#endif /* TISCI_RESASG_TYPES_H */

/** @} */
