/**
  ******************************************************************************
  * @file    des_common.h
  * @author  MCD Application Team
  * @version V2.0.6
  * @date    25-June-2013
  * @brief   DES common functions and definitions
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2013 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  *******************************************************************************/
#ifndef __DES_COMMON_H__
#define __DES_COMMON_H__

#ifdef __cplusplus
 extern "C" {
#endif

/*----------------- Types declaration -------------*/
/** @addtogroup DES
  * @{
  */
#define CRL_DES_BLOCK   8   /*!< Number of bytes (uint8_t) necessary to store a DES block. */
#define CRL_DES_KEY     8   /*!< Number of bytes (uint8_t) necessary to store a DES key. */

typedef struct
{
  uint32_t   mContextId;   /*!< Unique ID of this context. \b Not \b used in current implementation. */  
  SKflags_et mFlags;       /*!< 32 bit mFlags, used to perform keyschedule, choose betwen hw/sw/hw+dma and future use */ 
  const uint8_t *pmKey;    /*!< Pointer to original Key buffer */  
  const uint8_t *pmIv;     /*!< Pointer to original Initialization Vector buffer */  
  int32_t   mIvSize;       /*!< Size of the Initialization Vector in bytes */  
  uint32_t   amIv[2];      /*!< Temporary result/IV */  
  uint32_t   amExpKey[32]; /*!< Expanded DES key */
} DESCBCctx_stt; /*!< Structure for the context of a DES operation */

 /**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif  /*__DES_COMMON_H__*/

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
