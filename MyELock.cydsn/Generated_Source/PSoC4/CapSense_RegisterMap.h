/***************************************************************************//**
* \file CapSense_RegisterMap.h
* \version 6.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense v6.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2018), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_REGISTER_MAP_H)
#define CY_SENSE_CapSense_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_Configuration.h"
#include "CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_CONFIG_ID_VALUE                            (CapSense_dsRam.configId)
#define CapSense_CONFIG_ID_OFFSET                           (0u)
#define CapSense_CONFIG_ID_SIZE                             (2u)
#define CapSense_CONFIG_ID_PARAM_ID                         (0x87000000u)

#define CapSense_DEVICE_ID_VALUE                            (CapSense_dsRam.deviceId)
#define CapSense_DEVICE_ID_OFFSET                           (2u)
#define CapSense_DEVICE_ID_SIZE                             (2u)
#define CapSense_DEVICE_ID_PARAM_ID                         (0x8B000002u)

#define CapSense_HW_CLOCK_VALUE                             (CapSense_dsRam.hwClock)
#define CapSense_HW_CLOCK_OFFSET                            (4u)
#define CapSense_HW_CLOCK_SIZE                              (2u)
#define CapSense_HW_CLOCK_PARAM_ID                          (0x86000004u)

#define CapSense_TUNER_CMD_VALUE                            (CapSense_dsRam.tunerCmd)
#define CapSense_TUNER_CMD_OFFSET                           (6u)
#define CapSense_TUNER_CMD_SIZE                             (2u)
#define CapSense_TUNER_CMD_PARAM_ID                         (0xA1000006u)

#define CapSense_SCAN_COUNTER_VALUE                         (CapSense_dsRam.scanCounter)
#define CapSense_SCAN_COUNTER_OFFSET                        (8u)
#define CapSense_SCAN_COUNTER_SIZE                          (2u)
#define CapSense_SCAN_COUNTER_PARAM_ID                      (0x85000008u)

#define CapSense_STATUS_VALUE                               (CapSense_dsRam.status)
#define CapSense_STATUS_OFFSET                              (12u)
#define CapSense_STATUS_SIZE                                (4u)
#define CapSense_STATUS_PARAM_ID                            (0xCB00000Cu)

#define CapSense_WDGT_ENABLE0_VALUE                         (CapSense_dsRam.wdgtEnable[0u])
#define CapSense_WDGT_ENABLE0_OFFSET                        (16u)
#define CapSense_WDGT_ENABLE0_SIZE                          (4u)
#define CapSense_WDGT_ENABLE0_PARAM_ID                      (0xE6000010u)

#define CapSense_WDGT_WORKING0_VALUE                        (CapSense_dsRam.wdgtWorking[0u])
#define CapSense_WDGT_WORKING0_OFFSET                       (20u)
#define CapSense_WDGT_WORKING0_SIZE                         (4u)
#define CapSense_WDGT_WORKING0_PARAM_ID                     (0xCC000014u)

#define CapSense_WDGT_STATUS0_VALUE                         (CapSense_dsRam.wdgtStatus[0u])
#define CapSense_WDGT_STATUS0_OFFSET                        (24u)
#define CapSense_WDGT_STATUS0_SIZE                          (4u)
#define CapSense_WDGT_STATUS0_PARAM_ID                      (0xCF000018u)

#define CapSense_SNS_STATUS0_VALUE                          (CapSense_dsRam.snsStatus[0u])
#define CapSense_SNS_STATUS0_OFFSET                         (28u)
#define CapSense_SNS_STATUS0_SIZE                           (1u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0x4900001Cu)

#define CapSense_SNS_STATUS1_VALUE                          (CapSense_dsRam.snsStatus[1u])
#define CapSense_SNS_STATUS1_OFFSET                         (29u)
#define CapSense_SNS_STATUS1_SIZE                           (1u)
#define CapSense_SNS_STATUS1_PARAM_ID                       (0x4F00001Du)

#define CapSense_SNS_STATUS2_VALUE                          (CapSense_dsRam.snsStatus[2u])
#define CapSense_SNS_STATUS2_OFFSET                         (30u)
#define CapSense_SNS_STATUS2_SIZE                           (1u)
#define CapSense_SNS_STATUS2_PARAM_ID                       (0x4500001Eu)

#define CapSense_SNS_STATUS3_VALUE                          (CapSense_dsRam.snsStatus[3u])
#define CapSense_SNS_STATUS3_OFFSET                         (31u)
#define CapSense_SNS_STATUS3_SIZE                           (1u)
#define CapSense_SNS_STATUS3_PARAM_ID                       (0x4300001Fu)

#define CapSense_SNS_STATUS4_VALUE                          (CapSense_dsRam.snsStatus[4u])
#define CapSense_SNS_STATUS4_OFFSET                         (32u)
#define CapSense_SNS_STATUS4_SIZE                           (1u)
#define CapSense_SNS_STATUS4_PARAM_ID                       (0x45000020u)

#define CapSense_SNS_STATUS5_VALUE                          (CapSense_dsRam.snsStatus[5u])
#define CapSense_SNS_STATUS5_OFFSET                         (33u)
#define CapSense_SNS_STATUS5_SIZE                           (1u)
#define CapSense_SNS_STATUS5_PARAM_ID                       (0x43000021u)

#define CapSense_SNS_STATUS6_VALUE                          (CapSense_dsRam.snsStatus[6u])
#define CapSense_SNS_STATUS6_OFFSET                         (34u)
#define CapSense_SNS_STATUS6_SIZE                           (1u)
#define CapSense_SNS_STATUS6_PARAM_ID                       (0x49000022u)

#define CapSense_SNS_STATUS7_VALUE                          (CapSense_dsRam.snsStatus[7u])
#define CapSense_SNS_STATUS7_OFFSET                         (35u)
#define CapSense_SNS_STATUS7_SIZE                           (1u)
#define CapSense_SNS_STATUS7_PARAM_ID                       (0x4F000023u)

#define CapSense_SNS_STATUS8_VALUE                          (CapSense_dsRam.snsStatus[8u])
#define CapSense_SNS_STATUS8_OFFSET                         (36u)
#define CapSense_SNS_STATUS8_SIZE                           (1u)
#define CapSense_SNS_STATUS8_PARAM_ID                       (0x44000024u)

#define CapSense_SNS_STATUS9_VALUE                          (CapSense_dsRam.snsStatus[9u])
#define CapSense_SNS_STATUS9_OFFSET                         (37u)
#define CapSense_SNS_STATUS9_SIZE                           (1u)
#define CapSense_SNS_STATUS9_PARAM_ID                       (0x42000025u)

#define CapSense_SNS_STATUS10_VALUE                         (CapSense_dsRam.snsStatus[10u])
#define CapSense_SNS_STATUS10_OFFSET                        (38u)
#define CapSense_SNS_STATUS10_SIZE                          (1u)
#define CapSense_SNS_STATUS10_PARAM_ID                      (0x48000026u)

#define CapSense_SNS_STATUS11_VALUE                         (CapSense_dsRam.snsStatus[11u])
#define CapSense_SNS_STATUS11_OFFSET                        (39u)
#define CapSense_SNS_STATUS11_SIZE                          (1u)
#define CapSense_SNS_STATUS11_PARAM_ID                      (0x4E000027u)

#define CapSense_SNS_STATUS12_VALUE                         (CapSense_dsRam.snsStatus[12u])
#define CapSense_SNS_STATUS12_OFFSET                        (40u)
#define CapSense_SNS_STATUS12_SIZE                          (1u)
#define CapSense_SNS_STATUS12_PARAM_ID                      (0x47000028u)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (42u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xA580002Au)

#define CapSense_MOD_CSD_CLK_VALUE                          (CapSense_dsRam.modCsdClk)
#define CapSense_MOD_CSD_CLK_OFFSET                         (44u)
#define CapSense_MOD_CSD_CLK_SIZE                           (1u)
#define CapSense_MOD_CSD_CLK_PARAM_ID                       (0x6080002Cu)

#define CapSense_SNS_CSD_CLK_VALUE                          (CapSense_dsRam.snsCsdClk)
#define CapSense_SNS_CSD_CLK_OFFSET                         (46u)
#define CapSense_SNS_CSD_CLK_SIZE                           (2u)
#define CapSense_SNS_CSD_CLK_PARAM_ID                       (0xA480002Eu)

#define CapSense_GLB_CRC_VALUE                              (CapSense_dsRam.glbCrc)
#define CapSense_GLB_CRC_OFFSET                             (48u)
#define CapSense_GLB_CRC_SIZE                               (2u)
#define CapSense_GLB_CRC_PARAM_ID                           (0x88000030u)

#define CapSense_BUTTON0_CRC_VALUE                          (CapSense_dsRam.wdgtList.button0.crc)
#define CapSense_BUTTON0_CRC_OFFSET                         (50u)
#define CapSense_BUTTON0_CRC_SIZE                           (2u)
#define CapSense_BUTTON0_CRC_PARAM_ID                       (0x84000032u)

#define CapSense_BUTTON0_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button0.resolution)
#define CapSense_BUTTON0_RESOLUTION_OFFSET                  (52u)
#define CapSense_BUTTON0_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON0_RESOLUTION_PARAM_ID                (0xAF800034u)

#define CapSense_BUTTON0_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button0.fingerTh)
#define CapSense_BUTTON0_FINGER_TH_OFFSET                   (54u)
#define CapSense_BUTTON0_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON0_FINGER_TH_PARAM_ID                 (0xA3800036u)

#define CapSense_BUTTON0_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button0.noiseTh)
#define CapSense_BUTTON0_NOISE_TH_OFFSET                    (56u)
#define CapSense_BUTTON0_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON0_NOISE_TH_PARAM_ID                  (0x64800038u)

#define CapSense_BUTTON0_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_BUTTON0_NNOISE_TH_OFFSET                   (57u)
#define CapSense_BUTTON0_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON0_NNOISE_TH_PARAM_ID                 (0x62800039u)

#define CapSense_BUTTON0_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button0.hysteresis)
#define CapSense_BUTTON0_HYSTERESIS_OFFSET                  (58u)
#define CapSense_BUTTON0_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON0_HYSTERESIS_PARAM_ID                (0x6880003Au)

#define CapSense_BUTTON0_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button0.onDebounce)
#define CapSense_BUTTON0_ON_DEBOUNCE_OFFSET                 (59u)
#define CapSense_BUTTON0_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON0_ON_DEBOUNCE_PARAM_ID               (0x6E80003Bu)

#define CapSense_BUTTON0_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_BUTTON0_LOW_BSLN_RST_OFFSET                (60u)
#define CapSense_BUTTON0_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON0_LOW_BSLN_RST_PARAM_ID              (0x6580003Cu)

#define CapSense_BUTTON0_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_BUTTON0_IDAC_MOD0_OFFSET                   (61u)
#define CapSense_BUTTON0_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON0_IDAC_MOD0_PARAM_ID                 (0x4500003Du)

#define CapSense_BUTTON0_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_OFFSET              (62u)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_PARAM_ID            (0x4280003Eu)

#define CapSense_BUTTON1_CRC_VALUE                          (CapSense_dsRam.wdgtList.button1.crc)
#define CapSense_BUTTON1_CRC_OFFSET                         (64u)
#define CapSense_BUTTON1_CRC_SIZE                           (2u)
#define CapSense_BUTTON1_CRC_PARAM_ID                       (0x89010040u)

#define CapSense_BUTTON1_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button1.resolution)
#define CapSense_BUTTON1_RESOLUTION_OFFSET                  (66u)
#define CapSense_BUTTON1_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON1_RESOLUTION_PARAM_ID                (0xA3810042u)

#define CapSense_BUTTON1_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button1.fingerTh)
#define CapSense_BUTTON1_FINGER_TH_OFFSET                   (68u)
#define CapSense_BUTTON1_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON1_FINGER_TH_PARAM_ID                 (0xAE810044u)

#define CapSense_BUTTON1_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button1.noiseTh)
#define CapSense_BUTTON1_NOISE_TH_OFFSET                    (70u)
#define CapSense_BUTTON1_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON1_NOISE_TH_PARAM_ID                  (0x6A810046u)

#define CapSense_BUTTON1_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_BUTTON1_NNOISE_TH_OFFSET                   (71u)
#define CapSense_BUTTON1_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON1_NNOISE_TH_PARAM_ID                 (0x6C810047u)

#define CapSense_BUTTON1_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button1.hysteresis)
#define CapSense_BUTTON1_HYSTERESIS_OFFSET                  (72u)
#define CapSense_BUTTON1_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON1_HYSTERESIS_PARAM_ID                (0x65810048u)

#define CapSense_BUTTON1_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button1.onDebounce)
#define CapSense_BUTTON1_ON_DEBOUNCE_OFFSET                 (73u)
#define CapSense_BUTTON1_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON1_ON_DEBOUNCE_PARAM_ID               (0x63810049u)

#define CapSense_BUTTON1_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_BUTTON1_LOW_BSLN_RST_OFFSET                (74u)
#define CapSense_BUTTON1_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON1_LOW_BSLN_RST_PARAM_ID              (0x6981004Au)

#define CapSense_BUTTON1_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button1.idacMod[0u])
#define CapSense_BUTTON1_IDAC_MOD0_OFFSET                   (75u)
#define CapSense_BUTTON1_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON1_IDAC_MOD0_PARAM_ID                 (0x4901004Bu)

#define CapSense_BUTTON1_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_BUTTON1_SNS_CLK_SOURCE_OFFSET              (76u)
#define CapSense_BUTTON1_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON1_SNS_CLK_SOURCE_PARAM_ID            (0x4F81004Cu)

#define CapSense_BUTTON2_CRC_VALUE                          (CapSense_dsRam.wdgtList.button2.crc)
#define CapSense_BUTTON2_CRC_OFFSET                         (78u)
#define CapSense_BUTTON2_CRC_SIZE                           (2u)
#define CapSense_BUTTON2_CRC_PARAM_ID                       (0x8302004Eu)

#define CapSense_BUTTON2_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button2.resolution)
#define CapSense_BUTTON2_RESOLUTION_OFFSET                  (80u)
#define CapSense_BUTTON2_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON2_RESOLUTION_PARAM_ID                (0xAF820050u)

#define CapSense_BUTTON2_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button2.fingerTh)
#define CapSense_BUTTON2_FINGER_TH_OFFSET                   (82u)
#define CapSense_BUTTON2_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON2_FINGER_TH_PARAM_ID                 (0xA3820052u)

#define CapSense_BUTTON2_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button2.noiseTh)
#define CapSense_BUTTON2_NOISE_TH_OFFSET                    (84u)
#define CapSense_BUTTON2_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON2_NOISE_TH_PARAM_ID                  (0x66820054u)

#define CapSense_BUTTON2_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button2.nNoiseTh)
#define CapSense_BUTTON2_NNOISE_TH_OFFSET                   (85u)
#define CapSense_BUTTON2_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON2_NNOISE_TH_PARAM_ID                 (0x60820055u)

#define CapSense_BUTTON2_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button2.hysteresis)
#define CapSense_BUTTON2_HYSTERESIS_OFFSET                  (86u)
#define CapSense_BUTTON2_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON2_HYSTERESIS_PARAM_ID                (0x6A820056u)

#define CapSense_BUTTON2_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button2.onDebounce)
#define CapSense_BUTTON2_ON_DEBOUNCE_OFFSET                 (87u)
#define CapSense_BUTTON2_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON2_ON_DEBOUNCE_PARAM_ID               (0x6C820057u)

#define CapSense_BUTTON2_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button2.lowBslnRst)
#define CapSense_BUTTON2_LOW_BSLN_RST_OFFSET                (88u)
#define CapSense_BUTTON2_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON2_LOW_BSLN_RST_PARAM_ID              (0x65820058u)

#define CapSense_BUTTON2_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button2.idacMod[0u])
#define CapSense_BUTTON2_IDAC_MOD0_OFFSET                   (89u)
#define CapSense_BUTTON2_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON2_IDAC_MOD0_PARAM_ID                 (0x45020059u)

#define CapSense_BUTTON2_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button2.snsClkSource)
#define CapSense_BUTTON2_SNS_CLK_SOURCE_OFFSET              (90u)
#define CapSense_BUTTON2_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON2_SNS_CLK_SOURCE_PARAM_ID            (0x4282005Au)

#define CapSense_BUTTON3_CRC_VALUE                          (CapSense_dsRam.wdgtList.button3.crc)
#define CapSense_BUTTON3_CRC_OFFSET                         (92u)
#define CapSense_BUTTON3_CRC_SIZE                           (2u)
#define CapSense_BUTTON3_CRC_PARAM_ID                       (0x8903005Cu)

#define CapSense_BUTTON3_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button3.resolution)
#define CapSense_BUTTON3_RESOLUTION_OFFSET                  (94u)
#define CapSense_BUTTON3_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON3_RESOLUTION_PARAM_ID                (0xA383005Eu)

#define CapSense_BUTTON3_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button3.fingerTh)
#define CapSense_BUTTON3_FINGER_TH_OFFSET                   (96u)
#define CapSense_BUTTON3_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON3_FINGER_TH_PARAM_ID                 (0xA3830060u)

#define CapSense_BUTTON3_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button3.noiseTh)
#define CapSense_BUTTON3_NOISE_TH_OFFSET                    (98u)
#define CapSense_BUTTON3_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON3_NOISE_TH_PARAM_ID                  (0x67830062u)

#define CapSense_BUTTON3_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button3.nNoiseTh)
#define CapSense_BUTTON3_NNOISE_TH_OFFSET                   (99u)
#define CapSense_BUTTON3_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON3_NNOISE_TH_PARAM_ID                 (0x61830063u)

#define CapSense_BUTTON3_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button3.hysteresis)
#define CapSense_BUTTON3_HYSTERESIS_OFFSET                  (100u)
#define CapSense_BUTTON3_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON3_HYSTERESIS_PARAM_ID                (0x6A830064u)

#define CapSense_BUTTON3_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button3.onDebounce)
#define CapSense_BUTTON3_ON_DEBOUNCE_OFFSET                 (101u)
#define CapSense_BUTTON3_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON3_ON_DEBOUNCE_PARAM_ID               (0x6C830065u)

#define CapSense_BUTTON3_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button3.lowBslnRst)
#define CapSense_BUTTON3_LOW_BSLN_RST_OFFSET                (102u)
#define CapSense_BUTTON3_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON3_LOW_BSLN_RST_PARAM_ID              (0x66830066u)

#define CapSense_BUTTON3_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button3.idacMod[0u])
#define CapSense_BUTTON3_IDAC_MOD0_OFFSET                   (103u)
#define CapSense_BUTTON3_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON3_IDAC_MOD0_PARAM_ID                 (0x46030067u)

#define CapSense_BUTTON3_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button3.snsClkSource)
#define CapSense_BUTTON3_SNS_CLK_SOURCE_OFFSET              (104u)
#define CapSense_BUTTON3_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON3_SNS_CLK_SOURCE_PARAM_ID            (0x42830068u)

#define CapSense_BUTTON4_CRC_VALUE                          (CapSense_dsRam.wdgtList.button4.crc)
#define CapSense_BUTTON4_CRC_OFFSET                         (106u)
#define CapSense_BUTTON4_CRC_SIZE                           (2u)
#define CapSense_BUTTON4_CRC_PARAM_ID                       (0x8204006Au)

#define CapSense_BUTTON4_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button4.resolution)
#define CapSense_BUTTON4_RESOLUTION_OFFSET                  (108u)
#define CapSense_BUTTON4_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON4_RESOLUTION_PARAM_ID                (0xA984006Cu)

#define CapSense_BUTTON4_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button4.fingerTh)
#define CapSense_BUTTON4_FINGER_TH_OFFSET                   (110u)
#define CapSense_BUTTON4_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON4_FINGER_TH_PARAM_ID                 (0xA584006Eu)

#define CapSense_BUTTON4_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button4.noiseTh)
#define CapSense_BUTTON4_NOISE_TH_OFFSET                    (112u)
#define CapSense_BUTTON4_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON4_NOISE_TH_PARAM_ID                  (0x67840070u)

#define CapSense_BUTTON4_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button4.nNoiseTh)
#define CapSense_BUTTON4_NNOISE_TH_OFFSET                   (113u)
#define CapSense_BUTTON4_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON4_NNOISE_TH_PARAM_ID                 (0x61840071u)

#define CapSense_BUTTON4_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button4.hysteresis)
#define CapSense_BUTTON4_HYSTERESIS_OFFSET                  (114u)
#define CapSense_BUTTON4_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON4_HYSTERESIS_PARAM_ID                (0x6B840072u)

#define CapSense_BUTTON4_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button4.onDebounce)
#define CapSense_BUTTON4_ON_DEBOUNCE_OFFSET                 (115u)
#define CapSense_BUTTON4_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON4_ON_DEBOUNCE_PARAM_ID               (0x6D840073u)

#define CapSense_BUTTON4_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button4.lowBslnRst)
#define CapSense_BUTTON4_LOW_BSLN_RST_OFFSET                (116u)
#define CapSense_BUTTON4_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON4_LOW_BSLN_RST_PARAM_ID              (0x66840074u)

#define CapSense_BUTTON4_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button4.idacMod[0u])
#define CapSense_BUTTON4_IDAC_MOD0_OFFSET                   (117u)
#define CapSense_BUTTON4_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON4_IDAC_MOD0_PARAM_ID                 (0x46040075u)

#define CapSense_BUTTON4_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button4.snsClkSource)
#define CapSense_BUTTON4_SNS_CLK_SOURCE_OFFSET              (118u)
#define CapSense_BUTTON4_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON4_SNS_CLK_SOURCE_PARAM_ID            (0x41840076u)

#define CapSense_BUTTON5_CRC_VALUE                          (CapSense_dsRam.wdgtList.button5.crc)
#define CapSense_BUTTON5_CRC_OFFSET                         (120u)
#define CapSense_BUTTON5_CRC_SIZE                           (2u)
#define CapSense_BUTTON5_CRC_PARAM_ID                       (0x88050078u)

#define CapSense_BUTTON5_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button5.resolution)
#define CapSense_BUTTON5_RESOLUTION_OFFSET                  (122u)
#define CapSense_BUTTON5_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON5_RESOLUTION_PARAM_ID                (0xA285007Au)

#define CapSense_BUTTON5_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button5.fingerTh)
#define CapSense_BUTTON5_FINGER_TH_OFFSET                   (124u)
#define CapSense_BUTTON5_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON5_FINGER_TH_PARAM_ID                 (0xAF85007Cu)

#define CapSense_BUTTON5_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button5.noiseTh)
#define CapSense_BUTTON5_NOISE_TH_OFFSET                    (126u)
#define CapSense_BUTTON5_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON5_NOISE_TH_PARAM_ID                  (0x6B85007Eu)

#define CapSense_BUTTON5_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button5.nNoiseTh)
#define CapSense_BUTTON5_NNOISE_TH_OFFSET                   (127u)
#define CapSense_BUTTON5_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON5_NNOISE_TH_PARAM_ID                 (0x6D85007Fu)

#define CapSense_BUTTON5_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button5.hysteresis)
#define CapSense_BUTTON5_HYSTERESIS_OFFSET                  (128u)
#define CapSense_BUTTON5_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON5_HYSTERESIS_PARAM_ID                (0x65850080u)

#define CapSense_BUTTON5_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button5.onDebounce)
#define CapSense_BUTTON5_ON_DEBOUNCE_OFFSET                 (129u)
#define CapSense_BUTTON5_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON5_ON_DEBOUNCE_PARAM_ID               (0x63850081u)

#define CapSense_BUTTON5_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button5.lowBslnRst)
#define CapSense_BUTTON5_LOW_BSLN_RST_OFFSET                (130u)
#define CapSense_BUTTON5_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON5_LOW_BSLN_RST_PARAM_ID              (0x69850082u)

#define CapSense_BUTTON5_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button5.idacMod[0u])
#define CapSense_BUTTON5_IDAC_MOD0_OFFSET                   (131u)
#define CapSense_BUTTON5_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON5_IDAC_MOD0_PARAM_ID                 (0x49050083u)

#define CapSense_BUTTON5_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button5.snsClkSource)
#define CapSense_BUTTON5_SNS_CLK_SOURCE_OFFSET              (132u)
#define CapSense_BUTTON5_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON5_SNS_CLK_SOURCE_PARAM_ID            (0x4F850084u)

#define CapSense_BUTTON6_CRC_VALUE                          (CapSense_dsRam.wdgtList.button6.crc)
#define CapSense_BUTTON6_CRC_OFFSET                         (134u)
#define CapSense_BUTTON6_CRC_SIZE                           (2u)
#define CapSense_BUTTON6_CRC_PARAM_ID                       (0x83060086u)

#define CapSense_BUTTON6_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button6.resolution)
#define CapSense_BUTTON6_RESOLUTION_OFFSET                  (136u)
#define CapSense_BUTTON6_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON6_RESOLUTION_PARAM_ID                (0xAA860088u)

#define CapSense_BUTTON6_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button6.fingerTh)
#define CapSense_BUTTON6_FINGER_TH_OFFSET                   (138u)
#define CapSense_BUTTON6_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON6_FINGER_TH_PARAM_ID                 (0xA686008Au)

#define CapSense_BUTTON6_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button6.noiseTh)
#define CapSense_BUTTON6_NOISE_TH_OFFSET                    (140u)
#define CapSense_BUTTON6_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON6_NOISE_TH_PARAM_ID                  (0x6386008Cu)

#define CapSense_BUTTON6_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button6.nNoiseTh)
#define CapSense_BUTTON6_NNOISE_TH_OFFSET                   (141u)
#define CapSense_BUTTON6_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON6_NNOISE_TH_PARAM_ID                 (0x6586008Du)

#define CapSense_BUTTON6_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button6.hysteresis)
#define CapSense_BUTTON6_HYSTERESIS_OFFSET                  (142u)
#define CapSense_BUTTON6_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON6_HYSTERESIS_PARAM_ID                (0x6F86008Eu)

#define CapSense_BUTTON6_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button6.onDebounce)
#define CapSense_BUTTON6_ON_DEBOUNCE_OFFSET                 (143u)
#define CapSense_BUTTON6_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON6_ON_DEBOUNCE_PARAM_ID               (0x6986008Fu)

#define CapSense_BUTTON6_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button6.lowBslnRst)
#define CapSense_BUTTON6_LOW_BSLN_RST_OFFSET                (144u)
#define CapSense_BUTTON6_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON6_LOW_BSLN_RST_PARAM_ID              (0x65860090u)

#define CapSense_BUTTON6_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button6.idacMod[0u])
#define CapSense_BUTTON6_IDAC_MOD0_OFFSET                   (145u)
#define CapSense_BUTTON6_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON6_IDAC_MOD0_PARAM_ID                 (0x45060091u)

#define CapSense_BUTTON6_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button6.snsClkSource)
#define CapSense_BUTTON6_SNS_CLK_SOURCE_OFFSET              (146u)
#define CapSense_BUTTON6_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON6_SNS_CLK_SOURCE_PARAM_ID            (0x42860092u)

#define CapSense_BUTTON7_CRC_VALUE                          (CapSense_dsRam.wdgtList.button7.crc)
#define CapSense_BUTTON7_CRC_OFFSET                         (148u)
#define CapSense_BUTTON7_CRC_SIZE                           (2u)
#define CapSense_BUTTON7_CRC_PARAM_ID                       (0x89070094u)

#define CapSense_BUTTON7_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button7.resolution)
#define CapSense_BUTTON7_RESOLUTION_OFFSET                  (150u)
#define CapSense_BUTTON7_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON7_RESOLUTION_PARAM_ID                (0xA3870096u)

#define CapSense_BUTTON7_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button7.fingerTh)
#define CapSense_BUTTON7_FINGER_TH_OFFSET                   (152u)
#define CapSense_BUTTON7_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON7_FINGER_TH_PARAM_ID                 (0xAC870098u)

#define CapSense_BUTTON7_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button7.noiseTh)
#define CapSense_BUTTON7_NOISE_TH_OFFSET                    (154u)
#define CapSense_BUTTON7_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON7_NOISE_TH_PARAM_ID                  (0x6887009Au)

#define CapSense_BUTTON7_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button7.nNoiseTh)
#define CapSense_BUTTON7_NNOISE_TH_OFFSET                   (155u)
#define CapSense_BUTTON7_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON7_NNOISE_TH_PARAM_ID                 (0x6E87009Bu)

#define CapSense_BUTTON7_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button7.hysteresis)
#define CapSense_BUTTON7_HYSTERESIS_OFFSET                  (156u)
#define CapSense_BUTTON7_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON7_HYSTERESIS_PARAM_ID                (0x6587009Cu)

#define CapSense_BUTTON7_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button7.onDebounce)
#define CapSense_BUTTON7_ON_DEBOUNCE_OFFSET                 (157u)
#define CapSense_BUTTON7_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON7_ON_DEBOUNCE_PARAM_ID               (0x6387009Du)

#define CapSense_BUTTON7_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button7.lowBslnRst)
#define CapSense_BUTTON7_LOW_BSLN_RST_OFFSET                (158u)
#define CapSense_BUTTON7_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON7_LOW_BSLN_RST_PARAM_ID              (0x6987009Eu)

#define CapSense_BUTTON7_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button7.idacMod[0u])
#define CapSense_BUTTON7_IDAC_MOD0_OFFSET                   (159u)
#define CapSense_BUTTON7_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON7_IDAC_MOD0_PARAM_ID                 (0x4907009Fu)

#define CapSense_BUTTON7_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button7.snsClkSource)
#define CapSense_BUTTON7_SNS_CLK_SOURCE_OFFSET              (160u)
#define CapSense_BUTTON7_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON7_SNS_CLK_SOURCE_PARAM_ID            (0x428700A0u)

#define CapSense_BUTTON8_CRC_VALUE                          (CapSense_dsRam.wdgtList.button8.crc)
#define CapSense_BUTTON8_CRC_OFFSET                         (162u)
#define CapSense_BUTTON8_CRC_SIZE                           (2u)
#define CapSense_BUTTON8_CRC_PARAM_ID                       (0x830800A2u)

#define CapSense_BUTTON8_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button8.resolution)
#define CapSense_BUTTON8_RESOLUTION_OFFSET                  (164u)
#define CapSense_BUTTON8_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON8_RESOLUTION_PARAM_ID                (0xA88800A4u)

#define CapSense_BUTTON8_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button8.fingerTh)
#define CapSense_BUTTON8_FINGER_TH_OFFSET                   (166u)
#define CapSense_BUTTON8_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON8_FINGER_TH_PARAM_ID                 (0xA48800A6u)

#define CapSense_BUTTON8_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button8.noiseTh)
#define CapSense_BUTTON8_NOISE_TH_OFFSET                    (168u)
#define CapSense_BUTTON8_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON8_NOISE_TH_PARAM_ID                  (0x638800A8u)

#define CapSense_BUTTON8_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button8.nNoiseTh)
#define CapSense_BUTTON8_NNOISE_TH_OFFSET                   (169u)
#define CapSense_BUTTON8_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON8_NNOISE_TH_PARAM_ID                 (0x658800A9u)

#define CapSense_BUTTON8_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button8.hysteresis)
#define CapSense_BUTTON8_HYSTERESIS_OFFSET                  (170u)
#define CapSense_BUTTON8_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON8_HYSTERESIS_PARAM_ID                (0x6F8800AAu)

#define CapSense_BUTTON8_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button8.onDebounce)
#define CapSense_BUTTON8_ON_DEBOUNCE_OFFSET                 (171u)
#define CapSense_BUTTON8_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON8_ON_DEBOUNCE_PARAM_ID               (0x698800ABu)

#define CapSense_BUTTON8_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button8.lowBslnRst)
#define CapSense_BUTTON8_LOW_BSLN_RST_OFFSET                (172u)
#define CapSense_BUTTON8_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON8_LOW_BSLN_RST_PARAM_ID              (0x628800ACu)

#define CapSense_BUTTON8_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button8.idacMod[0u])
#define CapSense_BUTTON8_IDAC_MOD0_OFFSET                   (173u)
#define CapSense_BUTTON8_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON8_IDAC_MOD0_PARAM_ID                 (0x420800ADu)

#define CapSense_BUTTON8_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button8.snsClkSource)
#define CapSense_BUTTON8_SNS_CLK_SOURCE_OFFSET              (174u)
#define CapSense_BUTTON8_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON8_SNS_CLK_SOURCE_PARAM_ID            (0x458800AEu)

#define CapSense_BUTTON9_CRC_VALUE                          (CapSense_dsRam.wdgtList.button9.crc)
#define CapSense_BUTTON9_CRC_OFFSET                         (176u)
#define CapSense_BUTTON9_CRC_SIZE                           (2u)
#define CapSense_BUTTON9_CRC_PARAM_ID                       (0x890900B0u)

#define CapSense_BUTTON9_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button9.resolution)
#define CapSense_BUTTON9_RESOLUTION_OFFSET                  (178u)
#define CapSense_BUTTON9_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON9_RESOLUTION_PARAM_ID                (0xA38900B2u)

#define CapSense_BUTTON9_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button9.fingerTh)
#define CapSense_BUTTON9_FINGER_TH_OFFSET                   (180u)
#define CapSense_BUTTON9_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON9_FINGER_TH_PARAM_ID                 (0xAE8900B4u)

#define CapSense_BUTTON9_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button9.noiseTh)
#define CapSense_BUTTON9_NOISE_TH_OFFSET                    (182u)
#define CapSense_BUTTON9_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON9_NOISE_TH_PARAM_ID                  (0x6A8900B6u)

#define CapSense_BUTTON9_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button9.nNoiseTh)
#define CapSense_BUTTON9_NNOISE_TH_OFFSET                   (183u)
#define CapSense_BUTTON9_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON9_NNOISE_TH_PARAM_ID                 (0x6C8900B7u)

#define CapSense_BUTTON9_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button9.hysteresis)
#define CapSense_BUTTON9_HYSTERESIS_OFFSET                  (184u)
#define CapSense_BUTTON9_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON9_HYSTERESIS_PARAM_ID                (0x658900B8u)

#define CapSense_BUTTON9_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button9.onDebounce)
#define CapSense_BUTTON9_ON_DEBOUNCE_OFFSET                 (185u)
#define CapSense_BUTTON9_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON9_ON_DEBOUNCE_PARAM_ID               (0x638900B9u)

#define CapSense_BUTTON9_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button9.lowBslnRst)
#define CapSense_BUTTON9_LOW_BSLN_RST_OFFSET                (186u)
#define CapSense_BUTTON9_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON9_LOW_BSLN_RST_PARAM_ID              (0x698900BAu)

#define CapSense_BUTTON9_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button9.idacMod[0u])
#define CapSense_BUTTON9_IDAC_MOD0_OFFSET                   (187u)
#define CapSense_BUTTON9_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON9_IDAC_MOD0_PARAM_ID                 (0x490900BBu)

#define CapSense_BUTTON9_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button9.snsClkSource)
#define CapSense_BUTTON9_SNS_CLK_SOURCE_OFFSET              (188u)
#define CapSense_BUTTON9_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON9_SNS_CLK_SOURCE_PARAM_ID            (0x4F8900BCu)

#define CapSense_BUTTONCLR_CRC_VALUE                        (CapSense_dsRam.wdgtList.buttonclr.crc)
#define CapSense_BUTTONCLR_CRC_OFFSET                       (190u)
#define CapSense_BUTTONCLR_CRC_SIZE                         (2u)
#define CapSense_BUTTONCLR_CRC_PARAM_ID                     (0x830A00BEu)

#define CapSense_BUTTONCLR_RESOLUTION_VALUE                 (CapSense_dsRam.wdgtList.buttonclr.resolution)
#define CapSense_BUTTONCLR_RESOLUTION_OFFSET                (192u)
#define CapSense_BUTTONCLR_RESOLUTION_SIZE                  (2u)
#define CapSense_BUTTONCLR_RESOLUTION_PARAM_ID              (0xA88A00C0u)

#define CapSense_BUTTONCLR_FINGER_TH_VALUE                  (CapSense_dsRam.wdgtList.buttonclr.fingerTh)
#define CapSense_BUTTONCLR_FINGER_TH_OFFSET                 (194u)
#define CapSense_BUTTONCLR_FINGER_TH_SIZE                   (2u)
#define CapSense_BUTTONCLR_FINGER_TH_PARAM_ID               (0xA48A00C2u)

#define CapSense_BUTTONCLR_NOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.buttonclr.noiseTh)
#define CapSense_BUTTONCLR_NOISE_TH_OFFSET                  (196u)
#define CapSense_BUTTONCLR_NOISE_TH_SIZE                    (1u)
#define CapSense_BUTTONCLR_NOISE_TH_PARAM_ID                (0x618A00C4u)

#define CapSense_BUTTONCLR_NNOISE_TH_VALUE                  (CapSense_dsRam.wdgtList.buttonclr.nNoiseTh)
#define CapSense_BUTTONCLR_NNOISE_TH_OFFSET                 (197u)
#define CapSense_BUTTONCLR_NNOISE_TH_SIZE                   (1u)
#define CapSense_BUTTONCLR_NNOISE_TH_PARAM_ID               (0x678A00C5u)

#define CapSense_BUTTONCLR_HYSTERESIS_VALUE                 (CapSense_dsRam.wdgtList.buttonclr.hysteresis)
#define CapSense_BUTTONCLR_HYSTERESIS_OFFSET                (198u)
#define CapSense_BUTTONCLR_HYSTERESIS_SIZE                  (1u)
#define CapSense_BUTTONCLR_HYSTERESIS_PARAM_ID              (0x6D8A00C6u)

#define CapSense_BUTTONCLR_ON_DEBOUNCE_VALUE                (CapSense_dsRam.wdgtList.buttonclr.onDebounce)
#define CapSense_BUTTONCLR_ON_DEBOUNCE_OFFSET               (199u)
#define CapSense_BUTTONCLR_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_BUTTONCLR_ON_DEBOUNCE_PARAM_ID             (0x6B8A00C7u)

#define CapSense_BUTTONCLR_LOW_BSLN_RST_VALUE               (CapSense_dsRam.wdgtList.buttonclr.lowBslnRst)
#define CapSense_BUTTONCLR_LOW_BSLN_RST_OFFSET              (200u)
#define CapSense_BUTTONCLR_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_BUTTONCLR_LOW_BSLN_RST_PARAM_ID            (0x628A00C8u)

#define CapSense_BUTTONCLR_IDAC_MOD0_VALUE                  (CapSense_dsRam.wdgtList.buttonclr.idacMod[0u])
#define CapSense_BUTTONCLR_IDAC_MOD0_OFFSET                 (201u)
#define CapSense_BUTTONCLR_IDAC_MOD0_SIZE                   (1u)
#define CapSense_BUTTONCLR_IDAC_MOD0_PARAM_ID               (0x420A00C9u)

#define CapSense_BUTTONCLR_SNS_CLK_SOURCE_VALUE             (CapSense_dsRam.wdgtList.buttonclr.snsClkSource)
#define CapSense_BUTTONCLR_SNS_CLK_SOURCE_OFFSET            (202u)
#define CapSense_BUTTONCLR_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_BUTTONCLR_SNS_CLK_SOURCE_PARAM_ID          (0x458A00CAu)

#define CapSense_BUTTONENTR_CRC_VALUE                       (CapSense_dsRam.wdgtList.buttonentr.crc)
#define CapSense_BUTTONENTR_CRC_OFFSET                      (204u)
#define CapSense_BUTTONENTR_CRC_SIZE                        (2u)
#define CapSense_BUTTONENTR_CRC_PARAM_ID                    (0x8E0B00CCu)

#define CapSense_BUTTONENTR_RESOLUTION_VALUE                (CapSense_dsRam.wdgtList.buttonentr.resolution)
#define CapSense_BUTTONENTR_RESOLUTION_OFFSET               (206u)
#define CapSense_BUTTONENTR_RESOLUTION_SIZE                 (2u)
#define CapSense_BUTTONENTR_RESOLUTION_PARAM_ID             (0xA48B00CEu)

#define CapSense_BUTTONENTR_FINGER_TH_VALUE                 (CapSense_dsRam.wdgtList.buttonentr.fingerTh)
#define CapSense_BUTTONENTR_FINGER_TH_OFFSET                (208u)
#define CapSense_BUTTONENTR_FINGER_TH_SIZE                  (2u)
#define CapSense_BUTTONENTR_FINGER_TH_PARAM_ID              (0xAE8B00D0u)

#define CapSense_BUTTONENTR_NOISE_TH_VALUE                  (CapSense_dsRam.wdgtList.buttonentr.noiseTh)
#define CapSense_BUTTONENTR_NOISE_TH_OFFSET                 (210u)
#define CapSense_BUTTONENTR_NOISE_TH_SIZE                   (1u)
#define CapSense_BUTTONENTR_NOISE_TH_PARAM_ID               (0x6A8B00D2u)

#define CapSense_BUTTONENTR_NNOISE_TH_VALUE                 (CapSense_dsRam.wdgtList.buttonentr.nNoiseTh)
#define CapSense_BUTTONENTR_NNOISE_TH_OFFSET                (211u)
#define CapSense_BUTTONENTR_NNOISE_TH_SIZE                  (1u)
#define CapSense_BUTTONENTR_NNOISE_TH_PARAM_ID              (0x6C8B00D3u)

#define CapSense_BUTTONENTR_HYSTERESIS_VALUE                (CapSense_dsRam.wdgtList.buttonentr.hysteresis)
#define CapSense_BUTTONENTR_HYSTERESIS_OFFSET               (212u)
#define CapSense_BUTTONENTR_HYSTERESIS_SIZE                 (1u)
#define CapSense_BUTTONENTR_HYSTERESIS_PARAM_ID             (0x678B00D4u)

#define CapSense_BUTTONENTR_ON_DEBOUNCE_VALUE               (CapSense_dsRam.wdgtList.buttonentr.onDebounce)
#define CapSense_BUTTONENTR_ON_DEBOUNCE_OFFSET              (213u)
#define CapSense_BUTTONENTR_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_BUTTONENTR_ON_DEBOUNCE_PARAM_ID            (0x618B00D5u)

#define CapSense_BUTTONENTR_LOW_BSLN_RST_VALUE              (CapSense_dsRam.wdgtList.buttonentr.lowBslnRst)
#define CapSense_BUTTONENTR_LOW_BSLN_RST_OFFSET             (214u)
#define CapSense_BUTTONENTR_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_BUTTONENTR_LOW_BSLN_RST_PARAM_ID           (0x6B8B00D6u)

#define CapSense_BUTTONENTR_IDAC_MOD0_VALUE                 (CapSense_dsRam.wdgtList.buttonentr.idacMod[0u])
#define CapSense_BUTTONENTR_IDAC_MOD0_OFFSET                (215u)
#define CapSense_BUTTONENTR_IDAC_MOD0_SIZE                  (1u)
#define CapSense_BUTTONENTR_IDAC_MOD0_PARAM_ID              (0x4B0B00D7u)

#define CapSense_BUTTONENTR_SNS_CLK_SOURCE_VALUE            (CapSense_dsRam.wdgtList.buttonentr.snsClkSource)
#define CapSense_BUTTONENTR_SNS_CLK_SOURCE_OFFSET           (216u)
#define CapSense_BUTTONENTR_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_BUTTONENTR_SNS_CLK_SOURCE_PARAM_ID         (0x4F8B00D8u)

#define CapSense_PROXIMITY0_CRC_VALUE                       (CapSense_dsRam.wdgtList.proximity0.crc)
#define CapSense_PROXIMITY0_CRC_OFFSET                      (218u)
#define CapSense_PROXIMITY0_CRC_SIZE                        (2u)
#define CapSense_PROXIMITY0_CRC_PARAM_ID                    (0x8F0C00DAu)

#define CapSense_PROXIMITY0_RESOLUTION_VALUE                (CapSense_dsRam.wdgtList.proximity0.resolution)
#define CapSense_PROXIMITY0_RESOLUTION_OFFSET               (220u)
#define CapSense_PROXIMITY0_RESOLUTION_SIZE                 (2u)
#define CapSense_PROXIMITY0_RESOLUTION_PARAM_ID             (0xA48C00DCu)

#define CapSense_PROXIMITY0_FINGER_TH_VALUE                 (CapSense_dsRam.wdgtList.proximity0.fingerTh)
#define CapSense_PROXIMITY0_FINGER_TH_OFFSET                (222u)
#define CapSense_PROXIMITY0_FINGER_TH_SIZE                  (2u)
#define CapSense_PROXIMITY0_FINGER_TH_PARAM_ID              (0xA88C00DEu)

#define CapSense_PROXIMITY0_NOISE_TH_VALUE                  (CapSense_dsRam.wdgtList.proximity0.noiseTh)
#define CapSense_PROXIMITY0_NOISE_TH_OFFSET                 (224u)
#define CapSense_PROXIMITY0_NOISE_TH_SIZE                   (1u)
#define CapSense_PROXIMITY0_NOISE_TH_PARAM_ID               (0x608C00E0u)

#define CapSense_PROXIMITY0_NNOISE_TH_VALUE                 (CapSense_dsRam.wdgtList.proximity0.nNoiseTh)
#define CapSense_PROXIMITY0_NNOISE_TH_OFFSET                (225u)
#define CapSense_PROXIMITY0_NNOISE_TH_SIZE                  (1u)
#define CapSense_PROXIMITY0_NNOISE_TH_PARAM_ID              (0x668C00E1u)

#define CapSense_PROXIMITY0_HYSTERESIS_VALUE                (CapSense_dsRam.wdgtList.proximity0.hysteresis)
#define CapSense_PROXIMITY0_HYSTERESIS_OFFSET               (226u)
#define CapSense_PROXIMITY0_HYSTERESIS_SIZE                 (1u)
#define CapSense_PROXIMITY0_HYSTERESIS_PARAM_ID             (0x6C8C00E2u)

#define CapSense_PROXIMITY0_ON_DEBOUNCE_VALUE               (CapSense_dsRam.wdgtList.proximity0.onDebounce)
#define CapSense_PROXIMITY0_ON_DEBOUNCE_OFFSET              (227u)
#define CapSense_PROXIMITY0_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_PROXIMITY0_ON_DEBOUNCE_PARAM_ID            (0x6A8C00E3u)

#define CapSense_PROXIMITY0_LOW_BSLN_RST_VALUE              (CapSense_dsRam.wdgtList.proximity0.lowBslnRst)
#define CapSense_PROXIMITY0_LOW_BSLN_RST_OFFSET             (228u)
#define CapSense_PROXIMITY0_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_PROXIMITY0_LOW_BSLN_RST_PARAM_ID           (0x618C00E4u)

#define CapSense_PROXIMITY0_IDAC_MOD0_VALUE                 (CapSense_dsRam.wdgtList.proximity0.idacMod[0u])
#define CapSense_PROXIMITY0_IDAC_MOD0_OFFSET                (229u)
#define CapSense_PROXIMITY0_IDAC_MOD0_SIZE                  (1u)
#define CapSense_PROXIMITY0_IDAC_MOD0_PARAM_ID              (0x410C00E5u)

#define CapSense_PROXIMITY0_SNS_CLK_SOURCE_VALUE            (CapSense_dsRam.wdgtList.proximity0.snsClkSource)
#define CapSense_PROXIMITY0_SNS_CLK_SOURCE_OFFSET           (230u)
#define CapSense_PROXIMITY0_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_PROXIMITY0_SNS_CLK_SOURCE_PARAM_ID         (0x468C00E6u)

#define CapSense_PROXIMITY0_PROX_TOUCH_TH_VALUE             (CapSense_dsRam.wdgtList.proximity0.proxTouchTh)
#define CapSense_PROXIMITY0_PROX_TOUCH_TH_OFFSET            (232u)
#define CapSense_PROXIMITY0_PROX_TOUCH_TH_SIZE              (2u)
#define CapSense_PROXIMITY0_PROX_TOUCH_TH_PARAM_ID          (0xA70C00E8u)

#define CapSense_BUTTON0_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_BUTTON0_SNS0_RAW0_OFFSET                   (234u)
#define CapSense_BUTTON0_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON0_SNS0_RAW0_PARAM_ID                 (0x8D0000EAu)

#define CapSense_BUTTON0_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_BUTTON0_SNS0_BSLN0_OFFSET                  (236u)
#define CapSense_BUTTON0_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON0_SNS0_BSLN0_PARAM_ID                (0x800000ECu)

#define CapSense_BUTTON0_SNS0_BSLN_INV0_VALUE               (CapSense_dsRam.snsList.button0[0u].bslnInv[0u])
#define CapSense_BUTTON0_SNS0_BSLN_INV0_OFFSET              (238u)
#define CapSense_BUTTON0_SNS0_BSLN_INV0_SIZE                (2u)
#define CapSense_BUTTON0_SNS0_BSLN_INV0_PARAM_ID            (0x8C0000EEu)

#define CapSense_BUTTON0_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_OFFSET              (240u)
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID            (0x4E0000F0u)

#define CapSense_BUTTON0_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button0[0u].diff)
#define CapSense_BUTTON0_SNS0_DIFF_OFFSET                   (242u)
#define CapSense_BUTTON0_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON0_SNS0_DIFF_PARAM_ID                 (0x8A0000F2u)

#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (244u)
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4F0000F4u)

#define CapSense_BUTTON0_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_OFFSET             (245u)
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID           (0x490000F5u)

#define CapSense_BUTTON1_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_BUTTON1_SNS0_RAW0_OFFSET                   (246u)
#define CapSense_BUTTON1_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON1_SNS0_RAW0_PARAM_ID                 (0x8B0000F6u)

#define CapSense_BUTTON1_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_BUTTON1_SNS0_BSLN0_OFFSET                  (248u)
#define CapSense_BUTTON1_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON1_SNS0_BSLN0_PARAM_ID                (0x840000F8u)

#define CapSense_BUTTON1_SNS0_BSLN_INV0_VALUE               (CapSense_dsRam.snsList.button1[0u].bslnInv[0u])
#define CapSense_BUTTON1_SNS0_BSLN_INV0_OFFSET              (250u)
#define CapSense_BUTTON1_SNS0_BSLN_INV0_SIZE                (2u)
#define CapSense_BUTTON1_SNS0_BSLN_INV0_PARAM_ID            (0x880000FAu)

#define CapSense_BUTTON1_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_BUTTON1_SNS0_BSLN_EXT0_OFFSET              (252u)
#define CapSense_BUTTON1_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID            (0x4D0000FCu)

#define CapSense_BUTTON1_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button1[0u].diff)
#define CapSense_BUTTON1_SNS0_DIFF_OFFSET                   (254u)
#define CapSense_BUTTON1_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON1_SNS0_DIFF_PARAM_ID                 (0x890000FEu)

#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (256u)
#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x44000100u)

#define CapSense_BUTTON1_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_BUTTON1_SNS0_IDAC_COMP0_OFFSET             (257u)
#define CapSense_BUTTON1_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID           (0x42000101u)

#define CapSense_BUTTON2_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button2[0u].raw[0u])
#define CapSense_BUTTON2_SNS0_RAW0_OFFSET                   (258u)
#define CapSense_BUTTON2_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON2_SNS0_RAW0_PARAM_ID                 (0x80000102u)

#define CapSense_BUTTON2_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button2[0u].bsln[0u])
#define CapSense_BUTTON2_SNS0_BSLN0_OFFSET                  (260u)
#define CapSense_BUTTON2_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON2_SNS0_BSLN0_PARAM_ID                (0x8D000104u)

#define CapSense_BUTTON2_SNS0_BSLN_INV0_VALUE               (CapSense_dsRam.snsList.button2[0u].bslnInv[0u])
#define CapSense_BUTTON2_SNS0_BSLN_INV0_OFFSET              (262u)
#define CapSense_BUTTON2_SNS0_BSLN_INV0_SIZE                (2u)
#define CapSense_BUTTON2_SNS0_BSLN_INV0_PARAM_ID            (0x81000106u)

#define CapSense_BUTTON2_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button2[0u].bslnExt[0u])
#define CapSense_BUTTON2_SNS0_BSLN_EXT0_OFFSET              (264u)
#define CapSense_BUTTON2_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON2_SNS0_BSLN_EXT0_PARAM_ID            (0x46000108u)

#define CapSense_BUTTON2_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button2[0u].diff)
#define CapSense_BUTTON2_SNS0_DIFF_OFFSET                   (266u)
#define CapSense_BUTTON2_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON2_SNS0_DIFF_PARAM_ID                 (0x8200010Au)

#define CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (268u)
#define CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4700010Cu)

#define CapSense_BUTTON2_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button2[0u].idacComp[0u])
#define CapSense_BUTTON2_SNS0_IDAC_COMP0_OFFSET             (269u)
#define CapSense_BUTTON2_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON2_SNS0_IDAC_COMP0_PARAM_ID           (0x4100010Du)

#define CapSense_BUTTON3_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button3[0u].raw[0u])
#define CapSense_BUTTON3_SNS0_RAW0_OFFSET                   (270u)
#define CapSense_BUTTON3_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON3_SNS0_RAW0_PARAM_ID                 (0x8300010Eu)

#define CapSense_BUTTON3_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button3[0u].bsln[0u])
#define CapSense_BUTTON3_SNS0_BSLN0_OFFSET                  (272u)
#define CapSense_BUTTON3_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON3_SNS0_BSLN0_PARAM_ID                (0x89000110u)

#define CapSense_BUTTON3_SNS0_BSLN_INV0_VALUE               (CapSense_dsRam.snsList.button3[0u].bslnInv[0u])
#define CapSense_BUTTON3_SNS0_BSLN_INV0_OFFSET              (274u)
#define CapSense_BUTTON3_SNS0_BSLN_INV0_SIZE                (2u)
#define CapSense_BUTTON3_SNS0_BSLN_INV0_PARAM_ID            (0x85000112u)

#define CapSense_BUTTON3_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button3[0u].bslnExt[0u])
#define CapSense_BUTTON3_SNS0_BSLN_EXT0_OFFSET              (276u)
#define CapSense_BUTTON3_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON3_SNS0_BSLN_EXT0_PARAM_ID            (0x40000114u)

#define CapSense_BUTTON3_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button3[0u].diff)
#define CapSense_BUTTON3_SNS0_DIFF_OFFSET                   (278u)
#define CapSense_BUTTON3_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON3_SNS0_DIFF_PARAM_ID                 (0x84000116u)

#define CapSense_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button3[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (280u)
#define CapSense_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x43000118u)

#define CapSense_BUTTON3_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button3[0u].idacComp[0u])
#define CapSense_BUTTON3_SNS0_IDAC_COMP0_OFFSET             (281u)
#define CapSense_BUTTON3_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON3_SNS0_IDAC_COMP0_PARAM_ID           (0x45000119u)

#define CapSense_BUTTON4_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button4[0u].raw[0u])
#define CapSense_BUTTON4_SNS0_RAW0_OFFSET                   (282u)
#define CapSense_BUTTON4_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON4_SNS0_RAW0_PARAM_ID                 (0x8700011Au)

#define CapSense_BUTTON4_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button4[0u].bsln[0u])
#define CapSense_BUTTON4_SNS0_BSLN0_OFFSET                  (284u)
#define CapSense_BUTTON4_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON4_SNS0_BSLN0_PARAM_ID                (0x8A00011Cu)

#define CapSense_BUTTON4_SNS0_BSLN_INV0_VALUE               (CapSense_dsRam.snsList.button4[0u].bslnInv[0u])
#define CapSense_BUTTON4_SNS0_BSLN_INV0_OFFSET              (286u)
#define CapSense_BUTTON4_SNS0_BSLN_INV0_SIZE                (2u)
#define CapSense_BUTTON4_SNS0_BSLN_INV0_PARAM_ID            (0x8600011Eu)

#define CapSense_BUTTON4_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button4[0u].bslnExt[0u])
#define CapSense_BUTTON4_SNS0_BSLN_EXT0_OFFSET              (288u)
#define CapSense_BUTTON4_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON4_SNS0_BSLN_EXT0_PARAM_ID            (0x4E000120u)

#define CapSense_BUTTON4_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button4[0u].diff)
#define CapSense_BUTTON4_SNS0_DIFF_OFFSET                   (290u)
#define CapSense_BUTTON4_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON4_SNS0_DIFF_PARAM_ID                 (0x8A000122u)

#define CapSense_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button4[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (292u)
#define CapSense_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4F000124u)

#define CapSense_BUTTON4_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button4[0u].idacComp[0u])
#define CapSense_BUTTON4_SNS0_IDAC_COMP0_OFFSET             (293u)
#define CapSense_BUTTON4_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON4_SNS0_IDAC_COMP0_PARAM_ID           (0x49000125u)

#define CapSense_BUTTON5_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button5[0u].raw[0u])
#define CapSense_BUTTON5_SNS0_RAW0_OFFSET                   (294u)
#define CapSense_BUTTON5_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON5_SNS0_RAW0_PARAM_ID                 (0x8B000126u)

#define CapSense_BUTTON5_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button5[0u].bsln[0u])
#define CapSense_BUTTON5_SNS0_BSLN0_OFFSET                  (296u)
#define CapSense_BUTTON5_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON5_SNS0_BSLN0_PARAM_ID                (0x84000128u)

#define CapSense_BUTTON5_SNS0_BSLN_INV0_VALUE               (CapSense_dsRam.snsList.button5[0u].bslnInv[0u])
#define CapSense_BUTTON5_SNS0_BSLN_INV0_OFFSET              (298u)
#define CapSense_BUTTON5_SNS0_BSLN_INV0_SIZE                (2u)
#define CapSense_BUTTON5_SNS0_BSLN_INV0_PARAM_ID            (0x8800012Au)

#define CapSense_BUTTON5_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button5[0u].bslnExt[0u])
#define CapSense_BUTTON5_SNS0_BSLN_EXT0_OFFSET              (300u)
#define CapSense_BUTTON5_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON5_SNS0_BSLN_EXT0_PARAM_ID            (0x4D00012Cu)

#define CapSense_BUTTON5_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button5[0u].diff)
#define CapSense_BUTTON5_SNS0_DIFF_OFFSET                   (302u)
#define CapSense_BUTTON5_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON5_SNS0_DIFF_PARAM_ID                 (0x8900012Eu)

#define CapSense_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button5[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (304u)
#define CapSense_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4B000130u)

#define CapSense_BUTTON5_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button5[0u].idacComp[0u])
#define CapSense_BUTTON5_SNS0_IDAC_COMP0_OFFSET             (305u)
#define CapSense_BUTTON5_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON5_SNS0_IDAC_COMP0_PARAM_ID           (0x4D000131u)

#define CapSense_BUTTON6_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button6[0u].raw[0u])
#define CapSense_BUTTON6_SNS0_RAW0_OFFSET                   (306u)
#define CapSense_BUTTON6_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON6_SNS0_RAW0_PARAM_ID                 (0x8F000132u)

#define CapSense_BUTTON6_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button6[0u].bsln[0u])
#define CapSense_BUTTON6_SNS0_BSLN0_OFFSET                  (308u)
#define CapSense_BUTTON6_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON6_SNS0_BSLN0_PARAM_ID                (0x82000134u)

#define CapSense_BUTTON6_SNS0_BSLN_INV0_VALUE               (CapSense_dsRam.snsList.button6[0u].bslnInv[0u])
#define CapSense_BUTTON6_SNS0_BSLN_INV0_OFFSET              (310u)
#define CapSense_BUTTON6_SNS0_BSLN_INV0_SIZE                (2u)
#define CapSense_BUTTON6_SNS0_BSLN_INV0_PARAM_ID            (0x8E000136u)

#define CapSense_BUTTON6_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button6[0u].bslnExt[0u])
#define CapSense_BUTTON6_SNS0_BSLN_EXT0_OFFSET              (312u)
#define CapSense_BUTTON6_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON6_SNS0_BSLN_EXT0_PARAM_ID            (0x49000138u)

#define CapSense_BUTTON6_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button6[0u].diff)
#define CapSense_BUTTON6_SNS0_DIFF_OFFSET                   (314u)
#define CapSense_BUTTON6_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON6_SNS0_DIFF_PARAM_ID                 (0x8D00013Au)

#define CapSense_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button6[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (316u)
#define CapSense_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4800013Cu)

#define CapSense_BUTTON6_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button6[0u].idacComp[0u])
#define CapSense_BUTTON6_SNS0_IDAC_COMP0_OFFSET             (317u)
#define CapSense_BUTTON6_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON6_SNS0_IDAC_COMP0_PARAM_ID           (0x4E00013Du)

#define CapSense_BUTTON7_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button7[0u].raw[0u])
#define CapSense_BUTTON7_SNS0_RAW0_OFFSET                   (318u)
#define CapSense_BUTTON7_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON7_SNS0_RAW0_PARAM_ID                 (0x8C00013Eu)

#define CapSense_BUTTON7_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button7[0u].bsln[0u])
#define CapSense_BUTTON7_SNS0_BSLN0_OFFSET                  (320u)
#define CapSense_BUTTON7_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON7_SNS0_BSLN0_PARAM_ID                (0x81000140u)

#define CapSense_BUTTON7_SNS0_BSLN_INV0_VALUE               (CapSense_dsRam.snsList.button7[0u].bslnInv[0u])
#define CapSense_BUTTON7_SNS0_BSLN_INV0_OFFSET              (322u)
#define CapSense_BUTTON7_SNS0_BSLN_INV0_SIZE                (2u)
#define CapSense_BUTTON7_SNS0_BSLN_INV0_PARAM_ID            (0x8D000142u)

#define CapSense_BUTTON7_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button7[0u].bslnExt[0u])
#define CapSense_BUTTON7_SNS0_BSLN_EXT0_OFFSET              (324u)
#define CapSense_BUTTON7_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON7_SNS0_BSLN_EXT0_PARAM_ID            (0x48000144u)

#define CapSense_BUTTON7_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button7[0u].diff)
#define CapSense_BUTTON7_SNS0_DIFF_OFFSET                   (326u)
#define CapSense_BUTTON7_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON7_SNS0_DIFF_PARAM_ID                 (0x8C000146u)

#define CapSense_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button7[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (328u)
#define CapSense_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4B000148u)

#define CapSense_BUTTON7_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button7[0u].idacComp[0u])
#define CapSense_BUTTON7_SNS0_IDAC_COMP0_OFFSET             (329u)
#define CapSense_BUTTON7_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON7_SNS0_IDAC_COMP0_PARAM_ID           (0x4D000149u)

#define CapSense_BUTTON8_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button8[0u].raw[0u])
#define CapSense_BUTTON8_SNS0_RAW0_OFFSET                   (330u)
#define CapSense_BUTTON8_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON8_SNS0_RAW0_PARAM_ID                 (0x8F00014Au)

#define CapSense_BUTTON8_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button8[0u].bsln[0u])
#define CapSense_BUTTON8_SNS0_BSLN0_OFFSET                  (332u)
#define CapSense_BUTTON8_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON8_SNS0_BSLN0_PARAM_ID                (0x8200014Cu)

#define CapSense_BUTTON8_SNS0_BSLN_INV0_VALUE               (CapSense_dsRam.snsList.button8[0u].bslnInv[0u])
#define CapSense_BUTTON8_SNS0_BSLN_INV0_OFFSET              (334u)
#define CapSense_BUTTON8_SNS0_BSLN_INV0_SIZE                (2u)
#define CapSense_BUTTON8_SNS0_BSLN_INV0_PARAM_ID            (0x8E00014Eu)

#define CapSense_BUTTON8_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button8[0u].bslnExt[0u])
#define CapSense_BUTTON8_SNS0_BSLN_EXT0_OFFSET              (336u)
#define CapSense_BUTTON8_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON8_SNS0_BSLN_EXT0_PARAM_ID            (0x4C000150u)

#define CapSense_BUTTON8_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button8[0u].diff)
#define CapSense_BUTTON8_SNS0_DIFF_OFFSET                   (338u)
#define CapSense_BUTTON8_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON8_SNS0_DIFF_PARAM_ID                 (0x88000152u)

#define CapSense_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button8[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (340u)
#define CapSense_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4D000154u)

#define CapSense_BUTTON8_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button8[0u].idacComp[0u])
#define CapSense_BUTTON8_SNS0_IDAC_COMP0_OFFSET             (341u)
#define CapSense_BUTTON8_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON8_SNS0_IDAC_COMP0_PARAM_ID           (0x4B000155u)

#define CapSense_BUTTON9_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button9[0u].raw[0u])
#define CapSense_BUTTON9_SNS0_RAW0_OFFSET                   (342u)
#define CapSense_BUTTON9_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON9_SNS0_RAW0_PARAM_ID                 (0x89000156u)

#define CapSense_BUTTON9_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button9[0u].bsln[0u])
#define CapSense_BUTTON9_SNS0_BSLN0_OFFSET                  (344u)
#define CapSense_BUTTON9_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON9_SNS0_BSLN0_PARAM_ID                (0x86000158u)

#define CapSense_BUTTON9_SNS0_BSLN_INV0_VALUE               (CapSense_dsRam.snsList.button9[0u].bslnInv[0u])
#define CapSense_BUTTON9_SNS0_BSLN_INV0_OFFSET              (346u)
#define CapSense_BUTTON9_SNS0_BSLN_INV0_SIZE                (2u)
#define CapSense_BUTTON9_SNS0_BSLN_INV0_PARAM_ID            (0x8A00015Au)

#define CapSense_BUTTON9_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button9[0u].bslnExt[0u])
#define CapSense_BUTTON9_SNS0_BSLN_EXT0_OFFSET              (348u)
#define CapSense_BUTTON9_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON9_SNS0_BSLN_EXT0_PARAM_ID            (0x4F00015Cu)

#define CapSense_BUTTON9_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button9[0u].diff)
#define CapSense_BUTTON9_SNS0_DIFF_OFFSET                   (350u)
#define CapSense_BUTTON9_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON9_SNS0_DIFF_PARAM_ID                 (0x8B00015Eu)

#define CapSense_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button9[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (352u)
#define CapSense_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x43000160u)

#define CapSense_BUTTON9_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button9[0u].idacComp[0u])
#define CapSense_BUTTON9_SNS0_IDAC_COMP0_OFFSET             (353u)
#define CapSense_BUTTON9_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON9_SNS0_IDAC_COMP0_PARAM_ID           (0x45000161u)

#define CapSense_BUTTONCLR_SNS0_RAW0_VALUE                  (CapSense_dsRam.snsList.buttonclr[0u].raw[0u])
#define CapSense_BUTTONCLR_SNS0_RAW0_OFFSET                 (354u)
#define CapSense_BUTTONCLR_SNS0_RAW0_SIZE                   (2u)
#define CapSense_BUTTONCLR_SNS0_RAW0_PARAM_ID               (0x87000162u)

#define CapSense_BUTTONCLR_SNS0_BSLN0_VALUE                 (CapSense_dsRam.snsList.buttonclr[0u].bsln[0u])
#define CapSense_BUTTONCLR_SNS0_BSLN0_OFFSET                (356u)
#define CapSense_BUTTONCLR_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_BUTTONCLR_SNS0_BSLN0_PARAM_ID              (0x8A000164u)

#define CapSense_BUTTONCLR_SNS0_BSLN_INV0_VALUE             (CapSense_dsRam.snsList.buttonclr[0u].bslnInv[0u])
#define CapSense_BUTTONCLR_SNS0_BSLN_INV0_OFFSET            (358u)
#define CapSense_BUTTONCLR_SNS0_BSLN_INV0_SIZE              (2u)
#define CapSense_BUTTONCLR_SNS0_BSLN_INV0_PARAM_ID          (0x86000166u)

#define CapSense_BUTTONCLR_SNS0_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.buttonclr[0u].bslnExt[0u])
#define CapSense_BUTTONCLR_SNS0_BSLN_EXT0_OFFSET            (360u)
#define CapSense_BUTTONCLR_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_BUTTONCLR_SNS0_BSLN_EXT0_PARAM_ID          (0x41000168u)

#define CapSense_BUTTONCLR_SNS0_DIFF_VALUE                  (CapSense_dsRam.snsList.buttonclr[0u].diff)
#define CapSense_BUTTONCLR_SNS0_DIFF_OFFSET                 (362u)
#define CapSense_BUTTONCLR_SNS0_DIFF_SIZE                   (2u)
#define CapSense_BUTTONCLR_SNS0_DIFF_PARAM_ID               (0x8500016Au)

#define CapSense_BUTTONCLR_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.buttonclr[0u].negBslnRstCnt[0u])
#define CapSense_BUTTONCLR_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (364u)
#define CapSense_BUTTONCLR_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_BUTTONCLR_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4000016Cu)

#define CapSense_BUTTONCLR_SNS0_IDAC_COMP0_VALUE            (CapSense_dsRam.snsList.buttonclr[0u].idacComp[0u])
#define CapSense_BUTTONCLR_SNS0_IDAC_COMP0_OFFSET           (365u)
#define CapSense_BUTTONCLR_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_BUTTONCLR_SNS0_IDAC_COMP0_PARAM_ID         (0x4600016Du)

#define CapSense_BUTTONENTR_SNS0_RAW0_VALUE                 (CapSense_dsRam.snsList.buttonentr[0u].raw[0u])
#define CapSense_BUTTONENTR_SNS0_RAW0_OFFSET                (366u)
#define CapSense_BUTTONENTR_SNS0_RAW0_SIZE                  (2u)
#define CapSense_BUTTONENTR_SNS0_RAW0_PARAM_ID              (0x8400016Eu)

#define CapSense_BUTTONENTR_SNS0_BSLN0_VALUE                (CapSense_dsRam.snsList.buttonentr[0u].bsln[0u])
#define CapSense_BUTTONENTR_SNS0_BSLN0_OFFSET               (368u)
#define CapSense_BUTTONENTR_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_BUTTONENTR_SNS0_BSLN0_PARAM_ID             (0x8E000170u)

#define CapSense_BUTTONENTR_SNS0_BSLN_INV0_VALUE            (CapSense_dsRam.snsList.buttonentr[0u].bslnInv[0u])
#define CapSense_BUTTONENTR_SNS0_BSLN_INV0_OFFSET           (370u)
#define CapSense_BUTTONENTR_SNS0_BSLN_INV0_SIZE             (2u)
#define CapSense_BUTTONENTR_SNS0_BSLN_INV0_PARAM_ID         (0x82000172u)

#define CapSense_BUTTONENTR_SNS0_BSLN_EXT0_VALUE            (CapSense_dsRam.snsList.buttonentr[0u].bslnExt[0u])
#define CapSense_BUTTONENTR_SNS0_BSLN_EXT0_OFFSET           (372u)
#define CapSense_BUTTONENTR_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_BUTTONENTR_SNS0_BSLN_EXT0_PARAM_ID         (0x47000174u)

#define CapSense_BUTTONENTR_SNS0_DIFF_VALUE                 (CapSense_dsRam.snsList.buttonentr[0u].diff)
#define CapSense_BUTTONENTR_SNS0_DIFF_OFFSET                (374u)
#define CapSense_BUTTONENTR_SNS0_DIFF_SIZE                  (2u)
#define CapSense_BUTTONENTR_SNS0_DIFF_PARAM_ID              (0x83000176u)

#define CapSense_BUTTONENTR_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_dsRam.snsList.buttonentr[0u].negBslnRstCnt[0u])
#define CapSense_BUTTONENTR_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (376u)
#define CapSense_BUTTONENTR_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_BUTTONENTR_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x44000178u)

#define CapSense_BUTTONENTR_SNS0_IDAC_COMP0_VALUE           (CapSense_dsRam.snsList.buttonentr[0u].idacComp[0u])
#define CapSense_BUTTONENTR_SNS0_IDAC_COMP0_OFFSET          (377u)
#define CapSense_BUTTONENTR_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_BUTTONENTR_SNS0_IDAC_COMP0_PARAM_ID        (0x42000179u)

#define CapSense_PROXIMITY0_SNS0_RAW0_VALUE                 (CapSense_dsRam.snsList.proximity0[0u].raw[0u])
#define CapSense_PROXIMITY0_SNS0_RAW0_OFFSET                (378u)
#define CapSense_PROXIMITY0_SNS0_RAW0_SIZE                  (2u)
#define CapSense_PROXIMITY0_SNS0_RAW0_PARAM_ID              (0x8000017Au)

#define CapSense_PROXIMITY0_SNS0_BSLN0_VALUE                (CapSense_dsRam.snsList.proximity0[0u].bsln[0u])
#define CapSense_PROXIMITY0_SNS0_BSLN0_OFFSET               (380u)
#define CapSense_PROXIMITY0_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_PROXIMITY0_SNS0_BSLN0_PARAM_ID             (0x8D00017Cu)

#define CapSense_PROXIMITY0_SNS0_BSLN_INV0_VALUE            (CapSense_dsRam.snsList.proximity0[0u].bslnInv[0u])
#define CapSense_PROXIMITY0_SNS0_BSLN_INV0_OFFSET           (382u)
#define CapSense_PROXIMITY0_SNS0_BSLN_INV0_SIZE             (2u)
#define CapSense_PROXIMITY0_SNS0_BSLN_INV0_PARAM_ID         (0x8100017Eu)

#define CapSense_PROXIMITY0_SNS0_BSLN_EXT0_VALUE            (CapSense_dsRam.snsList.proximity0[0u].bslnExt[0u])
#define CapSense_PROXIMITY0_SNS0_BSLN_EXT0_OFFSET           (384u)
#define CapSense_PROXIMITY0_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_PROXIMITY0_SNS0_BSLN_EXT0_PARAM_ID         (0x47000180u)

#define CapSense_PROXIMITY0_SNS0_DIFF_VALUE                 (CapSense_dsRam.snsList.proximity0[0u].diff)
#define CapSense_PROXIMITY0_SNS0_DIFF_OFFSET                (386u)
#define CapSense_PROXIMITY0_SNS0_DIFF_SIZE                  (2u)
#define CapSense_PROXIMITY0_SNS0_DIFF_PARAM_ID              (0x83000182u)

#define CapSense_PROXIMITY0_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_dsRam.snsList.proximity0[0u].negBslnRstCnt[0u])
#define CapSense_PROXIMITY0_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (388u)
#define CapSense_PROXIMITY0_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_PROXIMITY0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x46000184u)

#define CapSense_PROXIMITY0_SNS0_IDAC_COMP0_VALUE           (CapSense_dsRam.snsList.proximity0[0u].idacComp[0u])
#define CapSense_PROXIMITY0_SNS0_IDAC_COMP0_OFFSET          (389u)
#define CapSense_PROXIMITY0_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_PROXIMITY0_SNS0_IDAC_COMP0_PARAM_ID        (0x40000185u)

#define CapSense_TEST_RESULT_MASK_VALUE                     (CapSense_dsRam.selfTest.testResultMask)
#define CapSense_TEST_RESULT_MASK_OFFSET                    (392u)
#define CapSense_TEST_RESULT_MASK_SIZE                      (4u)
#define CapSense_TEST_RESULT_MASK_PARAM_ID                  (0xE9000188u)

#define CapSense_EXT_CAP0_VALUE                             (CapSense_dsRam.selfTest.extCap[0u])
#define CapSense_EXT_CAP0_OFFSET                            (396u)
#define CapSense_EXT_CAP0_SIZE                              (2u)
#define CapSense_EXT_CAP0_PARAM_ID                          (0xA700018Cu)

#define CapSense_VDDA_VOLTAGE_VALUE                         (CapSense_dsRam.selfTest.vddaVoltage)
#define CapSense_VDDA_VOLTAGE_OFFSET                        (398u)
#define CapSense_VDDA_VOLTAGE_SIZE                          (2u)
#define CapSense_VDDA_VOLTAGE_PARAM_ID                      (0xAB00018Eu)

#define CapSense_GLB_CRC_CALC_VALUE                         (CapSense_dsRam.selfTest.glbCrcCalc)
#define CapSense_GLB_CRC_CALC_OFFSET                        (400u)
#define CapSense_GLB_CRC_CALC_SIZE                          (2u)
#define CapSense_GLB_CRC_CALC_PARAM_ID                      (0xA1000190u)

#define CapSense_WDGT_CRC_CALC_VALUE                        (CapSense_dsRam.selfTest.wdgtCrcCalc)
#define CapSense_WDGT_CRC_CALC_OFFSET                       (402u)
#define CapSense_WDGT_CRC_CALC_SIZE                         (2u)
#define CapSense_WDGT_CRC_CALC_PARAM_ID                     (0xAD000192u)

#define CapSense_WDGT_CRC_ID_VALUE                          (CapSense_dsRam.selfTest.wdgtCrcId)
#define CapSense_WDGT_CRC_ID_OFFSET                         (404u)
#define CapSense_WDGT_CRC_ID_SIZE                           (1u)
#define CapSense_WDGT_CRC_ID_PARAM_ID                       (0x68000194u)

#define CapSense_INV_BSLN_WDGT_ID_VALUE                     (CapSense_dsRam.selfTest.invBslnWdgtId)
#define CapSense_INV_BSLN_WDGT_ID_OFFSET                    (405u)
#define CapSense_INV_BSLN_WDGT_ID_SIZE                      (1u)
#define CapSense_INV_BSLN_WDGT_ID_PARAM_ID                  (0x6E000195u)

#define CapSense_INV_BSLN_SNS_ID_VALUE                      (CapSense_dsRam.selfTest.invBslnSnsId)
#define CapSense_INV_BSLN_SNS_ID_OFFSET                     (406u)
#define CapSense_INV_BSLN_SNS_ID_SIZE                       (1u)
#define CapSense_INV_BSLN_SNS_ID_PARAM_ID                   (0x64000196u)

#define CapSense_SHORTED_WDGT_ID_VALUE                      (CapSense_dsRam.selfTest.shortedWdgtId)
#define CapSense_SHORTED_WDGT_ID_OFFSET                     (407u)
#define CapSense_SHORTED_WDGT_ID_SIZE                       (1u)
#define CapSense_SHORTED_WDGT_ID_PARAM_ID                   (0x62000197u)

#define CapSense_SHORTED_SNS_ID_VALUE                       (CapSense_dsRam.selfTest.shortedSnsId)
#define CapSense_SHORTED_SNS_ID_OFFSET                      (408u)
#define CapSense_SHORTED_SNS_ID_SIZE                        (1u)
#define CapSense_SHORTED_SNS_ID_PARAM_ID                    (0x6B000198u)

#define CapSense_P2P_WDGT_ID_VALUE                          (CapSense_dsRam.selfTest.p2pWdgtId)
#define CapSense_P2P_WDGT_ID_OFFSET                         (409u)
#define CapSense_P2P_WDGT_ID_SIZE                           (1u)
#define CapSense_P2P_WDGT_ID_PARAM_ID                       (0x6D000199u)

#define CapSense_P2P_SNS_ID_VALUE                           (CapSense_dsRam.selfTest.p2pSnsId)
#define CapSense_P2P_SNS_ID_OFFSET                          (410u)
#define CapSense_P2P_SNS_ID_SIZE                            (1u)
#define CapSense_P2P_SNS_ID_PARAM_ID                        (0x6700019Au)

#define CapSense_BUTTON0_SNS_CP0_VALUE                      (CapSense_dsRam.snsCp.button0[0u])
#define CapSense_BUTTON0_SNS_CP0_OFFSET                     (412u)
#define CapSense_BUTTON0_SNS_CP0_SIZE                       (1u)
#define CapSense_BUTTON0_SNS_CP0_PARAM_ID                   (0x6A00019Cu)

#define CapSense_BUTTON1_SNS_CP0_VALUE                      (CapSense_dsRam.snsCp.button1[0u])
#define CapSense_BUTTON1_SNS_CP0_OFFSET                     (413u)
#define CapSense_BUTTON1_SNS_CP0_SIZE                       (1u)
#define CapSense_BUTTON1_SNS_CP0_PARAM_ID                   (0x6C00019Du)

#define CapSense_BUTTON2_SNS_CP0_VALUE                      (CapSense_dsRam.snsCp.button2[0u])
#define CapSense_BUTTON2_SNS_CP0_OFFSET                     (414u)
#define CapSense_BUTTON2_SNS_CP0_SIZE                       (1u)
#define CapSense_BUTTON2_SNS_CP0_PARAM_ID                   (0x6600019Eu)

#define CapSense_BUTTON3_SNS_CP0_VALUE                      (CapSense_dsRam.snsCp.button3[0u])
#define CapSense_BUTTON3_SNS_CP0_OFFSET                     (415u)
#define CapSense_BUTTON3_SNS_CP0_SIZE                       (1u)
#define CapSense_BUTTON3_SNS_CP0_PARAM_ID                   (0x6000019Fu)

#define CapSense_BUTTON4_SNS_CP0_VALUE                      (CapSense_dsRam.snsCp.button4[0u])
#define CapSense_BUTTON4_SNS_CP0_OFFSET                     (416u)
#define CapSense_BUTTON4_SNS_CP0_SIZE                       (1u)
#define CapSense_BUTTON4_SNS_CP0_PARAM_ID                   (0x660001A0u)

#define CapSense_BUTTON5_SNS_CP0_VALUE                      (CapSense_dsRam.snsCp.button5[0u])
#define CapSense_BUTTON5_SNS_CP0_OFFSET                     (417u)
#define CapSense_BUTTON5_SNS_CP0_SIZE                       (1u)
#define CapSense_BUTTON5_SNS_CP0_PARAM_ID                   (0x600001A1u)

#define CapSense_BUTTON6_SNS_CP0_VALUE                      (CapSense_dsRam.snsCp.button6[0u])
#define CapSense_BUTTON6_SNS_CP0_OFFSET                     (418u)
#define CapSense_BUTTON6_SNS_CP0_SIZE                       (1u)
#define CapSense_BUTTON6_SNS_CP0_PARAM_ID                   (0x6A0001A2u)

#define CapSense_BUTTON7_SNS_CP0_VALUE                      (CapSense_dsRam.snsCp.button7[0u])
#define CapSense_BUTTON7_SNS_CP0_OFFSET                     (419u)
#define CapSense_BUTTON7_SNS_CP0_SIZE                       (1u)
#define CapSense_BUTTON7_SNS_CP0_PARAM_ID                   (0x6C0001A3u)

#define CapSense_BUTTON8_SNS_CP0_VALUE                      (CapSense_dsRam.snsCp.button8[0u])
#define CapSense_BUTTON8_SNS_CP0_OFFSET                     (420u)
#define CapSense_BUTTON8_SNS_CP0_SIZE                       (1u)
#define CapSense_BUTTON8_SNS_CP0_PARAM_ID                   (0x670001A4u)

#define CapSense_BUTTON9_SNS_CP0_VALUE                      (CapSense_dsRam.snsCp.button9[0u])
#define CapSense_BUTTON9_SNS_CP0_OFFSET                     (421u)
#define CapSense_BUTTON9_SNS_CP0_SIZE                       (1u)
#define CapSense_BUTTON9_SNS_CP0_PARAM_ID                   (0x610001A5u)

#define CapSense_BUTTONCLR_SNS_CP0_VALUE                    (CapSense_dsRam.snsCp.buttonclr[0u])
#define CapSense_BUTTONCLR_SNS_CP0_OFFSET                   (422u)
#define CapSense_BUTTONCLR_SNS_CP0_SIZE                     (1u)
#define CapSense_BUTTONCLR_SNS_CP0_PARAM_ID                 (0x6B0001A6u)

#define CapSense_BUTTONENTR_SNS_CP0_VALUE                   (CapSense_dsRam.snsCp.buttonentr[0u])
#define CapSense_BUTTONENTR_SNS_CP0_OFFSET                  (423u)
#define CapSense_BUTTONENTR_SNS_CP0_SIZE                    (1u)
#define CapSense_BUTTONENTR_SNS_CP0_PARAM_ID                (0x6D0001A7u)

#define CapSense_PROXIMITY0_SNS_CP0_VALUE                   (CapSense_dsRam.snsCp.proximity0[0u])
#define CapSense_PROXIMITY0_SNS_CP0_OFFSET                  (424u)
#define CapSense_PROXIMITY0_SNS_CP0_SIZE                    (1u)
#define CapSense_PROXIMITY0_SNS_CP0_PARAM_ID                (0x640001A8u)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (425u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x620001A9u)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (426u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x680001AAu)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (428u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x860001ACu)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (430u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x8A0001AEu)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_BUTTON0_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_BUTTON0_PTR2SNS_FLASH_OFFSET               (0u)
#define CapSense_BUTTON0_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON0_PTR2SNS_FLASH_PARAM_ID             (0xD1000000u)

#define CapSense_BUTTON0_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_BUTTON0_PTR2WD_RAM_OFFSET                  (4u)
#define CapSense_BUTTON0_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON0_PTR2WD_RAM_PARAM_ID                (0xD0000004u)

#define CapSense_BUTTON0_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_BUTTON0_PTR2SNS_RAM_OFFSET                 (8u)
#define CapSense_BUTTON0_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON0_PTR2SNS_RAM_PARAM_ID               (0xD3000008u)

#define CapSense_BUTTON0_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_OFFSET            (12u)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID          (0xD200000Cu)

#define CapSense_BUTTON0_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_BUTTON0_PTR2DEBOUNCE_OFFSET                (16u)
#define CapSense_BUTTON0_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON0_PTR2DEBOUNCE_PARAM_ID              (0xD4000010u)

#define CapSense_BUTTON0_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_BUTTON0_STATIC_CONFIG_OFFSET               (20u)
#define CapSense_BUTTON0_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON0_STATIC_CONFIG_PARAM_ID             (0xD5000014u)

#define CapSense_BUTTON0_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_OFFSET               (24u)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_PARAM_ID             (0x99000018u)

#define CapSense_BUTTON0_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_BUTTON0_TYPE_OFFSET                        (26u)
#define CapSense_BUTTON0_TYPE_SIZE                          (1u)
#define CapSense_BUTTON0_TYPE_PARAM_ID                      (0x5D00001Au)

#define CapSense_BUTTON0_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[0].numCols)
#define CapSense_BUTTON0_NUM_COLS_OFFSET                    (27u)
#define CapSense_BUTTON0_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON0_NUM_COLS_PARAM_ID                  (0x5B00001Bu)

#define CapSense_BUTTON0_PTR2SNS_CP_VALUE                   (CapSense_dsFlash.wdgtArray[0].ptr2SnsCpArr)
#define CapSense_BUTTON0_PTR2SNS_CP_OFFSET                  (28u)
#define CapSense_BUTTON0_PTR2SNS_CP_SIZE                    (4u)
#define CapSense_BUTTON0_PTR2SNS_CP_PARAM_ID                (0xD700001Cu)

#define CapSense_BUTTON1_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_BUTTON1_PTR2SNS_FLASH_OFFSET               (32u)
#define CapSense_BUTTON1_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON1_PTR2SNS_FLASH_PARAM_ID             (0xD8010020u)

#define CapSense_BUTTON1_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_BUTTON1_PTR2WD_RAM_OFFSET                  (36u)
#define CapSense_BUTTON1_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON1_PTR2WD_RAM_PARAM_ID                (0xD9010024u)

#define CapSense_BUTTON1_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_BUTTON1_PTR2SNS_RAM_OFFSET                 (40u)
#define CapSense_BUTTON1_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON1_PTR2SNS_RAM_PARAM_ID               (0xDA010028u)

#define CapSense_BUTTON1_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_BUTTON1_PTR2FLTR_HISTORY_OFFSET            (44u)
#define CapSense_BUTTON1_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID          (0xDB01002Cu)

#define CapSense_BUTTON1_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_BUTTON1_PTR2DEBOUNCE_OFFSET                (48u)
#define CapSense_BUTTON1_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON1_PTR2DEBOUNCE_PARAM_ID              (0xDD010030u)

#define CapSense_BUTTON1_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_BUTTON1_STATIC_CONFIG_OFFSET               (52u)
#define CapSense_BUTTON1_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON1_STATIC_CONFIG_PARAM_ID             (0xDC010034u)

#define CapSense_BUTTON1_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_BUTTON1_TOTAL_NUM_SNS_OFFSET               (56u)
#define CapSense_BUTTON1_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON1_TOTAL_NUM_SNS_PARAM_ID             (0x90010038u)

#define CapSense_BUTTON1_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_BUTTON1_TYPE_OFFSET                        (58u)
#define CapSense_BUTTON1_TYPE_SIZE                          (1u)
#define CapSense_BUTTON1_TYPE_PARAM_ID                      (0x5401003Au)

#define CapSense_BUTTON1_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[1].numCols)
#define CapSense_BUTTON1_NUM_COLS_OFFSET                    (59u)
#define CapSense_BUTTON1_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON1_NUM_COLS_PARAM_ID                  (0x5201003Bu)

#define CapSense_BUTTON1_PTR2SNS_CP_VALUE                   (CapSense_dsFlash.wdgtArray[1].ptr2SnsCpArr)
#define CapSense_BUTTON1_PTR2SNS_CP_OFFSET                  (60u)
#define CapSense_BUTTON1_PTR2SNS_CP_SIZE                    (4u)
#define CapSense_BUTTON1_PTR2SNS_CP_PARAM_ID                (0xDE01003Cu)

#define CapSense_BUTTON2_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_BUTTON2_PTR2SNS_FLASH_OFFSET               (64u)
#define CapSense_BUTTON2_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON2_PTR2SNS_FLASH_PARAM_ID             (0xDA020040u)

#define CapSense_BUTTON2_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_BUTTON2_PTR2WD_RAM_OFFSET                  (68u)
#define CapSense_BUTTON2_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON2_PTR2WD_RAM_PARAM_ID                (0xDB020044u)

#define CapSense_BUTTON2_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_BUTTON2_PTR2SNS_RAM_OFFSET                 (72u)
#define CapSense_BUTTON2_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON2_PTR2SNS_RAM_PARAM_ID               (0xD8020048u)

#define CapSense_BUTTON2_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_BUTTON2_PTR2FLTR_HISTORY_OFFSET            (76u)
#define CapSense_BUTTON2_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON2_PTR2FLTR_HISTORY_PARAM_ID          (0xD902004Cu)

#define CapSense_BUTTON2_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_BUTTON2_PTR2DEBOUNCE_OFFSET                (80u)
#define CapSense_BUTTON2_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON2_PTR2DEBOUNCE_PARAM_ID              (0xDF020050u)

#define CapSense_BUTTON2_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_BUTTON2_STATIC_CONFIG_OFFSET               (84u)
#define CapSense_BUTTON2_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON2_STATIC_CONFIG_PARAM_ID             (0xDE020054u)

#define CapSense_BUTTON2_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_BUTTON2_TOTAL_NUM_SNS_OFFSET               (88u)
#define CapSense_BUTTON2_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON2_TOTAL_NUM_SNS_PARAM_ID             (0x92020058u)

#define CapSense_BUTTON2_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_BUTTON2_TYPE_OFFSET                        (90u)
#define CapSense_BUTTON2_TYPE_SIZE                          (1u)
#define CapSense_BUTTON2_TYPE_PARAM_ID                      (0x5602005Au)

#define CapSense_BUTTON2_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[2].numCols)
#define CapSense_BUTTON2_NUM_COLS_OFFSET                    (91u)
#define CapSense_BUTTON2_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON2_NUM_COLS_PARAM_ID                  (0x5002005Bu)

#define CapSense_BUTTON2_PTR2SNS_CP_VALUE                   (CapSense_dsFlash.wdgtArray[2].ptr2SnsCpArr)
#define CapSense_BUTTON2_PTR2SNS_CP_OFFSET                  (92u)
#define CapSense_BUTTON2_PTR2SNS_CP_SIZE                    (4u)
#define CapSense_BUTTON2_PTR2SNS_CP_PARAM_ID                (0xDC02005Cu)

#define CapSense_BUTTON3_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_BUTTON3_PTR2SNS_FLASH_OFFSET               (96u)
#define CapSense_BUTTON3_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON3_PTR2SNS_FLASH_PARAM_ID             (0xD3030060u)

#define CapSense_BUTTON3_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_BUTTON3_PTR2WD_RAM_OFFSET                  (100u)
#define CapSense_BUTTON3_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON3_PTR2WD_RAM_PARAM_ID                (0xD2030064u)

#define CapSense_BUTTON3_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_BUTTON3_PTR2SNS_RAM_OFFSET                 (104u)
#define CapSense_BUTTON3_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON3_PTR2SNS_RAM_PARAM_ID               (0xD1030068u)

#define CapSense_BUTTON3_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_BUTTON3_PTR2FLTR_HISTORY_OFFSET            (108u)
#define CapSense_BUTTON3_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON3_PTR2FLTR_HISTORY_PARAM_ID          (0xD003006Cu)

#define CapSense_BUTTON3_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_BUTTON3_PTR2DEBOUNCE_OFFSET                (112u)
#define CapSense_BUTTON3_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON3_PTR2DEBOUNCE_PARAM_ID              (0xD6030070u)

#define CapSense_BUTTON3_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_BUTTON3_STATIC_CONFIG_OFFSET               (116u)
#define CapSense_BUTTON3_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON3_STATIC_CONFIG_PARAM_ID             (0xD7030074u)

#define CapSense_BUTTON3_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_BUTTON3_TOTAL_NUM_SNS_OFFSET               (120u)
#define CapSense_BUTTON3_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON3_TOTAL_NUM_SNS_PARAM_ID             (0x9B030078u)

#define CapSense_BUTTON3_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_BUTTON3_TYPE_OFFSET                        (122u)
#define CapSense_BUTTON3_TYPE_SIZE                          (1u)
#define CapSense_BUTTON3_TYPE_PARAM_ID                      (0x5F03007Au)

#define CapSense_BUTTON3_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[3].numCols)
#define CapSense_BUTTON3_NUM_COLS_OFFSET                    (123u)
#define CapSense_BUTTON3_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON3_NUM_COLS_PARAM_ID                  (0x5903007Bu)

#define CapSense_BUTTON3_PTR2SNS_CP_VALUE                   (CapSense_dsFlash.wdgtArray[3].ptr2SnsCpArr)
#define CapSense_BUTTON3_PTR2SNS_CP_OFFSET                  (124u)
#define CapSense_BUTTON3_PTR2SNS_CP_SIZE                    (4u)
#define CapSense_BUTTON3_PTR2SNS_CP_PARAM_ID                (0xD503007Cu)

#define CapSense_BUTTON4_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define CapSense_BUTTON4_PTR2SNS_FLASH_OFFSET               (128u)
#define CapSense_BUTTON4_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON4_PTR2SNS_FLASH_PARAM_ID             (0xDE040080u)

#define CapSense_BUTTON4_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define CapSense_BUTTON4_PTR2WD_RAM_OFFSET                  (132u)
#define CapSense_BUTTON4_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON4_PTR2WD_RAM_PARAM_ID                (0xDF040084u)

#define CapSense_BUTTON4_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[4].ptr2SnsRam)
#define CapSense_BUTTON4_PTR2SNS_RAM_OFFSET                 (136u)
#define CapSense_BUTTON4_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON4_PTR2SNS_RAM_PARAM_ID               (0xDC040088u)

#define CapSense_BUTTON4_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define CapSense_BUTTON4_PTR2FLTR_HISTORY_OFFSET            (140u)
#define CapSense_BUTTON4_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON4_PTR2FLTR_HISTORY_PARAM_ID          (0xDD04008Cu)

#define CapSense_BUTTON4_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define CapSense_BUTTON4_PTR2DEBOUNCE_OFFSET                (144u)
#define CapSense_BUTTON4_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON4_PTR2DEBOUNCE_PARAM_ID              (0xDB040090u)

#define CapSense_BUTTON4_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[4].staticConfig)
#define CapSense_BUTTON4_STATIC_CONFIG_OFFSET               (148u)
#define CapSense_BUTTON4_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON4_STATIC_CONFIG_PARAM_ID             (0xDA040094u)

#define CapSense_BUTTON4_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[4].totalNumSns)
#define CapSense_BUTTON4_TOTAL_NUM_SNS_OFFSET               (152u)
#define CapSense_BUTTON4_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON4_TOTAL_NUM_SNS_PARAM_ID             (0x96040098u)

#define CapSense_BUTTON4_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[4].wdgtType)
#define CapSense_BUTTON4_TYPE_OFFSET                        (154u)
#define CapSense_BUTTON4_TYPE_SIZE                          (1u)
#define CapSense_BUTTON4_TYPE_PARAM_ID                      (0x5204009Au)

#define CapSense_BUTTON4_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[4].numCols)
#define CapSense_BUTTON4_NUM_COLS_OFFSET                    (155u)
#define CapSense_BUTTON4_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON4_NUM_COLS_PARAM_ID                  (0x5404009Bu)

#define CapSense_BUTTON4_PTR2SNS_CP_VALUE                   (CapSense_dsFlash.wdgtArray[4].ptr2SnsCpArr)
#define CapSense_BUTTON4_PTR2SNS_CP_OFFSET                  (156u)
#define CapSense_BUTTON4_PTR2SNS_CP_SIZE                    (4u)
#define CapSense_BUTTON4_PTR2SNS_CP_PARAM_ID                (0xD804009Cu)

#define CapSense_BUTTON5_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[5].ptr2SnsFlash)
#define CapSense_BUTTON5_PTR2SNS_FLASH_OFFSET               (160u)
#define CapSense_BUTTON5_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON5_PTR2SNS_FLASH_PARAM_ID             (0xD70500A0u)

#define CapSense_BUTTON5_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[5].ptr2WdgtRam)
#define CapSense_BUTTON5_PTR2WD_RAM_OFFSET                  (164u)
#define CapSense_BUTTON5_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON5_PTR2WD_RAM_PARAM_ID                (0xD60500A4u)

#define CapSense_BUTTON5_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[5].ptr2SnsRam)
#define CapSense_BUTTON5_PTR2SNS_RAM_OFFSET                 (168u)
#define CapSense_BUTTON5_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON5_PTR2SNS_RAM_PARAM_ID               (0xD50500A8u)

#define CapSense_BUTTON5_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[5].ptr2FltrHistory)
#define CapSense_BUTTON5_PTR2FLTR_HISTORY_OFFSET            (172u)
#define CapSense_BUTTON5_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON5_PTR2FLTR_HISTORY_PARAM_ID          (0xD40500ACu)

#define CapSense_BUTTON5_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[5].ptr2DebounceArr)
#define CapSense_BUTTON5_PTR2DEBOUNCE_OFFSET                (176u)
#define CapSense_BUTTON5_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON5_PTR2DEBOUNCE_PARAM_ID              (0xD20500B0u)

#define CapSense_BUTTON5_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[5].staticConfig)
#define CapSense_BUTTON5_STATIC_CONFIG_OFFSET               (180u)
#define CapSense_BUTTON5_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON5_STATIC_CONFIG_PARAM_ID             (0xD30500B4u)

#define CapSense_BUTTON5_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[5].totalNumSns)
#define CapSense_BUTTON5_TOTAL_NUM_SNS_OFFSET               (184u)
#define CapSense_BUTTON5_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON5_TOTAL_NUM_SNS_PARAM_ID             (0x9F0500B8u)

#define CapSense_BUTTON5_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[5].wdgtType)
#define CapSense_BUTTON5_TYPE_OFFSET                        (186u)
#define CapSense_BUTTON5_TYPE_SIZE                          (1u)
#define CapSense_BUTTON5_TYPE_PARAM_ID                      (0x5B0500BAu)

#define CapSense_BUTTON5_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[5].numCols)
#define CapSense_BUTTON5_NUM_COLS_OFFSET                    (187u)
#define CapSense_BUTTON5_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON5_NUM_COLS_PARAM_ID                  (0x5D0500BBu)

#define CapSense_BUTTON5_PTR2SNS_CP_VALUE                   (CapSense_dsFlash.wdgtArray[5].ptr2SnsCpArr)
#define CapSense_BUTTON5_PTR2SNS_CP_OFFSET                  (188u)
#define CapSense_BUTTON5_PTR2SNS_CP_SIZE                    (4u)
#define CapSense_BUTTON5_PTR2SNS_CP_PARAM_ID                (0xD10500BCu)

#define CapSense_BUTTON6_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[6].ptr2SnsFlash)
#define CapSense_BUTTON6_PTR2SNS_FLASH_OFFSET               (192u)
#define CapSense_BUTTON6_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON6_PTR2SNS_FLASH_PARAM_ID             (0xD50600C0u)

#define CapSense_BUTTON6_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[6].ptr2WdgtRam)
#define CapSense_BUTTON6_PTR2WD_RAM_OFFSET                  (196u)
#define CapSense_BUTTON6_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON6_PTR2WD_RAM_PARAM_ID                (0xD40600C4u)

#define CapSense_BUTTON6_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[6].ptr2SnsRam)
#define CapSense_BUTTON6_PTR2SNS_RAM_OFFSET                 (200u)
#define CapSense_BUTTON6_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON6_PTR2SNS_RAM_PARAM_ID               (0xD70600C8u)

#define CapSense_BUTTON6_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[6].ptr2FltrHistory)
#define CapSense_BUTTON6_PTR2FLTR_HISTORY_OFFSET            (204u)
#define CapSense_BUTTON6_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON6_PTR2FLTR_HISTORY_PARAM_ID          (0xD60600CCu)

#define CapSense_BUTTON6_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[6].ptr2DebounceArr)
#define CapSense_BUTTON6_PTR2DEBOUNCE_OFFSET                (208u)
#define CapSense_BUTTON6_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON6_PTR2DEBOUNCE_PARAM_ID              (0xD00600D0u)

#define CapSense_BUTTON6_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[6].staticConfig)
#define CapSense_BUTTON6_STATIC_CONFIG_OFFSET               (212u)
#define CapSense_BUTTON6_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON6_STATIC_CONFIG_PARAM_ID             (0xD10600D4u)

#define CapSense_BUTTON6_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[6].totalNumSns)
#define CapSense_BUTTON6_TOTAL_NUM_SNS_OFFSET               (216u)
#define CapSense_BUTTON6_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON6_TOTAL_NUM_SNS_PARAM_ID             (0x9D0600D8u)

#define CapSense_BUTTON6_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[6].wdgtType)
#define CapSense_BUTTON6_TYPE_OFFSET                        (218u)
#define CapSense_BUTTON6_TYPE_SIZE                          (1u)
#define CapSense_BUTTON6_TYPE_PARAM_ID                      (0x590600DAu)

#define CapSense_BUTTON6_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[6].numCols)
#define CapSense_BUTTON6_NUM_COLS_OFFSET                    (219u)
#define CapSense_BUTTON6_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON6_NUM_COLS_PARAM_ID                  (0x5F0600DBu)

#define CapSense_BUTTON6_PTR2SNS_CP_VALUE                   (CapSense_dsFlash.wdgtArray[6].ptr2SnsCpArr)
#define CapSense_BUTTON6_PTR2SNS_CP_OFFSET                  (220u)
#define CapSense_BUTTON6_PTR2SNS_CP_SIZE                    (4u)
#define CapSense_BUTTON6_PTR2SNS_CP_PARAM_ID                (0xD30600DCu)

#define CapSense_BUTTON7_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[7].ptr2SnsFlash)
#define CapSense_BUTTON7_PTR2SNS_FLASH_OFFSET               (224u)
#define CapSense_BUTTON7_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON7_PTR2SNS_FLASH_PARAM_ID             (0xDC0700E0u)

#define CapSense_BUTTON7_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[7].ptr2WdgtRam)
#define CapSense_BUTTON7_PTR2WD_RAM_OFFSET                  (228u)
#define CapSense_BUTTON7_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON7_PTR2WD_RAM_PARAM_ID                (0xDD0700E4u)

#define CapSense_BUTTON7_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[7].ptr2SnsRam)
#define CapSense_BUTTON7_PTR2SNS_RAM_OFFSET                 (232u)
#define CapSense_BUTTON7_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON7_PTR2SNS_RAM_PARAM_ID               (0xDE0700E8u)

#define CapSense_BUTTON7_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[7].ptr2FltrHistory)
#define CapSense_BUTTON7_PTR2FLTR_HISTORY_OFFSET            (236u)
#define CapSense_BUTTON7_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON7_PTR2FLTR_HISTORY_PARAM_ID          (0xDF0700ECu)

#define CapSense_BUTTON7_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[7].ptr2DebounceArr)
#define CapSense_BUTTON7_PTR2DEBOUNCE_OFFSET                (240u)
#define CapSense_BUTTON7_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON7_PTR2DEBOUNCE_PARAM_ID              (0xD90700F0u)

#define CapSense_BUTTON7_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[7].staticConfig)
#define CapSense_BUTTON7_STATIC_CONFIG_OFFSET               (244u)
#define CapSense_BUTTON7_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON7_STATIC_CONFIG_PARAM_ID             (0xD80700F4u)

#define CapSense_BUTTON7_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[7].totalNumSns)
#define CapSense_BUTTON7_TOTAL_NUM_SNS_OFFSET               (248u)
#define CapSense_BUTTON7_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON7_TOTAL_NUM_SNS_PARAM_ID             (0x940700F8u)

#define CapSense_BUTTON7_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[7].wdgtType)
#define CapSense_BUTTON7_TYPE_OFFSET                        (250u)
#define CapSense_BUTTON7_TYPE_SIZE                          (1u)
#define CapSense_BUTTON7_TYPE_PARAM_ID                      (0x500700FAu)

#define CapSense_BUTTON7_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[7].numCols)
#define CapSense_BUTTON7_NUM_COLS_OFFSET                    (251u)
#define CapSense_BUTTON7_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON7_NUM_COLS_PARAM_ID                  (0x560700FBu)

#define CapSense_BUTTON7_PTR2SNS_CP_VALUE                   (CapSense_dsFlash.wdgtArray[7].ptr2SnsCpArr)
#define CapSense_BUTTON7_PTR2SNS_CP_OFFSET                  (252u)
#define CapSense_BUTTON7_PTR2SNS_CP_SIZE                    (4u)
#define CapSense_BUTTON7_PTR2SNS_CP_PARAM_ID                (0xDA0700FCu)

#define CapSense_BUTTON8_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[8].ptr2SnsFlash)
#define CapSense_BUTTON8_PTR2SNS_FLASH_OFFSET               (256u)
#define CapSense_BUTTON8_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON8_PTR2SNS_FLASH_PARAM_ID             (0xDB080100u)

#define CapSense_BUTTON8_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[8].ptr2WdgtRam)
#define CapSense_BUTTON8_PTR2WD_RAM_OFFSET                  (260u)
#define CapSense_BUTTON8_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON8_PTR2WD_RAM_PARAM_ID                (0xDA080104u)

#define CapSense_BUTTON8_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[8].ptr2SnsRam)
#define CapSense_BUTTON8_PTR2SNS_RAM_OFFSET                 (264u)
#define CapSense_BUTTON8_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON8_PTR2SNS_RAM_PARAM_ID               (0xD9080108u)

#define CapSense_BUTTON8_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[8].ptr2FltrHistory)
#define CapSense_BUTTON8_PTR2FLTR_HISTORY_OFFSET            (268u)
#define CapSense_BUTTON8_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON8_PTR2FLTR_HISTORY_PARAM_ID          (0xD808010Cu)

#define CapSense_BUTTON8_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[8].ptr2DebounceArr)
#define CapSense_BUTTON8_PTR2DEBOUNCE_OFFSET                (272u)
#define CapSense_BUTTON8_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON8_PTR2DEBOUNCE_PARAM_ID              (0xDE080110u)

#define CapSense_BUTTON8_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[8].staticConfig)
#define CapSense_BUTTON8_STATIC_CONFIG_OFFSET               (276u)
#define CapSense_BUTTON8_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON8_STATIC_CONFIG_PARAM_ID             (0xDF080114u)

#define CapSense_BUTTON8_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[8].totalNumSns)
#define CapSense_BUTTON8_TOTAL_NUM_SNS_OFFSET               (280u)
#define CapSense_BUTTON8_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON8_TOTAL_NUM_SNS_PARAM_ID             (0x93080118u)

#define CapSense_BUTTON8_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[8].wdgtType)
#define CapSense_BUTTON8_TYPE_OFFSET                        (282u)
#define CapSense_BUTTON8_TYPE_SIZE                          (1u)
#define CapSense_BUTTON8_TYPE_PARAM_ID                      (0x5708011Au)

#define CapSense_BUTTON8_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[8].numCols)
#define CapSense_BUTTON8_NUM_COLS_OFFSET                    (283u)
#define CapSense_BUTTON8_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON8_NUM_COLS_PARAM_ID                  (0x5108011Bu)

#define CapSense_BUTTON8_PTR2SNS_CP_VALUE                   (CapSense_dsFlash.wdgtArray[8].ptr2SnsCpArr)
#define CapSense_BUTTON8_PTR2SNS_CP_OFFSET                  (284u)
#define CapSense_BUTTON8_PTR2SNS_CP_SIZE                    (4u)
#define CapSense_BUTTON8_PTR2SNS_CP_PARAM_ID                (0xDD08011Cu)

#define CapSense_BUTTON9_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[9].ptr2SnsFlash)
#define CapSense_BUTTON9_PTR2SNS_FLASH_OFFSET               (288u)
#define CapSense_BUTTON9_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON9_PTR2SNS_FLASH_PARAM_ID             (0xD2090120u)

#define CapSense_BUTTON9_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[9].ptr2WdgtRam)
#define CapSense_BUTTON9_PTR2WD_RAM_OFFSET                  (292u)
#define CapSense_BUTTON9_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON9_PTR2WD_RAM_PARAM_ID                (0xD3090124u)

#define CapSense_BUTTON9_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[9].ptr2SnsRam)
#define CapSense_BUTTON9_PTR2SNS_RAM_OFFSET                 (296u)
#define CapSense_BUTTON9_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON9_PTR2SNS_RAM_PARAM_ID               (0xD0090128u)

#define CapSense_BUTTON9_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[9].ptr2FltrHistory)
#define CapSense_BUTTON9_PTR2FLTR_HISTORY_OFFSET            (300u)
#define CapSense_BUTTON9_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON9_PTR2FLTR_HISTORY_PARAM_ID          (0xD109012Cu)

#define CapSense_BUTTON9_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[9].ptr2DebounceArr)
#define CapSense_BUTTON9_PTR2DEBOUNCE_OFFSET                (304u)
#define CapSense_BUTTON9_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON9_PTR2DEBOUNCE_PARAM_ID              (0xD7090130u)

#define CapSense_BUTTON9_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[9].staticConfig)
#define CapSense_BUTTON9_STATIC_CONFIG_OFFSET               (308u)
#define CapSense_BUTTON9_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON9_STATIC_CONFIG_PARAM_ID             (0xD6090134u)

#define CapSense_BUTTON9_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[9].totalNumSns)
#define CapSense_BUTTON9_TOTAL_NUM_SNS_OFFSET               (312u)
#define CapSense_BUTTON9_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON9_TOTAL_NUM_SNS_PARAM_ID             (0x9A090138u)

#define CapSense_BUTTON9_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[9].wdgtType)
#define CapSense_BUTTON9_TYPE_OFFSET                        (314u)
#define CapSense_BUTTON9_TYPE_SIZE                          (1u)
#define CapSense_BUTTON9_TYPE_PARAM_ID                      (0x5E09013Au)

#define CapSense_BUTTON9_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[9].numCols)
#define CapSense_BUTTON9_NUM_COLS_OFFSET                    (315u)
#define CapSense_BUTTON9_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON9_NUM_COLS_PARAM_ID                  (0x5809013Bu)

#define CapSense_BUTTON9_PTR2SNS_CP_VALUE                   (CapSense_dsFlash.wdgtArray[9].ptr2SnsCpArr)
#define CapSense_BUTTON9_PTR2SNS_CP_OFFSET                  (316u)
#define CapSense_BUTTON9_PTR2SNS_CP_SIZE                    (4u)
#define CapSense_BUTTON9_PTR2SNS_CP_PARAM_ID                (0xD409013Cu)

#define CapSense_BUTTONCLR_PTR2SNS_FLASH_VALUE              (CapSense_dsFlash.wdgtArray[10].ptr2SnsFlash)
#define CapSense_BUTTONCLR_PTR2SNS_FLASH_OFFSET             (320u)
#define CapSense_BUTTONCLR_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_BUTTONCLR_PTR2SNS_FLASH_PARAM_ID           (0xD00A0140u)

#define CapSense_BUTTONCLR_PTR2WD_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[10].ptr2WdgtRam)
#define CapSense_BUTTONCLR_PTR2WD_RAM_OFFSET                (324u)
#define CapSense_BUTTONCLR_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_BUTTONCLR_PTR2WD_RAM_PARAM_ID              (0xD10A0144u)

#define CapSense_BUTTONCLR_PTR2SNS_RAM_VALUE                (CapSense_dsFlash.wdgtArray[10].ptr2SnsRam)
#define CapSense_BUTTONCLR_PTR2SNS_RAM_OFFSET               (328u)
#define CapSense_BUTTONCLR_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_BUTTONCLR_PTR2SNS_RAM_PARAM_ID             (0xD20A0148u)

#define CapSense_BUTTONCLR_PTR2FLTR_HISTORY_VALUE           (CapSense_dsFlash.wdgtArray[10].ptr2FltrHistory)
#define CapSense_BUTTONCLR_PTR2FLTR_HISTORY_OFFSET          (332u)
#define CapSense_BUTTONCLR_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_BUTTONCLR_PTR2FLTR_HISTORY_PARAM_ID        (0xD30A014Cu)

#define CapSense_BUTTONCLR_PTR2DEBOUNCE_VALUE               (CapSense_dsFlash.wdgtArray[10].ptr2DebounceArr)
#define CapSense_BUTTONCLR_PTR2DEBOUNCE_OFFSET              (336u)
#define CapSense_BUTTONCLR_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_BUTTONCLR_PTR2DEBOUNCE_PARAM_ID            (0xD50A0150u)

#define CapSense_BUTTONCLR_STATIC_CONFIG_VALUE              (CapSense_dsFlash.wdgtArray[10].staticConfig)
#define CapSense_BUTTONCLR_STATIC_CONFIG_OFFSET             (340u)
#define CapSense_BUTTONCLR_STATIC_CONFIG_SIZE               (4u)
#define CapSense_BUTTONCLR_STATIC_CONFIG_PARAM_ID           (0xD40A0154u)

#define CapSense_BUTTONCLR_TOTAL_NUM_SNS_VALUE              (CapSense_dsFlash.wdgtArray[10].totalNumSns)
#define CapSense_BUTTONCLR_TOTAL_NUM_SNS_OFFSET             (344u)
#define CapSense_BUTTONCLR_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_BUTTONCLR_TOTAL_NUM_SNS_PARAM_ID           (0x980A0158u)

#define CapSense_BUTTONCLR_TYPE_VALUE                       (CapSense_dsFlash.wdgtArray[10].wdgtType)
#define CapSense_BUTTONCLR_TYPE_OFFSET                      (346u)
#define CapSense_BUTTONCLR_TYPE_SIZE                        (1u)
#define CapSense_BUTTONCLR_TYPE_PARAM_ID                    (0x5C0A015Au)

#define CapSense_BUTTONCLR_NUM_COLS_VALUE                   (CapSense_dsFlash.wdgtArray[10].numCols)
#define CapSense_BUTTONCLR_NUM_COLS_OFFSET                  (347u)
#define CapSense_BUTTONCLR_NUM_COLS_SIZE                    (1u)
#define CapSense_BUTTONCLR_NUM_COLS_PARAM_ID                (0x5A0A015Bu)

#define CapSense_BUTTONCLR_PTR2SNS_CP_VALUE                 (CapSense_dsFlash.wdgtArray[10].ptr2SnsCpArr)
#define CapSense_BUTTONCLR_PTR2SNS_CP_OFFSET                (348u)
#define CapSense_BUTTONCLR_PTR2SNS_CP_SIZE                  (4u)
#define CapSense_BUTTONCLR_PTR2SNS_CP_PARAM_ID              (0xD60A015Cu)

#define CapSense_BUTTONENTR_PTR2SNS_FLASH_VALUE             (CapSense_dsFlash.wdgtArray[11].ptr2SnsFlash)
#define CapSense_BUTTONENTR_PTR2SNS_FLASH_OFFSET            (352u)
#define CapSense_BUTTONENTR_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_BUTTONENTR_PTR2SNS_FLASH_PARAM_ID          (0xD90B0160u)

#define CapSense_BUTTONENTR_PTR2WD_RAM_VALUE                (CapSense_dsFlash.wdgtArray[11].ptr2WdgtRam)
#define CapSense_BUTTONENTR_PTR2WD_RAM_OFFSET               (356u)
#define CapSense_BUTTONENTR_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_BUTTONENTR_PTR2WD_RAM_PARAM_ID             (0xD80B0164u)

#define CapSense_BUTTONENTR_PTR2SNS_RAM_VALUE               (CapSense_dsFlash.wdgtArray[11].ptr2SnsRam)
#define CapSense_BUTTONENTR_PTR2SNS_RAM_OFFSET              (360u)
#define CapSense_BUTTONENTR_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_BUTTONENTR_PTR2SNS_RAM_PARAM_ID            (0xDB0B0168u)

#define CapSense_BUTTONENTR_PTR2FLTR_HISTORY_VALUE          (CapSense_dsFlash.wdgtArray[11].ptr2FltrHistory)
#define CapSense_BUTTONENTR_PTR2FLTR_HISTORY_OFFSET         (364u)
#define CapSense_BUTTONENTR_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_BUTTONENTR_PTR2FLTR_HISTORY_PARAM_ID       (0xDA0B016Cu)

#define CapSense_BUTTONENTR_PTR2DEBOUNCE_VALUE              (CapSense_dsFlash.wdgtArray[11].ptr2DebounceArr)
#define CapSense_BUTTONENTR_PTR2DEBOUNCE_OFFSET             (368u)
#define CapSense_BUTTONENTR_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_BUTTONENTR_PTR2DEBOUNCE_PARAM_ID           (0xDC0B0170u)

#define CapSense_BUTTONENTR_STATIC_CONFIG_VALUE             (CapSense_dsFlash.wdgtArray[11].staticConfig)
#define CapSense_BUTTONENTR_STATIC_CONFIG_OFFSET            (372u)
#define CapSense_BUTTONENTR_STATIC_CONFIG_SIZE              (4u)
#define CapSense_BUTTONENTR_STATIC_CONFIG_PARAM_ID          (0xDD0B0174u)

#define CapSense_BUTTONENTR_TOTAL_NUM_SNS_VALUE             (CapSense_dsFlash.wdgtArray[11].totalNumSns)
#define CapSense_BUTTONENTR_TOTAL_NUM_SNS_OFFSET            (376u)
#define CapSense_BUTTONENTR_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_BUTTONENTR_TOTAL_NUM_SNS_PARAM_ID          (0x910B0178u)

#define CapSense_BUTTONENTR_TYPE_VALUE                      (CapSense_dsFlash.wdgtArray[11].wdgtType)
#define CapSense_BUTTONENTR_TYPE_OFFSET                     (378u)
#define CapSense_BUTTONENTR_TYPE_SIZE                       (1u)
#define CapSense_BUTTONENTR_TYPE_PARAM_ID                   (0x550B017Au)

#define CapSense_BUTTONENTR_NUM_COLS_VALUE                  (CapSense_dsFlash.wdgtArray[11].numCols)
#define CapSense_BUTTONENTR_NUM_COLS_OFFSET                 (379u)
#define CapSense_BUTTONENTR_NUM_COLS_SIZE                   (1u)
#define CapSense_BUTTONENTR_NUM_COLS_PARAM_ID               (0x530B017Bu)

#define CapSense_BUTTONENTR_PTR2SNS_CP_VALUE                (CapSense_dsFlash.wdgtArray[11].ptr2SnsCpArr)
#define CapSense_BUTTONENTR_PTR2SNS_CP_OFFSET               (380u)
#define CapSense_BUTTONENTR_PTR2SNS_CP_SIZE                 (4u)
#define CapSense_BUTTONENTR_PTR2SNS_CP_PARAM_ID             (0xDF0B017Cu)

#define CapSense_PROXIMITY0_PTR2SNS_FLASH_VALUE             (CapSense_dsFlash.wdgtArray[12].ptr2SnsFlash)
#define CapSense_PROXIMITY0_PTR2SNS_FLASH_OFFSET            (384u)
#define CapSense_PROXIMITY0_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_PROXIMITY0_PTR2SNS_FLASH_PARAM_ID          (0xD40C0180u)

#define CapSense_PROXIMITY0_PTR2WD_RAM_VALUE                (CapSense_dsFlash.wdgtArray[12].ptr2WdgtRam)
#define CapSense_PROXIMITY0_PTR2WD_RAM_OFFSET               (388u)
#define CapSense_PROXIMITY0_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_PROXIMITY0_PTR2WD_RAM_PARAM_ID             (0xD50C0184u)

#define CapSense_PROXIMITY0_PTR2SNS_RAM_VALUE               (CapSense_dsFlash.wdgtArray[12].ptr2SnsRam)
#define CapSense_PROXIMITY0_PTR2SNS_RAM_OFFSET              (392u)
#define CapSense_PROXIMITY0_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_PROXIMITY0_PTR2SNS_RAM_PARAM_ID            (0xD60C0188u)

#define CapSense_PROXIMITY0_PTR2FLTR_HISTORY_VALUE          (CapSense_dsFlash.wdgtArray[12].ptr2FltrHistory)
#define CapSense_PROXIMITY0_PTR2FLTR_HISTORY_OFFSET         (396u)
#define CapSense_PROXIMITY0_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_PROXIMITY0_PTR2FLTR_HISTORY_PARAM_ID       (0xD70C018Cu)

#define CapSense_PROXIMITY0_PTR2DEBOUNCE_VALUE              (CapSense_dsFlash.wdgtArray[12].ptr2DebounceArr)
#define CapSense_PROXIMITY0_PTR2DEBOUNCE_OFFSET             (400u)
#define CapSense_PROXIMITY0_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_PROXIMITY0_PTR2DEBOUNCE_PARAM_ID           (0xD10C0190u)

#define CapSense_PROXIMITY0_STATIC_CONFIG_VALUE             (CapSense_dsFlash.wdgtArray[12].staticConfig)
#define CapSense_PROXIMITY0_STATIC_CONFIG_OFFSET            (404u)
#define CapSense_PROXIMITY0_STATIC_CONFIG_SIZE              (4u)
#define CapSense_PROXIMITY0_STATIC_CONFIG_PARAM_ID          (0xD00C0194u)

#define CapSense_PROXIMITY0_TOTAL_NUM_SNS_VALUE             (CapSense_dsFlash.wdgtArray[12].totalNumSns)
#define CapSense_PROXIMITY0_TOTAL_NUM_SNS_OFFSET            (408u)
#define CapSense_PROXIMITY0_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_PROXIMITY0_TOTAL_NUM_SNS_PARAM_ID          (0x9C0C0198u)

#define CapSense_PROXIMITY0_TYPE_VALUE                      (CapSense_dsFlash.wdgtArray[12].wdgtType)
#define CapSense_PROXIMITY0_TYPE_OFFSET                     (410u)
#define CapSense_PROXIMITY0_TYPE_SIZE                       (1u)
#define CapSense_PROXIMITY0_TYPE_PARAM_ID                   (0x580C019Au)

#define CapSense_PROXIMITY0_NUM_COLS_VALUE                  (CapSense_dsFlash.wdgtArray[12].numCols)
#define CapSense_PROXIMITY0_NUM_COLS_OFFSET                 (411u)
#define CapSense_PROXIMITY0_NUM_COLS_SIZE                   (1u)
#define CapSense_PROXIMITY0_NUM_COLS_PARAM_ID               (0x5E0C019Bu)

#define CapSense_PROXIMITY0_PTR2SNS_CP_VALUE                (CapSense_dsFlash.wdgtArray[12].ptr2SnsCpArr)
#define CapSense_PROXIMITY0_PTR2SNS_CP_OFFSET               (412u)
#define CapSense_PROXIMITY0_PTR2SNS_CP_SIZE                 (4u)
#define CapSense_PROXIMITY0_PTR2SNS_CP_PARAM_ID             (0xD20C019Cu)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
