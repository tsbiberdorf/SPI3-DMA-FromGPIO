/*
 * spi3DMA.h
 *
 *  Created on: Jan 20, 2023
 *      Author: TBiberdorf
 */

#ifndef APPLICATIONS_NGRMSENSORSOURCE_SOURCE_SPI3DMA_H_
#define APPLICATIONS_NGRMSENSORSOURCE_SOURCE_SPI3DMA_H_


#define   __I     volatile const       /*!< Defines 'read only' permissions */
#define     __O     volatile             /*!< Defines 'write only' permissions */
#define     __IO    volatile             /*!< Defines 'read / write' permissions */

/* following defines should be used for structure members */
#define     __IM     volatile const      /*! Defines 'read only' structure member permissions */
#define     __OM     volatile            /*! Defines 'write only' structure member permissions */
#define     __IOM    volatile            /*! Defines 'read / write' structure member permissions */



/*!
 * @brief Enumeration for the IOMUXC SW_MUX_CTL_PAD
 *
 * Defines the enumeration for the IOMUXC SW_MUX_CTL_PAD collections.
 */
typedef enum _iomuxc_sw_mux_ctl_pad
{
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_00 = 0U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_01 = 1U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_02 = 2U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_03 = 3U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_04 = 4U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_05 = 5U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_06 = 6U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_07 = 7U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_08 = 8U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_09 = 9U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_10 = 10U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_11 = 11U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_12 = 12U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_13 = 13U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_14 = 14U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_15 = 15U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_16 = 16U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_17 = 17U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_18 = 18U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_19 = 19U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_20 = 20U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_21 = 21U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_22 = 22U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_23 = 23U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_24 = 24U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_25 = 25U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_26 = 26U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_27 = 27U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_28 = 28U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_29 = 29U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_30 = 30U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_31 = 31U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_32 = 32U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_33 = 33U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_34 = 34U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_35 = 35U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_36 = 36U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_37 = 37U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_38 = 38U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_39 = 39U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_40 = 40U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_41 = 41U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_00 = 42U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_01 = 43U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_02 = 44U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_03 = 45U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_04 = 46U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_05 = 47U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_06 = 48U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_07 = 49U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_08 = 50U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_09 = 51U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_10 = 52U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_11 = 53U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_12 = 54U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_13 = 55U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_14 = 56U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_15 = 57U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_00 = 58U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_01 = 59U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_02 = 60U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_03 = 61U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_04 = 62U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_05 = 63U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_06 = 64U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_07 = 65U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_08 = 66U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_09 = 67U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_10 = 68U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_11 = 69U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_12 = 70U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_13 = 71U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_14 = 72U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_15 = 73U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_00 = 74U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_01 = 75U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_02 = 76U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_03 = 77U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_04 = 78U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_05 = 79U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_06 = 80U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_07 = 81U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_08 = 82U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_09 = 83U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_10 = 84U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_11 = 85U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_12 = 86U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_13 = 87U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_14 = 88U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B0_15 = 89U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_00 = 90U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_01 = 91U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_02 = 92U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_03 = 93U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_04 = 94U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_05 = 95U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_06 = 96U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_07 = 97U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_08 = 98U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_09 = 99U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_10 = 100U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_11 = 101U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_12 = 102U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_13 = 103U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_14 = 104U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_15 = 105U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_00 = 106U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_01 = 107U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_02 = 108U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_03 = 109U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_04 = 110U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_05 = 111U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_00 = 112U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01 = 113U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_02 = 114U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03 = 115U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_04 = 116U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_05 = 117U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_06 = 118U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_07 = 119U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_08 = 120U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_09 = 121U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_10 = 122U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_11 = 123U,   /**< IOMUXC SW_MUX_CTL_PAD index */
} iomuxc_sw_mux_ctl_pad_t;

/* @} */

/*!
 * @addtogroup iomuxc_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC SW_MUX_CTL_PAD_1
 *
 * Defines the enumeration for the IOMUXC SW_MUX_CTL_PAD_1 collections.
 */
typedef enum _iomuxc_sw_mux_ctl_pad_1
{
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_00 = 0U,    /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_01 = 1U,    /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_02 = 2U,    /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_03 = 3U,    /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_04 = 4U,    /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_05 = 5U,    /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_06 = 6U,    /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_07 = 7U,    /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_08 = 8U,    /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_09 = 9U,    /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_10 = 10U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_11 = 11U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_12 = 12U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B0_13 = 13U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B1_00 = 14U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B1_01 = 15U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B1_02 = 16U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B1_03 = 17U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B1_04 = 18U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B1_05 = 19U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B1_06 = 20U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO_SPI_B1_07 = 21U,   /**< IOMUXC SW_MUX_CTL_PAD_1 index */
} iomuxc_sw_mux_ctl_pad_1_t;

/* @} */

/*!
 * @addtogroup iomuxc_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC SW_PAD_CTL_PAD
 *
 * Defines the enumeration for the IOMUXC SW_PAD_CTL_PAD collections.
 */
typedef enum _iomuxc_sw_pad_ctl_pad
{
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_00 = 0U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_01 = 1U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_02 = 2U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_03 = 3U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_04 = 4U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_05 = 5U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_06 = 6U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_07 = 7U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_08 = 8U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_09 = 9U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_10 = 10U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_11 = 11U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_12 = 12U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_13 = 13U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_14 = 14U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_15 = 15U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_16 = 16U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_17 = 17U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_18 = 18U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_19 = 19U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_20 = 20U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_21 = 21U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_22 = 22U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_23 = 23U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_24 = 24U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_25 = 25U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_26 = 26U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_27 = 27U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_28 = 28U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_29 = 29U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_30 = 30U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_31 = 31U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_32 = 32U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_33 = 33U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_34 = 34U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_35 = 35U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_36 = 36U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_37 = 37U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_38 = 38U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_39 = 39U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_40 = 40U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_41 = 41U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_00 = 42U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_01 = 43U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_02 = 44U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_03 = 45U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_04 = 46U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_05 = 47U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_06 = 48U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_07 = 49U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_08 = 50U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_09 = 51U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_10 = 52U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_11 = 53U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_12 = 54U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_13 = 55U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_14 = 56U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_15 = 57U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_00 = 58U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_01 = 59U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_02 = 60U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_03 = 61U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_04 = 62U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_05 = 63U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_06 = 64U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_07 = 65U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_08 = 66U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_09 = 67U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_10 = 68U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_11 = 69U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_12 = 70U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_13 = 71U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_14 = 72U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B1_15 = 73U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_00 = 74U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_01 = 75U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_02 = 76U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_03 = 77U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_04 = 78U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_05 = 79U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_06 = 80U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_07 = 81U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_08 = 82U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_09 = 83U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_10 = 84U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_11 = 85U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_12 = 86U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_13 = 87U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_14 = 88U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B0_15 = 89U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_00 = 90U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_01 = 91U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_02 = 92U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_03 = 93U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_04 = 94U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_05 = 95U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_06 = 96U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_07 = 97U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_08 = 98U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_09 = 99U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_10 = 100U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_11 = 101U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_12 = 102U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_13 = 103U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_14 = 104U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_15 = 105U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_00 = 106U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_01 = 107U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_02 = 108U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_03 = 109U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_04 = 110U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_05 = 111U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_00 = 112U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_01 = 113U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_02 = 114U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_03 = 115U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_04 = 116U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_05 = 117U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_06 = 118U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_07 = 119U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_08 = 120U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_09 = 121U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_10 = 122U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_11 = 123U,   /**< IOMUXC SW_PAD_CTL_PAD index */
} iomuxc_sw_pad_ctl_pad_t;

/* @} */

/*!
 * @addtogroup iomuxc_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC SW_PAD_CTL_PAD_1
 *
 * Defines the enumeration for the IOMUXC SW_PAD_CTL_PAD_1 collections.
 */
typedef enum _iomuxc_sw_pad_ctl_pad_1
{
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_00 = 0U,    /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_01 = 1U,    /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_02 = 2U,    /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_03 = 3U,    /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_04 = 4U,    /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_05 = 5U,    /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_06 = 6U,    /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_07 = 7U,    /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_08 = 8U,    /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_09 = 9U,    /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_10 = 10U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_11 = 11U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_12 = 12U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B0_13 = 13U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B1_00 = 14U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B1_01 = 15U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B1_02 = 16U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B1_03 = 17U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B1_04 = 18U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B1_05 = 19U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B1_06 = 20U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO_SPI_B1_07 = 21U,   /**< IOMUXC SW_PAD_CTL_PAD_1 index */
} iomuxc_sw_pad_ctl_pad_1_t;

/* @} */

/*!
 * @brief Enumeration for the IOMUXC select input
 *
 * Defines the enumeration for the IOMUXC select input collections.
 */
typedef enum _iomuxc_select_input
{
    kIOMUXC_ANATOP_USB_OTG1_ID_SELECT_INPUT = 0U,  /**< IOMUXC select input index */
    kIOMUXC_ANATOP_USB_OTG2_ID_SELECT_INPUT = 1U,  /**< IOMUXC select input index */
    kIOMUXC_CCM_PMIC_READY_SELECT_INPUT = 2U,      /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA02_SELECT_INPUT = 3U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA03_SELECT_INPUT = 4U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA04_SELECT_INPUT = 5U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA05_SELECT_INPUT = 6U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA06_SELECT_INPUT = 7U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA07_SELECT_INPUT = 8U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA08_SELECT_INPUT = 9U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA09_SELECT_INPUT = 10U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_HSYNC_SELECT_INPUT  = 11U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_PIXCLK_SELECT_INPUT = 12U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_VSYNC_SELECT_INPUT  = 13U,         /**< IOMUXC select input index */
    kIOMUXC_ENET_IPG_CLK_RMII_SELECT_INPUT = 14U,  /**< IOMUXC select input index */
    kIOMUXC_ENET_MDIO_SELECT_INPUT  = 15U,         /**< IOMUXC select input index */
    kIOMUXC_ENET0_RXDATA_SELECT_INPUT = 16U,       /**< IOMUXC select input index */
    kIOMUXC_ENET1_RXDATA_SELECT_INPUT = 17U,       /**< IOMUXC select input index */
    kIOMUXC_ENET_RXEN_SELECT_INPUT  = 18U,         /**< IOMUXC select input index */
    kIOMUXC_ENET_RXERR_SELECT_INPUT = 19U,         /**< IOMUXC select input index */
    kIOMUXC_ENET0_TIMER_SELECT_INPUT = 20U,        /**< IOMUXC select input index */
    kIOMUXC_ENET_TXCLK_SELECT_INPUT = 21U,         /**< IOMUXC select input index */
    kIOMUXC_FLEXCAN1_RX_SELECT_INPUT = 22U,        /**< IOMUXC select input index */
    kIOMUXC_FLEXCAN2_RX_SELECT_INPUT = 23U,        /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM1_PWMA3_SELECT_INPUT = 24U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM1_PWMA0_SELECT_INPUT = 25U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM1_PWMA1_SELECT_INPUT = 26U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM1_PWMA2_SELECT_INPUT = 27U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM1_PWMB3_SELECT_INPUT = 28U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM1_PWMB0_SELECT_INPUT = 29U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM1_PWMB1_SELECT_INPUT = 30U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM1_PWMB2_SELECT_INPUT = 31U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM2_PWMA3_SELECT_INPUT = 32U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM2_PWMA0_SELECT_INPUT = 33U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM2_PWMA1_SELECT_INPUT = 34U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM2_PWMA2_SELECT_INPUT = 35U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM2_PWMB3_SELECT_INPUT = 36U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM2_PWMB0_SELECT_INPUT = 37U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM2_PWMB1_SELECT_INPUT = 38U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM2_PWMB2_SELECT_INPUT = 39U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM4_PWMA0_SELECT_INPUT = 40U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM4_PWMA1_SELECT_INPUT = 41U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM4_PWMA2_SELECT_INPUT = 42U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXPWM4_PWMA3_SELECT_INPUT = 43U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXSPIA_DQS_SELECT_INPUT = 44U,       /**< IOMUXC select input index */
    kIOMUXC_FLEXSPIA_DATA0_SELECT_INPUT = 45U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXSPIA_DATA1_SELECT_INPUT = 46U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXSPIA_DATA2_SELECT_INPUT = 47U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXSPIA_DATA3_SELECT_INPUT = 48U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXSPIB_DATA0_SELECT_INPUT = 49U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXSPIB_DATA1_SELECT_INPUT = 50U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXSPIB_DATA2_SELECT_INPUT = 51U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXSPIB_DATA3_SELECT_INPUT = 52U,     /**< IOMUXC select input index */
    kIOMUXC_FLEXSPIA_SCK_SELECT_INPUT = 53U,       /**< IOMUXC select input index */
    kIOMUXC_LPI2C1_SCL_SELECT_INPUT = 54U,         /**< IOMUXC select input index */
    kIOMUXC_LPI2C1_SDA_SELECT_INPUT = 55U,         /**< IOMUXC select input index */
    kIOMUXC_LPI2C2_SCL_SELECT_INPUT = 56U,         /**< IOMUXC select input index */
    kIOMUXC_LPI2C2_SDA_SELECT_INPUT = 57U,         /**< IOMUXC select input index */
    kIOMUXC_LPI2C3_SCL_SELECT_INPUT = 58U,         /**< IOMUXC select input index */
    kIOMUXC_LPI2C3_SDA_SELECT_INPUT = 59U,         /**< IOMUXC select input index */
    kIOMUXC_LPI2C4_SCL_SELECT_INPUT = 60U,         /**< IOMUXC select input index */
    kIOMUXC_LPI2C4_SDA_SELECT_INPUT = 61U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI1_PCS0_SELECT_INPUT = 62U,        /**< IOMUXC select input index */
    kIOMUXC_LPSPI1_SCK_SELECT_INPUT = 63U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI1_SDI_SELECT_INPUT = 64U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI1_SDO_SELECT_INPUT = 65U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI2_PCS0_SELECT_INPUT = 66U,        /**< IOMUXC select input index */
    kIOMUXC_LPSPI2_SCK_SELECT_INPUT = 67U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI2_SDI_SELECT_INPUT = 68U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI2_SDO_SELECT_INPUT = 69U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI3_PCS0_SELECT_INPUT = 70U,        /**< IOMUXC select input index */
    kIOMUXC_LPSPI3_SCK_SELECT_INPUT = 71U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI3_SDI_SELECT_INPUT = 72U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI3_SDO_SELECT_INPUT = 73U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI4_PCS0_SELECT_INPUT = 74U,        /**< IOMUXC select input index */
    kIOMUXC_LPSPI4_SCK_SELECT_INPUT = 75U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI4_SDI_SELECT_INPUT = 76U,         /**< IOMUXC select input index */
    kIOMUXC_LPSPI4_SDO_SELECT_INPUT = 77U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART2_RX_SELECT_INPUT = 78U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART2_TX_SELECT_INPUT = 79U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART3_CTS_B_SELECT_INPUT = 80U,      /**< IOMUXC select input index */
    kIOMUXC_LPUART3_RX_SELECT_INPUT = 81U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART3_TX_SELECT_INPUT = 82U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART4_RX_SELECT_INPUT = 83U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART4_TX_SELECT_INPUT = 84U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART5_RX_SELECT_INPUT = 85U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART5_TX_SELECT_INPUT = 86U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART6_RX_SELECT_INPUT = 87U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART6_TX_SELECT_INPUT = 88U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART7_RX_SELECT_INPUT = 89U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART7_TX_SELECT_INPUT = 90U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART8_RX_SELECT_INPUT = 91U,         /**< IOMUXC select input index */
    kIOMUXC_LPUART8_TX_SELECT_INPUT = 92U,         /**< IOMUXC select input index */
    kIOMUXC_NMI_SELECT_INPUT        = 93U,         /**< IOMUXC select input index */
    kIOMUXC_QTIMER2_TIMER0_SELECT_INPUT = 94U,     /**< IOMUXC select input index */
    kIOMUXC_QTIMER2_TIMER1_SELECT_INPUT = 95U,     /**< IOMUXC select input index */
    kIOMUXC_QTIMER2_TIMER2_SELECT_INPUT = 96U,     /**< IOMUXC select input index */
    kIOMUXC_QTIMER2_TIMER3_SELECT_INPUT = 97U,     /**< IOMUXC select input index */
    kIOMUXC_QTIMER3_TIMER0_SELECT_INPUT = 98U,     /**< IOMUXC select input index */
    kIOMUXC_QTIMER3_TIMER1_SELECT_INPUT = 99U,     /**< IOMUXC select input index */
    kIOMUXC_QTIMER3_TIMER2_SELECT_INPUT = 100U,    /**< IOMUXC select input index */
    kIOMUXC_QTIMER3_TIMER3_SELECT_INPUT = 101U,    /**< IOMUXC select input index */
    kIOMUXC_SAI1_MCLK2_SELECT_INPUT = 102U,        /**< IOMUXC select input index */
    kIOMUXC_SAI1_RX_BCLK_SELECT_INPUT = 103U,      /**< IOMUXC select input index */
    kIOMUXC_SAI1_RX_DATA0_SELECT_INPUT = 104U,     /**< IOMUXC select input index */
    kIOMUXC_SAI1_RX_DATA1_SELECT_INPUT = 105U,     /**< IOMUXC select input index */
    kIOMUXC_SAI1_RX_DATA2_SELECT_INPUT = 106U,     /**< IOMUXC select input index */
    kIOMUXC_SAI1_RX_DATA3_SELECT_INPUT = 107U,     /**< IOMUXC select input index */
    kIOMUXC_SAI1_RX_SYNC_SELECT_INPUT = 108U,      /**< IOMUXC select input index */
    kIOMUXC_SAI1_TX_BCLK_SELECT_INPUT = 109U,      /**< IOMUXC select input index */
    kIOMUXC_SAI1_TX_SYNC_SELECT_INPUT = 110U,      /**< IOMUXC select input index */
    kIOMUXC_SAI2_MCLK2_SELECT_INPUT = 111U,        /**< IOMUXC select input index */
    kIOMUXC_SAI2_RX_BCLK_SELECT_INPUT = 112U,      /**< IOMUXC select input index */
    kIOMUXC_SAI2_RX_DATA0_SELECT_INPUT = 113U,     /**< IOMUXC select input index */
    kIOMUXC_SAI2_RX_SYNC_SELECT_INPUT = 114U,      /**< IOMUXC select input index */
    kIOMUXC_SAI2_TX_BCLK_SELECT_INPUT = 115U,      /**< IOMUXC select input index */
    kIOMUXC_SAI2_TX_SYNC_SELECT_INPUT = 116U,      /**< IOMUXC select input index */
    kIOMUXC_SPDIF_IN_SELECT_INPUT   = 117U,        /**< IOMUXC select input index */
    kIOMUXC_USB_OTG2_OC_SELECT_INPUT = 118U,       /**< IOMUXC select input index */
    kIOMUXC_USB_OTG1_OC_SELECT_INPUT = 119U,       /**< IOMUXC select input index */
    kIOMUXC_USDHC1_CD_B_SELECT_INPUT = 120U,       /**< IOMUXC select input index */
    kIOMUXC_USDHC1_WP_SELECT_INPUT  = 121U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC2_CLK_SELECT_INPUT = 122U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC2_CD_B_SELECT_INPUT = 123U,       /**< IOMUXC select input index */
    kIOMUXC_USDHC2_CMD_SELECT_INPUT = 124U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA0_SELECT_INPUT = 125U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA1_SELECT_INPUT = 126U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA2_SELECT_INPUT = 127U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA3_SELECT_INPUT = 128U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA4_SELECT_INPUT = 129U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA5_SELECT_INPUT = 130U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA6_SELECT_INPUT = 131U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA7_SELECT_INPUT = 132U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_WP_SELECT_INPUT  = 133U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN02_SELECT_INPUT = 134U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN03_SELECT_INPUT = 135U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN04_SELECT_INPUT = 136U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN05_SELECT_INPUT = 137U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN06_SELECT_INPUT = 138U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN07_SELECT_INPUT = 139U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN08_SELECT_INPUT = 140U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN09_SELECT_INPUT = 141U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN17_SELECT_INPUT = 142U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN18_SELECT_INPUT = 143U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN20_SELECT_INPUT = 144U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN22_SELECT_INPUT = 145U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN23_SELECT_INPUT = 146U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN24_SELECT_INPUT = 147U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN14_SELECT_INPUT = 148U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN15_SELECT_INPUT = 149U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN16_SELECT_INPUT = 150U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN25_SELECT_INPUT = 151U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN19_SELECT_INPUT = 152U,        /**< IOMUXC select input index */
    kIOMUXC_XBAR1_IN21_SELECT_INPUT = 153U,        /**< IOMUXC select input index */
} iomuxc_select_input_t;

/*!
 * @brief Enumeration for the IOMUXC select input
 *
 * Defines the enumeration for the IOMUXC select input collections.
 */
typedef enum _iomuxc_select_input_1
{
    kIOMUXC_ENET2_IPG_CLK_RMII_SELECT_INPUT = 0U,  /**< IOMUXC select input index */
    kIOMUXC_ENET2_IPP_IND_MAC0_MDIO_SELECT_INPUT = 1U, /**< IOMUXC select input index */
    kIOMUXC_ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_0 = 2U, /**< IOMUXC select input index */
    kIOMUXC_ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_1 = 3U, /**< IOMUXC select input index */
    kIOMUXC_ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT = 4U, /**< IOMUXC select input index */
    kIOMUXC_ENET2_IPP_IND_MAC0_RXERR_SELECT_INPUT = 5U, /**< IOMUXC select input index */
    kIOMUXC_ENET2_IPP_IND_MAC0_TIMER_SELECT_INPUT_0 = 6U, /**< IOMUXC select input index */
    kIOMUXC_ENET2_IPP_IND_MAC0_TXCLK_SELECT_INPUT = 7U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT = 8U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT = 9U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT = 10U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT = 11U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT = 12U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT = 13U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_IO_FB_BIT1_SELECT_INPUT = 14U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT = 15U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_IO_FB_BIT3_SELECT_INPUT = 16U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT = 17U, /**< IOMUXC select input index */
    kIOMUXC_FLEXSPI2_IPP_IND_SCK_FB_SELECT_INPUT = 18U, /**< IOMUXC select input index */
    kIOMUXC_GPT1_IPP_IND_CAPIN1_SELECT_INPUT = 19U, /**< IOMUXC select input index */
    kIOMUXC_GPT1_IPP_IND_CAPIN2_SELECT_INPUT = 20U, /**< IOMUXC select input index */
    kIOMUXC_GPT1_IPP_IND_CLKIN_SELECT_INPUT = 21U, /**< IOMUXC select input index */
    kIOMUXC_GPT2_IPP_IND_CAPIN1_SELECT_INPUT = 22U, /**< IOMUXC select input index */
    kIOMUXC_GPT2_IPP_IND_CAPIN2_SELECT_INPUT = 23U, /**< IOMUXC select input index */
    kIOMUXC_GPT2_IPP_IND_CLKIN_SELECT_INPUT = 24U, /**< IOMUXC select input index */
    kIOMUXC_SAI3_IPG_CLK_SAI_MCLK_SELECT_INPUT_2 = 25U, /**< IOMUXC select input index */
    kIOMUXC_SAI3_IPP_IND_SAI_RXBCLK_SELECT_INPUT = 26U, /**< IOMUXC select input index */
    kIOMUXC_SAI3_IPP_IND_SAI_RXDATA_SELECT_INPUT_0 = 27U, /**< IOMUXC select input index */
    kIOMUXC_SAI3_IPP_IND_SAI_RXSYNC_SELECT_INPUT = 28U, /**< IOMUXC select input index */
    kIOMUXC_SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT = 29U, /**< IOMUXC select input index */
    kIOMUXC_SAI3_IPP_IND_SAI_TXSYNC_SELECT_INPUT = 30U, /**< IOMUXC select input index */
    kIOMUXC_SEMC_I_IPP_IND_DQS4_SELECT_INPUT = 31U, /**< IOMUXC select input index */
    kIOMUXC_CANFD_IPP_IND_CANRX_SELECT_INPUT = 32U, /**< IOMUXC select input index */
} iomuxc_select_input_1_t;

typedef enum _xbar_input_signal
{
    kXBARA1_InputLogicLow           = 0|0x100U,    /**< LOGIC_LOW output assigned to XBARA1_IN0 input. */
    kXBARA1_InputLogicHigh          = 1|0x100U,    /**< LOGIC_HIGH output assigned to XBARA1_IN1 input. */
    kXBARA1_InputIomuxXbarIn02      = 2|0x100U,    /**< IOMUX_XBAR_IN02 output assigned to XBARA1_IN2 input. */
    kXBARA1_InputIomuxXbarIn03      = 3|0x100U,    /**< IOMUX_XBAR_IN03 output assigned to XBARA1_IN3 input. */
    kXBARA1_InputIomuxXbarInout04   = 4|0x100U,    /**< IOMUX_XBAR_INOUT04 output assigned to XBARA1_IN4 input. */
    kXBARA1_InputIomuxXbarInout05   = 5|0x100U,    /**< IOMUX_XBAR_INOUT05 output assigned to XBARA1_IN5 input. */
    kXBARA1_InputIomuxXbarInout06   = 6|0x100U,    /**< IOMUX_XBAR_INOUT06 output assigned to XBARA1_IN6 input. */
    kXBARA1_InputIomuxXbarInout07   = 7|0x100U,    /**< IOMUX_XBAR_INOUT07 output assigned to XBARA1_IN7 input. */
    kXBARA1_InputIomuxXbarInout08   = 8|0x100U,    /**< IOMUX_XBAR_INOUT08 output assigned to XBARA1_IN8 input. */
    kXBARA1_InputIomuxXbarInout09   = 9|0x100U,    /**< IOMUX_XBAR_INOUT09 output assigned to XBARA1_IN9 input. */
    kXBARA1_InputIomuxXbarInout10   = 10|0x100U,   /**< IOMUX_XBAR_INOUT10 output assigned to XBARA1_IN10 input. */
    kXBARA1_InputIomuxXbarInout11   = 11|0x100U,   /**< IOMUX_XBAR_INOUT11 output assigned to XBARA1_IN11 input. */
    kXBARA1_InputIomuxXbarInout12   = 12|0x100U,   /**< IOMUX_XBAR_INOUT12 output assigned to XBARA1_IN12 input. */
    kXBARA1_InputIomuxXbarInout13   = 13|0x100U,   /**< IOMUX_XBAR_INOUT13 output assigned to XBARA1_IN13 input. */
    kXBARA1_InputIomuxXbarInout14   = 14|0x100U,   /**< IOMUX_XBAR_INOUT14 output assigned to XBARA1_IN14 input. */
    kXBARA1_InputIomuxXbarInout15   = 15|0x100U,   /**< IOMUX_XBAR_INOUT15 output assigned to XBARA1_IN15 input. */
    kXBARA1_InputIomuxXbarInout16   = 16|0x100U,   /**< IOMUX_XBAR_INOUT16 output assigned to XBARA1_IN16 input. */
    kXBARA1_InputIomuxXbarInout17   = 17|0x100U,   /**< IOMUX_XBAR_INOUT17 output assigned to XBARA1_IN17 input. */
    kXBARA1_InputIomuxXbarInout18   = 18|0x100U,   /**< IOMUX_XBAR_INOUT18 output assigned to XBARA1_IN18 input. */
    kXBARA1_InputIomuxXbarInout19   = 19|0x100U,   /**< IOMUX_XBAR_INOUT19 output assigned to XBARA1_IN19 input. */
    kXBARA1_InputIomuxXbarIn20      = 20|0x100U,   /**< IOMUX_XBAR_IN20 output assigned to XBARA1_IN20 input. */
    kXBARA1_InputIomuxXbarIn21      = 21|0x100U,   /**< IOMUX_XBAR_IN21 output assigned to XBARA1_IN21 input. */
    kXBARA1_InputIomuxXbarIn22      = 22|0x100U,   /**< IOMUX_XBAR_IN22 output assigned to XBARA1_IN22 input. */
    kXBARA1_InputIomuxXbarIn23      = 23|0x100U,   /**< IOMUX_XBAR_IN23 output assigned to XBARA1_IN23 input. */
    kXBARA1_InputIomuxXbarIn24      = 24|0x100U,   /**< IOMUX_XBAR_IN24 output assigned to XBARA1_IN24 input. */
    kXBARA1_InputIomuxXbarIn25      = 25|0x100U,   /**< IOMUX_XBAR_IN25 output assigned to XBARA1_IN25 input. */
    kXBARA1_InputAcmp1Out           = 26|0x100U,   /**< ACMP1_OUT output assigned to XBARA1_IN26 input. */
    kXBARA1_InputAcmp2Out           = 27|0x100U,   /**< ACMP2_OUT output assigned to XBARA1_IN27 input. */
    kXBARA1_InputAcmp3Out           = 28|0x100U,   /**< ACMP3_OUT output assigned to XBARA1_IN28 input. */
    kXBARA1_InputAcmp4Out           = 29|0x100U,   /**< ACMP4_OUT output assigned to XBARA1_IN29 input. */
    kXBARA1_InputRESERVED30         = 30|0x100U,   /**< XBARA1_IN30 input is reserved. */
    kXBARA1_InputRESERVED31         = 31|0x100U,   /**< XBARA1_IN31 input is reserved. */
    kXBARA1_InputQtimer3Tmr0Output  = 32|0x100U,   /**< QTIMER3_TMR0_OUTPUT output assigned to XBARA1_IN32 input. */
    kXBARA1_InputQtimer3Tmr1Output  = 33|0x100U,   /**< QTIMER3_TMR1_OUTPUT output assigned to XBARA1_IN33 input. */
    kXBARA1_InputQtimer3Tmr2Output  = 34|0x100U,   /**< QTIMER3_TMR2_OUTPUT output assigned to XBARA1_IN34 input. */
    kXBARA1_InputQtimer3Tmr3Output  = 35|0x100U,   /**< QTIMER3_TMR3_OUTPUT output assigned to XBARA1_IN35 input. */
    kXBARA1_InputQtimer4Tmr0Output  = 36|0x100U,   /**< QTIMER4_TMR0_OUTPUT output assigned to XBARA1_IN36 input. */
    kXBARA1_InputQtimer4Tmr1Output  = 37|0x100U,   /**< QTIMER4_TMR1_OUTPUT output assigned to XBARA1_IN37 input. */
    kXBARA1_InputQtimer4Tmr2Output  = 38|0x100U,   /**< QTIMER4_TMR2_OUTPUT output assigned to XBARA1_IN38 input. */
    kXBARA1_InputQtimer4Tmr3Output  = 39|0x100U,   /**< QTIMER4_TMR3_OUTPUT output assigned to XBARA1_IN39 input. */
    kXBARA1_InputFlexpwm1Pwm1OutTrig01 = 40|0x100U, /**< FLEXPWM1_PWM1_OUT_TRIG0_1 output assigned to XBARA1_IN40 input. */
    kXBARA1_InputFlexpwm1Pwm2OutTrig01 = 41|0x100U, /**< FLEXPWM1_PWM2_OUT_TRIG0_1 output assigned to XBARA1_IN41 input. */
    kXBARA1_InputFlexpwm1Pwm3OutTrig01 = 42|0x100U, /**< FLEXPWM1_PWM3_OUT_TRIG0_1 output assigned to XBARA1_IN42 input. */
    kXBARA1_InputFlexpwm1Pwm4OutTrig01 = 43|0x100U, /**< FLEXPWM1_PWM4_OUT_TRIG0_1 output assigned to XBARA1_IN43 input. */
    kXBARA1_InputFlexpwm2Pwm1OutTrig01 = 44|0x100U, /**< FLEXPWM2_PWM1_OUT_TRIG0_1 output assigned to XBARA1_IN44 input. */
    kXBARA1_InputFlexpwm2Pwm2OutTrig01 = 45|0x100U, /**< FLEXPWM2_PWM2_OUT_TRIG0_1 output assigned to XBARA1_IN45 input. */
    kXBARA1_InputFlexpwm2Pwm3OutTrig01 = 46|0x100U, /**< FLEXPWM2_PWM3_OUT_TRIG0_1 output assigned to XBARA1_IN46 input. */
    kXBARA1_InputFlexpwm2Pwm4OutTrig01 = 47|0x100U, /**< FLEXPWM2_PWM4_OUT_TRIG0_1 output assigned to XBARA1_IN47 input. */
    kXBARA1_InputFlexpwm3Pwm1OutTrig01 = 48|0x100U, /**< FLEXPWM3_PWM1_OUT_TRIG0_1 output assigned to XBARA1_IN48 input. */
    kXBARA1_InputFlexpwm3Pwm2OutTrig01 = 49|0x100U, /**< FLEXPWM3_PWM2_OUT_TRIG0_1 output assigned to XBARA1_IN49 input. */
    kXBARA1_InputFlexpwm3Pwm3OutTrig01 = 50|0x100U, /**< FLEXPWM3_PWM3_OUT_TRIG0_1 output assigned to XBARA1_IN50 input. */
    kXBARA1_InputFlexpwm3Pwm4OutTrig01 = 51|0x100U, /**< FLEXPWM3_PWM4_OUT_TRIG0_1 output assigned to XBARA1_IN51 input. */
    kXBARA1_InputFlexpwm4Pwm1OutTrig01 = 52|0x100U, /**< FLEXPWM4_PWM1_OUT_TRIG0_1 output assigned to XBARA1_IN52 input. */
    kXBARA1_InputFlexpwm4Pwm2OutTrig01 = 53|0x100U, /**< FLEXPWM4_PWM2_OUT_TRIG0_1 output assigned to XBARA1_IN53 input. */
    kXBARA1_InputFlexpwm4Pwm3OutTrig01 = 54|0x100U, /**< FLEXPWM4_PWM3_OUT_TRIG0_1 output assigned to XBARA1_IN54 input. */
    kXBARA1_InputFlexpwm4Pwm4OutTrig01 = 55|0x100U, /**< FLEXPWM4_PWM4_OUT_TRIG0_1 output assigned to XBARA1_IN55 input. */
    kXBARA1_InputPitTrigger0        = 56|0x100U,   /**< PIT_TRIGGER0 output assigned to XBARA1_IN56 input. */
    kXBARA1_InputPitTrigger1        = 57|0x100U,   /**< PIT_TRIGGER1 output assigned to XBARA1_IN57 input. */
    kXBARA1_InputPitTrigger2        = 58|0x100U,   /**< PIT_TRIGGER2 output assigned to XBARA1_IN58 input. */
    kXBARA1_InputPitTrigger3        = 59|0x100U,   /**< PIT_TRIGGER3 output assigned to XBARA1_IN59 input. */
    kXBARA1_InputEnc1PosMatch       = 60|0x100U,   /**< ENC1_POS_MATCH output assigned to XBARA1_IN60 input. */
    kXBARA1_InputEnc2PosMatch       = 61|0x100U,   /**< ENC2_POS_MATCH output assigned to XBARA1_IN61 input. */
    kXBARA1_InputEnc3PosMatch       = 62|0x100U,   /**< ENC3_POS_MATCH output assigned to XBARA1_IN62 input. */
    kXBARA1_InputEnc4PosMatch       = 63|0x100U,   /**< ENC4_POS_MATCH output assigned to XBARA1_IN63 input. */
    kXBARA1_InputDmaDone0           = 64|0x100U,   /**< DMA_DONE0 output assigned to XBARA1_IN64 input. */
    kXBARA1_InputDmaDone1           = 65|0x100U,   /**< DMA_DONE1 output assigned to XBARA1_IN65 input. */
    kXBARA1_InputDmaDone2           = 66|0x100U,   /**< DMA_DONE2 output assigned to XBARA1_IN66 input. */
    kXBARA1_InputDmaDone3           = 67|0x100U,   /**< DMA_DONE3 output assigned to XBARA1_IN67 input. */
    kXBARA1_InputDmaDone4           = 68|0x100U,   /**< DMA_DONE4 output assigned to XBARA1_IN68 input. */
    kXBARA1_InputDmaDone5           = 69|0x100U,   /**< DMA_DONE5 output assigned to XBARA1_IN69 input. */
    kXBARA1_InputDmaDone6           = 70|0x100U,   /**< DMA_DONE6 output assigned to XBARA1_IN70 input. */
    kXBARA1_InputDmaDone7           = 71|0x100U,   /**< DMA_DONE7 output assigned to XBARA1_IN71 input. */
    kXBARA1_InputAoi1Out0           = 72|0x100U,   /**< AOI1_OUT0 output assigned to XBARA1_IN72 input. */
    kXBARA1_InputAoi1Out1           = 73|0x100U,   /**< AOI1_OUT1 output assigned to XBARA1_IN73 input. */
    kXBARA1_InputAoi1Out2           = 74|0x100U,   /**< AOI1_OUT2 output assigned to XBARA1_IN74 input. */
    kXBARA1_InputAoi1Out3           = 75|0x100U,   /**< AOI1_OUT3 output assigned to XBARA1_IN75 input. */
    kXBARA1_InputAoi2Out0           = 76|0x100U,   /**< AOI2_OUT0 output assigned to XBARA1_IN76 input. */
    kXBARA1_InputAoi2Out1           = 77|0x100U,   /**< AOI2_OUT1 output assigned to XBARA1_IN77 input. */
    kXBARA1_InputAoi2Out2           = 78|0x100U,   /**< AOI2_OUT2 output assigned to XBARA1_IN78 input. */
    kXBARA1_InputAoi2Out3           = 79|0x100U,   /**< AOI2_OUT3 output assigned to XBARA1_IN79 input. */
    kXBARA1_InputAdcEtcXbar0Coco0   = 80|0x100U,   /**< ADC_ETC_XBAR0_COCO0 output assigned to XBARA1_IN80 input. */
    kXBARA1_InputAdcEtcXbar0Coco1   = 81|0x100U,   /**< ADC_ETC_XBAR0_COCO1 output assigned to XBARA1_IN81 input. */
    kXBARA1_InputAdcEtcXbar0Coco2   = 82|0x100U,   /**< ADC_ETC_XBAR0_COCO2 output assigned to XBARA1_IN82 input. */
    kXBARA1_InputAdcEtcXbar0Coco3   = 83|0x100U,   /**< ADC_ETC_XBAR0_COCO3 output assigned to XBARA1_IN83 input. */
    kXBARA1_InputAdcEtcXbar1Coco0   = 84|0x100U,   /**< ADC_ETC_XBAR1_COCO0 output assigned to XBARA1_IN84 input. */
    kXBARA1_InputAdcEtcXbar1Coco1   = 85|0x100U,   /**< ADC_ETC_XBAR1_COCO1 output assigned to XBARA1_IN85 input. */
    kXBARA1_InputAdcEtcXbar1Coco2   = 86|0x100U,   /**< ADC_ETC_XBAR1_COCO2 output assigned to XBARA1_IN86 input. */
    kXBARA1_InputAdcEtcXbar1Coco3   = 87|0x100U,   /**< ADC_ETC_XBAR1_COCO3 output assigned to XBARA1_IN87 input. */
    kXBARB2_InputLogicLow           = 0|0x200U,    /**< LOGIC_LOW output assigned to XBARB2_IN0 input. */
    kXBARB2_InputLogicHigh          = 1|0x200U,    /**< LOGIC_HIGH output assigned to XBARB2_IN1 input. */
    kXBARB2_InputRESERVED2          = 2|0x200U,    /**< XBARB2_IN2 input is reserved. */
    kXBARB2_InputRESERVED3          = 3|0x200U,    /**< XBARB2_IN3 input is reserved. */
    kXBARB2_InputRESERVED4          = 4|0x200U,    /**< XBARB2_IN4 input is reserved. */
    kXBARB2_InputRESERVED5          = 5|0x200U,    /**< XBARB2_IN5 input is reserved. */
    kXBARB2_InputAcmp1Out           = 6|0x200U,    /**< ACMP1_OUT output assigned to XBARB2_IN6 input. */
    kXBARB2_InputAcmp2Out           = 7|0x200U,    /**< ACMP2_OUT output assigned to XBARB2_IN7 input. */
    kXBARB2_InputAcmp3Out           = 8|0x200U,    /**< ACMP3_OUT output assigned to XBARB2_IN8 input. */
    kXBARB2_InputAcmp4Out           = 9|0x200U,    /**< ACMP4_OUT output assigned to XBARB2_IN9 input. */
    kXBARB2_InputRESERVED10         = 10|0x200U,   /**< XBARB2_IN10 input is reserved. */
    kXBARB2_InputRESERVED11         = 11|0x200U,   /**< XBARB2_IN11 input is reserved. */
    kXBARB2_InputQtimer3Tmr0Output  = 12|0x200U,   /**< QTIMER3_TMR0_OUTPUT output assigned to XBARB2_IN12 input. */
    kXBARB2_InputQtimer3Tmr1Output  = 13|0x200U,   /**< QTIMER3_TMR1_OUTPUT output assigned to XBARB2_IN13 input. */
    kXBARB2_InputQtimer3Tmr2Output  = 14|0x200U,   /**< QTIMER3_TMR2_OUTPUT output assigned to XBARB2_IN14 input. */
    kXBARB2_InputQtimer3Tmr3Output  = 15|0x200U,   /**< QTIMER3_TMR3_OUTPUT output assigned to XBARB2_IN15 input. */
    kXBARB2_InputQtimer4Tmr0Output  = 16|0x200U,   /**< QTIMER4_TMR0_OUTPUT output assigned to XBARB2_IN16 input. */
    kXBARB2_InputQtimer4Tmr1Output  = 17|0x200U,   /**< QTIMER4_TMR1_OUTPUT output assigned to XBARB2_IN17 input. */
    kXBARB2_InputQtimer4Tmr2Output  = 18|0x200U,   /**< QTIMER4_TMR2_OUTPUT output assigned to XBARB2_IN18 input. */
    kXBARB2_InputQtimer4Tmr3Output  = 19|0x200U,   /**< QTIMER4_TMR3_OUTPUT output assigned to XBARB2_IN19 input. */
    kXBARB2_InputFlexpwm1Pwm1OutTrig01 = 20|0x200U, /**< FLEXPWM1_PWM1_OUT_TRIG0_1 output assigned to XBARB2_IN20 input. */
    kXBARB2_InputFlexpwm1Pwm2OutTrig01 = 21|0x200U, /**< FLEXPWM1_PWM2_OUT_TRIG0_1 output assigned to XBARB2_IN21 input. */
    kXBARB2_InputFlexpwm1Pwm3OutTrig01 = 22|0x200U, /**< FLEXPWM1_PWM3_OUT_TRIG0_1 output assigned to XBARB2_IN22 input. */
    kXBARB2_InputFlexpwm1Pwm4OutTrig01 = 23|0x200U, /**< FLEXPWM1_PWM4_OUT_TRIG0_1 output assigned to XBARB2_IN23 input. */
    kXBARB2_InputFlexpwm2Pwm1OutTrig01 = 24|0x200U, /**< FLEXPWM2_PWM1_OUT_TRIG0_1 output assigned to XBARB2_IN24 input. */
    kXBARB2_InputFlexpwm2Pwm2OutTrig01 = 25|0x200U, /**< FLEXPWM2_PWM2_OUT_TRIG0_1 output assigned to XBARB2_IN25 input. */
    kXBARB2_InputFlexpwm2Pwm3OutTrig01 = 26|0x200U, /**< FLEXPWM2_PWM3_OUT_TRIG0_1 output assigned to XBARB2_IN26 input. */
    kXBARB2_InputFlexpwm2Pwm4OutTrig01 = 27|0x200U, /**< FLEXPWM2_PWM4_OUT_TRIG0_1 output assigned to XBARB2_IN27 input. */
    kXBARB2_InputFlexpwm3Pwm1OutTrig01 = 28|0x200U, /**< FLEXPWM3_PWM1_OUT_TRIG0_1 output assigned to XBARB2_IN28 input. */
    kXBARB2_InputFlexpwm3Pwm2OutTrig01 = 29|0x200U, /**< FLEXPWM3_PWM2_OUT_TRIG0_1 output assigned to XBARB2_IN29 input. */
    kXBARB2_InputFlexpwm3Pwm3OutTrig01 = 30|0x200U, /**< FLEXPWM3_PWM3_OUT_TRIG0_1 output assigned to XBARB2_IN30 input. */
    kXBARB2_InputFlexpwm3Pwm4OutTrig01 = 31|0x200U, /**< FLEXPWM3_PWM4_OUT_TRIG0_1 output assigned to XBARB2_IN31 input. */
    kXBARB2_InputFlexpwm4Pwm1OutTrig01 = 32|0x200U, /**< FLEXPWM4_PWM1_OUT_TRIG0_1 output assigned to XBARB2_IN32 input. */
    kXBARB2_InputFlexpwm4Pwm2OutTrig01 = 33|0x200U, /**< FLEXPWM4_PWM2_OUT_TRIG0_1 output assigned to XBARB2_IN33 input. */
    kXBARB2_InputFlexpwm4Pwm3OutTrig01 = 34|0x200U, /**< FLEXPWM4_PWM3_OUT_TRIG0_1 output assigned to XBARB2_IN34 input. */
    kXBARB2_InputFlexpwm4Pwm4OutTrig01 = 35|0x200U, /**< FLEXPWM4_PWM4_OUT_TRIG0_1 output assigned to XBARB2_IN35 input. */
    kXBARB2_InputPitTrigger0        = 36|0x200U,   /**< PIT_TRIGGER0 output assigned to XBARB2_IN36 input. */
    kXBARB2_InputPitTrigger1        = 37|0x200U,   /**< PIT_TRIGGER1 output assigned to XBARB2_IN37 input. */
    kXBARB2_InputAdcEtcXbar0Coco0   = 38|0x200U,   /**< ADC_ETC_XBAR0_COCO0 output assigned to XBARB2_IN38 input. */
    kXBARB2_InputAdcEtcXbar0Coco1   = 39|0x200U,   /**< ADC_ETC_XBAR0_COCO1 output assigned to XBARB2_IN39 input. */
    kXBARB2_InputAdcEtcXbar0Coco2   = 40|0x200U,   /**< ADC_ETC_XBAR0_COCO2 output assigned to XBARB2_IN40 input. */
    kXBARB2_InputAdcEtcXbar0Coco3   = 41|0x200U,   /**< ADC_ETC_XBAR0_COCO3 output assigned to XBARB2_IN41 input. */
    kXBARB2_InputAdcEtcXbar1Coco0   = 42|0x200U,   /**< ADC_ETC_XBAR1_COCO0 output assigned to XBARB2_IN42 input. */
    kXBARB2_InputAdcEtcXbar1Coco1   = 43|0x200U,   /**< ADC_ETC_XBAR1_COCO1 output assigned to XBARB2_IN43 input. */
    kXBARB2_InputAdcEtcXbar1Coco2   = 44|0x200U,   /**< ADC_ETC_XBAR1_COCO2 output assigned to XBARB2_IN44 input. */
    kXBARB2_InputAdcEtcXbar1Coco3   = 45|0x200U,   /**< ADC_ETC_XBAR1_COCO3 output assigned to XBARB2_IN45 input. */
    kXBARB2_InputEnc1PosMatch       = 46|0x200U,   /**< ENC1_POS_MATCH output assigned to XBARB2_IN46 input. */
    kXBARB2_InputEnc2PosMatch       = 47|0x200U,   /**< ENC2_POS_MATCH output assigned to XBARB2_IN47 input. */
    kXBARB2_InputEnc3PosMatch       = 48|0x200U,   /**< ENC3_POS_MATCH output assigned to XBARB2_IN48 input. */
    kXBARB2_InputEnc4PosMatch       = 49|0x200U,   /**< ENC4_POS_MATCH output assigned to XBARB2_IN49 input. */
    kXBARB2_InputDmaDone0           = 50|0x200U,   /**< DMA_DONE0 output assigned to XBARB2_IN50 input. */
    kXBARB2_InputDmaDone1           = 51|0x200U,   /**< DMA_DONE1 output assigned to XBARB2_IN51 input. */
    kXBARB2_InputDmaDone2           = 52|0x200U,   /**< DMA_DONE2 output assigned to XBARB2_IN52 input. */
    kXBARB2_InputDmaDone3           = 53|0x200U,   /**< DMA_DONE3 output assigned to XBARB2_IN53 input. */
    kXBARB2_InputDmaDone4           = 54|0x200U,   /**< DMA_DONE4 output assigned to XBARB2_IN54 input. */
    kXBARB2_InputDmaDone5           = 55|0x200U,   /**< DMA_DONE5 output assigned to XBARB2_IN55 input. */
    kXBARB2_InputDmaDone6           = 56|0x200U,   /**< DMA_DONE6 output assigned to XBARB2_IN56 input. */
    kXBARB2_InputDmaDone7           = 57|0x200U,   /**< DMA_DONE7 output assigned to XBARB2_IN57 input. */
    kXBARB3_InputLogicLow           = 0|0x300U,    /**< LOGIC_LOW output assigned to XBARB3_IN0 input. */
    kXBARB3_InputLogicHigh          = 1|0x300U,    /**< LOGIC_HIGH output assigned to XBARB3_IN1 input. */
    kXBARB3_InputRESERVED2          = 2|0x300U,    /**< XBARB3_IN2 input is reserved. */
    kXBARB3_InputRESERVED3          = 3|0x300U,    /**< XBARB3_IN3 input is reserved. */
    kXBARB3_InputRESERVED4          = 4|0x300U,    /**< XBARB3_IN4 input is reserved. */
    kXBARB3_InputRESERVED5          = 5|0x300U,    /**< XBARB3_IN5 input is reserved. */
    kXBARB3_InputAcmp1Out           = 6|0x300U,    /**< ACMP1_OUT output assigned to XBARB3_IN6 input. */
    kXBARB3_InputAcmp2Out           = 7|0x300U,    /**< ACMP2_OUT output assigned to XBARB3_IN7 input. */
    kXBARB3_InputAcmp3Out           = 8|0x300U,    /**< ACMP3_OUT output assigned to XBARB3_IN8 input. */
    kXBARB3_InputAcmp4Out           = 9|0x300U,    /**< ACMP4_OUT output assigned to XBARB3_IN9 input. */
    kXBARB3_InputRESERVED10         = 10|0x300U,   /**< XBARB3_IN10 input is reserved. */
    kXBARB3_InputRESERVED11         = 11|0x300U,   /**< XBARB3_IN11 input is reserved. */
    kXBARB3_InputQtimer3Tmr0Output  = 12|0x300U,   /**< QTIMER3_TMR0_OUTPUT output assigned to XBARB3_IN12 input. */
    kXBARB3_InputQtimer3Tmr1Output  = 13|0x300U,   /**< QTIMER3_TMR1_OUTPUT output assigned to XBARB3_IN13 input. */
    kXBARB3_InputQtimer3Tmr2Output  = 14|0x300U,   /**< QTIMER3_TMR2_OUTPUT output assigned to XBARB3_IN14 input. */
    kXBARB3_InputQtimer3Tmr3Output  = 15|0x300U,   /**< QTIMER3_TMR3_OUTPUT output assigned to XBARB3_IN15 input. */
    kXBARB3_InputQtimer4Tmr0Output  = 16|0x300U,   /**< QTIMER4_TMR0_OUTPUT output assigned to XBARB3_IN16 input. */
    kXBARB3_InputQtimer4Tmr1Output  = 17|0x300U,   /**< QTIMER4_TMR1_OUTPUT output assigned to XBARB3_IN17 input. */
    kXBARB3_InputQtimer4Tmr2Output  = 18|0x300U,   /**< QTIMER4_TMR2_OUTPUT output assigned to XBARB3_IN18 input. */
    kXBARB3_InputQtimer4Tmr3Output  = 19|0x300U,   /**< QTIMER4_TMR3_OUTPUT output assigned to XBARB3_IN19 input. */
    kXBARB3_InputFlexpwm1Pwm1OutTrig01 = 20|0x300U, /**< FLEXPWM1_PWM1_OUT_TRIG0_1 output assigned to XBARB3_IN20 input. */
    kXBARB3_InputFlexpwm1Pwm2OutTrig01 = 21|0x300U, /**< FLEXPWM1_PWM2_OUT_TRIG0_1 output assigned to XBARB3_IN21 input. */
    kXBARB3_InputFlexpwm1Pwm3OutTrig01 = 22|0x300U, /**< FLEXPWM1_PWM3_OUT_TRIG0_1 output assigned to XBARB3_IN22 input. */
    kXBARB3_InputFlexpwm1Pwm4OutTrig01 = 23|0x300U, /**< FLEXPWM1_PWM4_OUT_TRIG0_1 output assigned to XBARB3_IN23 input. */
    kXBARB3_InputFlexpwm2Pwm1OutTrig01 = 24|0x300U, /**< FLEXPWM2_PWM1_OUT_TRIG0_1 output assigned to XBARB3_IN24 input. */
    kXBARB3_InputFlexpwm2Pwm2OutTrig01 = 25|0x300U, /**< FLEXPWM2_PWM2_OUT_TRIG0_1 output assigned to XBARB3_IN25 input. */
    kXBARB3_InputFlexpwm2Pwm3OutTrig01 = 26|0x300U, /**< FLEXPWM2_PWM3_OUT_TRIG0_1 output assigned to XBARB3_IN26 input. */
    kXBARB3_InputFlexpwm2Pwm4OutTrig01 = 27|0x300U, /**< FLEXPWM2_PWM4_OUT_TRIG0_1 output assigned to XBARB3_IN27 input. */
    kXBARB3_InputFlexpwm3Pwm1OutTrig01 = 28|0x300U, /**< FLEXPWM3_PWM1_OUT_TRIG0_1 output assigned to XBARB3_IN28 input. */
    kXBARB3_InputFlexpwm3Pwm2OutTrig01 = 29|0x300U, /**< FLEXPWM3_PWM2_OUT_TRIG0_1 output assigned to XBARB3_IN29 input. */
    kXBARB3_InputFlexpwm3Pwm3OutTrig01 = 30|0x300U, /**< FLEXPWM3_PWM3_OUT_TRIG0_1 output assigned to XBARB3_IN30 input. */
    kXBARB3_InputFlexpwm3Pwm4OutTrig01 = 31|0x300U, /**< FLEXPWM3_PWM4_OUT_TRIG0_1 output assigned to XBARB3_IN31 input. */
    kXBARB3_InputFlexpwm4Pwm1OutTrig01 = 32|0x300U, /**< FLEXPWM4_PWM1_OUT_TRIG0_1 output assigned to XBARB3_IN32 input. */
    kXBARB3_InputFlexpwm4Pwm2OutTrig01 = 33|0x300U, /**< FLEXPWM4_PWM2_OUT_TRIG0_1 output assigned to XBARB3_IN33 input. */
    kXBARB3_InputFlexpwm4Pwm3OutTrig01 = 34|0x300U, /**< FLEXPWM4_PWM3_OUT_TRIG0_1 output assigned to XBARB3_IN34 input. */
    kXBARB3_InputFlexpwm4Pwm4OutTrig01 = 35|0x300U, /**< FLEXPWM4_PWM4_OUT_TRIG0_1 output assigned to XBARB3_IN35 input. */
    kXBARB3_InputPitTrigger0        = 36|0x300U,   /**< PIT_TRIGGER0 output assigned to XBARB3_IN36 input. */
    kXBARB3_InputPitTrigger1        = 37|0x300U,   /**< PIT_TRIGGER1 output assigned to XBARB3_IN37 input. */
    kXBARB3_InputAdcEtcXbar0Coco0   = 38|0x300U,   /**< ADC_ETC_XBAR0_COCO0 output assigned to XBARB3_IN38 input. */
    kXBARB3_InputAdcEtcXbar0Coco1   = 39|0x300U,   /**< ADC_ETC_XBAR0_COCO1 output assigned to XBARB3_IN39 input. */
    kXBARB3_InputAdcEtcXbar0Coco2   = 40|0x300U,   /**< ADC_ETC_XBAR0_COCO2 output assigned to XBARB3_IN40 input. */
    kXBARB3_InputAdcEtcXbar0Coco3   = 41|0x300U,   /**< ADC_ETC_XBAR0_COCO3 output assigned to XBARB3_IN41 input. */
    kXBARB3_InputAdcEtcXbar1Coco0   = 42|0x300U,   /**< ADC_ETC_XBAR1_COCO0 output assigned to XBARB3_IN42 input. */
    kXBARB3_InputAdcEtcXbar1Coco1   = 43|0x300U,   /**< ADC_ETC_XBAR1_COCO1 output assigned to XBARB3_IN43 input. */
    kXBARB3_InputAdcEtcXbar1Coco2   = 44|0x300U,   /**< ADC_ETC_XBAR1_COCO2 output assigned to XBARB3_IN44 input. */
    kXBARB3_InputAdcEtcXbar1Coco3   = 45|0x300U,   /**< ADC_ETC_XBAR1_COCO3 output assigned to XBARB3_IN45 input. */
    kXBARB3_InputEnc1PosMatch       = 46|0x300U,   /**< ENC1_POS_MATCH output assigned to XBARB3_IN46 input. */
    kXBARB3_InputEnc2PosMatch       = 47|0x300U,   /**< ENC2_POS_MATCH output assigned to XBARB3_IN47 input. */
    kXBARB3_InputEnc3PosMatch       = 48|0x300U,   /**< ENC3_POS_MATCH output assigned to XBARB3_IN48 input. */
    kXBARB3_InputEnc4PosMatch       = 49|0x300U,   /**< ENC4_POS_MATCH output assigned to XBARB3_IN49 input. */
    kXBARB3_InputDmaDone0           = 50|0x300U,   /**< DMA_DONE0 output assigned to XBARB3_IN50 input. */
    kXBARB3_InputDmaDone1           = 51|0x300U,   /**< DMA_DONE1 output assigned to XBARB3_IN51 input. */
    kXBARB3_InputDmaDone2           = 52|0x300U,   /**< DMA_DONE2 output assigned to XBARB3_IN52 input. */
    kXBARB3_InputDmaDone3           = 53|0x300U,   /**< DMA_DONE3 output assigned to XBARB3_IN53 input. */
    kXBARB3_InputDmaDone4           = 54|0x300U,   /**< DMA_DONE4 output assigned to XBARB3_IN54 input. */
    kXBARB3_InputDmaDone5           = 55|0x300U,   /**< DMA_DONE5 output assigned to XBARB3_IN55 input. */
    kXBARB3_InputDmaDone6           = 56|0x300U,   /**< DMA_DONE6 output assigned to XBARB3_IN56 input. */
    kXBARB3_InputDmaDone7           = 57|0x300U,   /**< DMA_DONE7 output assigned to XBARB3_IN57 input. */
} xbar_input_signal_t;

typedef enum _xbar_output_signal
{
    kXBARA1_OutputDmaChMuxReq30     = 0|0x100U,    /**< XBARA1_OUT0 output assigned to DMA_CH_MUX_REQ30 */
    kXBARA1_OutputDmaChMuxReq31     = 1|0x100U,    /**< XBARA1_OUT1 output assigned to DMA_CH_MUX_REQ31 */
    kXBARA1_OutputDmaChMuxReq94     = 2|0x100U,    /**< XBARA1_OUT2 output assigned to DMA_CH_MUX_REQ94 */
    kXBARA1_OutputDmaChMuxReq95     = 3|0x100U,    /**< XBARA1_OUT3 output assigned to DMA_CH_MUX_REQ95 */
    kXBARA1_OutputIomuxXbarInout04  = 4|0x100U,    /**< XBARA1_OUT4 output assigned to IOMUX_XBAR_INOUT04 */
    kXBARA1_OutputIomuxXbarInout05  = 5|0x100U,    /**< XBARA1_OUT5 output assigned to IOMUX_XBAR_INOUT05 */
    kXBARA1_OutputIomuxXbarInout06  = 6|0x100U,    /**< XBARA1_OUT6 output assigned to IOMUX_XBAR_INOUT06 */
    kXBARA1_OutputIomuxXbarInout07  = 7|0x100U,    /**< XBARA1_OUT7 output assigned to IOMUX_XBAR_INOUT07 */
    kXBARA1_OutputIomuxXbarInout08  = 8|0x100U,    /**< XBARA1_OUT8 output assigned to IOMUX_XBAR_INOUT08 */
    kXBARA1_OutputIomuxXbarInout09  = 9|0x100U,    /**< XBARA1_OUT9 output assigned to IOMUX_XBAR_INOUT09 */
    kXBARA1_OutputIomuxXbarInout10  = 10|0x100U,   /**< XBARA1_OUT10 output assigned to IOMUX_XBAR_INOUT10 */
    kXBARA1_OutputIomuxXbarInout11  = 11|0x100U,   /**< XBARA1_OUT11 output assigned to IOMUX_XBAR_INOUT11 */
    kXBARA1_OutputIomuxXbarInout12  = 12|0x100U,   /**< XBARA1_OUT12 output assigned to IOMUX_XBAR_INOUT12 */
    kXBARA1_OutputIomuxXbarInout13  = 13|0x100U,   /**< XBARA1_OUT13 output assigned to IOMUX_XBAR_INOUT13 */
    kXBARA1_OutputIomuxXbarInout14  = 14|0x100U,   /**< XBARA1_OUT14 output assigned to IOMUX_XBAR_INOUT14 */
    kXBARA1_OutputIomuxXbarInout15  = 15|0x100U,   /**< XBARA1_OUT15 output assigned to IOMUX_XBAR_INOUT15 */
    kXBARA1_OutputIomuxXbarInout16  = 16|0x100U,   /**< XBARA1_OUT16 output assigned to IOMUX_XBAR_INOUT16 */
    kXBARA1_OutputIomuxXbarInout17  = 17|0x100U,   /**< XBARA1_OUT17 output assigned to IOMUX_XBAR_INOUT17 */
    kXBARA1_OutputIomuxXbarInout18  = 18|0x100U,   /**< XBARA1_OUT18 output assigned to IOMUX_XBAR_INOUT18 */
    kXBARA1_OutputIomuxXbarInout19  = 19|0x100U,   /**< XBARA1_OUT19 output assigned to IOMUX_XBAR_INOUT19 */
    kXBARA1_OutputAcmp1Sample       = 20|0x100U,   /**< XBARA1_OUT20 output assigned to ACMP1_SAMPLE */
    kXBARA1_OutputAcmp2Sample       = 21|0x100U,   /**< XBARA1_OUT21 output assigned to ACMP2_SAMPLE */
    kXBARA1_OutputAcmp3Sample       = 22|0x100U,   /**< XBARA1_OUT22 output assigned to ACMP3_SAMPLE */
    kXBARA1_OutputAcmp4Sample       = 23|0x100U,   /**< XBARA1_OUT23 output assigned to ACMP4_SAMPLE */
    kXBARA1_OutputRESERVED24        = 24|0x100U,   /**< XBARA1_OUT24 output is reserved. */
    kXBARA1_OutputRESERVED25        = 25|0x100U,   /**< XBARA1_OUT25 output is reserved. */
    kXBARA1_OutputFlexpwm1Exta0     = 26|0x100U,   /**< XBARA1_OUT26 output assigned to FLEXPWM1_EXTA0 */
    kXBARA1_OutputFlexpwm1Exta1     = 27|0x100U,   /**< XBARA1_OUT27 output assigned to FLEXPWM1_EXTA1 */
    kXBARA1_OutputFlexpwm1Exta2     = 28|0x100U,   /**< XBARA1_OUT28 output assigned to FLEXPWM1_EXTA2 */
    kXBARA1_OutputFlexpwm1Exta3     = 29|0x100U,   /**< XBARA1_OUT29 output assigned to FLEXPWM1_EXTA3 */
    kXBARA1_OutputFlexpwm1ExtSync0  = 30|0x100U,   /**< XBARA1_OUT30 output assigned to FLEXPWM1_EXT_SYNC0 */
    kXBARA1_OutputFlexpwm1ExtSync1  = 31|0x100U,   /**< XBARA1_OUT31 output assigned to FLEXPWM1_EXT_SYNC1 */
    kXBARA1_OutputFlexpwm1ExtSync2  = 32|0x100U,   /**< XBARA1_OUT32 output assigned to FLEXPWM1_EXT_SYNC2 */
    kXBARA1_OutputFlexpwm1ExtSync3  = 33|0x100U,   /**< XBARA1_OUT33 output assigned to FLEXPWM1_EXT_SYNC3 */
    kXBARA1_OutputFlexpwm1ExtClk    = 34|0x100U,   /**< XBARA1_OUT34 output assigned to FLEXPWM1_EXT_CLK */
    kXBARA1_OutputFlexpwm1Fault0    = 35|0x100U,   /**< XBARA1_OUT35 output assigned to FLEXPWM1_FAULT0 */
    kXBARA1_OutputFlexpwm1Fault1    = 36|0x100U,   /**< XBARA1_OUT36 output assigned to FLEXPWM1_FAULT1 */
    kXBARA1_OutputFlexpwm1234Fault2 = 37|0x100U,   /**< XBARA1_OUT37 output assigned to FLEXPWM1_2_3_4_FAULT2 */
    kXBARA1_OutputFlexpwm1234Fault3 = 38|0x100U,   /**< XBARA1_OUT38 output assigned to FLEXPWM1_2_3_4_FAULT3 */
    kXBARA1_OutputFlexpwm1ExtForce  = 39|0x100U,   /**< XBARA1_OUT39 output assigned to FLEXPWM1_EXT_FORCE */
    kXBARA1_OutputFlexpwm234Exta0   = 40|0x100U,   /**< XBARA1_OUT40 output assigned to FLEXPWM2_3_4_EXTA0 */
    kXBARA1_OutputFlexpwm234Exta1   = 41|0x100U,   /**< XBARA1_OUT41 output assigned to FLEXPWM2_3_4_EXTA1 */
    kXBARA1_OutputFlexpwm234Exta2   = 42|0x100U,   /**< XBARA1_OUT42 output assigned to FLEXPWM2_3_4_EXTA2 */
    kXBARA1_OutputFlexpwm234Exta3   = 43|0x100U,   /**< XBARA1_OUT43 output assigned to FLEXPWM2_3_4_EXTA3 */
    kXBARA1_OutputFlexpwm2ExtSync0  = 44|0x100U,   /**< XBARA1_OUT44 output assigned to FLEXPWM2_EXT_SYNC0 */
    kXBARA1_OutputFlexpwm2ExtSync1  = 45|0x100U,   /**< XBARA1_OUT45 output assigned to FLEXPWM2_EXT_SYNC1 */
    kXBARA1_OutputFlexpwm2ExtSync2  = 46|0x100U,   /**< XBARA1_OUT46 output assigned to FLEXPWM2_EXT_SYNC2 */
    kXBARA1_OutputFlexpwm2ExtSync3  = 47|0x100U,   /**< XBARA1_OUT47 output assigned to FLEXPWM2_EXT_SYNC3 */
    kXBARA1_OutputFlexpwm234ExtClk  = 48|0x100U,   /**< XBARA1_OUT48 output assigned to FLEXPWM2_3_4_EXT_CLK */
    kXBARA1_OutputFlexpwm2Fault0    = 49|0x100U,   /**< XBARA1_OUT49 output assigned to FLEXPWM2_FAULT0 */
    kXBARA1_OutputFlexpwm2Fault1    = 50|0x100U,   /**< XBARA1_OUT50 output assigned to FLEXPWM2_FAULT1 */
    kXBARA1_OutputFlexpwm2ExtForce  = 51|0x100U,   /**< XBARA1_OUT51 output assigned to FLEXPWM2_EXT_FORCE */
    kXBARA1_OutputFlexpwm3ExtSync0  = 52|0x100U,   /**< XBARA1_OUT52 output assigned to FLEXPWM3_EXT_SYNC0 */
    kXBARA1_OutputFlexpwm3ExtSync1  = 53|0x100U,   /**< XBARA1_OUT53 output assigned to FLEXPWM3_EXT_SYNC1 */
    kXBARA1_OutputFlexpwm3ExtSync2  = 54|0x100U,   /**< XBARA1_OUT54 output assigned to FLEXPWM3_EXT_SYNC2 */
    kXBARA1_OutputFlexpwm3ExtSync3  = 55|0x100U,   /**< XBARA1_OUT55 output assigned to FLEXPWM3_EXT_SYNC3 */
    kXBARA1_OutputFlexpwm3Fault0    = 56|0x100U,   /**< XBARA1_OUT56 output assigned to FLEXPWM3_FAULT0 */
    kXBARA1_OutputFlexpwm3Fault1    = 57|0x100U,   /**< XBARA1_OUT57 output assigned to FLEXPWM3_FAULT1 */
    kXBARA1_OutputFlexpwm3ExtForce  = 58|0x100U,   /**< XBARA1_OUT58 output assigned to FLEXPWM3_EXT_FORCE */
    kXBARA1_OutputFlexpwm4ExtSync0  = 59|0x100U,   /**< XBARA1_OUT59 output assigned to FLEXPWM4_EXT_SYNC0 */
    kXBARA1_OutputFlexpwm4ExtSync1  = 60|0x100U,   /**< XBARA1_OUT60 output assigned to FLEXPWM4_EXT_SYNC1 */
    kXBARA1_OutputFlexpwm4ExtSync2  = 61|0x100U,   /**< XBARA1_OUT61 output assigned to FLEXPWM4_EXT_SYNC2 */
    kXBARA1_OutputFlexpwm4ExtSync3  = 62|0x100U,   /**< XBARA1_OUT62 output assigned to FLEXPWM4_EXT_SYNC3 */
    kXBARA1_OutputFlexpwm4Fault0    = 63|0x100U,   /**< XBARA1_OUT63 output assigned to FLEXPWM4_FAULT0 */
    kXBARA1_OutputFlexpwm4Fault1    = 64|0x100U,   /**< XBARA1_OUT64 output assigned to FLEXPWM4_FAULT1 */
    kXBARA1_OutputFlexpwm4ExtForce  = 65|0x100U,   /**< XBARA1_OUT65 output assigned to FLEXPWM4_EXT_FORCE */
    kXBARA1_OutputEnc1PhaseAInput   = 66|0x100U,   /**< XBARA1_OUT66 output assigned to ENC1_PHASE_A_INPUT */
    kXBARA1_OutputEnc1PhaseBInput   = 67|0x100U,   /**< XBARA1_OUT67 output assigned to ENC1_PHASE_B_INPUT */
    kXBARA1_OutputEnc1Index         = 68|0x100U,   /**< XBARA1_OUT68 output assigned to ENC1_INDEX */
    kXBARA1_OutputEnc1Home          = 69|0x100U,   /**< XBARA1_OUT69 output assigned to ENC1_HOME */
    kXBARA1_OutputEnc1Trigger       = 70|0x100U,   /**< XBARA1_OUT70 output assigned to ENC1_TRIGGER */
    kXBARA1_OutputEnc2PhaseAInput   = 71|0x100U,   /**< XBARA1_OUT71 output assigned to ENC2_PHASE_A_INPUT */
    kXBARA1_OutputEnc2PhaseBInput   = 72|0x100U,   /**< XBARA1_OUT72 output assigned to ENC2_PHASE_B_INPUT */
    kXBARA1_OutputEnc2Index         = 73|0x100U,   /**< XBARA1_OUT73 output assigned to ENC2_INDEX */
    kXBARA1_OutputEnc2Home          = 74|0x100U,   /**< XBARA1_OUT74 output assigned to ENC2_HOME */
    kXBARA1_OutputEnc2Trigger       = 75|0x100U,   /**< XBARA1_OUT75 output assigned to ENC2_TRIGGER */
    kXBARA1_OutputEnc3PhaseAInput   = 76|0x100U,   /**< XBARA1_OUT76 output assigned to ENC3_PHASE_A_INPUT */
    kXBARA1_OutputEnc3PhaseBInput   = 77|0x100U,   /**< XBARA1_OUT77 output assigned to ENC3_PHASE_B_INPUT */
    kXBARA1_OutputEnc3Index         = 78|0x100U,   /**< XBARA1_OUT78 output assigned to ENC3_INDEX */
    kXBARA1_OutputEnc3Home          = 79|0x100U,   /**< XBARA1_OUT79 output assigned to ENC3_HOME */
    kXBARA1_OutputEnc3Trigger       = 80|0x100U,   /**< XBARA1_OUT80 output assigned to ENC3_TRIGGER */
    kXBARA1_OutputEnc4PhaseAInput   = 81|0x100U,   /**< XBARA1_OUT81 output assigned to ENC4_PHASE_A_INPUT */
    kXBARA1_OutputEnc4PhaseBInput   = 82|0x100U,   /**< XBARA1_OUT82 output assigned to ENC4_PHASE_B_INPUT */
    kXBARA1_OutputEnc4Index         = 83|0x100U,   /**< XBARA1_OUT83 output assigned to ENC4_INDEX */
    kXBARA1_OutputEnc4Home          = 84|0x100U,   /**< XBARA1_OUT84 output assigned to ENC4_HOME */
    kXBARA1_OutputEnc4Trigger       = 85|0x100U,   /**< XBARA1_OUT85 output assigned to ENC4_TRIGGER */
    kXBARA1_OutputQtimer1Tmr0Input  = 86|0x100U,   /**< XBARA1_OUT86 output assigned to QTIMER1_TMR0_INPUT */
    kXBARA1_OutputQtimer1Tmr1Input  = 87|0x100U,   /**< XBARA1_OUT87 output assigned to QTIMER1_TMR1_INPUT */
    kXBARA1_OutputQtimer1Tmr2Input  = 88|0x100U,   /**< XBARA1_OUT88 output assigned to QTIMER1_TMR2_INPUT */
    kXBARA1_OutputQtimer1Tmr3Input  = 89|0x100U,   /**< XBARA1_OUT89 output assigned to QTIMER1_TMR3_INPUT */
    kXBARA1_OutputQtimer2Tmr0Input  = 90|0x100U,   /**< XBARA1_OUT90 output assigned to QTIMER2_TMR0_INPUT */
    kXBARA1_OutputQtimer2Tmr1Input  = 91|0x100U,   /**< XBARA1_OUT91 output assigned to QTIMER2_TMR1_INPUT */
    kXBARA1_OutputQtimer2Tmr2Input  = 92|0x100U,   /**< XBARA1_OUT92 output assigned to QTIMER2_TMR2_INPUT */
    kXBARA1_OutputQtimer2Tmr3Input  = 93|0x100U,   /**< XBARA1_OUT93 output assigned to QTIMER2_TMR3_INPUT */
    kXBARA1_OutputQtimer3Tmr0Input  = 94|0x100U,   /**< XBARA1_OUT94 output assigned to QTIMER3_TMR0_INPUT */
    kXBARA1_OutputQtimer3Tmr1Input  = 95|0x100U,   /**< XBARA1_OUT95 output assigned to QTIMER3_TMR1_INPUT */
    kXBARA1_OutputQtimer3Tmr2Input  = 96|0x100U,   /**< XBARA1_OUT96 output assigned to QTIMER3_TMR2_INPUT */
    kXBARA1_OutputQtimer3Tmr3Input  = 97|0x100U,   /**< XBARA1_OUT97 output assigned to QTIMER3_TMR3_INPUT */
    kXBARA1_OutputQtimer4Tmr0Input  = 98|0x100U,   /**< XBARA1_OUT98 output assigned to QTIMER4_TMR0_INPUT */
    kXBARA1_OutputQtimer4Tmr1Input  = 99|0x100U,   /**< XBARA1_OUT99 output assigned to QTIMER4_TMR1_INPUT */
    kXBARA1_OutputQtimer4Tmr2Input  = 100|0x100U,  /**< XBARA1_OUT100 output assigned to QTIMER4_TMR2_INPUT */
    kXBARA1_OutputQtimer4Tmr3Input  = 101|0x100U,  /**< XBARA1_OUT101 output assigned to QTIMER4_TMR3_INPUT */
    kXBARA1_OutputEwmEwmIn          = 102|0x100U,  /**< XBARA1_OUT102 output assigned to EWM_EWM_IN */
    kXBARA1_OutputAdcEtcXbar0Trig0  = 103|0x100U,  /**< XBARA1_OUT103 output assigned to ADC_ETC_XBAR0_TRIG0 */
    kXBARA1_OutputAdcEtcXbar0Trig1  = 104|0x100U,  /**< XBARA1_OUT104 output assigned to ADC_ETC_XBAR0_TRIG1 */
    kXBARA1_OutputAdcEtcXbar0Trig2  = 105|0x100U,  /**< XBARA1_OUT105 output assigned to ADC_ETC_XBAR0_TRIG2 */
    kXBARA1_OutputAdcEtcXbar0Trig3  = 106|0x100U,  /**< XBARA1_OUT106 output assigned to ADC_ETC_XBAR0_TRIG3 */
    kXBARA1_OutputAdcEtcXbar1Trig0  = 107|0x100U,  /**< XBARA1_OUT107 output assigned to ADC_ETC_XBAR1_TRIG0 */
    kXBARA1_OutputAdcEtcXbar1Trig1  = 108|0x100U,  /**< XBARA1_OUT108 output assigned to ADC_ETC_XBAR1_TRIG1 */
    kXBARA1_OutputAdcEtcXbar1Trig2  = 109|0x100U,  /**< XBARA1_OUT109 output assigned to ADC_ETC_XBAR1_TRIG2 */
    kXBARA1_OutputAdcEtcXbar1Trig3  = 110|0x100U,  /**< XBARA1_OUT110 output assigned to ADC_ETC_XBAR1_TRIG3 */
    kXBARA1_OutputLpi2c1TrgInput    = 111|0x100U,  /**< XBARA1_OUT111 output assigned to LPI2C1_TRG_INPUT */
    kXBARA1_OutputLpi2c2TrgInput    = 112|0x100U,  /**< XBARA1_OUT112 output assigned to LPI2C2_TRG_INPUT */
    kXBARA1_OutputLpi2c3TrgInput    = 113|0x100U,  /**< XBARA1_OUT113 output assigned to LPI2C3_TRG_INPUT */
    kXBARA1_OutputLpi2c4TrgInput    = 114|0x100U,  /**< XBARA1_OUT114 output assigned to LPI2C4_TRG_INPUT */
    kXBARA1_OutputLpspi1TrgInput    = 115|0x100U,  /**< XBARA1_OUT115 output assigned to LPSPI1_TRG_INPUT */
    kXBARA1_OutputLpspi2TrgInput    = 116|0x100U,  /**< XBARA1_OUT116 output assigned to LPSPI2_TRG_INPUT */
    kXBARA1_OutputLpspi3TrgInput    = 117|0x100U,  /**< XBARA1_OUT117 output assigned to LPSPI3_TRG_INPUT */
    kXBARA1_OutputLpspi4TrgInput    = 118|0x100U,  /**< XBARA1_OUT118 output assigned to LPSPI4_TRG_INPUT */
    kXBARA1_OutputLpuart1TrgInput   = 119|0x100U,  /**< XBARA1_OUT119 output assigned to LPUART1_TRG_INPUT */
    kXBARA1_OutputLpuart2TrgInput   = 120|0x100U,  /**< XBARA1_OUT120 output assigned to LPUART2_TRG_INPUT */
    kXBARA1_OutputLpuart3TrgInput   = 121|0x100U,  /**< XBARA1_OUT121 output assigned to LPUART3_TRG_INPUT */
    kXBARA1_OutputLpuart4TrgInput   = 122|0x100U,  /**< XBARA1_OUT122 output assigned to LPUART4_TRG_INPUT */
    kXBARA1_OutputLpuart5TrgInput   = 123|0x100U,  /**< XBARA1_OUT123 output assigned to LPUART5_TRG_INPUT */
    kXBARA1_OutputLpuart6TrgInput   = 124|0x100U,  /**< XBARA1_OUT124 output assigned to LPUART6_TRG_INPUT */
    kXBARA1_OutputLpuart7TrgInput   = 125|0x100U,  /**< XBARA1_OUT125 output assigned to LPUART7_TRG_INPUT */
    kXBARA1_OutputLpuart8TrgInput   = 126|0x100U,  /**< XBARA1_OUT126 output assigned to LPUART8_TRG_INPUT */
    kXBARA1_OutputFlexio1TriggerIn0 = 127|0x100U,  /**< XBARA1_OUT127 output assigned to FLEXIO1_TRIGGER_IN0 */
    kXBARA1_OutputFlexio1TriggerIn1 = 128|0x100U,  /**< XBARA1_OUT128 output assigned to FLEXIO1_TRIGGER_IN1 */
    kXBARA1_OutputFlexio2TriggerIn0 = 129|0x100U,  /**< XBARA1_OUT129 output assigned to FLEXIO2_TRIGGER_IN0 */
    kXBARA1_OutputFlexio2TriggerIn1 = 130|0x100U,  /**< XBARA1_OUT130 output assigned to FLEXIO2_TRIGGER_IN1 */
    kXBARB2_OutputAoi1In00          = 0|0x200U,    /**< XBARB2_OUT0 output assigned to AOI1_IN00 */
    kXBARB2_OutputAoi1In01          = 1|0x200U,    /**< XBARB2_OUT1 output assigned to AOI1_IN01 */
    kXBARB2_OutputAoi1In02          = 2|0x200U,    /**< XBARB2_OUT2 output assigned to AOI1_IN02 */
    kXBARB2_OutputAoi1In03          = 3|0x200U,    /**< XBARB2_OUT3 output assigned to AOI1_IN03 */
    kXBARB2_OutputAoi1In04          = 4|0x200U,    /**< XBARB2_OUT4 output assigned to AOI1_IN04 */
    kXBARB2_OutputAoi1In05          = 5|0x200U,    /**< XBARB2_OUT5 output assigned to AOI1_IN05 */
    kXBARB2_OutputAoi1In06          = 6|0x200U,    /**< XBARB2_OUT6 output assigned to AOI1_IN06 */
    kXBARB2_OutputAoi1In07          = 7|0x200U,    /**< XBARB2_OUT7 output assigned to AOI1_IN07 */
    kXBARB2_OutputAoi1In08          = 8|0x200U,    /**< XBARB2_OUT8 output assigned to AOI1_IN08 */
    kXBARB2_OutputAoi1In09          = 9|0x200U,    /**< XBARB2_OUT9 output assigned to AOI1_IN09 */
    kXBARB2_OutputAoi1In10          = 10|0x200U,   /**< XBARB2_OUT10 output assigned to AOI1_IN10 */
    kXBARB2_OutputAoi1In11          = 11|0x200U,   /**< XBARB2_OUT11 output assigned to AOI1_IN11 */
    kXBARB2_OutputAoi1In12          = 12|0x200U,   /**< XBARB2_OUT12 output assigned to AOI1_IN12 */
    kXBARB2_OutputAoi1In13          = 13|0x200U,   /**< XBARB2_OUT13 output assigned to AOI1_IN13 */
    kXBARB2_OutputAoi1In14          = 14|0x200U,   /**< XBARB2_OUT14 output assigned to AOI1_IN14 */
    kXBARB2_OutputAoi1In15          = 15|0x200U,   /**< XBARB2_OUT15 output assigned to AOI1_IN15 */
    kXBARB3_OutputAoi2In00          = 0|0x300U,    /**< XBARB3_OUT0 output assigned to AOI2_IN00 */
    kXBARB3_OutputAoi2In01          = 1|0x300U,    /**< XBARB3_OUT1 output assigned to AOI2_IN01 */
    kXBARB3_OutputAoi2In02          = 2|0x300U,    /**< XBARB3_OUT2 output assigned to AOI2_IN02 */
    kXBARB3_OutputAoi2In03          = 3|0x300U,    /**< XBARB3_OUT3 output assigned to AOI2_IN03 */
    kXBARB3_OutputAoi2In04          = 4|0x300U,    /**< XBARB3_OUT4 output assigned to AOI2_IN04 */
    kXBARB3_OutputAoi2In05          = 5|0x300U,    /**< XBARB3_OUT5 output assigned to AOI2_IN05 */
    kXBARB3_OutputAoi2In06          = 6|0x300U,    /**< XBARB3_OUT6 output assigned to AOI2_IN06 */
    kXBARB3_OutputAoi2In07          = 7|0x300U,    /**< XBARB3_OUT7 output assigned to AOI2_IN07 */
    kXBARB3_OutputAoi2In08          = 8|0x300U,    /**< XBARB3_OUT8 output assigned to AOI2_IN08 */
    kXBARB3_OutputAoi2In09          = 9|0x300U,    /**< XBARB3_OUT9 output assigned to AOI2_IN09 */
    kXBARB3_OutputAoi2In10          = 10|0x300U,   /**< XBARB3_OUT10 output assigned to AOI2_IN10 */
    kXBARB3_OutputAoi2In11          = 11|0x300U,   /**< XBARB3_OUT11 output assigned to AOI2_IN11 */
    kXBARB3_OutputAoi2In12          = 12|0x300U,   /**< XBARB3_OUT12 output assigned to AOI2_IN12 */
    kXBARB3_OutputAoi2In13          = 13|0x300U,   /**< XBARB3_OUT13 output assigned to AOI2_IN13 */
    kXBARB3_OutputAoi2In14          = 14|0x300U,   /**< XBARB3_OUT14 output assigned to AOI2_IN14 */
    kXBARB3_OutputAoi2In15          = 15|0x300U,   /**< XBARB3_OUT15 output assigned to AOI2_IN15 */
} xbar_output_signal_t;


/*!
 * @}
 */ /* end of group Mapping_Information */


/* DMA - Peripheral instance base addresses */
/** Peripheral DMA0 base address */
#define DMA0_BASE                                (0x400E8000u)
/** Peripheral DMA0 base pointer */
#define DMA0                                     ((DMA_Type *)DMA0_BASE)

/** Peripheral LPSPI3 base address */
#define LPSPI3_BASE                              (0x4039C000u)
/** Peripheral LPSPI3 base pointer */
#define LPSPI3                                   ((LPSPI_Type *)LPSPI3_BASE)

/*!
 * @addtogroup LPSPI_Peripheral_Access_Layer LPSPI Peripheral Access Layer
 * @{
 */

/** LPSPI - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
       uint8_t RESERVED_0[8];
  __IO uint32_t CR;                                /**< Control Register, offset: 0x10 */
  __IO uint32_t SR;                                /**< Status Register, offset: 0x14 */
  __IO uint32_t IER;                               /**< Interrupt Enable Register, offset: 0x18 */
  __IO uint32_t DER;                               /**< DMA Enable Register, offset: 0x1C */
  __IO uint32_t CFGR0;                             /**< Configuration Register 0, offset: 0x20 */
  __IO uint32_t CFGR1;                             /**< Configuration Register 1, offset: 0x24 */
       uint8_t RESERVED_1[8];
  __IO uint32_t DMR0;                              /**< Data Match Register 0, offset: 0x30 */
  __IO uint32_t DMR1;                              /**< Data Match Register 1, offset: 0x34 */
       uint8_t RESERVED_2[8];
  __IO uint32_t CCR;                               /**< Clock Configuration Register, offset: 0x40 */
       uint8_t RESERVED_3[20];
  __IO uint32_t FCR;                               /**< FIFO Control Register, offset: 0x58 */
  __I  uint32_t FSR;                               /**< FIFO Status Register, offset: 0x5C */
  __IO uint32_t TCR;                               /**< Transmit Command Register, offset: 0x60 */
  __O  uint32_t TDR;                               /**< Transmit Data Register, offset: 0x64 */
       uint8_t RESERVED_4[8];
  __I  uint32_t RSR;                               /**< Receive Status Register, offset: 0x70 */
  __I  uint32_t RDR;                               /**< Receive Data Register, offset: 0x74 */
} LPSPI_Type;

/* ----------------------------------------------------------------------------
   -- LPSPI Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPSPI_Register_Masks LPSPI Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
/*! @{ */

#define LPSPI_VERID_FEATURE_MASK                 (0xFFFFU)
#define LPSPI_VERID_FEATURE_SHIFT                (0U)
/*! FEATURE - Module Identification Number
 *  0b0000000000000100..Standard feature set supporting a 32-bit shift register.
 */
#define LPSPI_VERID_FEATURE(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_VERID_FEATURE_SHIFT)) & LPSPI_VERID_FEATURE_MASK)

#define LPSPI_VERID_MINOR_MASK                   (0xFF0000U)
#define LPSPI_VERID_MINOR_SHIFT                  (16U)
/*! MINOR - Minor Version Number
 */
#define LPSPI_VERID_MINOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_VERID_MINOR_SHIFT)) & LPSPI_VERID_MINOR_MASK)

#define LPSPI_VERID_MAJOR_MASK                   (0xFF000000U)
#define LPSPI_VERID_MAJOR_SHIFT                  (24U)
/*! MAJOR - Major Version Number
 */
#define LPSPI_VERID_MAJOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_VERID_MAJOR_SHIFT)) & LPSPI_VERID_MAJOR_MASK)
/*! @} */

/*! @name PARAM - Parameter Register */
/*! @{ */

#define LPSPI_PARAM_TXFIFO_MASK                  (0xFFU)
#define LPSPI_PARAM_TXFIFO_SHIFT                 (0U)
/*! TXFIFO - Transmit FIFO Size
 */
#define LPSPI_PARAM_TXFIFO(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_PARAM_TXFIFO_SHIFT)) & LPSPI_PARAM_TXFIFO_MASK)

#define LPSPI_PARAM_RXFIFO_MASK                  (0xFF00U)
#define LPSPI_PARAM_RXFIFO_SHIFT                 (8U)
/*! RXFIFO - Receive FIFO Size
 */
#define LPSPI_PARAM_RXFIFO(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_PARAM_RXFIFO_SHIFT)) & LPSPI_PARAM_RXFIFO_MASK)

#define LPSPI_PARAM_PCSNUM_MASK                  (0xFF0000U)
#define LPSPI_PARAM_PCSNUM_SHIFT                 (16U)
/*! PCSNUM - PCS Number
 */
#define LPSPI_PARAM_PCSNUM(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_PARAM_PCSNUM_SHIFT)) & LPSPI_PARAM_PCSNUM_MASK)
/*! @} */

/*! @name CR - Control Register */
/*! @{ */

#define LPSPI_CR_MEN_MASK                        (0x1U)
#define LPSPI_CR_MEN_SHIFT                       (0U)
/*! MEN - Module Enable
 *  0b0..Module is disabled
 *  0b1..Module is enabled
 */
#define LPSPI_CR_MEN(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_MEN_SHIFT)) & LPSPI_CR_MEN_MASK)

#define LPSPI_CR_RST_MASK                        (0x2U)
#define LPSPI_CR_RST_SHIFT                       (1U)
/*! RST - Software Reset
 *  0b0..Module is not reset
 *  0b1..Module is reset
 */
#define LPSPI_CR_RST(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_RST_SHIFT)) & LPSPI_CR_RST_MASK)

#define LPSPI_CR_DOZEN_MASK                      (0x4U)
#define LPSPI_CR_DOZEN_SHIFT                     (2U)
/*! DOZEN - Doze mode enable
 *  0b0..Module is enabled in Doze mode
 *  0b1..Module is disabled in Doze mode
 */
#define LPSPI_CR_DOZEN(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_DOZEN_SHIFT)) & LPSPI_CR_DOZEN_MASK)

#define LPSPI_CR_DBGEN_MASK                      (0x8U)
#define LPSPI_CR_DBGEN_SHIFT                     (3U)
/*! DBGEN - Debug Enable
 *  0b0..Module is disabled in debug mode
 *  0b1..Module is enabled in debug mode
 */
#define LPSPI_CR_DBGEN(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_DBGEN_SHIFT)) & LPSPI_CR_DBGEN_MASK)

#define LPSPI_CR_RTF_MASK                        (0x100U)
#define LPSPI_CR_RTF_SHIFT                       (8U)
/*! RTF - Reset Transmit FIFO
 *  0b0..No effect
 *  0b1..Transmit FIFO is reset
 */
#define LPSPI_CR_RTF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_RTF_SHIFT)) & LPSPI_CR_RTF_MASK)

#define LPSPI_CR_RRF_MASK                        (0x200U)
#define LPSPI_CR_RRF_SHIFT                       (9U)
/*! RRF - Reset Receive FIFO
 *  0b0..No effect
 *  0b1..Receive FIFO is reset
 */
#define LPSPI_CR_RRF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_RRF_SHIFT)) & LPSPI_CR_RRF_MASK)
/*! @} */

/*! @name SR - Status Register */
/*! @{ */

#define LPSPI_SR_TDF_MASK                        (0x1U)
#define LPSPI_SR_TDF_SHIFT                       (0U)
/*! TDF - Transmit Data Flag
 *  0b0..Transmit data not requested
 *  0b1..Transmit data is requested
 */
#define LPSPI_SR_TDF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_TDF_SHIFT)) & LPSPI_SR_TDF_MASK)

#define LPSPI_SR_RDF_MASK                        (0x2U)
#define LPSPI_SR_RDF_SHIFT                       (1U)
/*! RDF - Receive Data Flag
 *  0b0..Receive Data is not ready
 *  0b1..Receive data is ready
 */
#define LPSPI_SR_RDF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_RDF_SHIFT)) & LPSPI_SR_RDF_MASK)

#define LPSPI_SR_WCF_MASK                        (0x100U)
#define LPSPI_SR_WCF_SHIFT                       (8U)
/*! WCF - Word Complete Flag
 *  0b0..Transfer of a received word has not yet completed
 *  0b1..Transfer of a received word has completed
 */
#define LPSPI_SR_WCF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_WCF_SHIFT)) & LPSPI_SR_WCF_MASK)

#define LPSPI_SR_FCF_MASK                        (0x200U)
#define LPSPI_SR_FCF_SHIFT                       (9U)
/*! FCF - Frame Complete Flag
 *  0b0..Frame transfer has not completed
 *  0b1..Frame transfer has completed
 */
#define LPSPI_SR_FCF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_FCF_SHIFT)) & LPSPI_SR_FCF_MASK)

#define LPSPI_SR_TCF_MASK                        (0x400U)
#define LPSPI_SR_TCF_SHIFT                       (10U)
/*! TCF - Transfer Complete Flag
 *  0b0..All transfers have not completed
 *  0b1..All transfers have completed
 */
#define LPSPI_SR_TCF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_TCF_SHIFT)) & LPSPI_SR_TCF_MASK)

#define LPSPI_SR_TEF_MASK                        (0x800U)
#define LPSPI_SR_TEF_SHIFT                       (11U)
/*! TEF - Transmit Error Flag
 *  0b0..Transmit FIFO underrun has not occurred
 *  0b1..Transmit FIFO underrun has occurred
 */
#define LPSPI_SR_TEF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_TEF_SHIFT)) & LPSPI_SR_TEF_MASK)

#define LPSPI_SR_REF_MASK                        (0x1000U)
#define LPSPI_SR_REF_SHIFT                       (12U)
/*! REF - Receive Error Flag
 *  0b0..Receive FIFO has not overflowed
 *  0b1..Receive FIFO has overflowed
 */
#define LPSPI_SR_REF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_REF_SHIFT)) & LPSPI_SR_REF_MASK)

#define LPSPI_SR_DMF_MASK                        (0x2000U)
#define LPSPI_SR_DMF_SHIFT                       (13U)
/*! DMF - Data Match Flag
 *  0b0..Have not received matching data
 *  0b1..Have received matching data
 */
#define LPSPI_SR_DMF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_DMF_SHIFT)) & LPSPI_SR_DMF_MASK)

#define LPSPI_SR_MBF_MASK                        (0x1000000U)
#define LPSPI_SR_MBF_SHIFT                       (24U)
/*! MBF - Module Busy Flag
 *  0b0..LPSPI is idle
 *  0b1..LPSPI is busy
 */
#define LPSPI_SR_MBF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_MBF_SHIFT)) & LPSPI_SR_MBF_MASK)
/*! @} */

/*! @name IER - Interrupt Enable Register */
/*! @{ */

#define LPSPI_IER_TDIE_MASK                      (0x1U)
#define LPSPI_IER_TDIE_SHIFT                     (0U)
/*! TDIE - Transmit Data Interrupt Enable
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define LPSPI_IER_TDIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_TDIE_SHIFT)) & LPSPI_IER_TDIE_MASK)

#define LPSPI_IER_RDIE_MASK                      (0x2U)
#define LPSPI_IER_RDIE_SHIFT                     (1U)
/*! RDIE - Receive Data Interrupt Enable
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define LPSPI_IER_RDIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_RDIE_SHIFT)) & LPSPI_IER_RDIE_MASK)

#define LPSPI_IER_WCIE_MASK                      (0x100U)
#define LPSPI_IER_WCIE_SHIFT                     (8U)
/*! WCIE - Word Complete Interrupt Enable
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define LPSPI_IER_WCIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_WCIE_SHIFT)) & LPSPI_IER_WCIE_MASK)

#define LPSPI_IER_FCIE_MASK                      (0x200U)
#define LPSPI_IER_FCIE_SHIFT                     (9U)
/*! FCIE - Frame Complete Interrupt Enable
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define LPSPI_IER_FCIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_FCIE_SHIFT)) & LPSPI_IER_FCIE_MASK)

#define LPSPI_IER_TCIE_MASK                      (0x400U)
#define LPSPI_IER_TCIE_SHIFT                     (10U)
/*! TCIE - Transfer Complete Interrupt Enable
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define LPSPI_IER_TCIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_TCIE_SHIFT)) & LPSPI_IER_TCIE_MASK)

#define LPSPI_IER_TEIE_MASK                      (0x800U)
#define LPSPI_IER_TEIE_SHIFT                     (11U)
/*! TEIE - Transmit Error Interrupt Enable
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define LPSPI_IER_TEIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_TEIE_SHIFT)) & LPSPI_IER_TEIE_MASK)

#define LPSPI_IER_REIE_MASK                      (0x1000U)
#define LPSPI_IER_REIE_SHIFT                     (12U)
/*! REIE - Receive Error Interrupt Enable
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define LPSPI_IER_REIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_REIE_SHIFT)) & LPSPI_IER_REIE_MASK)

#define LPSPI_IER_DMIE_MASK                      (0x2000U)
#define LPSPI_IER_DMIE_SHIFT                     (13U)
/*! DMIE - Data Match Interrupt Enable
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define LPSPI_IER_DMIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_DMIE_SHIFT)) & LPSPI_IER_DMIE_MASK)
/*! @} */

/*! @name DER - DMA Enable Register */
/*! @{ */

#define LPSPI_DER_TDDE_MASK                      (0x1U)
#define LPSPI_DER_TDDE_SHIFT                     (0U)
/*! TDDE - Transmit Data DMA Enable
 *  0b0..DMA request is disabled
 *  0b1..DMA request is enabled
 */
#define LPSPI_DER_TDDE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_DER_TDDE_SHIFT)) & LPSPI_DER_TDDE_MASK)

#define LPSPI_DER_RDDE_MASK                      (0x2U)
#define LPSPI_DER_RDDE_SHIFT                     (1U)
/*! RDDE - Receive Data DMA Enable
 *  0b0..DMA request is disabled
 *  0b1..DMA request is enabled
 */
#define LPSPI_DER_RDDE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_DER_RDDE_SHIFT)) & LPSPI_DER_RDDE_MASK)
/*! @} */

/*! @name CFGR0 - Configuration Register 0 */
/*! @{ */

#define LPSPI_CFGR0_HREN_MASK                    (0x1U)
#define LPSPI_CFGR0_HREN_SHIFT                   (0U)
/*! HREN - Host Request Enable
 *  0b0..Host request is disabled
 *  0b1..Host request is enabled
 */
#define LPSPI_CFGR0_HREN(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_HREN_SHIFT)) & LPSPI_CFGR0_HREN_MASK)

#define LPSPI_CFGR0_HRPOL_MASK                   (0x2U)
#define LPSPI_CFGR0_HRPOL_SHIFT                  (1U)
/*! HRPOL - Host Request Polarity
 *  0b0..Active low
 *  0b1..Active high
 */
#define LPSPI_CFGR0_HRPOL(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_HRPOL_SHIFT)) & LPSPI_CFGR0_HRPOL_MASK)

#define LPSPI_CFGR0_HRSEL_MASK                   (0x4U)
#define LPSPI_CFGR0_HRSEL_SHIFT                  (2U)
/*! HRSEL - Host Request Select
 *  0b0..Host request input is the LPSPI_HREQ pin
 *  0b1..Host request input is the input trigger
 */
#define LPSPI_CFGR0_HRSEL(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_HRSEL_SHIFT)) & LPSPI_CFGR0_HRSEL_MASK)

#define LPSPI_CFGR0_CIRFIFO_MASK                 (0x100U)
#define LPSPI_CFGR0_CIRFIFO_SHIFT                (8U)
/*! CIRFIFO - Circular FIFO Enable
 *  0b0..Circular FIFO is disabled
 *  0b1..Circular FIFO is enabled
 */
#define LPSPI_CFGR0_CIRFIFO(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_CIRFIFO_SHIFT)) & LPSPI_CFGR0_CIRFIFO_MASK)

#define LPSPI_CFGR0_RDMO_MASK                    (0x200U)
#define LPSPI_CFGR0_RDMO_SHIFT                   (9U)
/*! RDMO - Receive Data Match Only
 *  0b0..Received data is stored in the receive FIFO as in normal operations
 *  0b1..Received data is discarded unless the Data Match Flag (DMF) is set
 */
#define LPSPI_CFGR0_RDMO(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_RDMO_SHIFT)) & LPSPI_CFGR0_RDMO_MASK)
/*! @} */

/*! @name CFGR1 - Configuration Register 1 */
/*! @{ */

#define LPSPI_CFGR1_MASTER_MASK                  (0x1U)
#define LPSPI_CFGR1_MASTER_SHIFT                 (0U)
/*! MASTER - Master Mode
 *  0b0..Slave mode
 *  0b1..Master mode
 */
#define LPSPI_CFGR1_MASTER(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_MASTER_SHIFT)) & LPSPI_CFGR1_MASTER_MASK)

#define LPSPI_CFGR1_SAMPLE_MASK                  (0x2U)
#define LPSPI_CFGR1_SAMPLE_SHIFT                 (1U)
/*! SAMPLE - Sample Point
 *  0b0..Input data is sampled on SCK edge
 *  0b1..Input data is sampled on delayed SCK edge
 */
#define LPSPI_CFGR1_SAMPLE(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_SAMPLE_SHIFT)) & LPSPI_CFGR1_SAMPLE_MASK)

#define LPSPI_CFGR1_AUTOPCS_MASK                 (0x4U)
#define LPSPI_CFGR1_AUTOPCS_SHIFT                (2U)
/*! AUTOPCS - Automatic PCS
 *  0b0..Automatic PCS generation is disabled
 *  0b1..Automatic PCS generation is enabled
 */
#define LPSPI_CFGR1_AUTOPCS(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_AUTOPCS_SHIFT)) & LPSPI_CFGR1_AUTOPCS_MASK)

#define LPSPI_CFGR1_NOSTALL_MASK                 (0x8U)
#define LPSPI_CFGR1_NOSTALL_SHIFT                (3U)
/*! NOSTALL - No Stall
 *  0b0..Transfers will stall when the transmit FIFO is empty or the receive FIFO is full
 *  0b1..Transfers will not stall, allowing transmit FIFO underruns or receive FIFO overruns to occur
 */
#define LPSPI_CFGR1_NOSTALL(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_NOSTALL_SHIFT)) & LPSPI_CFGR1_NOSTALL_MASK)

#define LPSPI_CFGR1_PCSPOL_MASK                  (0xF00U)
#define LPSPI_CFGR1_PCSPOL_SHIFT                 (8U)
/*! PCSPOL - Peripheral Chip Select Polarity
 *  0b0000..The Peripheral Chip Select pin PCSx is active low
 *  0b0001..The Peripheral Chip Select pin PCSx is active high
 */
#define LPSPI_CFGR1_PCSPOL(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_PCSPOL_SHIFT)) & LPSPI_CFGR1_PCSPOL_MASK)

#define LPSPI_CFGR1_MATCFG_MASK                  (0x70000U)
#define LPSPI_CFGR1_MATCFG_SHIFT                 (16U)
/*! MATCFG - Match Configuration
 *  0b000..Match is disabled
 *  0b001..Reserved
 *  0b010..010b - Match is enabled, if 1st data word equals MATCH0 OR MATCH1, i.e., (1st data word = MATCH0 + MATCH1)
 *  0b011..011b - Match is enabled, if any data word equals MATCH0 OR MATCH1, i.e., (any data word = MATCH0 + MATCH1)
 *  0b100..100b - Match is enabled, if 1st data word equals MATCH0 AND 2nd data word equals MATCH1, i.e., [(1st
 *         data word = MATCH0) * (2nd data word = MATCH1)]
 *  0b101..101b - Match is enabled, if any data word equals MATCH0 AND the next data word equals MATCH1, i.e.,
 *         [(any data word = MATCH0) * (next data word = MATCH1)]
 *  0b110..110b - Match is enabled, if (1st data word AND MATCH1) equals (MATCH0 AND MATCH1), i.e., [(1st data word * MATCH1) = (MATCH0 * MATCH1)]
 *  0b111..111b - Match is enabled, if (any data word AND MATCH1) equals (MATCH0 AND MATCH1), i.e., [(any data word * MATCH1) = (MATCH0 * MATCH1)]
 */
#define LPSPI_CFGR1_MATCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_MATCFG_SHIFT)) & LPSPI_CFGR1_MATCFG_MASK)

#define LPSPI_CFGR1_PINCFG_MASK                  (0x3000000U)
#define LPSPI_CFGR1_PINCFG_SHIFT                 (24U)
/*! PINCFG - Pin Configuration
 *  0b00..SIN is used for input data and SOUT is used for output data
 *  0b01..SIN is used for both input and output data
 *  0b10..SOUT is used for both input and output data
 *  0b11..SOUT is used for input data and SIN is used for output data
 */
#define LPSPI_CFGR1_PINCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_PINCFG_SHIFT)) & LPSPI_CFGR1_PINCFG_MASK)

#define LPSPI_CFGR1_OUTCFG_MASK                  (0x4000000U)
#define LPSPI_CFGR1_OUTCFG_SHIFT                 (26U)
/*! OUTCFG - Output Config
 *  0b0..Output data retains last value when chip select is negated
 *  0b1..Output data is tristated when chip select is negated
 */
#define LPSPI_CFGR1_OUTCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_OUTCFG_SHIFT)) & LPSPI_CFGR1_OUTCFG_MASK)

#define LPSPI_CFGR1_PCSCFG_MASK                  (0x8000000U)
#define LPSPI_CFGR1_PCSCFG_SHIFT                 (27U)
/*! PCSCFG - Peripheral Chip Select Configuration
 *  0b0..PCS[3:2] are enabled
 *  0b1..PCS[3:2] are disabled
 */
#define LPSPI_CFGR1_PCSCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_PCSCFG_SHIFT)) & LPSPI_CFGR1_PCSCFG_MASK)
/*! @} */

/*! @name DMR0 - Data Match Register 0 */
/*! @{ */

#define LPSPI_DMR0_MATCH0_MASK                   (0xFFFFFFFFU)
#define LPSPI_DMR0_MATCH0_SHIFT                  (0U)
/*! MATCH0 - Match 0 Value
 */
#define LPSPI_DMR0_MATCH0(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_DMR0_MATCH0_SHIFT)) & LPSPI_DMR0_MATCH0_MASK)
/*! @} */

/*! @name DMR1 - Data Match Register 1 */
/*! @{ */

#define LPSPI_DMR1_MATCH1_MASK                   (0xFFFFFFFFU)
#define LPSPI_DMR1_MATCH1_SHIFT                  (0U)
/*! MATCH1 - Match 1 Value
 */
#define LPSPI_DMR1_MATCH1(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_DMR1_MATCH1_SHIFT)) & LPSPI_DMR1_MATCH1_MASK)
/*! @} */

/*! @name CCR - Clock Configuration Register */
/*! @{ */

#define LPSPI_CCR_SCKDIV_MASK                    (0xFFU)
#define LPSPI_CCR_SCKDIV_SHIFT                   (0U)
/*! SCKDIV - SCK Divider
 */
#define LPSPI_CCR_SCKDIV(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_SCKDIV_SHIFT)) & LPSPI_CCR_SCKDIV_MASK)

#define LPSPI_CCR_DBT_MASK                       (0xFF00U)
#define LPSPI_CCR_DBT_SHIFT                      (8U)
/*! DBT - Delay Between Transfers
 */
#define LPSPI_CCR_DBT(x)                         (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_DBT_SHIFT)) & LPSPI_CCR_DBT_MASK)

#define LPSPI_CCR_PCSSCK_MASK                    (0xFF0000U)
#define LPSPI_CCR_PCSSCK_SHIFT                   (16U)
/*! PCSSCK - PCS-to-SCK Delay
 */
#define LPSPI_CCR_PCSSCK(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_PCSSCK_SHIFT)) & LPSPI_CCR_PCSSCK_MASK)

#define LPSPI_CCR_SCKPCS_MASK                    (0xFF000000U)
#define LPSPI_CCR_SCKPCS_SHIFT                   (24U)
/*! SCKPCS - SCK-to-PCS Delay
 */
#define LPSPI_CCR_SCKPCS(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_SCKPCS_SHIFT)) & LPSPI_CCR_SCKPCS_MASK)
/*! @} */

/*! @name FCR - FIFO Control Register */
/*! @{ */

#define LPSPI_FCR_TXWATER_MASK                   (0xFU)
#define LPSPI_FCR_TXWATER_SHIFT                  (0U)
/*! TXWATER - Transmit FIFO Watermark
 */
#define LPSPI_FCR_TXWATER(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FCR_TXWATER_SHIFT)) & LPSPI_FCR_TXWATER_MASK)

#define LPSPI_FCR_RXWATER_MASK                   (0xF0000U)
#define LPSPI_FCR_RXWATER_SHIFT                  (16U)
/*! RXWATER - Receive FIFO Watermark
 */
#define LPSPI_FCR_RXWATER(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FCR_RXWATER_SHIFT)) & LPSPI_FCR_RXWATER_MASK)
/*! @} */

/*! @name FSR - FIFO Status Register */
/*! @{ */

#define LPSPI_FSR_TXCOUNT_MASK                   (0x1FU)
#define LPSPI_FSR_TXCOUNT_SHIFT                  (0U)
/*! TXCOUNT - Transmit FIFO Count
 */
#define LPSPI_FSR_TXCOUNT(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FSR_TXCOUNT_SHIFT)) & LPSPI_FSR_TXCOUNT_MASK)

#define LPSPI_FSR_RXCOUNT_MASK                   (0x1F0000U)
#define LPSPI_FSR_RXCOUNT_SHIFT                  (16U)
/*! RXCOUNT - Receive FIFO Count
 */
#define LPSPI_FSR_RXCOUNT(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FSR_RXCOUNT_SHIFT)) & LPSPI_FSR_RXCOUNT_MASK)
/*! @} */

/*! @name TCR - Transmit Command Register */
/*! @{ */

#define LPSPI_TCR_FRAMESZ_MASK                   (0xFFFU)
#define LPSPI_TCR_FRAMESZ_SHIFT                  (0U)
/*! FRAMESZ - Frame Size
 */
#define LPSPI_TCR_FRAMESZ(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_FRAMESZ_SHIFT)) & LPSPI_TCR_FRAMESZ_MASK)

#define LPSPI_TCR_WIDTH_MASK                     (0x30000U)
#define LPSPI_TCR_WIDTH_SHIFT                    (16U)
/*! WIDTH - Transfer Width
 *  0b00..1 bit transfer
 *  0b01..2 bit transfer
 *  0b10..4 bit transfer
 *  0b11..Reserved
 */
#define LPSPI_TCR_WIDTH(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_WIDTH_SHIFT)) & LPSPI_TCR_WIDTH_MASK)

#define LPSPI_TCR_TXMSK_MASK                     (0x40000U)
#define LPSPI_TCR_TXMSK_SHIFT                    (18U)
/*! TXMSK - Transmit Data Mask
 *  0b0..Normal transfer
 *  0b1..Mask transmit data
 */
#define LPSPI_TCR_TXMSK(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_TXMSK_SHIFT)) & LPSPI_TCR_TXMSK_MASK)

#define LPSPI_TCR_RXMSK_MASK                     (0x80000U)
#define LPSPI_TCR_RXMSK_SHIFT                    (19U)
/*! RXMSK - Receive Data Mask
 *  0b0..Normal transfer
 *  0b1..Receive data is masked
 */
#define LPSPI_TCR_RXMSK(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_RXMSK_SHIFT)) & LPSPI_TCR_RXMSK_MASK)

#define LPSPI_TCR_CONTC_MASK                     (0x100000U)
#define LPSPI_TCR_CONTC_SHIFT                    (20U)
/*! CONTC - Continuing Command
 *  0b0..Command word for start of new transfer
 *  0b1..Command word for continuing transfer
 */
#define LPSPI_TCR_CONTC(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CONTC_SHIFT)) & LPSPI_TCR_CONTC_MASK)

#define LPSPI_TCR_CONT_MASK                      (0x200000U)
#define LPSPI_TCR_CONT_SHIFT                     (21U)
/*! CONT - Continuous Transfer
 *  0b0..Continuous transfer is disabled
 *  0b1..Continuous transfer is enabled
 */
#define LPSPI_TCR_CONT(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CONT_SHIFT)) & LPSPI_TCR_CONT_MASK)

#define LPSPI_TCR_BYSW_MASK                      (0x400000U)
#define LPSPI_TCR_BYSW_SHIFT                     (22U)
/*! BYSW - Byte Swap
 *  0b0..Byte swap is disabled
 *  0b1..Byte swap is enabled
 */
#define LPSPI_TCR_BYSW(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_BYSW_SHIFT)) & LPSPI_TCR_BYSW_MASK)

#define LPSPI_TCR_LSBF_MASK                      (0x800000U)
#define LPSPI_TCR_LSBF_SHIFT                     (23U)
/*! LSBF - LSB First
 *  0b0..Data is transferred MSB first
 *  0b1..Data is transferred LSB first
 */
#define LPSPI_TCR_LSBF(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_LSBF_SHIFT)) & LPSPI_TCR_LSBF_MASK)

#define LPSPI_TCR_PCS_MASK                       (0x3000000U)
#define LPSPI_TCR_PCS_SHIFT                      (24U)
/*! PCS - Peripheral Chip Select
 *  0b00..Transfer using LPSPI_PCS[0]
 *  0b01..Transfer using LPSPI_PCS[1]
 *  0b10..Transfer using LPSPI_PCS[2]
 *  0b11..Transfer using LPSPI_PCS[3]
 */
#define LPSPI_TCR_PCS(x)                         (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_PCS_SHIFT)) & LPSPI_TCR_PCS_MASK)

#define LPSPI_TCR_PRESCALE_MASK                  (0x38000000U)
#define LPSPI_TCR_PRESCALE_SHIFT                 (27U)
/*! PRESCALE - Prescaler Value
 *  0b000..Divide by 1
 *  0b001..Divide by 2
 *  0b010..Divide by 4
 *  0b011..Divide by 8
 *  0b100..Divide by 16
 *  0b101..Divide by 32
 *  0b110..Divide by 64
 *  0b111..Divide by 128
 */
#define LPSPI_TCR_PRESCALE(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_PRESCALE_SHIFT)) & LPSPI_TCR_PRESCALE_MASK)

#define LPSPI_TCR_CPHA_MASK                      (0x40000000U)
#define LPSPI_TCR_CPHA_SHIFT                     (30U)
/*! CPHA - Clock Phase
 *  0b0..Data is captured on the leading edge of SCK and changed on the following edge of SCK
 *  0b1..Data is changed on the leading edge of SCK and captured on the following edge of SCK
 */
#define LPSPI_TCR_CPHA(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CPHA_SHIFT)) & LPSPI_TCR_CPHA_MASK)

#define LPSPI_TCR_CPOL_MASK                      (0x80000000U)
#define LPSPI_TCR_CPOL_SHIFT                     (31U)
/*! CPOL - Clock Polarity
 *  0b0..The inactive state value of SCK is low
 *  0b1..The inactive state value of SCK is high
 */
#define LPSPI_TCR_CPOL(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CPOL_SHIFT)) & LPSPI_TCR_CPOL_MASK)
/*! @} */

/*! @name TDR - Transmit Data Register */
/*! @{ */

#define LPSPI_TDR_DATA_MASK                      (0xFFFFFFFFU)
#define LPSPI_TDR_DATA_SHIFT                     (0U)
/*! DATA - Transmit Data
 */
#define LPSPI_TDR_DATA(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TDR_DATA_SHIFT)) & LPSPI_TDR_DATA_MASK)
/*! @} */

/*! @name RSR - Receive Status Register */
/*! @{ */

#define LPSPI_RSR_SOF_MASK                       (0x1U)
#define LPSPI_RSR_SOF_SHIFT                      (0U)
/*! SOF - Start Of Frame
 *  0b0..Subsequent data word received after LPSPI_PCS assertion
 *  0b1..First data word received after LPSPI_PCS assertion
 */
#define LPSPI_RSR_SOF(x)                         (((uint32_t)(((uint32_t)(x)) << LPSPI_RSR_SOF_SHIFT)) & LPSPI_RSR_SOF_MASK)

#define LPSPI_RSR_RXEMPTY_MASK                   (0x2U)
#define LPSPI_RSR_RXEMPTY_SHIFT                  (1U)
/*! RXEMPTY - RX FIFO Empty
 *  0b0..RX FIFO is not empty
 *  0b1..RX FIFO is empty
 */
#define LPSPI_RSR_RXEMPTY(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_RSR_RXEMPTY_SHIFT)) & LPSPI_RSR_RXEMPTY_MASK)
/*! @} */

/*! @name RDR - Receive Data Register */
/*! @{ */

#define LPSPI_RDR_DATA_MASK                      (0xFFFFFFFFU)
#define LPSPI_RDR_DATA_SHIFT                     (0U)
/*! DATA - Receive Data
 */
#define LPSPI_RDR_DATA(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_RDR_DATA_SHIFT)) & LPSPI_RDR_DATA_MASK)
/*! @} */


/*! @brief LPSPI status flags in SPIx_SR register.*/
enum _lpspi_flags
{
    kLPSPI_TxDataRequestFlag    = LPSPI_SR_TDF_MASK, /*!< Transmit data flag */
    kLPSPI_RxDataReadyFlag      = LPSPI_SR_RDF_MASK, /*!< Receive data flag */
    kLPSPI_WordCompleteFlag     = LPSPI_SR_WCF_MASK, /*!< Word Complete flag */
    kLPSPI_FrameCompleteFlag    = LPSPI_SR_FCF_MASK, /*!< Frame Complete flag */
    kLPSPI_TransferCompleteFlag = LPSPI_SR_TCF_MASK, /*!< Transfer Complete flag */
    kLPSPI_TransmitErrorFlag    = LPSPI_SR_TEF_MASK, /*!< Transmit Error flag (FIFO underrun) */
    kLPSPI_ReceiveErrorFlag     = LPSPI_SR_REF_MASK, /*!< Receive Error flag (FIFO overrun) */
    kLPSPI_DataMatchFlag        = LPSPI_SR_DMF_MASK, /*!< Data Match flag */
    kLPSPI_ModuleBusyFlag       = LPSPI_SR_MBF_MASK, /*!< Module Busy flag */
    kLPSPI_AllStatusFlag        = (LPSPI_SR_TDF_MASK | LPSPI_SR_RDF_MASK | LPSPI_SR_WCF_MASK | LPSPI_SR_FCF_MASK |
                            LPSPI_SR_TCF_MASK | LPSPI_SR_TEF_MASK | LPSPI_SR_REF_MASK | LPSPI_SR_DMF_MASK |
                            LPSPI_SR_MBF_MASK) /*!< Used for clearing all w1c status flags */
};

/*! @brief LPSPI interrupt source.*/
enum _lpspi_interrupt_enable
{
    kLPSPI_TxInterruptEnable               = LPSPI_IER_TDIE_MASK, /*!< Transmit data interrupt enable */
    kLPSPI_RxInterruptEnable               = LPSPI_IER_RDIE_MASK, /*!< Receive data interrupt enable */
    kLPSPI_WordCompleteInterruptEnable     = LPSPI_IER_WCIE_MASK, /*!< Word complete interrupt enable */
    kLPSPI_FrameCompleteInterruptEnable    = LPSPI_IER_FCIE_MASK, /*!< Frame complete interrupt enable */
    kLPSPI_TransferCompleteInterruptEnable = LPSPI_IER_TCIE_MASK, /*!< Transfer complete interrupt enable */
    kLPSPI_TransmitErrorInterruptEnable    = LPSPI_IER_TEIE_MASK, /*!< Transmit error interrupt enable(FIFO underrun)*/
    kLPSPI_ReceiveErrorInterruptEnable     = LPSPI_IER_REIE_MASK, /*!< Receive Error interrupt enable (FIFO overrun) */
    kLPSPI_DataMatchInterruptEnable        = LPSPI_IER_DMIE_MASK, /*!< Data Match interrupt enable */
    kLPSPI_AllInterruptEnable =
        (LPSPI_IER_TDIE_MASK | LPSPI_IER_RDIE_MASK | LPSPI_IER_WCIE_MASK | LPSPI_IER_FCIE_MASK | LPSPI_IER_TCIE_MASK |
         LPSPI_IER_TEIE_MASK | LPSPI_IER_REIE_MASK | LPSPI_IER_DMIE_MASK) /*!< All above interrupts enable.*/
};


/** DMA - Register Layout Typedef */
typedef struct {
  __IO uint32_t CR;                                /**< Control Register, offset: 0x0 */
  __I  uint32_t ES;                                /**< Error Status Register, offset: 0x4 */
       uint8_t RESERVED_0[4];
  __IO uint32_t ERQ;                               /**< Enable Request Register, offset: 0xC */
       uint8_t RESERVED_1[4];
  __IO uint32_t EEI;                               /**< Enable Error Interrupt Register, offset: 0x14 */
  __O  uint8_t CEEI;                               /**< Clear Enable Error Interrupt Register, offset: 0x18 */
  __O  uint8_t SEEI;                               /**< Set Enable Error Interrupt Register, offset: 0x19 */
  __O  uint8_t CERQ;                               /**< Clear Enable Request Register, offset: 0x1A */
  __O  uint8_t SERQ;                               /**< Set Enable Request Register, offset: 0x1B */
  __O  uint8_t CDNE;                               /**< Clear DONE Status Bit Register, offset: 0x1C */
  __O  uint8_t SSRT;                               /**< Set START Bit Register, offset: 0x1D */
  __O  uint8_t CERR;                               /**< Clear Error Register, offset: 0x1E */
  __O  uint8_t CINT;                               /**< Clear Interrupt Request Register, offset: 0x1F */
       uint8_t RESERVED_2[4];
  __IO uint32_t INT;                               /**< Interrupt Request Register, offset: 0x24 */
       uint8_t RESERVED_3[4];
  __IO uint32_t ERR;                               /**< Error Register, offset: 0x2C */
       uint8_t RESERVED_4[4];
  __I  uint32_t HRS;                               /**< Hardware Request Status Register, offset: 0x34 */
       uint8_t RESERVED_5[12];
  __IO uint32_t EARS;                              /**< Enable Asynchronous Request in Stop Register, offset: 0x44 */
       uint8_t RESERVED_6[184];
  __IO uint8_t DCHPRI3;                            /**< Channel n Priority Register, offset: 0x100 */
  __IO uint8_t DCHPRI2;                            /**< Channel n Priority Register, offset: 0x101 */
  __IO uint8_t DCHPRI1;                            /**< Channel n Priority Register, offset: 0x102 */
  __IO uint8_t DCHPRI0;                            /**< Channel n Priority Register, offset: 0x103 */
  __IO uint8_t DCHPRI7;                            /**< Channel n Priority Register, offset: 0x104 */
  __IO uint8_t DCHPRI6;                            /**< Channel n Priority Register, offset: 0x105 */
  __IO uint8_t DCHPRI5;                            /**< Channel n Priority Register, offset: 0x106 */
  __IO uint8_t DCHPRI4;                            /**< Channel n Priority Register, offset: 0x107 */
  __IO uint8_t DCHPRI11;                           /**< Channel n Priority Register, offset: 0x108 */
  __IO uint8_t DCHPRI10;                           /**< Channel n Priority Register, offset: 0x109 */
  __IO uint8_t DCHPRI9;                            /**< Channel n Priority Register, offset: 0x10A */
  __IO uint8_t DCHPRI8;                            /**< Channel n Priority Register, offset: 0x10B */
  __IO uint8_t DCHPRI15;                           /**< Channel n Priority Register, offset: 0x10C */
  __IO uint8_t DCHPRI14;                           /**< Channel n Priority Register, offset: 0x10D */
  __IO uint8_t DCHPRI13;                           /**< Channel n Priority Register, offset: 0x10E */
  __IO uint8_t DCHPRI12;                           /**< Channel n Priority Register, offset: 0x10F */
  __IO uint8_t DCHPRI19;                           /**< Channel n Priority Register, offset: 0x110 */
  __IO uint8_t DCHPRI18;                           /**< Channel n Priority Register, offset: 0x111 */
  __IO uint8_t DCHPRI17;                           /**< Channel n Priority Register, offset: 0x112 */
  __IO uint8_t DCHPRI16;                           /**< Channel n Priority Register, offset: 0x113 */
  __IO uint8_t DCHPRI23;                           /**< Channel n Priority Register, offset: 0x114 */
  __IO uint8_t DCHPRI22;                           /**< Channel n Priority Register, offset: 0x115 */
  __IO uint8_t DCHPRI21;                           /**< Channel n Priority Register, offset: 0x116 */
  __IO uint8_t DCHPRI20;                           /**< Channel n Priority Register, offset: 0x117 */
  __IO uint8_t DCHPRI27;                           /**< Channel n Priority Register, offset: 0x118 */
  __IO uint8_t DCHPRI26;                           /**< Channel n Priority Register, offset: 0x119 */
  __IO uint8_t DCHPRI25;                           /**< Channel n Priority Register, offset: 0x11A */
  __IO uint8_t DCHPRI24;                           /**< Channel n Priority Register, offset: 0x11B */
  __IO uint8_t DCHPRI31;                           /**< Channel n Priority Register, offset: 0x11C */
  __IO uint8_t DCHPRI30;                           /**< Channel n Priority Register, offset: 0x11D */
  __IO uint8_t DCHPRI29;                           /**< Channel n Priority Register, offset: 0x11E */
  __IO uint8_t DCHPRI28;                           /**< Channel n Priority Register, offset: 0x11F */
       uint8_t RESERVED_7[3808];
  struct {                                         /* offset: 0x1000, array step: 0x20 */
    __IO uint32_t SADDR;                             /**< TCD Source Address, array offset: 0x1000, array step: 0x20 */
    __IO uint16_t SOFF;                              /**< TCD Signed Source Address Offset, array offset: 0x1004, array step: 0x20 */
    __IO uint16_t ATTR;                              /**< TCD Transfer Attributes, array offset: 0x1006, array step: 0x20 */
    union {                                          /* offset: 0x1008, array step: 0x20 */
      __IO uint32_t NBYTES_MLNO;                       /**< TCD Minor Byte Count (Minor Loop Mapping Disabled), array offset: 0x1008, array step: 0x20 */
      __IO uint32_t NBYTES_MLOFFNO;                    /**< TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled), array offset: 0x1008, array step: 0x20 */
      __IO uint32_t NBYTES_MLOFFYES;                   /**< TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled), array offset: 0x1008, array step: 0x20 */
    };
    __IO int32_t SLAST;                              /**< TCD Last Source Address Adjustment, array offset: 0x100C, array step: 0x20 */
    __IO uint32_t DADDR;                             /**< TCD Destination Address, array offset: 0x1010, array step: 0x20 */
    __IO uint16_t DOFF;                              /**< TCD Signed Destination Address Offset, array offset: 0x1014, array step: 0x20 */
    union {                                          /* offset: 0x1016, array step: 0x20 */
      __IO uint16_t CITER_ELINKNO;                     /**< TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled), array offset: 0x1016, array step: 0x20 */
      __IO uint16_t CITER_ELINKYES;                    /**< TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled), array offset: 0x1016, array step: 0x20 */
    };
    __IO int32_t DLAST_SGA;                          /**< TCD Last Destination Address Adjustment/Scatter Gather Address, array offset: 0x1018, array step: 0x20 */
    __IO uint16_t CSR;                               /**< TCD Control and Status, array offset: 0x101C, array step: 0x20 */
    union {                                          /* offset: 0x101E, array step: 0x20 */
      __IO uint16_t BITER_ELINKNO;                     /**< TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled), array offset: 0x101E, array step: 0x20 */
      __IO uint16_t BITER_ELINKYES;                    /**< TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled), array offset: 0x101E, array step: 0x20 */
    };
  } TCD[32];
} DMA_Type;

/*!
 * @brief eDMA TCD.
 *
 * This structure is same as TCD register which is described in reference manual,
 * and is used to configure the scatter/gather feature as a next hardware TCD.
 */
typedef struct _edma_tcd
{
    __IO uint32_t SADDR;     /*!< SADDR register, used to save source address */
    __IO uint16_t SOFF;      /*!< SOFF register, save offset bytes every transfer */
    __IO uint16_t ATTR;      /*!< ATTR register, source/destination transfer size and modulo */
    __IO uint32_t NBYTES;    /*!< Nbytes register, minor loop length in bytes */
    __IO uint32_t SLAST;     /*!< SLAST register */
    __IO uint32_t DADDR;     /*!< DADDR register, used for destination address */
    __IO uint16_t DOFF;      /*!< DOFF register, used for destination offset */
    __IO uint16_t CITER;     /*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
    __IO uint32_t DLAST_SGA; /*!< DLASTSGA register, next tcd address used in scatter-gather mode */
    __IO uint16_t CSR;       /*!< CSR register, for TCD control status */
    __IO uint16_t BITER;     /*!< BITER register, begin minor loop count. */
} edma_tcd_t;

/* ----------------------------------------------------------------------------
   -- DMAMUX Register Masks
   ---------------------------------------------------------------------------- */


/*!
 * @brief Structure for the DMA hardware request
 *
 * Defines the structure for the DMA hardware request collections. The user can configure the
 * hardware request into DMAMUX to trigger the DMA transfer accordingly. The index
 * of the hardware request varies according  to the to SoC.
 */
typedef enum _dma_request_source
{
    kDmaRequestMuxFlexIO1Request0Request1 = 0|0x100U, /**< FlexIO1 Request0 and Request1 */
    kDmaRequestMuxFlexIO2Request0Request1 = 1|0x100U, /**< FlexIO2 Request0 and Request1 */
    kDmaRequestMuxLPUART1Tx         = 2|0x100U,    /**< LPUART1 Transmit */
    kDmaRequestMuxLPUART1Rx         = 3|0x100U,    /**< LPUART1 Receive */
    kDmaRequestMuxLPUART3Tx         = 4|0x100U,    /**< LPUART3 Transmit */
    kDmaRequestMuxLPUART3Rx         = 5|0x100U,    /**< LPUART3 Receive */
    kDmaRequestMuxLPUART5Tx         = 6|0x100U,    /**< LPUART5 Transmit */
    kDmaRequestMuxLPUART5Rx         = 7|0x100U,    /**< LPUART5 Receive */
    kDmaRequestMuxLPUART7Tx         = 8|0x100U,    /**< LPUART7 Transmit */
    kDmaRequestMuxLPUART7Rx         = 9|0x100U,    /**< LPUART7 Receive */
    kDmaRequestMuxCAN3              = 11|0x100U,   /**< CAN3 */
    kDmaRequestMuxCSI               = 12|0x100U,   /**< CSI */
    kDmaRequestMuxLPSPI1Rx          = 13|0x100U,   /**< LPSPI1 Receive */
    kDmaRequestMuxLPSPI1Tx          = 14|0x100U,   /**< LPSPI1 Transmit */
    kDmaRequestMuxLPSPI3Rx          = 15|0x100U,   /**< LPSPI3 Receive */
    kDmaRequestMuxLPSPI3Tx          = 16|0x100U,   /**< LPSPI3 Transmit */
    kDmaRequestMuxLPI2C1            = 17|0x100U,   /**< LPI2C1 */
    kDmaRequestMuxLPI2C3            = 18|0x100U,   /**< LPI2C3 */
    kDmaRequestMuxSai1Rx            = 19|0x100U,   /**< SAI1 Receive */
    kDmaRequestMuxSai1Tx            = 20|0x100U,   /**< SAI1 Transmit */
    kDmaRequestMuxSai2Rx            = 21|0x100U,   /**< SAI2 Receive */
    kDmaRequestMuxSai2Tx            = 22|0x100U,   /**< SAI2 Transmit */
    kDmaRequestMuxADC_ETC           = 23|0x100U,   /**< ADC_ETC */
    kDmaRequestMuxADC1              = 24|0x100U,   /**< ADC1 */
    kDmaRequestMuxACMP1             = 25|0x100U,   /**< ACMP1 */
    kDmaRequestMuxACMP3             = 26|0x100U,   /**< ACMP3 */
    kDmaRequestMuxFlexSPIRx         = 28|0x100U,   /**< FlexSPI Receive */
    kDmaRequestMuxFlexSPITx         = 29|0x100U,   /**< FlexSPI Transmit */
    kDmaRequestMuxXBAR1Request0     = 30|0x100U,   /**< XBAR1 Request 0 */
    kDmaRequestMuxXBAR1Request1     = 31|0x100U,   /**< XBAR1 Request 1 */
    kDmaRequestMuxFlexPWM1CaptureSub0 = 32|0x100U, /**< FlexPWM1 Capture sub-module0 */
    kDmaRequestMuxFlexPWM1CaptureSub1 = 33|0x100U, /**< FlexPWM1 Capture sub-module1 */
    kDmaRequestMuxFlexPWM1CaptureSub2 = 34|0x100U, /**< FlexPWM1 Capture sub-module2 */
    kDmaRequestMuxFlexPWM1CaptureSub3 = 35|0x100U, /**< FlexPWM1 Capture sub-module3 */
    kDmaRequestMuxFlexPWM1ValueSub0 = 36|0x100U,   /**< FlexPWM1 Value sub-module0 */
    kDmaRequestMuxFlexPWM1ValueSub1 = 37|0x100U,   /**< FlexPWM1 Value sub-module1 */
    kDmaRequestMuxFlexPWM1ValueSub2 = 38|0x100U,   /**< FlexPWM1 Value sub-module2 */
    kDmaRequestMuxFlexPWM1ValueSub3 = 39|0x100U,   /**< FlexPWM1 Value sub-module3 */
    kDmaRequestMuxFlexPWM3CaptureSub0 = 40|0x100U, /**< FlexPWM3 Capture sub-module0 */
    kDmaRequestMuxFlexPWM3CaptureSub1 = 41|0x100U, /**< FlexPWM3 Capture sub-module1 */
    kDmaRequestMuxFlexPWM3CaptureSub2 = 42|0x100U, /**< FlexPWM3 Capture sub-module2 */
    kDmaRequestMuxFlexPWM3CaptureSub3 = 43|0x100U, /**< FlexPWM3 Capture sub-module3 */
    kDmaRequestMuxFlexPWM3ValueSub0 = 44|0x100U,   /**< FlexPWM3 Value sub-module0 */
    kDmaRequestMuxFlexPWM3ValueSub1 = 45|0x100U,   /**< FlexPWM3 Value sub-module1 */
    kDmaRequestMuxFlexPWM3ValueSub2 = 46|0x100U,   /**< FlexPWM3 Value sub-module2 */
    kDmaRequestMuxFlexPWM3ValueSub3 = 47|0x100U,   /**< FlexPWM3 Value sub-module3 */
    kDmaRequestMuxQTIMER1CaptTimer0 = 48|0x100U,   /**< TMR1 Capture timer 0 */
    kDmaRequestMuxQTIMER1CaptTimer1 = 49|0x100U,   /**< TMR1 Capture timer 1 */
    kDmaRequestMuxQTIMER1CaptTimer2 = 50|0x100U,   /**< TMR1 Capture timer 2 */
    kDmaRequestMuxQTIMER1CaptTimer3 = 51|0x100U,   /**< TMR1 Capture timer 3 */
    kDmaRequestMuxQTIMER1Cmpld1Timer0Cmpld2Timer1 = 52|0x100U, /**< TMR1 cmpld1 in timer 0 or cmpld2 in timer 1 */
    kDmaRequestMuxQTIMER1Cmpld1Timer1Cmpld2Timer0 = 53|0x100U, /**< TMR1 cmpld1 in timer 1 or cmpld2 in timer 0 */
    kDmaRequestMuxQTIMER1Cmpld1Timer2Cmpld2Timer3 = 54|0x100U, /**< TMR1 cmpld1 in timer 2 or cmpld2 in timer 3 */
    kDmaRequestMuxQTIMER1Cmpld1Timer3Cmpld2Timer2 = 55|0x100U, /**< TMR1 cmpld1 in timer 3 or cmpld2 in timer 2 */
    kDmaRequestMuxQTIMER3CaptTimer0Cmpld1Timer0Cmpld2Timer1 = 56|0x100U, /**< TMR3 capture timer 0, cmpld1 in timer 0 or cmpld2 in timer 1 */
    kDmaRequestMuxQTIMER3CaptTimer1Cmpld1Timer1Cmpld2Timer0 = 57|0x100U, /**< TMR3 capture timer 1, cmpld1 in timer 1 or cmpld2 in timer 0 */
    kDmaRequestMuxQTIMER3CaptTimer2Cmpld1Timer2Cmpld2Timer3 = 58|0x100U, /**< TMR3 capture timer 2, cmpld1 in timer 2 or cmpld2 in timer 3 */
    kDmaRequestMuxQTIMER3CaptTimer3Cmpld1Timer3Cmpld2Timer2 = 59|0x100U, /**< TMR3 capture timer 3, cmpld1 in timer 3 or cmpld2 in timer 2 */
    kDmaRequestMuxFlexSPI2Rx        = 60|0x100U,   /**< FlexSPI2 Receive */
    kDmaRequestMuxFlexSPI2Tx        = 61|0x100U,   /**< FlexSPI2 Transmit */
    kDmaRequestMuxFlexIO1Request2Request3 = 64|0x100U, /**< FlexIO1 Request2 and Request3 */
    kDmaRequestMuxFlexIO2Request2Request3 = 65|0x100U, /**< FlexIO2 Request2 and Request3 */
    kDmaRequestMuxLPUART2Tx         = 66|0x100U,   /**< LPUART2 Transmit */
    kDmaRequestMuxLPUART2Rx         = 67|0x100U,   /**< LPUART2 Receive */
    kDmaRequestMuxLPUART4Tx         = 68|0x100U,   /**< LPUART4 Transmit */
    kDmaRequestMuxLPUART4Rx         = 69|0x100U,   /**< LPUART4 Receive */
    kDmaRequestMuxLPUART6Tx         = 70|0x100U,   /**< LPUART6 Transmit */
    kDmaRequestMuxLPUART6Rx         = 71|0x100U,   /**< LPUART6 Receive */
    kDmaRequestMuxLPUART8Tx         = 72|0x100U,   /**< LPUART8 Transmit */
    kDmaRequestMuxLPUART8Rx         = 73|0x100U,   /**< LPUART8 Receive */
    kDmaRequestMuxPxp               = 75|0x100U,   /**< PXP */
    kDmaRequestMuxLCDIF             = 76|0x100U,   /**< LCDIF */
    kDmaRequestMuxLPSPI2Rx          = 77|0x100U,   /**< LPSPI2 Receive */
    kDmaRequestMuxLPSPI2Tx          = 78|0x100U,   /**< LPSPI2 Transmit */
    kDmaRequestMuxLPSPI4Rx          = 79|0x100U,   /**< LPSPI4 Receive */
    kDmaRequestMuxLPSPI4Tx          = 80|0x100U,   /**< LPSPI4 Transmit */
    kDmaRequestMuxLPI2C2            = 81|0x100U,   /**< LPI2C2 */
    kDmaRequestMuxLPI2C4            = 82|0x100U,   /**< LPI2C4 */
    kDmaRequestMuxSai3Rx            = 83|0x100U,   /**< SAI3 Receive */
    kDmaRequestMuxSai3Tx            = 84|0x100U,   /**< SAI3 Transmit */
    kDmaRequestMuxSpdifRx           = 85|0x100U,   /**< SPDIF Receive */
    kDmaRequestMuxSpdifTx           = 86|0x100U,   /**< SPDIF Transmit */
    kDmaRequestMuxADC2              = 88|0x100U,   /**< ADC2 */
    kDmaRequestMuxACMP2             = 89|0x100U,   /**< ACMP2 */
    kDmaRequestMuxACMP4             = 90|0x100U,   /**< ACMP4 */
    kDmaRequestMuxEnetTimer0        = 92|0x100U,   /**< ENET Timer0 */
    kDmaRequestMuxEnetTimer1        = 93|0x100U,   /**< ENET Timer1 */
    kDmaRequestMuxXBAR1Request2     = 94|0x100U,   /**< XBAR1 Request 2 */
    kDmaRequestMuxXBAR1Request3     = 95|0x100U,   /**< XBAR1 Request 3 */
    kDmaRequestMuxFlexPWM2CaptureSub0 = 96|0x100U, /**< FlexPWM2 Capture sub-module0 */
    kDmaRequestMuxFlexPWM2CaptureSub1 = 97|0x100U, /**< FlexPWM2 Capture sub-module1 */
    kDmaRequestMuxFlexPWM2CaptureSub2 = 98|0x100U, /**< FlexPWM2 Capture sub-module2 */
    kDmaRequestMuxFlexPWM2CaptureSub3 = 99|0x100U, /**< FlexPWM2 Capture sub-module3 */
    kDmaRequestMuxFlexPWM2ValueSub0 = 100|0x100U,  /**< FlexPWM2 Value sub-module0 */
    kDmaRequestMuxFlexPWM2ValueSub1 = 101|0x100U,  /**< FlexPWM2 Value sub-module1 */
    kDmaRequestMuxFlexPWM2ValueSub2 = 102|0x100U,  /**< FlexPWM2 Value sub-module2 */
    kDmaRequestMuxFlexPWM2ValueSub3 = 103|0x100U,  /**< FlexPWM2 Value sub-module3 */
    kDmaRequestMuxFlexPWM4CaptureSub0 = 104|0x100U, /**< FlexPWM4 Capture sub-module0 */
    kDmaRequestMuxFlexPWM4CaptureSub1 = 105|0x100U, /**< FlexPWM4 Capture sub-module1 */
    kDmaRequestMuxFlexPWM4CaptureSub2 = 106|0x100U, /**< FlexPWM4 Capture sub-module2 */
    kDmaRequestMuxFlexPWM4CaptureSub3 = 107|0x100U, /**< FlexPWM4 Capture sub-module3 */
    kDmaRequestMuxFlexPWM4ValueSub0 = 108|0x100U,  /**< FlexPWM4 Value sub-module0 */
    kDmaRequestMuxFlexPWM4ValueSub1 = 109|0x100U,  /**< FlexPWM4 Value sub-module1 */
    kDmaRequestMuxFlexPWM4ValueSub2 = 110|0x100U,  /**< FlexPWM4 Value sub-module2 */
    kDmaRequestMuxFlexPWM4ValueSub3 = 111|0x100U,  /**< FlexPWM4 Value sub-module3 */
    kDmaRequestMuxQTIMER2CaptTimer0 = 112|0x100U,  /**< TMR2 Capture timer 0 */
    kDmaRequestMuxQTIMER2CaptTimer1 = 113|0x100U,  /**< TMR2 Capture timer 1 */
    kDmaRequestMuxQTIMER2CaptTimer2 = 114|0x100U,  /**< TMR2 Capture timer 2 */
    kDmaRequestMuxQTIMER2CaptTimer3 = 115|0x100U,  /**< TMR2 Capture timer 3 */
    kDmaRequestMuxQTIMER2Cmpld1Timer0Cmpld2Timer1 = 116|0x100U, /**< TMR2 cmpld1 in timer 0 or cmpld2 in timer 1 */
    kDmaRequestMuxQTIMER2Cmpld1Timer1Cmpld2Timer0 = 117|0x100U, /**< TMR2 cmpld1 in timer 1 or cmpld2 in timer 0 */
    kDmaRequestMuxQTIMER2Cmpld1Timer2Cmpld2Timer3 = 118|0x100U, /**< TMR2 cmpld1 in timer 2 or cmpld2 in timer 3 */
    kDmaRequestMuxQTIMER2Cmpld1Timer3Cmpld2Timer2 = 119|0x100U, /**< TMR2 cmpld1 in timer 3 or cmpld2 in timer 2 */
    kDmaRequestMuxQTIMER4CaptTimer0Cmpld1Timer0Cmpld2Timer1 = 120|0x100U, /**< TMR4 capture timer 0, cmpld1 in timer 0 or cmpld2 in timer 1 */
    kDmaRequestMuxQTIMER4CaptTimer1Cmpld1Timer1Cmpld2Timer0 = 121|0x100U, /**< TMR4 capture timer 1, cmpld1 in timer 1 or cmpld2 in timer 0 */
    kDmaRequestMuxQTIMER4CaptTimer2Cmpld1Timer2Cmpld2Timer3 = 122|0x100U, /**< TMR4 capture timer 2, cmpld1 in timer 2 or cmpld2 in timer 3 */
    kDmaRequestMuxQTIMER4CaptTimer3Cmpld1Timer3Cmpld2Timer2 = 123|0x100U, /**< TMR4 capture timer 3, cmpld1 in timer 3 or cmpld2 in timer 2 */
    kDmaRequestMuxEnet2Timer0       = 124|0x100U,  /**< ENET2 Timer0 */
    kDmaRequestMuxEnet2Timer1       = 125|0x100U,  /**< ENET2 Timer1 */
} dma_request_source_t;

/* @} */


/*!
 * @addtogroup DMAMUX_Peripheral_Access_Layer DMAMUX Peripheral Access Layer
 * @{
 */

/** DMAMUX - Register Layout Typedef */
typedef struct {
  __IO uint32_t CHCFG[32];                         /**< Channel 0 Configuration Register..Channel 31 Configuration Register, array offset: 0x0, array step: 0x4 */
} DMAMUX_Type;


/*!
 * @addtogroup DMAMUX_Register_Masks DMAMUX Register Masks
 * @{
 */

/*! @name CHCFG - Channel 0 Configuration Register..Channel 31 Configuration Register */
/*! @{ */

#define DMAMUX_CHCFG_SOURCE_MASK                 (0x7FU)
#define DMAMUX_CHCFG_SOURCE_SHIFT                (0U)
/*! SOURCE - DMA Channel Source (Slot Number)
 */
#define DMAMUX_CHCFG_SOURCE(x)                   (((uint32_t)(((uint32_t)(x)) << DMAMUX_CHCFG_SOURCE_SHIFT)) & DMAMUX_CHCFG_SOURCE_MASK)

#define DMAMUX_CHCFG_A_ON_MASK                   (0x20000000U)
#define DMAMUX_CHCFG_A_ON_SHIFT                  (29U)
/*! A_ON - DMA Channel Always Enable
 *  0b0..DMA Channel Always ON function is disabled
 *  0b1..DMA Channel Always ON function is enabled
 */
#define DMAMUX_CHCFG_A_ON(x)                     (((uint32_t)(((uint32_t)(x)) << DMAMUX_CHCFG_A_ON_SHIFT)) & DMAMUX_CHCFG_A_ON_MASK)

#define DMAMUX_CHCFG_TRIG_MASK                   (0x40000000U)
#define DMAMUX_CHCFG_TRIG_SHIFT                  (30U)
/*! TRIG - DMA Channel Trigger Enable
 *  0b0..Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the
 *       specified source to the DMA channel. (Normal mode)
 *  0b1..Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
 */
#define DMAMUX_CHCFG_TRIG(x)                     (((uint32_t)(((uint32_t)(x)) << DMAMUX_CHCFG_TRIG_SHIFT)) & DMAMUX_CHCFG_TRIG_MASK)

#define DMAMUX_CHCFG_ENBL_MASK                   (0x80000000U)
#define DMAMUX_CHCFG_ENBL_SHIFT                  (31U)
/*! ENBL - DMA Mux Channel Enable
 *  0b0..DMA Mux channel is disabled
 *  0b1..DMA Mux channel is enabled
 */
#define DMAMUX_CHCFG_ENBL(x)                     (((uint32_t)(((uint32_t)(x)) << DMAMUX_CHCFG_ENBL_SHIFT)) & DMAMUX_CHCFG_ENBL_MASK)
/*! @} */

/* The count of DMAMUX_CHCFG */
#define DMAMUX_CHCFG_COUNT                       (32U)


/*!
 * @}
 */ /* end of group DMAMUX_Register_Masks */


/* DMAMUX - Peripheral instance base addresses */
/** Peripheral DMAMUX base address */
#define DMAMUX_BASE                              (0x400EC000u)
/** Peripheral DMAMUX base pointer */
#define DMAMUX                                   ((DMAMUX_Type *)DMAMUX_BASE)


/* ----------------------------------------------------------------------------
   -- DMA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Register_Masks DMA Register Masks
 * @{
 */

/*! @name CR - Control Register */
/*! @{ */

#define DMA_CR_EDBG_MASK                         (0x2U)
#define DMA_CR_EDBG_SHIFT                        (1U)
/*! EDBG - Enable Debug
 *  0b0..When in debug mode, the DMA continues to operate.
 *  0b1..When in debug mode, the DMA stalls the start of a new channel. Executing channels are allowed to
 *       complete. Channel execution resumes when the system exits debug mode or the EDBG bit is cleared.
 */
#define DMA_CR_EDBG(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_EDBG_SHIFT)) & DMA_CR_EDBG_MASK)

#define DMA_CR_ERCA_MASK                         (0x4U)
#define DMA_CR_ERCA_SHIFT                        (2U)
/*! ERCA - Enable Round Robin Channel Arbitration
 *  0b0..Fixed priority arbitration is used for channel selection within each group.
 *  0b1..Round robin arbitration is used for channel selection within each group.
 */
#define DMA_CR_ERCA(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_ERCA_SHIFT)) & DMA_CR_ERCA_MASK)

#define DMA_CR_ERGA_MASK                         (0x8U)
#define DMA_CR_ERGA_SHIFT                        (3U)
/*! ERGA - Enable Round Robin Group Arbitration
 *  0b0..Fixed priority arbitration is used for selection among the groups.
 *  0b1..Round robin arbitration is used for selection among the groups.
 */
#define DMA_CR_ERGA(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_ERGA_SHIFT)) & DMA_CR_ERGA_MASK)

#define DMA_CR_HOE_MASK                          (0x10U)
#define DMA_CR_HOE_SHIFT                         (4U)
/*! HOE - Halt On Error
 *  0b0..Normal operation
 *  0b1..Any error causes the HALT bit to set. Subsequently, all service requests are ignored until the HALT bit is cleared.
 */
#define DMA_CR_HOE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_CR_HOE_SHIFT)) & DMA_CR_HOE_MASK)

#define DMA_CR_HALT_MASK                         (0x20U)
#define DMA_CR_HALT_SHIFT                        (5U)
/*! HALT - Halt DMA Operations
 *  0b0..Normal operation
 *  0b1..Stall the start of any new channels. Executing channels are allowed to complete. Channel execution resumes when this bit is cleared.
 */
#define DMA_CR_HALT(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_HALT_SHIFT)) & DMA_CR_HALT_MASK)

#define DMA_CR_CLM_MASK                          (0x40U)
#define DMA_CR_CLM_SHIFT                         (6U)
/*! CLM - Continuous Link Mode
 *  0b0..A minor loop channel link made to itself goes through channel arbitration before being activated again.
 *  0b1..A minor loop channel link made to itself does not go through channel arbitration before being activated
 *       again. Upon minor loop completion, the channel activates again if that channel has a minor loop channel
 *       link enabled and the link channel is itself. This effectively applies the minor loop offsets and restarts the
 *       next minor loop.
 */
#define DMA_CR_CLM(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_CR_CLM_SHIFT)) & DMA_CR_CLM_MASK)

#define DMA_CR_EMLM_MASK                         (0x80U)
#define DMA_CR_EMLM_SHIFT                        (7U)
/*! EMLM - Enable Minor Loop Mapping
 *  0b0..Disabled. TCDn.word2 is defined as a 32-bit NBYTES field.
 *  0b1..Enabled. TCDn.word2 is redefined to include individual enable fields, an offset field, and the NBYTES
 *       field. The individual enable fields allow the minor loop offset to be applied to the source address, the
 *       destination address, or both. The NBYTES field is reduced when either offset is enabled.
 */
#define DMA_CR_EMLM(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_EMLM_SHIFT)) & DMA_CR_EMLM_MASK)

#define DMA_CR_GRP0PRI_MASK                      (0x100U)
#define DMA_CR_GRP0PRI_SHIFT                     (8U)
/*! GRP0PRI - Channel Group 0 Priority
 */
#define DMA_CR_GRP0PRI(x)                        (((uint32_t)(((uint32_t)(x)) << DMA_CR_GRP0PRI_SHIFT)) & DMA_CR_GRP0PRI_MASK)

#define DMA_CR_GRP1PRI_MASK                      (0x400U)
#define DMA_CR_GRP1PRI_SHIFT                     (10U)
/*! GRP1PRI - Channel Group 1 Priority
 */
#define DMA_CR_GRP1PRI(x)                        (((uint32_t)(((uint32_t)(x)) << DMA_CR_GRP1PRI_SHIFT)) & DMA_CR_GRP1PRI_MASK)

#define DMA_CR_ECX_MASK                          (0x10000U)
#define DMA_CR_ECX_SHIFT                         (16U)
/*! ECX - Error Cancel Transfer
 *  0b0..Normal operation
 *  0b1..Cancel the remaining data transfer in the same fashion as the CX bit. Stop the executing channel and
 *       force the minor loop to finish. The cancel takes effect after the last write of the current read/write
 *       sequence. The ECX bit clears itself after the cancel is honored. In addition to cancelling the transfer, ECX
 *       treats the cancel as an error condition, thus updating the Error Status register (DMAx_ES) and generating an
 *       optional error interrupt.
 */
#define DMA_CR_ECX(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_CR_ECX_SHIFT)) & DMA_CR_ECX_MASK)

#define DMA_CR_CX_MASK                           (0x20000U)
#define DMA_CR_CX_SHIFT                          (17U)
/*! CX - Cancel Transfer
 *  0b0..Normal operation
 *  0b1..Cancel the remaining data transfer. Stop the executing channel and force the minor loop to finish. The
 *       cancel takes effect after the last write of the current read/write sequence. The CX bit clears itself after
 *       the cancel has been honored. This cancel retires the channel normally as if the minor loop was completed.
 */
#define DMA_CR_CX(x)                             (((uint32_t)(((uint32_t)(x)) << DMA_CR_CX_SHIFT)) & DMA_CR_CX_MASK)

#define DMA_CR_ACTIVE_MASK                       (0x80000000U)
#define DMA_CR_ACTIVE_SHIFT                      (31U)
/*! ACTIVE - DMA Active Status
 *  0b0..eDMA is idle.
 *  0b1..eDMA is executing a channel.
 */
#define DMA_CR_ACTIVE(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_CR_ACTIVE_SHIFT)) & DMA_CR_ACTIVE_MASK)
/*! @} */

/*! @name ES - Error Status Register */
/*! @{ */

#define DMA_ES_DBE_MASK                          (0x1U)
#define DMA_ES_DBE_SHIFT                         (0U)
/*! DBE - Destination Bus Error
 *  0b0..No destination bus error
 *  0b1..The last recorded error was a bus error on a destination write
 */
#define DMA_ES_DBE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_DBE_SHIFT)) & DMA_ES_DBE_MASK)

#define DMA_ES_SBE_MASK                          (0x2U)
#define DMA_ES_SBE_SHIFT                         (1U)
/*! SBE - Source Bus Error
 *  0b0..No source bus error
 *  0b1..The last recorded error was a bus error on a source read
 */
#define DMA_ES_SBE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SBE_SHIFT)) & DMA_ES_SBE_MASK)

#define DMA_ES_SGE_MASK                          (0x4U)
#define DMA_ES_SGE_SHIFT                         (2U)
/*! SGE - Scatter/Gather Configuration Error
 *  0b0..No scatter/gather configuration error
 *  0b1..The last recorded error was a configuration error detected in the TCDn_DLASTSGA field. This field is
 *       checked at the beginning of a scatter/gather operation after major loop completion if TCDn_CSR[ESG] is
 *       enabled. TCDn_DLASTSGA is not on a 32 byte boundary.
 */
#define DMA_ES_SGE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SGE_SHIFT)) & DMA_ES_SGE_MASK)

#define DMA_ES_NCE_MASK                          (0x8U)
#define DMA_ES_NCE_SHIFT                         (3U)
/*! NCE - NBYTES/CITER Configuration Error
 *  0b0..No NBYTES/CITER configuration error
 *  0b1..The last recorded error was a configuration error detected in the TCDn_NBYTES or TCDn_CITER fields.
 *       TCDn_NBYTES is not a multiple of TCDn_ATTR[SSIZE] and TCDn_ATTR[DSIZE], or TCDn_CITER[CITER] is equal to zero,
 *       or TCDn_CITER[ELINK] is not equal to TCDn_BITER[ELINK]
 */
#define DMA_ES_NCE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_NCE_SHIFT)) & DMA_ES_NCE_MASK)

#define DMA_ES_DOE_MASK                          (0x10U)
#define DMA_ES_DOE_SHIFT                         (4U)
/*! DOE - Destination Offset Error
 *  0b0..No destination offset configuration error
 *  0b1..The last recorded error was a configuration error detected in the TCDn_DOFF field. TCDn_DOFF is inconsistent with TCDn_ATTR[DSIZE].
 */
#define DMA_ES_DOE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_DOE_SHIFT)) & DMA_ES_DOE_MASK)

#define DMA_ES_DAE_MASK                          (0x20U)
#define DMA_ES_DAE_SHIFT                         (5U)
/*! DAE - Destination Address Error
 *  0b0..No destination address configuration error
 *  0b1..The last recorded error was a configuration error detected in the TCDn_DADDR field. TCDn_DADDR is inconsistent with TCDn_ATTR[DSIZE].
 */
#define DMA_ES_DAE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_DAE_SHIFT)) & DMA_ES_DAE_MASK)

#define DMA_ES_SOE_MASK                          (0x40U)
#define DMA_ES_SOE_SHIFT                         (6U)
/*! SOE - Source Offset Error
 *  0b0..No source offset configuration error
 *  0b1..The last recorded error was a configuration error detected in the TCDn_SOFF field. TCDn_SOFF is inconsistent with TCDn_ATTR[SSIZE].
 */
#define DMA_ES_SOE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SOE_SHIFT)) & DMA_ES_SOE_MASK)

#define DMA_ES_SAE_MASK                          (0x80U)
#define DMA_ES_SAE_SHIFT                         (7U)
/*! SAE - Source Address Error
 *  0b0..No source address configuration error.
 *  0b1..The last recorded error was a configuration error detected in the TCDn_SADDR field. TCDn_SADDR is inconsistent with TCDn_ATTR[SSIZE].
 */
#define DMA_ES_SAE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SAE_SHIFT)) & DMA_ES_SAE_MASK)

#define DMA_ES_ERRCHN_MASK                       (0x1F00U)
#define DMA_ES_ERRCHN_SHIFT                      (8U)
/*! ERRCHN - Error Channel Number or Canceled Channel Number
 */
#define DMA_ES_ERRCHN(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ES_ERRCHN_SHIFT)) & DMA_ES_ERRCHN_MASK)

#define DMA_ES_CPE_MASK                          (0x4000U)
#define DMA_ES_CPE_SHIFT                         (14U)
/*! CPE - Channel Priority Error
 *  0b0..No channel priority error
 *  0b1..The last recorded error was a configuration error in the channel priorities within a group. Channel
 *       priorities within a group are not unique.
 */
#define DMA_ES_CPE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_CPE_SHIFT)) & DMA_ES_CPE_MASK)

#define DMA_ES_GPE_MASK                          (0x8000U)
#define DMA_ES_GPE_SHIFT                         (15U)
/*! GPE - Group Priority Error
 *  0b0..No group priority error
 *  0b1..The last recorded error was a configuration error among the group priorities. All group priorities are not unique.
 */
#define DMA_ES_GPE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_GPE_SHIFT)) & DMA_ES_GPE_MASK)

#define DMA_ES_ECX_MASK                          (0x10000U)
#define DMA_ES_ECX_SHIFT                         (16U)
/*! ECX - Transfer Canceled
 *  0b0..No canceled transfers
 *  0b1..The last recorded entry was a canceled transfer by the error cancel transfer input
 */
#define DMA_ES_ECX(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_ECX_SHIFT)) & DMA_ES_ECX_MASK)

#define DMA_ES_VLD_MASK                          (0x80000000U)
#define DMA_ES_VLD_SHIFT                         (31U)
/*! VLD - VLD
 *  0b0..No ERR bits are set.
 *  0b1..At least one ERR bit is set indicating a valid error exists that has not been cleared.
 */
#define DMA_ES_VLD(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_VLD_SHIFT)) & DMA_ES_VLD_MASK)
/*! @} */

/*! @name ERQ - Enable Request Register */
/*! @{ */

#define DMA_ERQ_ERQ0_MASK                        (0x1U)
#define DMA_ERQ_ERQ0_SHIFT                       (0U)
/*! ERQ0 - Enable DMA Request 0
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ0_SHIFT)) & DMA_ERQ_ERQ0_MASK)

#define DMA_ERQ_ERQ1_MASK                        (0x2U)
#define DMA_ERQ_ERQ1_SHIFT                       (1U)
/*! ERQ1 - Enable DMA Request 1
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ1_SHIFT)) & DMA_ERQ_ERQ1_MASK)

#define DMA_ERQ_ERQ2_MASK                        (0x4U)
#define DMA_ERQ_ERQ2_SHIFT                       (2U)
/*! ERQ2 - Enable DMA Request 2
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ2_SHIFT)) & DMA_ERQ_ERQ2_MASK)

#define DMA_ERQ_ERQ3_MASK                        (0x8U)
#define DMA_ERQ_ERQ3_SHIFT                       (3U)
/*! ERQ3 - Enable DMA Request 3
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ3_SHIFT)) & DMA_ERQ_ERQ3_MASK)

#define DMA_ERQ_ERQ4_MASK                        (0x10U)
#define DMA_ERQ_ERQ4_SHIFT                       (4U)
/*! ERQ4 - Enable DMA Request 4
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ4_SHIFT)) & DMA_ERQ_ERQ4_MASK)

#define DMA_ERQ_ERQ5_MASK                        (0x20U)
#define DMA_ERQ_ERQ5_SHIFT                       (5U)
/*! ERQ5 - Enable DMA Request 5
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ5_SHIFT)) & DMA_ERQ_ERQ5_MASK)

#define DMA_ERQ_ERQ6_MASK                        (0x40U)
#define DMA_ERQ_ERQ6_SHIFT                       (6U)
/*! ERQ6 - Enable DMA Request 6
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ6_SHIFT)) & DMA_ERQ_ERQ6_MASK)

#define DMA_ERQ_ERQ7_MASK                        (0x80U)
#define DMA_ERQ_ERQ7_SHIFT                       (7U)
/*! ERQ7 - Enable DMA Request 7
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ7_SHIFT)) & DMA_ERQ_ERQ7_MASK)

#define DMA_ERQ_ERQ8_MASK                        (0x100U)
#define DMA_ERQ_ERQ8_SHIFT                       (8U)
/*! ERQ8 - Enable DMA Request 8
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ8_SHIFT)) & DMA_ERQ_ERQ8_MASK)

#define DMA_ERQ_ERQ9_MASK                        (0x200U)
#define DMA_ERQ_ERQ9_SHIFT                       (9U)
/*! ERQ9 - Enable DMA Request 9
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ9_SHIFT)) & DMA_ERQ_ERQ9_MASK)

#define DMA_ERQ_ERQ10_MASK                       (0x400U)
#define DMA_ERQ_ERQ10_SHIFT                      (10U)
/*! ERQ10 - Enable DMA Request 10
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ10_SHIFT)) & DMA_ERQ_ERQ10_MASK)

#define DMA_ERQ_ERQ11_MASK                       (0x800U)
#define DMA_ERQ_ERQ11_SHIFT                      (11U)
/*! ERQ11 - Enable DMA Request 11
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ11_SHIFT)) & DMA_ERQ_ERQ11_MASK)

#define DMA_ERQ_ERQ12_MASK                       (0x1000U)
#define DMA_ERQ_ERQ12_SHIFT                      (12U)
/*! ERQ12 - Enable DMA Request 12
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ12_SHIFT)) & DMA_ERQ_ERQ12_MASK)

#define DMA_ERQ_ERQ13_MASK                       (0x2000U)
#define DMA_ERQ_ERQ13_SHIFT                      (13U)
/*! ERQ13 - Enable DMA Request 13
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ13_SHIFT)) & DMA_ERQ_ERQ13_MASK)

#define DMA_ERQ_ERQ14_MASK                       (0x4000U)
#define DMA_ERQ_ERQ14_SHIFT                      (14U)
/*! ERQ14 - Enable DMA Request 14
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ14_SHIFT)) & DMA_ERQ_ERQ14_MASK)

#define DMA_ERQ_ERQ15_MASK                       (0x8000U)
#define DMA_ERQ_ERQ15_SHIFT                      (15U)
/*! ERQ15 - Enable DMA Request 15
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ15_SHIFT)) & DMA_ERQ_ERQ15_MASK)

#define DMA_ERQ_ERQ16_MASK                       (0x10000U)
#define DMA_ERQ_ERQ16_SHIFT                      (16U)
/*! ERQ16 - Enable DMA Request 16
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ16(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ16_SHIFT)) & DMA_ERQ_ERQ16_MASK)

#define DMA_ERQ_ERQ17_MASK                       (0x20000U)
#define DMA_ERQ_ERQ17_SHIFT                      (17U)
/*! ERQ17 - Enable DMA Request 17
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ17(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ17_SHIFT)) & DMA_ERQ_ERQ17_MASK)

#define DMA_ERQ_ERQ18_MASK                       (0x40000U)
#define DMA_ERQ_ERQ18_SHIFT                      (18U)
/*! ERQ18 - Enable DMA Request 18
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ18(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ18_SHIFT)) & DMA_ERQ_ERQ18_MASK)

#define DMA_ERQ_ERQ19_MASK                       (0x80000U)
#define DMA_ERQ_ERQ19_SHIFT                      (19U)
/*! ERQ19 - Enable DMA Request 19
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ19(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ19_SHIFT)) & DMA_ERQ_ERQ19_MASK)

#define DMA_ERQ_ERQ20_MASK                       (0x100000U)
#define DMA_ERQ_ERQ20_SHIFT                      (20U)
/*! ERQ20 - Enable DMA Request 20
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ20(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ20_SHIFT)) & DMA_ERQ_ERQ20_MASK)

#define DMA_ERQ_ERQ21_MASK                       (0x200000U)
#define DMA_ERQ_ERQ21_SHIFT                      (21U)
/*! ERQ21 - Enable DMA Request 21
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ21(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ21_SHIFT)) & DMA_ERQ_ERQ21_MASK)

#define DMA_ERQ_ERQ22_MASK                       (0x400000U)
#define DMA_ERQ_ERQ22_SHIFT                      (22U)
/*! ERQ22 - Enable DMA Request 22
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ22(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ22_SHIFT)) & DMA_ERQ_ERQ22_MASK)

#define DMA_ERQ_ERQ23_MASK                       (0x800000U)
#define DMA_ERQ_ERQ23_SHIFT                      (23U)
/*! ERQ23 - Enable DMA Request 23
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ23(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ23_SHIFT)) & DMA_ERQ_ERQ23_MASK)

#define DMA_ERQ_ERQ24_MASK                       (0x1000000U)
#define DMA_ERQ_ERQ24_SHIFT                      (24U)
/*! ERQ24 - Enable DMA Request 24
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ24(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ24_SHIFT)) & DMA_ERQ_ERQ24_MASK)

#define DMA_ERQ_ERQ25_MASK                       (0x2000000U)
#define DMA_ERQ_ERQ25_SHIFT                      (25U)
/*! ERQ25 - Enable DMA Request 25
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ25(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ25_SHIFT)) & DMA_ERQ_ERQ25_MASK)

#define DMA_ERQ_ERQ26_MASK                       (0x4000000U)
#define DMA_ERQ_ERQ26_SHIFT                      (26U)
/*! ERQ26 - Enable DMA Request 26
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ26(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ26_SHIFT)) & DMA_ERQ_ERQ26_MASK)

#define DMA_ERQ_ERQ27_MASK                       (0x8000000U)
#define DMA_ERQ_ERQ27_SHIFT                      (27U)
/*! ERQ27 - Enable DMA Request 27
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ27(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ27_SHIFT)) & DMA_ERQ_ERQ27_MASK)

#define DMA_ERQ_ERQ28_MASK                       (0x10000000U)
#define DMA_ERQ_ERQ28_SHIFT                      (28U)
/*! ERQ28 - Enable DMA Request 28
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ28(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ28_SHIFT)) & DMA_ERQ_ERQ28_MASK)

#define DMA_ERQ_ERQ29_MASK                       (0x20000000U)
#define DMA_ERQ_ERQ29_SHIFT                      (29U)
/*! ERQ29 - Enable DMA Request 29
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ29(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ29_SHIFT)) & DMA_ERQ_ERQ29_MASK)

#define DMA_ERQ_ERQ30_MASK                       (0x40000000U)
#define DMA_ERQ_ERQ30_SHIFT                      (30U)
/*! ERQ30 - Enable DMA Request 30
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ30(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ30_SHIFT)) & DMA_ERQ_ERQ30_MASK)

#define DMA_ERQ_ERQ31_MASK                       (0x80000000U)
#define DMA_ERQ_ERQ31_SHIFT                      (31U)
/*! ERQ31 - Enable DMA Request 31
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ31(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ31_SHIFT)) & DMA_ERQ_ERQ31_MASK)
/*! @} */

/*! @name EEI - Enable Error Interrupt Register */
/*! @{ */

#define DMA_EEI_EEI0_MASK                        (0x1U)
#define DMA_EEI_EEI0_SHIFT                       (0U)
/*! EEI0 - Enable Error Interrupt 0
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI0_SHIFT)) & DMA_EEI_EEI0_MASK)

#define DMA_EEI_EEI1_MASK                        (0x2U)
#define DMA_EEI_EEI1_SHIFT                       (1U)
/*! EEI1 - Enable Error Interrupt 1
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI1_SHIFT)) & DMA_EEI_EEI1_MASK)

#define DMA_EEI_EEI2_MASK                        (0x4U)
#define DMA_EEI_EEI2_SHIFT                       (2U)
/*! EEI2 - Enable Error Interrupt 2
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI2_SHIFT)) & DMA_EEI_EEI2_MASK)

#define DMA_EEI_EEI3_MASK                        (0x8U)
#define DMA_EEI_EEI3_SHIFT                       (3U)
/*! EEI3 - Enable Error Interrupt 3
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI3_SHIFT)) & DMA_EEI_EEI3_MASK)

#define DMA_EEI_EEI4_MASK                        (0x10U)
#define DMA_EEI_EEI4_SHIFT                       (4U)
/*! EEI4 - Enable Error Interrupt 4
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI4_SHIFT)) & DMA_EEI_EEI4_MASK)

#define DMA_EEI_EEI5_MASK                        (0x20U)
#define DMA_EEI_EEI5_SHIFT                       (5U)
/*! EEI5 - Enable Error Interrupt 5
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI5_SHIFT)) & DMA_EEI_EEI5_MASK)

#define DMA_EEI_EEI6_MASK                        (0x40U)
#define DMA_EEI_EEI6_SHIFT                       (6U)
/*! EEI6 - Enable Error Interrupt 6
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI6_SHIFT)) & DMA_EEI_EEI6_MASK)

#define DMA_EEI_EEI7_MASK                        (0x80U)
#define DMA_EEI_EEI7_SHIFT                       (7U)
/*! EEI7 - Enable Error Interrupt 7
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI7_SHIFT)) & DMA_EEI_EEI7_MASK)

#define DMA_EEI_EEI8_MASK                        (0x100U)
#define DMA_EEI_EEI8_SHIFT                       (8U)
/*! EEI8 - Enable Error Interrupt 8
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI8_SHIFT)) & DMA_EEI_EEI8_MASK)

#define DMA_EEI_EEI9_MASK                        (0x200U)
#define DMA_EEI_EEI9_SHIFT                       (9U)
/*! EEI9 - Enable Error Interrupt 9
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI9_SHIFT)) & DMA_EEI_EEI9_MASK)

#define DMA_EEI_EEI10_MASK                       (0x400U)
#define DMA_EEI_EEI10_SHIFT                      (10U)
/*! EEI10 - Enable Error Interrupt 10
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI10_SHIFT)) & DMA_EEI_EEI10_MASK)

#define DMA_EEI_EEI11_MASK                       (0x800U)
#define DMA_EEI_EEI11_SHIFT                      (11U)
/*! EEI11 - Enable Error Interrupt 11
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI11_SHIFT)) & DMA_EEI_EEI11_MASK)

#define DMA_EEI_EEI12_MASK                       (0x1000U)
#define DMA_EEI_EEI12_SHIFT                      (12U)
/*! EEI12 - Enable Error Interrupt 12
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI12_SHIFT)) & DMA_EEI_EEI12_MASK)

#define DMA_EEI_EEI13_MASK                       (0x2000U)
#define DMA_EEI_EEI13_SHIFT                      (13U)
/*! EEI13 - Enable Error Interrupt 13
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI13_SHIFT)) & DMA_EEI_EEI13_MASK)

#define DMA_EEI_EEI14_MASK                       (0x4000U)
#define DMA_EEI_EEI14_SHIFT                      (14U)
/*! EEI14 - Enable Error Interrupt 14
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI14_SHIFT)) & DMA_EEI_EEI14_MASK)

#define DMA_EEI_EEI15_MASK                       (0x8000U)
#define DMA_EEI_EEI15_SHIFT                      (15U)
/*! EEI15 - Enable Error Interrupt 15
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI15_SHIFT)) & DMA_EEI_EEI15_MASK)

#define DMA_EEI_EEI16_MASK                       (0x10000U)
#define DMA_EEI_EEI16_SHIFT                      (16U)
/*! EEI16 - Enable Error Interrupt 16
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI16(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI16_SHIFT)) & DMA_EEI_EEI16_MASK)

#define DMA_EEI_EEI17_MASK                       (0x20000U)
#define DMA_EEI_EEI17_SHIFT                      (17U)
/*! EEI17 - Enable Error Interrupt 17
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI17(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI17_SHIFT)) & DMA_EEI_EEI17_MASK)

#define DMA_EEI_EEI18_MASK                       (0x40000U)
#define DMA_EEI_EEI18_SHIFT                      (18U)
/*! EEI18 - Enable Error Interrupt 18
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI18(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI18_SHIFT)) & DMA_EEI_EEI18_MASK)

#define DMA_EEI_EEI19_MASK                       (0x80000U)
#define DMA_EEI_EEI19_SHIFT                      (19U)
/*! EEI19 - Enable Error Interrupt 19
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI19(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI19_SHIFT)) & DMA_EEI_EEI19_MASK)

#define DMA_EEI_EEI20_MASK                       (0x100000U)
#define DMA_EEI_EEI20_SHIFT                      (20U)
/*! EEI20 - Enable Error Interrupt 20
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI20(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI20_SHIFT)) & DMA_EEI_EEI20_MASK)

#define DMA_EEI_EEI21_MASK                       (0x200000U)
#define DMA_EEI_EEI21_SHIFT                      (21U)
/*! EEI21 - Enable Error Interrupt 21
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI21(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI21_SHIFT)) & DMA_EEI_EEI21_MASK)

#define DMA_EEI_EEI22_MASK                       (0x400000U)
#define DMA_EEI_EEI22_SHIFT                      (22U)
/*! EEI22 - Enable Error Interrupt 22
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI22(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI22_SHIFT)) & DMA_EEI_EEI22_MASK)

#define DMA_EEI_EEI23_MASK                       (0x800000U)
#define DMA_EEI_EEI23_SHIFT                      (23U)
/*! EEI23 - Enable Error Interrupt 23
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI23(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI23_SHIFT)) & DMA_EEI_EEI23_MASK)

#define DMA_EEI_EEI24_MASK                       (0x1000000U)
#define DMA_EEI_EEI24_SHIFT                      (24U)
/*! EEI24 - Enable Error Interrupt 24
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI24(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI24_SHIFT)) & DMA_EEI_EEI24_MASK)

#define DMA_EEI_EEI25_MASK                       (0x2000000U)
#define DMA_EEI_EEI25_SHIFT                      (25U)
/*! EEI25 - Enable Error Interrupt 25
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI25(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI25_SHIFT)) & DMA_EEI_EEI25_MASK)

#define DMA_EEI_EEI26_MASK                       (0x4000000U)
#define DMA_EEI_EEI26_SHIFT                      (26U)
/*! EEI26 - Enable Error Interrupt 26
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI26(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI26_SHIFT)) & DMA_EEI_EEI26_MASK)

#define DMA_EEI_EEI27_MASK                       (0x8000000U)
#define DMA_EEI_EEI27_SHIFT                      (27U)
/*! EEI27 - Enable Error Interrupt 27
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI27(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI27_SHIFT)) & DMA_EEI_EEI27_MASK)

#define DMA_EEI_EEI28_MASK                       (0x10000000U)
#define DMA_EEI_EEI28_SHIFT                      (28U)
/*! EEI28 - Enable Error Interrupt 28
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI28(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI28_SHIFT)) & DMA_EEI_EEI28_MASK)

#define DMA_EEI_EEI29_MASK                       (0x20000000U)
#define DMA_EEI_EEI29_SHIFT                      (29U)
/*! EEI29 - Enable Error Interrupt 29
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI29(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI29_SHIFT)) & DMA_EEI_EEI29_MASK)

#define DMA_EEI_EEI30_MASK                       (0x40000000U)
#define DMA_EEI_EEI30_SHIFT                      (30U)
/*! EEI30 - Enable Error Interrupt 30
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI30(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI30_SHIFT)) & DMA_EEI_EEI30_MASK)

#define DMA_EEI_EEI31_MASK                       (0x80000000U)
#define DMA_EEI_EEI31_SHIFT                      (31U)
/*! EEI31 - Enable Error Interrupt 31
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI31(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI31_SHIFT)) & DMA_EEI_EEI31_MASK)
/*! @} */

/*! @name CEEI - Clear Enable Error Interrupt Register */
/*! @{ */

#define DMA_CEEI_CEEI_MASK                       (0x1FU)
#define DMA_CEEI_CEEI_SHIFT                      (0U)
/*! CEEI - Clear Enable Error Interrupt
 */
#define DMA_CEEI_CEEI(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CEEI_CEEI_SHIFT)) & DMA_CEEI_CEEI_MASK)

#define DMA_CEEI_CAEE_MASK                       (0x40U)
#define DMA_CEEI_CAEE_SHIFT                      (6U)
/*! CAEE - Clear All Enable Error Interrupts
 *  0b0..Clear only the EEI bit specified in the CEEI field
 *  0b1..Clear all bits in EEI
 */
#define DMA_CEEI_CAEE(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CEEI_CAEE_SHIFT)) & DMA_CEEI_CAEE_MASK)

#define DMA_CEEI_NOP_MASK                        (0x80U)
#define DMA_CEEI_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_CEEI_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CEEI_NOP_SHIFT)) & DMA_CEEI_NOP_MASK)
/*! @} */

/*! @name SEEI - Set Enable Error Interrupt Register */
/*! @{ */

#define DMA_SEEI_SEEI_MASK                       (0x1FU)
#define DMA_SEEI_SEEI_SHIFT                      (0U)
/*! SEEI - Set Enable Error Interrupt
 */
#define DMA_SEEI_SEEI(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SEEI_SEEI_SHIFT)) & DMA_SEEI_SEEI_MASK)

#define DMA_SEEI_SAEE_MASK                       (0x40U)
#define DMA_SEEI_SAEE_SHIFT                      (6U)
/*! SAEE - Sets All Enable Error Interrupts
 *  0b0..Set only the EEI bit specified in the SEEI field.
 *  0b1..Sets all bits in EEI
 */
#define DMA_SEEI_SAEE(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SEEI_SAEE_SHIFT)) & DMA_SEEI_SAEE_MASK)

#define DMA_SEEI_NOP_MASK                        (0x80U)
#define DMA_SEEI_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_SEEI_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_SEEI_NOP_SHIFT)) & DMA_SEEI_NOP_MASK)
/*! @} */

/*! @name CERQ - Clear Enable Request Register */
/*! @{ */

#define DMA_CERQ_CERQ_MASK                       (0x1FU)
#define DMA_CERQ_CERQ_SHIFT                      (0U)
/*! CERQ - Clear Enable Request
 */
#define DMA_CERQ_CERQ(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERQ_CERQ_SHIFT)) & DMA_CERQ_CERQ_MASK)

#define DMA_CERQ_CAER_MASK                       (0x40U)
#define DMA_CERQ_CAER_SHIFT                      (6U)
/*! CAER - Clear All Enable Requests
 *  0b0..Clear only the ERQ bit specified in the CERQ field
 *  0b1..Clear all bits in ERQ
 */
#define DMA_CERQ_CAER(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERQ_CAER_SHIFT)) & DMA_CERQ_CAER_MASK)

#define DMA_CERQ_NOP_MASK                        (0x80U)
#define DMA_CERQ_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_CERQ_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CERQ_NOP_SHIFT)) & DMA_CERQ_NOP_MASK)
/*! @} */

/*! @name SERQ - Set Enable Request Register */
/*! @{ */

#define DMA_SERQ_SERQ_MASK                       (0x1FU)
#define DMA_SERQ_SERQ_SHIFT                      (0U)
/*! SERQ - Set Enable Request
 */
#define DMA_SERQ_SERQ(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SERQ_SERQ_SHIFT)) & DMA_SERQ_SERQ_MASK)

#define DMA_SERQ_SAER_MASK                       (0x40U)
#define DMA_SERQ_SAER_SHIFT                      (6U)
/*! SAER - Set All Enable Requests
 *  0b0..Set only the ERQ bit specified in the SERQ field
 *  0b1..Set all bits in ERQ
 */
#define DMA_SERQ_SAER(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SERQ_SAER_SHIFT)) & DMA_SERQ_SAER_MASK)

#define DMA_SERQ_NOP_MASK                        (0x80U)
#define DMA_SERQ_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_SERQ_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_SERQ_NOP_SHIFT)) & DMA_SERQ_NOP_MASK)
/*! @} */

/*! @name CDNE - Clear DONE Status Bit Register */
/*! @{ */

#define DMA_CDNE_CDNE_MASK                       (0x1FU)
#define DMA_CDNE_CDNE_SHIFT                      (0U)
/*! CDNE - Clear DONE Bit
 */
#define DMA_CDNE_CDNE(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CDNE_CDNE_SHIFT)) & DMA_CDNE_CDNE_MASK)

#define DMA_CDNE_CADN_MASK                       (0x40U)
#define DMA_CDNE_CADN_SHIFT                      (6U)
/*! CADN - Clears All DONE Bits
 *  0b0..Clears only the TCDn_CSR[DONE] bit specified in the CDNE field
 *  0b1..Clears all bits in TCDn_CSR[DONE]
 */
#define DMA_CDNE_CADN(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CDNE_CADN_SHIFT)) & DMA_CDNE_CADN_MASK)

#define DMA_CDNE_NOP_MASK                        (0x80U)
#define DMA_CDNE_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_CDNE_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CDNE_NOP_SHIFT)) & DMA_CDNE_NOP_MASK)
/*! @} */

/*! @name SSRT - Set START Bit Register */
/*! @{ */

#define DMA_SSRT_SSRT_MASK                       (0x1FU)
#define DMA_SSRT_SSRT_SHIFT                      (0U)
/*! SSRT - Set START Bit
 */
#define DMA_SSRT_SSRT(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SSRT_SSRT_SHIFT)) & DMA_SSRT_SSRT_MASK)

#define DMA_SSRT_SAST_MASK                       (0x40U)
#define DMA_SSRT_SAST_SHIFT                      (6U)
/*! SAST - Set All START Bits (activates all channels)
 *  0b0..Set only the TCDn_CSR[START] bit specified in the SSRT field
 *  0b1..Set all bits in TCDn_CSR[START]
 */
#define DMA_SSRT_SAST(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SSRT_SAST_SHIFT)) & DMA_SSRT_SAST_MASK)

#define DMA_SSRT_NOP_MASK                        (0x80U)
#define DMA_SSRT_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_SSRT_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_SSRT_NOP_SHIFT)) & DMA_SSRT_NOP_MASK)
/*! @} */

/*! @name CERR - Clear Error Register */
/*! @{ */

#define DMA_CERR_CERR_MASK                       (0x1FU)
#define DMA_CERR_CERR_SHIFT                      (0U)
/*! CERR - Clear Error Indicator
 */
#define DMA_CERR_CERR(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERR_CERR_SHIFT)) & DMA_CERR_CERR_MASK)

#define DMA_CERR_CAEI_MASK                       (0x40U)
#define DMA_CERR_CAEI_SHIFT                      (6U)
/*! CAEI - Clear All Error Indicators
 *  0b0..Clear only the ERR bit specified in the CERR field
 *  0b1..Clear all bits in ERR
 */
#define DMA_CERR_CAEI(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERR_CAEI_SHIFT)) & DMA_CERR_CAEI_MASK)

#define DMA_CERR_NOP_MASK                        (0x80U)
#define DMA_CERR_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_CERR_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CERR_NOP_SHIFT)) & DMA_CERR_NOP_MASK)
/*! @} */

/*! @name CINT - Clear Interrupt Request Register */
/*! @{ */

#define DMA_CINT_CINT_MASK                       (0x1FU)
#define DMA_CINT_CINT_SHIFT                      (0U)
/*! CINT - Clear Interrupt Request
 */
#define DMA_CINT_CINT(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CINT_CINT_SHIFT)) & DMA_CINT_CINT_MASK)

#define DMA_CINT_CAIR_MASK                       (0x40U)
#define DMA_CINT_CAIR_SHIFT                      (6U)
/*! CAIR - Clear All Interrupt Requests
 *  0b0..Clear only the INT bit specified in the CINT field
 *  0b1..Clear all bits in INT
 */
#define DMA_CINT_CAIR(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CINT_CAIR_SHIFT)) & DMA_CINT_CAIR_MASK)

#define DMA_CINT_NOP_MASK                        (0x80U)
#define DMA_CINT_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_CINT_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CINT_NOP_SHIFT)) & DMA_CINT_NOP_MASK)
/*! @} */

/*! @name INT - Interrupt Request Register */
/*! @{ */

#define DMA_INT_INT0_MASK                        (0x1U)
#define DMA_INT_INT0_SHIFT                       (0U)
/*! INT0 - Interrupt Request 0
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT0_SHIFT)) & DMA_INT_INT0_MASK)

#define DMA_INT_INT1_MASK                        (0x2U)
#define DMA_INT_INT1_SHIFT                       (1U)
/*! INT1 - Interrupt Request 1
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT1_SHIFT)) & DMA_INT_INT1_MASK)

#define DMA_INT_INT2_MASK                        (0x4U)
#define DMA_INT_INT2_SHIFT                       (2U)
/*! INT2 - Interrupt Request 2
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT2_SHIFT)) & DMA_INT_INT2_MASK)

#define DMA_INT_INT3_MASK                        (0x8U)
#define DMA_INT_INT3_SHIFT                       (3U)
/*! INT3 - Interrupt Request 3
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT3_SHIFT)) & DMA_INT_INT3_MASK)

#define DMA_INT_INT4_MASK                        (0x10U)
#define DMA_INT_INT4_SHIFT                       (4U)
/*! INT4 - Interrupt Request 4
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT4_SHIFT)) & DMA_INT_INT4_MASK)

#define DMA_INT_INT5_MASK                        (0x20U)
#define DMA_INT_INT5_SHIFT                       (5U)
/*! INT5 - Interrupt Request 5
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT5_SHIFT)) & DMA_INT_INT5_MASK)

#define DMA_INT_INT6_MASK                        (0x40U)
#define DMA_INT_INT6_SHIFT                       (6U)
/*! INT6 - Interrupt Request 6
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT6_SHIFT)) & DMA_INT_INT6_MASK)

#define DMA_INT_INT7_MASK                        (0x80U)
#define DMA_INT_INT7_SHIFT                       (7U)
/*! INT7 - Interrupt Request 7
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT7_SHIFT)) & DMA_INT_INT7_MASK)

#define DMA_INT_INT8_MASK                        (0x100U)
#define DMA_INT_INT8_SHIFT                       (8U)
/*! INT8 - Interrupt Request 8
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT8_SHIFT)) & DMA_INT_INT8_MASK)

#define DMA_INT_INT9_MASK                        (0x200U)
#define DMA_INT_INT9_SHIFT                       (9U)
/*! INT9 - Interrupt Request 9
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT9_SHIFT)) & DMA_INT_INT9_MASK)

#define DMA_INT_INT10_MASK                       (0x400U)
#define DMA_INT_INT10_SHIFT                      (10U)
/*! INT10 - Interrupt Request 10
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT10_SHIFT)) & DMA_INT_INT10_MASK)

#define DMA_INT_INT11_MASK                       (0x800U)
#define DMA_INT_INT11_SHIFT                      (11U)
/*! INT11 - Interrupt Request 11
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT11_SHIFT)) & DMA_INT_INT11_MASK)

#define DMA_INT_INT12_MASK                       (0x1000U)
#define DMA_INT_INT12_SHIFT                      (12U)
/*! INT12 - Interrupt Request 12
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT12_SHIFT)) & DMA_INT_INT12_MASK)

#define DMA_INT_INT13_MASK                       (0x2000U)
#define DMA_INT_INT13_SHIFT                      (13U)
/*! INT13 - Interrupt Request 13
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT13_SHIFT)) & DMA_INT_INT13_MASK)

#define DMA_INT_INT14_MASK                       (0x4000U)
#define DMA_INT_INT14_SHIFT                      (14U)
/*! INT14 - Interrupt Request 14
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT14_SHIFT)) & DMA_INT_INT14_MASK)

#define DMA_INT_INT15_MASK                       (0x8000U)
#define DMA_INT_INT15_SHIFT                      (15U)
/*! INT15 - Interrupt Request 15
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT15_SHIFT)) & DMA_INT_INT15_MASK)

#define DMA_INT_INT16_MASK                       (0x10000U)
#define DMA_INT_INT16_SHIFT                      (16U)
/*! INT16 - Interrupt Request 16
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT16(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT16_SHIFT)) & DMA_INT_INT16_MASK)

#define DMA_INT_INT17_MASK                       (0x20000U)
#define DMA_INT_INT17_SHIFT                      (17U)
/*! INT17 - Interrupt Request 17
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT17(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT17_SHIFT)) & DMA_INT_INT17_MASK)

#define DMA_INT_INT18_MASK                       (0x40000U)
#define DMA_INT_INT18_SHIFT                      (18U)
/*! INT18 - Interrupt Request 18
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT18(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT18_SHIFT)) & DMA_INT_INT18_MASK)

#define DMA_INT_INT19_MASK                       (0x80000U)
#define DMA_INT_INT19_SHIFT                      (19U)
/*! INT19 - Interrupt Request 19
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT19(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT19_SHIFT)) & DMA_INT_INT19_MASK)

#define DMA_INT_INT20_MASK                       (0x100000U)
#define DMA_INT_INT20_SHIFT                      (20U)
/*! INT20 - Interrupt Request 20
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT20(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT20_SHIFT)) & DMA_INT_INT20_MASK)

#define DMA_INT_INT21_MASK                       (0x200000U)
#define DMA_INT_INT21_SHIFT                      (21U)
/*! INT21 - Interrupt Request 21
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT21(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT21_SHIFT)) & DMA_INT_INT21_MASK)

#define DMA_INT_INT22_MASK                       (0x400000U)
#define DMA_INT_INT22_SHIFT                      (22U)
/*! INT22 - Interrupt Request 22
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT22(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT22_SHIFT)) & DMA_INT_INT22_MASK)

#define DMA_INT_INT23_MASK                       (0x800000U)
#define DMA_INT_INT23_SHIFT                      (23U)
/*! INT23 - Interrupt Request 23
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT23(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT23_SHIFT)) & DMA_INT_INT23_MASK)

#define DMA_INT_INT24_MASK                       (0x1000000U)
#define DMA_INT_INT24_SHIFT                      (24U)
/*! INT24 - Interrupt Request 24
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT24(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT24_SHIFT)) & DMA_INT_INT24_MASK)

#define DMA_INT_INT25_MASK                       (0x2000000U)
#define DMA_INT_INT25_SHIFT                      (25U)
/*! INT25 - Interrupt Request 25
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT25(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT25_SHIFT)) & DMA_INT_INT25_MASK)

#define DMA_INT_INT26_MASK                       (0x4000000U)
#define DMA_INT_INT26_SHIFT                      (26U)
/*! INT26 - Interrupt Request 26
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT26(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT26_SHIFT)) & DMA_INT_INT26_MASK)

#define DMA_INT_INT27_MASK                       (0x8000000U)
#define DMA_INT_INT27_SHIFT                      (27U)
/*! INT27 - Interrupt Request 27
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT27(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT27_SHIFT)) & DMA_INT_INT27_MASK)

#define DMA_INT_INT28_MASK                       (0x10000000U)
#define DMA_INT_INT28_SHIFT                      (28U)
/*! INT28 - Interrupt Request 28
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT28(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT28_SHIFT)) & DMA_INT_INT28_MASK)

#define DMA_INT_INT29_MASK                       (0x20000000U)
#define DMA_INT_INT29_SHIFT                      (29U)
/*! INT29 - Interrupt Request 29
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT29(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT29_SHIFT)) & DMA_INT_INT29_MASK)

#define DMA_INT_INT30_MASK                       (0x40000000U)
#define DMA_INT_INT30_SHIFT                      (30U)
/*! INT30 - Interrupt Request 30
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT30(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT30_SHIFT)) & DMA_INT_INT30_MASK)

#define DMA_INT_INT31_MASK                       (0x80000000U)
#define DMA_INT_INT31_SHIFT                      (31U)
/*! INT31 - Interrupt Request 31
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT31(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT31_SHIFT)) & DMA_INT_INT31_MASK)
/*! @} */

/*! @name ERR - Error Register */
/*! @{ */

#define DMA_ERR_ERR0_MASK                        (0x1U)
#define DMA_ERR_ERR0_SHIFT                       (0U)
/*! ERR0 - Error In Channel 0
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR0_SHIFT)) & DMA_ERR_ERR0_MASK)

#define DMA_ERR_ERR1_MASK                        (0x2U)
#define DMA_ERR_ERR1_SHIFT                       (1U)
/*! ERR1 - Error In Channel 1
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR1_SHIFT)) & DMA_ERR_ERR1_MASK)

#define DMA_ERR_ERR2_MASK                        (0x4U)
#define DMA_ERR_ERR2_SHIFT                       (2U)
/*! ERR2 - Error In Channel 2
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR2_SHIFT)) & DMA_ERR_ERR2_MASK)

#define DMA_ERR_ERR3_MASK                        (0x8U)
#define DMA_ERR_ERR3_SHIFT                       (3U)
/*! ERR3 - Error In Channel 3
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR3_SHIFT)) & DMA_ERR_ERR3_MASK)

#define DMA_ERR_ERR4_MASK                        (0x10U)
#define DMA_ERR_ERR4_SHIFT                       (4U)
/*! ERR4 - Error In Channel 4
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR4_SHIFT)) & DMA_ERR_ERR4_MASK)

#define DMA_ERR_ERR5_MASK                        (0x20U)
#define DMA_ERR_ERR5_SHIFT                       (5U)
/*! ERR5 - Error In Channel 5
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR5_SHIFT)) & DMA_ERR_ERR5_MASK)

#define DMA_ERR_ERR6_MASK                        (0x40U)
#define DMA_ERR_ERR6_SHIFT                       (6U)
/*! ERR6 - Error In Channel 6
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR6_SHIFT)) & DMA_ERR_ERR6_MASK)

#define DMA_ERR_ERR7_MASK                        (0x80U)
#define DMA_ERR_ERR7_SHIFT                       (7U)
/*! ERR7 - Error In Channel 7
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR7_SHIFT)) & DMA_ERR_ERR7_MASK)

#define DMA_ERR_ERR8_MASK                        (0x100U)
#define DMA_ERR_ERR8_SHIFT                       (8U)
/*! ERR8 - Error In Channel 8
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR8_SHIFT)) & DMA_ERR_ERR8_MASK)

#define DMA_ERR_ERR9_MASK                        (0x200U)
#define DMA_ERR_ERR9_SHIFT                       (9U)
/*! ERR9 - Error In Channel 9
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR9_SHIFT)) & DMA_ERR_ERR9_MASK)

#define DMA_ERR_ERR10_MASK                       (0x400U)
#define DMA_ERR_ERR10_SHIFT                      (10U)
/*! ERR10 - Error In Channel 10
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR10_SHIFT)) & DMA_ERR_ERR10_MASK)

#define DMA_ERR_ERR11_MASK                       (0x800U)
#define DMA_ERR_ERR11_SHIFT                      (11U)
/*! ERR11 - Error In Channel 11
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR11_SHIFT)) & DMA_ERR_ERR11_MASK)

#define DMA_ERR_ERR12_MASK                       (0x1000U)
#define DMA_ERR_ERR12_SHIFT                      (12U)
/*! ERR12 - Error In Channel 12
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR12_SHIFT)) & DMA_ERR_ERR12_MASK)

#define DMA_ERR_ERR13_MASK                       (0x2000U)
#define DMA_ERR_ERR13_SHIFT                      (13U)
/*! ERR13 - Error In Channel 13
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR13_SHIFT)) & DMA_ERR_ERR13_MASK)

#define DMA_ERR_ERR14_MASK                       (0x4000U)
#define DMA_ERR_ERR14_SHIFT                      (14U)
/*! ERR14 - Error In Channel 14
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR14_SHIFT)) & DMA_ERR_ERR14_MASK)

#define DMA_ERR_ERR15_MASK                       (0x8000U)
#define DMA_ERR_ERR15_SHIFT                      (15U)
/*! ERR15 - Error In Channel 15
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR15_SHIFT)) & DMA_ERR_ERR15_MASK)

#define DMA_ERR_ERR16_MASK                       (0x10000U)
#define DMA_ERR_ERR16_SHIFT                      (16U)
/*! ERR16 - Error In Channel 16
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR16(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR16_SHIFT)) & DMA_ERR_ERR16_MASK)

#define DMA_ERR_ERR17_MASK                       (0x20000U)
#define DMA_ERR_ERR17_SHIFT                      (17U)
/*! ERR17 - Error In Channel 17
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR17(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR17_SHIFT)) & DMA_ERR_ERR17_MASK)

#define DMA_ERR_ERR18_MASK                       (0x40000U)
#define DMA_ERR_ERR18_SHIFT                      (18U)
/*! ERR18 - Error In Channel 18
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR18(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR18_SHIFT)) & DMA_ERR_ERR18_MASK)

#define DMA_ERR_ERR19_MASK                       (0x80000U)
#define DMA_ERR_ERR19_SHIFT                      (19U)
/*! ERR19 - Error In Channel 19
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR19(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR19_SHIFT)) & DMA_ERR_ERR19_MASK)

#define DMA_ERR_ERR20_MASK                       (0x100000U)
#define DMA_ERR_ERR20_SHIFT                      (20U)
/*! ERR20 - Error In Channel 20
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR20(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR20_SHIFT)) & DMA_ERR_ERR20_MASK)

#define DMA_ERR_ERR21_MASK                       (0x200000U)
#define DMA_ERR_ERR21_SHIFT                      (21U)
/*! ERR21 - Error In Channel 21
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR21(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR21_SHIFT)) & DMA_ERR_ERR21_MASK)

#define DMA_ERR_ERR22_MASK                       (0x400000U)
#define DMA_ERR_ERR22_SHIFT                      (22U)
/*! ERR22 - Error In Channel 22
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR22(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR22_SHIFT)) & DMA_ERR_ERR22_MASK)

#define DMA_ERR_ERR23_MASK                       (0x800000U)
#define DMA_ERR_ERR23_SHIFT                      (23U)
/*! ERR23 - Error In Channel 23
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR23(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR23_SHIFT)) & DMA_ERR_ERR23_MASK)

#define DMA_ERR_ERR24_MASK                       (0x1000000U)
#define DMA_ERR_ERR24_SHIFT                      (24U)
/*! ERR24 - Error In Channel 24
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR24(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR24_SHIFT)) & DMA_ERR_ERR24_MASK)

#define DMA_ERR_ERR25_MASK                       (0x2000000U)
#define DMA_ERR_ERR25_SHIFT                      (25U)
/*! ERR25 - Error In Channel 25
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR25(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR25_SHIFT)) & DMA_ERR_ERR25_MASK)

#define DMA_ERR_ERR26_MASK                       (0x4000000U)
#define DMA_ERR_ERR26_SHIFT                      (26U)
/*! ERR26 - Error In Channel 26
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR26(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR26_SHIFT)) & DMA_ERR_ERR26_MASK)

#define DMA_ERR_ERR27_MASK                       (0x8000000U)
#define DMA_ERR_ERR27_SHIFT                      (27U)
/*! ERR27 - Error In Channel 27
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR27(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR27_SHIFT)) & DMA_ERR_ERR27_MASK)

#define DMA_ERR_ERR28_MASK                       (0x10000000U)
#define DMA_ERR_ERR28_SHIFT                      (28U)
/*! ERR28 - Error In Channel 28
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR28(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR28_SHIFT)) & DMA_ERR_ERR28_MASK)

#define DMA_ERR_ERR29_MASK                       (0x20000000U)
#define DMA_ERR_ERR29_SHIFT                      (29U)
/*! ERR29 - Error In Channel 29
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR29(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR29_SHIFT)) & DMA_ERR_ERR29_MASK)

#define DMA_ERR_ERR30_MASK                       (0x40000000U)
#define DMA_ERR_ERR30_SHIFT                      (30U)
/*! ERR30 - Error In Channel 30
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR30(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR30_SHIFT)) & DMA_ERR_ERR30_MASK)

#define DMA_ERR_ERR31_MASK                       (0x80000000U)
#define DMA_ERR_ERR31_SHIFT                      (31U)
/*! ERR31 - Error In Channel 31
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR31(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR31_SHIFT)) & DMA_ERR_ERR31_MASK)
/*! @} */

/*! @name HRS - Hardware Request Status Register */
/*! @{ */

#define DMA_HRS_HRS0_MASK                        (0x1U)
#define DMA_HRS_HRS0_SHIFT                       (0U)
/*! HRS0 - Hardware Request Status Channel 0
 *  0b0..A hardware service request for channel 0 is not present
 *  0b1..A hardware service request for channel 0 is present
 */
#define DMA_HRS_HRS0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS0_SHIFT)) & DMA_HRS_HRS0_MASK)

#define DMA_HRS_HRS1_MASK                        (0x2U)
#define DMA_HRS_HRS1_SHIFT                       (1U)
/*! HRS1 - Hardware Request Status Channel 1
 *  0b0..A hardware service request for channel 1 is not present
 *  0b1..A hardware service request for channel 1 is present
 */
#define DMA_HRS_HRS1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS1_SHIFT)) & DMA_HRS_HRS1_MASK)

#define DMA_HRS_HRS2_MASK                        (0x4U)
#define DMA_HRS_HRS2_SHIFT                       (2U)
/*! HRS2 - Hardware Request Status Channel 2
 *  0b0..A hardware service request for channel 2 is not present
 *  0b1..A hardware service request for channel 2 is present
 */
#define DMA_HRS_HRS2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS2_SHIFT)) & DMA_HRS_HRS2_MASK)

#define DMA_HRS_HRS3_MASK                        (0x8U)
#define DMA_HRS_HRS3_SHIFT                       (3U)
/*! HRS3 - Hardware Request Status Channel 3
 *  0b0..A hardware service request for channel 3 is not present
 *  0b1..A hardware service request for channel 3 is present
 */
#define DMA_HRS_HRS3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS3_SHIFT)) & DMA_HRS_HRS3_MASK)

#define DMA_HRS_HRS4_MASK                        (0x10U)
#define DMA_HRS_HRS4_SHIFT                       (4U)
/*! HRS4 - Hardware Request Status Channel 4
 *  0b0..A hardware service request for channel 4 is not present
 *  0b1..A hardware service request for channel 4 is present
 */
#define DMA_HRS_HRS4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS4_SHIFT)) & DMA_HRS_HRS4_MASK)

#define DMA_HRS_HRS5_MASK                        (0x20U)
#define DMA_HRS_HRS5_SHIFT                       (5U)
/*! HRS5 - Hardware Request Status Channel 5
 *  0b0..A hardware service request for channel 5 is not present
 *  0b1..A hardware service request for channel 5 is present
 */
#define DMA_HRS_HRS5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS5_SHIFT)) & DMA_HRS_HRS5_MASK)

#define DMA_HRS_HRS6_MASK                        (0x40U)
#define DMA_HRS_HRS6_SHIFT                       (6U)
/*! HRS6 - Hardware Request Status Channel 6
 *  0b0..A hardware service request for channel 6 is not present
 *  0b1..A hardware service request for channel 6 is present
 */
#define DMA_HRS_HRS6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS6_SHIFT)) & DMA_HRS_HRS6_MASK)

#define DMA_HRS_HRS7_MASK                        (0x80U)
#define DMA_HRS_HRS7_SHIFT                       (7U)
/*! HRS7 - Hardware Request Status Channel 7
 *  0b0..A hardware service request for channel 7 is not present
 *  0b1..A hardware service request for channel 7 is present
 */
#define DMA_HRS_HRS7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS7_SHIFT)) & DMA_HRS_HRS7_MASK)

#define DMA_HRS_HRS8_MASK                        (0x100U)
#define DMA_HRS_HRS8_SHIFT                       (8U)
/*! HRS8 - Hardware Request Status Channel 8
 *  0b0..A hardware service request for channel 8 is not present
 *  0b1..A hardware service request for channel 8 is present
 */
#define DMA_HRS_HRS8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS8_SHIFT)) & DMA_HRS_HRS8_MASK)

#define DMA_HRS_HRS9_MASK                        (0x200U)
#define DMA_HRS_HRS9_SHIFT                       (9U)
/*! HRS9 - Hardware Request Status Channel 9
 *  0b0..A hardware service request for channel 9 is not present
 *  0b1..A hardware service request for channel 9 is present
 */
#define DMA_HRS_HRS9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS9_SHIFT)) & DMA_HRS_HRS9_MASK)

#define DMA_HRS_HRS10_MASK                       (0x400U)
#define DMA_HRS_HRS10_SHIFT                      (10U)
/*! HRS10 - Hardware Request Status Channel 10
 *  0b0..A hardware service request for channel 10 is not present
 *  0b1..A hardware service request for channel 10 is present
 */
#define DMA_HRS_HRS10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS10_SHIFT)) & DMA_HRS_HRS10_MASK)

#define DMA_HRS_HRS11_MASK                       (0x800U)
#define DMA_HRS_HRS11_SHIFT                      (11U)
/*! HRS11 - Hardware Request Status Channel 11
 *  0b0..A hardware service request for channel 11 is not present
 *  0b1..A hardware service request for channel 11 is present
 */
#define DMA_HRS_HRS11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS11_SHIFT)) & DMA_HRS_HRS11_MASK)

#define DMA_HRS_HRS12_MASK                       (0x1000U)
#define DMA_HRS_HRS12_SHIFT                      (12U)
/*! HRS12 - Hardware Request Status Channel 12
 *  0b0..A hardware service request for channel 12 is not present
 *  0b1..A hardware service request for channel 12 is present
 */
#define DMA_HRS_HRS12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS12_SHIFT)) & DMA_HRS_HRS12_MASK)

#define DMA_HRS_HRS13_MASK                       (0x2000U)
#define DMA_HRS_HRS13_SHIFT                      (13U)
/*! HRS13 - Hardware Request Status Channel 13
 *  0b0..A hardware service request for channel 13 is not present
 *  0b1..A hardware service request for channel 13 is present
 */
#define DMA_HRS_HRS13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS13_SHIFT)) & DMA_HRS_HRS13_MASK)

#define DMA_HRS_HRS14_MASK                       (0x4000U)
#define DMA_HRS_HRS14_SHIFT                      (14U)
/*! HRS14 - Hardware Request Status Channel 14
 *  0b0..A hardware service request for channel 14 is not present
 *  0b1..A hardware service request for channel 14 is present
 */
#define DMA_HRS_HRS14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS14_SHIFT)) & DMA_HRS_HRS14_MASK)

#define DMA_HRS_HRS15_MASK                       (0x8000U)
#define DMA_HRS_HRS15_SHIFT                      (15U)
/*! HRS15 - Hardware Request Status Channel 15
 *  0b0..A hardware service request for channel 15 is not present
 *  0b1..A hardware service request for channel 15 is present
 */
#define DMA_HRS_HRS15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS15_SHIFT)) & DMA_HRS_HRS15_MASK)

#define DMA_HRS_HRS16_MASK                       (0x10000U)
#define DMA_HRS_HRS16_SHIFT                      (16U)
/*! HRS16 - Hardware Request Status Channel 16
 *  0b0..A hardware service request for channel 16 is not present
 *  0b1..A hardware service request for channel 16 is present
 */
#define DMA_HRS_HRS16(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS16_SHIFT)) & DMA_HRS_HRS16_MASK)

#define DMA_HRS_HRS17_MASK                       (0x20000U)
#define DMA_HRS_HRS17_SHIFT                      (17U)
/*! HRS17 - Hardware Request Status Channel 17
 *  0b0..A hardware service request for channel 17 is not present
 *  0b1..A hardware service request for channel 17 is present
 */
#define DMA_HRS_HRS17(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS17_SHIFT)) & DMA_HRS_HRS17_MASK)

#define DMA_HRS_HRS18_MASK                       (0x40000U)
#define DMA_HRS_HRS18_SHIFT                      (18U)
/*! HRS18 - Hardware Request Status Channel 18
 *  0b0..A hardware service request for channel 18 is not present
 *  0b1..A hardware service request for channel 18 is present
 */
#define DMA_HRS_HRS18(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS18_SHIFT)) & DMA_HRS_HRS18_MASK)

#define DMA_HRS_HRS19_MASK                       (0x80000U)
#define DMA_HRS_HRS19_SHIFT                      (19U)
/*! HRS19 - Hardware Request Status Channel 19
 *  0b0..A hardware service request for channel 19 is not present
 *  0b1..A hardware service request for channel 19 is present
 */
#define DMA_HRS_HRS19(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS19_SHIFT)) & DMA_HRS_HRS19_MASK)

#define DMA_HRS_HRS20_MASK                       (0x100000U)
#define DMA_HRS_HRS20_SHIFT                      (20U)
/*! HRS20 - Hardware Request Status Channel 20
 *  0b0..A hardware service request for channel 20 is not present
 *  0b1..A hardware service request for channel 20 is present
 */
#define DMA_HRS_HRS20(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS20_SHIFT)) & DMA_HRS_HRS20_MASK)

#define DMA_HRS_HRS21_MASK                       (0x200000U)
#define DMA_HRS_HRS21_SHIFT                      (21U)
/*! HRS21 - Hardware Request Status Channel 21
 *  0b0..A hardware service request for channel 21 is not present
 *  0b1..A hardware service request for channel 21 is present
 */
#define DMA_HRS_HRS21(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS21_SHIFT)) & DMA_HRS_HRS21_MASK)

#define DMA_HRS_HRS22_MASK                       (0x400000U)
#define DMA_HRS_HRS22_SHIFT                      (22U)
/*! HRS22 - Hardware Request Status Channel 22
 *  0b0..A hardware service request for channel 22 is not present
 *  0b1..A hardware service request for channel 22 is present
 */
#define DMA_HRS_HRS22(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS22_SHIFT)) & DMA_HRS_HRS22_MASK)

#define DMA_HRS_HRS23_MASK                       (0x800000U)
#define DMA_HRS_HRS23_SHIFT                      (23U)
/*! HRS23 - Hardware Request Status Channel 23
 *  0b0..A hardware service request for channel 23 is not present
 *  0b1..A hardware service request for channel 23 is present
 */
#define DMA_HRS_HRS23(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS23_SHIFT)) & DMA_HRS_HRS23_MASK)

#define DMA_HRS_HRS24_MASK                       (0x1000000U)
#define DMA_HRS_HRS24_SHIFT                      (24U)
/*! HRS24 - Hardware Request Status Channel 24
 *  0b0..A hardware service request for channel 24 is not present
 *  0b1..A hardware service request for channel 24 is present
 */
#define DMA_HRS_HRS24(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS24_SHIFT)) & DMA_HRS_HRS24_MASK)

#define DMA_HRS_HRS25_MASK                       (0x2000000U)
#define DMA_HRS_HRS25_SHIFT                      (25U)
/*! HRS25 - Hardware Request Status Channel 25
 *  0b0..A hardware service request for channel 25 is not present
 *  0b1..A hardware service request for channel 25 is present
 */
#define DMA_HRS_HRS25(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS25_SHIFT)) & DMA_HRS_HRS25_MASK)

#define DMA_HRS_HRS26_MASK                       (0x4000000U)
#define DMA_HRS_HRS26_SHIFT                      (26U)
/*! HRS26 - Hardware Request Status Channel 26
 *  0b0..A hardware service request for channel 26 is not present
 *  0b1..A hardware service request for channel 26 is present
 */
#define DMA_HRS_HRS26(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS26_SHIFT)) & DMA_HRS_HRS26_MASK)

#define DMA_HRS_HRS27_MASK                       (0x8000000U)
#define DMA_HRS_HRS27_SHIFT                      (27U)
/*! HRS27 - Hardware Request Status Channel 27
 *  0b0..A hardware service request for channel 27 is not present
 *  0b1..A hardware service request for channel 27 is present
 */
#define DMA_HRS_HRS27(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS27_SHIFT)) & DMA_HRS_HRS27_MASK)

#define DMA_HRS_HRS28_MASK                       (0x10000000U)
#define DMA_HRS_HRS28_SHIFT                      (28U)
/*! HRS28 - Hardware Request Status Channel 28
 *  0b0..A hardware service request for channel 28 is not present
 *  0b1..A hardware service request for channel 28 is present
 */
#define DMA_HRS_HRS28(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS28_SHIFT)) & DMA_HRS_HRS28_MASK)

#define DMA_HRS_HRS29_MASK                       (0x20000000U)
#define DMA_HRS_HRS29_SHIFT                      (29U)
/*! HRS29 - Hardware Request Status Channel 29
 *  0b0..A hardware service request for channel 29 is not preset
 *  0b1..A hardware service request for channel 29 is present
 */
#define DMA_HRS_HRS29(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS29_SHIFT)) & DMA_HRS_HRS29_MASK)

#define DMA_HRS_HRS30_MASK                       (0x40000000U)
#define DMA_HRS_HRS30_SHIFT                      (30U)
/*! HRS30 - Hardware Request Status Channel 30
 *  0b0..A hardware service request for channel 30 is not present
 *  0b1..A hardware service request for channel 30 is present
 */
#define DMA_HRS_HRS30(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS30_SHIFT)) & DMA_HRS_HRS30_MASK)

#define DMA_HRS_HRS31_MASK                       (0x80000000U)
#define DMA_HRS_HRS31_SHIFT                      (31U)
/*! HRS31 - Hardware Request Status Channel 31
 *  0b0..A hardware service request for channel 31 is not present
 *  0b1..A hardware service request for channel 31 is present
 */
#define DMA_HRS_HRS31(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS31_SHIFT)) & DMA_HRS_HRS31_MASK)
/*! @} */

/*! @name EARS - Enable Asynchronous Request in Stop Register */
/*! @{ */

#define DMA_EARS_EDREQ_0_MASK                    (0x1U)
#define DMA_EARS_EDREQ_0_SHIFT                   (0U)
/*! EDREQ_0 - Enable asynchronous DMA request in stop mode for channel 0.
 *  0b0..Disable asynchronous DMA request for channel 0.
 *  0b1..Enable asynchronous DMA request for channel 0.
 */
#define DMA_EARS_EDREQ_0(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_0_SHIFT)) & DMA_EARS_EDREQ_0_MASK)

#define DMA_EARS_EDREQ_1_MASK                    (0x2U)
#define DMA_EARS_EDREQ_1_SHIFT                   (1U)
/*! EDREQ_1 - Enable asynchronous DMA request in stop mode for channel 1.
 *  0b0..Disable asynchronous DMA request for channel 1
 *  0b1..Enable asynchronous DMA request for channel 1.
 */
#define DMA_EARS_EDREQ_1(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_1_SHIFT)) & DMA_EARS_EDREQ_1_MASK)

#define DMA_EARS_EDREQ_2_MASK                    (0x4U)
#define DMA_EARS_EDREQ_2_SHIFT                   (2U)
/*! EDREQ_2 - Enable asynchronous DMA request in stop mode for channel 2.
 *  0b0..Disable asynchronous DMA request for channel 2.
 *  0b1..Enable asynchronous DMA request for channel 2.
 */
#define DMA_EARS_EDREQ_2(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_2_SHIFT)) & DMA_EARS_EDREQ_2_MASK)

#define DMA_EARS_EDREQ_3_MASK                    (0x8U)
#define DMA_EARS_EDREQ_3_SHIFT                   (3U)
/*! EDREQ_3 - Enable asynchronous DMA request in stop mode for channel 3.
 *  0b0..Disable asynchronous DMA request for channel 3.
 *  0b1..Enable asynchronous DMA request for channel 3.
 */
#define DMA_EARS_EDREQ_3(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_3_SHIFT)) & DMA_EARS_EDREQ_3_MASK)

#define DMA_EARS_EDREQ_4_MASK                    (0x10U)
#define DMA_EARS_EDREQ_4_SHIFT                   (4U)
/*! EDREQ_4 - Enable asynchronous DMA request in stop mode for channel 4
 *  0b0..Disable asynchronous DMA request for channel 4.
 *  0b1..Enable asynchronous DMA request for channel 4.
 */
#define DMA_EARS_EDREQ_4(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_4_SHIFT)) & DMA_EARS_EDREQ_4_MASK)

#define DMA_EARS_EDREQ_5_MASK                    (0x20U)
#define DMA_EARS_EDREQ_5_SHIFT                   (5U)
/*! EDREQ_5 - Enable asynchronous DMA request in stop mode for channel 5
 *  0b0..Disable asynchronous DMA request for channel 5.
 *  0b1..Enable asynchronous DMA request for channel 5.
 */
#define DMA_EARS_EDREQ_5(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_5_SHIFT)) & DMA_EARS_EDREQ_5_MASK)

#define DMA_EARS_EDREQ_6_MASK                    (0x40U)
#define DMA_EARS_EDREQ_6_SHIFT                   (6U)
/*! EDREQ_6 - Enable asynchronous DMA request in stop mode for channel 6
 *  0b0..Disable asynchronous DMA request for channel 6.
 *  0b1..Enable asynchronous DMA request for channel 6.
 */
#define DMA_EARS_EDREQ_6(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_6_SHIFT)) & DMA_EARS_EDREQ_6_MASK)

#define DMA_EARS_EDREQ_7_MASK                    (0x80U)
#define DMA_EARS_EDREQ_7_SHIFT                   (7U)
/*! EDREQ_7 - Enable asynchronous DMA request in stop mode for channel 7
 *  0b0..Disable asynchronous DMA request for channel 7.
 *  0b1..Enable asynchronous DMA request for channel 7.
 */
#define DMA_EARS_EDREQ_7(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_7_SHIFT)) & DMA_EARS_EDREQ_7_MASK)

#define DMA_EARS_EDREQ_8_MASK                    (0x100U)
#define DMA_EARS_EDREQ_8_SHIFT                   (8U)
/*! EDREQ_8 - Enable asynchronous DMA request in stop mode for channel 8
 *  0b0..Disable asynchronous DMA request for channel 8.
 *  0b1..Enable asynchronous DMA request for channel 8.
 */
#define DMA_EARS_EDREQ_8(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_8_SHIFT)) & DMA_EARS_EDREQ_8_MASK)

#define DMA_EARS_EDREQ_9_MASK                    (0x200U)
#define DMA_EARS_EDREQ_9_SHIFT                   (9U)
/*! EDREQ_9 - Enable asynchronous DMA request in stop mode for channel 9
 *  0b0..Disable asynchronous DMA request for channel 9.
 *  0b1..Enable asynchronous DMA request for channel 9.
 */
#define DMA_EARS_EDREQ_9(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_9_SHIFT)) & DMA_EARS_EDREQ_9_MASK)

#define DMA_EARS_EDREQ_10_MASK                   (0x400U)
#define DMA_EARS_EDREQ_10_SHIFT                  (10U)
/*! EDREQ_10 - Enable asynchronous DMA request in stop mode for channel 10
 *  0b0..Disable asynchronous DMA request for channel 10.
 *  0b1..Enable asynchronous DMA request for channel 10.
 */
#define DMA_EARS_EDREQ_10(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_10_SHIFT)) & DMA_EARS_EDREQ_10_MASK)

#define DMA_EARS_EDREQ_11_MASK                   (0x800U)
#define DMA_EARS_EDREQ_11_SHIFT                  (11U)
/*! EDREQ_11 - Enable asynchronous DMA request in stop mode for channel 11
 *  0b0..Disable asynchronous DMA request for channel 11.
 *  0b1..Enable asynchronous DMA request for channel 11.
 */
#define DMA_EARS_EDREQ_11(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_11_SHIFT)) & DMA_EARS_EDREQ_11_MASK)

#define DMA_EARS_EDREQ_12_MASK                   (0x1000U)
#define DMA_EARS_EDREQ_12_SHIFT                  (12U)
/*! EDREQ_12 - Enable asynchronous DMA request in stop mode for channel 12
 *  0b0..Disable asynchronous DMA request for channel 12.
 *  0b1..Enable asynchronous DMA request for channel 12.
 */
#define DMA_EARS_EDREQ_12(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_12_SHIFT)) & DMA_EARS_EDREQ_12_MASK)

#define DMA_EARS_EDREQ_13_MASK                   (0x2000U)
#define DMA_EARS_EDREQ_13_SHIFT                  (13U)
/*! EDREQ_13 - Enable asynchronous DMA request in stop mode for channel 13
 *  0b0..Disable asynchronous DMA request for channel 13.
 *  0b1..Enable asynchronous DMA request for channel 13.
 */
#define DMA_EARS_EDREQ_13(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_13_SHIFT)) & DMA_EARS_EDREQ_13_MASK)

#define DMA_EARS_EDREQ_14_MASK                   (0x4000U)
#define DMA_EARS_EDREQ_14_SHIFT                  (14U)
/*! EDREQ_14 - Enable asynchronous DMA request in stop mode for channel 14
 *  0b0..Disable asynchronous DMA request for channel 14.
 *  0b1..Enable asynchronous DMA request for channel 14.
 */
#define DMA_EARS_EDREQ_14(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_14_SHIFT)) & DMA_EARS_EDREQ_14_MASK)

#define DMA_EARS_EDREQ_15_MASK                   (0x8000U)
#define DMA_EARS_EDREQ_15_SHIFT                  (15U)
/*! EDREQ_15 - Enable asynchronous DMA request in stop mode for channel 15
 *  0b0..Disable asynchronous DMA request for channel 15.
 *  0b1..Enable asynchronous DMA request for channel 15.
 */
#define DMA_EARS_EDREQ_15(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_15_SHIFT)) & DMA_EARS_EDREQ_15_MASK)

#define DMA_EARS_EDREQ_16_MASK                   (0x10000U)
#define DMA_EARS_EDREQ_16_SHIFT                  (16U)
/*! EDREQ_16 - Enable asynchronous DMA request in stop mode for channel 16
 *  0b0..Disable asynchronous DMA request for channel 16
 *  0b1..Enable asynchronous DMA request for channel 16
 */
#define DMA_EARS_EDREQ_16(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_16_SHIFT)) & DMA_EARS_EDREQ_16_MASK)

#define DMA_EARS_EDREQ_17_MASK                   (0x20000U)
#define DMA_EARS_EDREQ_17_SHIFT                  (17U)
/*! EDREQ_17 - Enable asynchronous DMA request in stop mode for channel 17
 *  0b0..Disable asynchronous DMA request for channel 17
 *  0b1..Enable asynchronous DMA request for channel 17
 */
#define DMA_EARS_EDREQ_17(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_17_SHIFT)) & DMA_EARS_EDREQ_17_MASK)

#define DMA_EARS_EDREQ_18_MASK                   (0x40000U)
#define DMA_EARS_EDREQ_18_SHIFT                  (18U)
/*! EDREQ_18 - Enable asynchronous DMA request in stop mode for channel 18
 *  0b0..Disable asynchronous DMA request for channel 18
 *  0b1..Enable asynchronous DMA request for channel 18
 */
#define DMA_EARS_EDREQ_18(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_18_SHIFT)) & DMA_EARS_EDREQ_18_MASK)

#define DMA_EARS_EDREQ_19_MASK                   (0x80000U)
#define DMA_EARS_EDREQ_19_SHIFT                  (19U)
/*! EDREQ_19 - Enable asynchronous DMA request in stop mode for channel 19
 *  0b0..Disable asynchronous DMA request for channel 19
 *  0b1..Enable asynchronous DMA request for channel 19
 */
#define DMA_EARS_EDREQ_19(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_19_SHIFT)) & DMA_EARS_EDREQ_19_MASK)

#define DMA_EARS_EDREQ_20_MASK                   (0x100000U)
#define DMA_EARS_EDREQ_20_SHIFT                  (20U)
/*! EDREQ_20 - Enable asynchronous DMA request in stop mode for channel 20
 *  0b0..Disable asynchronous DMA request for channel 20
 *  0b1..Enable asynchronous DMA request for channel 20
 */
#define DMA_EARS_EDREQ_20(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_20_SHIFT)) & DMA_EARS_EDREQ_20_MASK)

#define DMA_EARS_EDREQ_21_MASK                   (0x200000U)
#define DMA_EARS_EDREQ_21_SHIFT                  (21U)
/*! EDREQ_21 - Enable asynchronous DMA request in stop mode for channel 21
 *  0b0..Disable asynchronous DMA request for channel 21
 *  0b1..Enable asynchronous DMA request for channel 21
 */
#define DMA_EARS_EDREQ_21(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_21_SHIFT)) & DMA_EARS_EDREQ_21_MASK)

#define DMA_EARS_EDREQ_22_MASK                   (0x400000U)
#define DMA_EARS_EDREQ_22_SHIFT                  (22U)
/*! EDREQ_22 - Enable asynchronous DMA request in stop mode for channel 22
 *  0b0..Disable asynchronous DMA request for channel 22
 *  0b1..Enable asynchronous DMA request for channel 22
 */
#define DMA_EARS_EDREQ_22(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_22_SHIFT)) & DMA_EARS_EDREQ_22_MASK)

#define DMA_EARS_EDREQ_23_MASK                   (0x800000U)
#define DMA_EARS_EDREQ_23_SHIFT                  (23U)
/*! EDREQ_23 - Enable asynchronous DMA request in stop mode for channel 23
 *  0b0..Disable asynchronous DMA request for channel 23
 *  0b1..Enable asynchronous DMA request for channel 23
 */
#define DMA_EARS_EDREQ_23(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_23_SHIFT)) & DMA_EARS_EDREQ_23_MASK)

#define DMA_EARS_EDREQ_24_MASK                   (0x1000000U)
#define DMA_EARS_EDREQ_24_SHIFT                  (24U)
/*! EDREQ_24 - Enable asynchronous DMA request in stop mode for channel 24
 *  0b0..Disable asynchronous DMA request for channel 24
 *  0b1..Enable asynchronous DMA request for channel 24
 */
#define DMA_EARS_EDREQ_24(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_24_SHIFT)) & DMA_EARS_EDREQ_24_MASK)

#define DMA_EARS_EDREQ_25_MASK                   (0x2000000U)
#define DMA_EARS_EDREQ_25_SHIFT                  (25U)
/*! EDREQ_25 - Enable asynchronous DMA request in stop mode for channel 25
 *  0b0..Disable asynchronous DMA request for channel 25
 *  0b1..Enable asynchronous DMA request for channel 25
 */
#define DMA_EARS_EDREQ_25(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_25_SHIFT)) & DMA_EARS_EDREQ_25_MASK)

#define DMA_EARS_EDREQ_26_MASK                   (0x4000000U)
#define DMA_EARS_EDREQ_26_SHIFT                  (26U)
/*! EDREQ_26 - Enable asynchronous DMA request in stop mode for channel 26
 *  0b0..Disable asynchronous DMA request for channel 26
 *  0b1..Enable asynchronous DMA request for channel 26
 */
#define DMA_EARS_EDREQ_26(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_26_SHIFT)) & DMA_EARS_EDREQ_26_MASK)

#define DMA_EARS_EDREQ_27_MASK                   (0x8000000U)
#define DMA_EARS_EDREQ_27_SHIFT                  (27U)
/*! EDREQ_27 - Enable asynchronous DMA request in stop mode for channel 27
 *  0b0..Disable asynchronous DMA request for channel 27
 *  0b1..Enable asynchronous DMA request for channel 27
 */
#define DMA_EARS_EDREQ_27(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_27_SHIFT)) & DMA_EARS_EDREQ_27_MASK)

#define DMA_EARS_EDREQ_28_MASK                   (0x10000000U)
#define DMA_EARS_EDREQ_28_SHIFT                  (28U)
/*! EDREQ_28 - Enable asynchronous DMA request in stop mode for channel 28
 *  0b0..Disable asynchronous DMA request for channel 28
 *  0b1..Enable asynchronous DMA request for channel 28
 */
#define DMA_EARS_EDREQ_28(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_28_SHIFT)) & DMA_EARS_EDREQ_28_MASK)

#define DMA_EARS_EDREQ_29_MASK                   (0x20000000U)
#define DMA_EARS_EDREQ_29_SHIFT                  (29U)
/*! EDREQ_29 - Enable asynchronous DMA request in stop mode for channel 29
 *  0b0..Disable asynchronous DMA request for channel 29
 *  0b1..Enable asynchronous DMA request for channel 29
 */
#define DMA_EARS_EDREQ_29(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_29_SHIFT)) & DMA_EARS_EDREQ_29_MASK)

#define DMA_EARS_EDREQ_30_MASK                   (0x40000000U)
#define DMA_EARS_EDREQ_30_SHIFT                  (30U)
/*! EDREQ_30 - Enable asynchronous DMA request in stop mode for channel 30
 *  0b0..Disable asynchronous DMA request for channel 30
 *  0b1..Enable asynchronous DMA request for channel 30
 */
#define DMA_EARS_EDREQ_30(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_30_SHIFT)) & DMA_EARS_EDREQ_30_MASK)

#define DMA_EARS_EDREQ_31_MASK                   (0x80000000U)
#define DMA_EARS_EDREQ_31_SHIFT                  (31U)
/*! EDREQ_31 - Enable asynchronous DMA request in stop mode for channel 31
 *  0b0..Disable asynchronous DMA request for channel 31
 *  0b1..Enable asynchronous DMA request for channel 31
 */
#define DMA_EARS_EDREQ_31(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_31_SHIFT)) & DMA_EARS_EDREQ_31_MASK)
/*! @} */

/*! @name DCHPRI3 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI3_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI3_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI3_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI3_CHPRI_SHIFT)) & DMA_DCHPRI3_CHPRI_MASK)

#define DMA_DCHPRI3_GRPPRI_MASK                  (0x30U)
#define DMA_DCHPRI3_GRPPRI_SHIFT                 (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI3_GRPPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI3_GRPPRI_SHIFT)) & DMA_DCHPRI3_GRPPRI_MASK)

#define DMA_DCHPRI3_DPA_MASK                     (0x40U)
#define DMA_DCHPRI3_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI3_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI3_DPA_SHIFT)) & DMA_DCHPRI3_DPA_MASK)

#define DMA_DCHPRI3_ECP_MASK                     (0x80U)
#define DMA_DCHPRI3_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI3_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI3_ECP_SHIFT)) & DMA_DCHPRI3_ECP_MASK)
/*! @} */

/*! @name DCHPRI2 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI2_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI2_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI2_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI2_CHPRI_SHIFT)) & DMA_DCHPRI2_CHPRI_MASK)

#define DMA_DCHPRI2_GRPPRI_MASK                  (0x30U)
#define DMA_DCHPRI2_GRPPRI_SHIFT                 (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI2_GRPPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI2_GRPPRI_SHIFT)) & DMA_DCHPRI2_GRPPRI_MASK)

#define DMA_DCHPRI2_DPA_MASK                     (0x40U)
#define DMA_DCHPRI2_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI2_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI2_DPA_SHIFT)) & DMA_DCHPRI2_DPA_MASK)

#define DMA_DCHPRI2_ECP_MASK                     (0x80U)
#define DMA_DCHPRI2_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI2_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI2_ECP_SHIFT)) & DMA_DCHPRI2_ECP_MASK)
/*! @} */

/*! @name DCHPRI1 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI1_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI1_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI1_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI1_CHPRI_SHIFT)) & DMA_DCHPRI1_CHPRI_MASK)

#define DMA_DCHPRI1_GRPPRI_MASK                  (0x30U)
#define DMA_DCHPRI1_GRPPRI_SHIFT                 (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI1_GRPPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI1_GRPPRI_SHIFT)) & DMA_DCHPRI1_GRPPRI_MASK)

#define DMA_DCHPRI1_DPA_MASK                     (0x40U)
#define DMA_DCHPRI1_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI1_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI1_DPA_SHIFT)) & DMA_DCHPRI1_DPA_MASK)

#define DMA_DCHPRI1_ECP_MASK                     (0x80U)
#define DMA_DCHPRI1_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI1_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI1_ECP_SHIFT)) & DMA_DCHPRI1_ECP_MASK)
/*! @} */

/*! @name DCHPRI0 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI0_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI0_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI0_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI0_CHPRI_SHIFT)) & DMA_DCHPRI0_CHPRI_MASK)

#define DMA_DCHPRI0_GRPPRI_MASK                  (0x30U)
#define DMA_DCHPRI0_GRPPRI_SHIFT                 (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI0_GRPPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI0_GRPPRI_SHIFT)) & DMA_DCHPRI0_GRPPRI_MASK)

#define DMA_DCHPRI0_DPA_MASK                     (0x40U)
#define DMA_DCHPRI0_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI0_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI0_DPA_SHIFT)) & DMA_DCHPRI0_DPA_MASK)

#define DMA_DCHPRI0_ECP_MASK                     (0x80U)
#define DMA_DCHPRI0_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI0_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI0_ECP_SHIFT)) & DMA_DCHPRI0_ECP_MASK)
/*! @} */

/*! @name DCHPRI7 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI7_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI7_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI7_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI7_CHPRI_SHIFT)) & DMA_DCHPRI7_CHPRI_MASK)

#define DMA_DCHPRI7_GRPPRI_MASK                  (0x30U)
#define DMA_DCHPRI7_GRPPRI_SHIFT                 (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI7_GRPPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI7_GRPPRI_SHIFT)) & DMA_DCHPRI7_GRPPRI_MASK)

#define DMA_DCHPRI7_DPA_MASK                     (0x40U)
#define DMA_DCHPRI7_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI7_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI7_DPA_SHIFT)) & DMA_DCHPRI7_DPA_MASK)

#define DMA_DCHPRI7_ECP_MASK                     (0x80U)
#define DMA_DCHPRI7_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI7_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI7_ECP_SHIFT)) & DMA_DCHPRI7_ECP_MASK)
/*! @} */

/*! @name DCHPRI6 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI6_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI6_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI6_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI6_CHPRI_SHIFT)) & DMA_DCHPRI6_CHPRI_MASK)

#define DMA_DCHPRI6_GRPPRI_MASK                  (0x30U)
#define DMA_DCHPRI6_GRPPRI_SHIFT                 (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI6_GRPPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI6_GRPPRI_SHIFT)) & DMA_DCHPRI6_GRPPRI_MASK)

#define DMA_DCHPRI6_DPA_MASK                     (0x40U)
#define DMA_DCHPRI6_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI6_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI6_DPA_SHIFT)) & DMA_DCHPRI6_DPA_MASK)

#define DMA_DCHPRI6_ECP_MASK                     (0x80U)
#define DMA_DCHPRI6_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI6_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI6_ECP_SHIFT)) & DMA_DCHPRI6_ECP_MASK)
/*! @} */

/*! @name DCHPRI5 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI5_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI5_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI5_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI5_CHPRI_SHIFT)) & DMA_DCHPRI5_CHPRI_MASK)

#define DMA_DCHPRI5_GRPPRI_MASK                  (0x30U)
#define DMA_DCHPRI5_GRPPRI_SHIFT                 (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI5_GRPPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI5_GRPPRI_SHIFT)) & DMA_DCHPRI5_GRPPRI_MASK)

#define DMA_DCHPRI5_DPA_MASK                     (0x40U)
#define DMA_DCHPRI5_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI5_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI5_DPA_SHIFT)) & DMA_DCHPRI5_DPA_MASK)

#define DMA_DCHPRI5_ECP_MASK                     (0x80U)
#define DMA_DCHPRI5_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI5_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI5_ECP_SHIFT)) & DMA_DCHPRI5_ECP_MASK)
/*! @} */

/*! @name DCHPRI4 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI4_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI4_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI4_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI4_CHPRI_SHIFT)) & DMA_DCHPRI4_CHPRI_MASK)

#define DMA_DCHPRI4_GRPPRI_MASK                  (0x30U)
#define DMA_DCHPRI4_GRPPRI_SHIFT                 (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI4_GRPPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI4_GRPPRI_SHIFT)) & DMA_DCHPRI4_GRPPRI_MASK)

#define DMA_DCHPRI4_DPA_MASK                     (0x40U)
#define DMA_DCHPRI4_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI4_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI4_DPA_SHIFT)) & DMA_DCHPRI4_DPA_MASK)

#define DMA_DCHPRI4_ECP_MASK                     (0x80U)
#define DMA_DCHPRI4_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI4_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI4_ECP_SHIFT)) & DMA_DCHPRI4_ECP_MASK)
/*! @} */

/*! @name DCHPRI11 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI11_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI11_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI11_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI11_CHPRI_SHIFT)) & DMA_DCHPRI11_CHPRI_MASK)

#define DMA_DCHPRI11_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI11_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI11_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI11_GRPPRI_SHIFT)) & DMA_DCHPRI11_GRPPRI_MASK)

#define DMA_DCHPRI11_DPA_MASK                    (0x40U)
#define DMA_DCHPRI11_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI11_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI11_DPA_SHIFT)) & DMA_DCHPRI11_DPA_MASK)

#define DMA_DCHPRI11_ECP_MASK                    (0x80U)
#define DMA_DCHPRI11_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI11_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI11_ECP_SHIFT)) & DMA_DCHPRI11_ECP_MASK)
/*! @} */

/*! @name DCHPRI10 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI10_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI10_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI10_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI10_CHPRI_SHIFT)) & DMA_DCHPRI10_CHPRI_MASK)

#define DMA_DCHPRI10_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI10_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI10_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI10_GRPPRI_SHIFT)) & DMA_DCHPRI10_GRPPRI_MASK)

#define DMA_DCHPRI10_DPA_MASK                    (0x40U)
#define DMA_DCHPRI10_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI10_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI10_DPA_SHIFT)) & DMA_DCHPRI10_DPA_MASK)

#define DMA_DCHPRI10_ECP_MASK                    (0x80U)
#define DMA_DCHPRI10_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI10_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI10_ECP_SHIFT)) & DMA_DCHPRI10_ECP_MASK)
/*! @} */

/*! @name DCHPRI9 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI9_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI9_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI9_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI9_CHPRI_SHIFT)) & DMA_DCHPRI9_CHPRI_MASK)

#define DMA_DCHPRI9_GRPPRI_MASK                  (0x30U)
#define DMA_DCHPRI9_GRPPRI_SHIFT                 (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI9_GRPPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI9_GRPPRI_SHIFT)) & DMA_DCHPRI9_GRPPRI_MASK)

#define DMA_DCHPRI9_DPA_MASK                     (0x40U)
#define DMA_DCHPRI9_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI9_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI9_DPA_SHIFT)) & DMA_DCHPRI9_DPA_MASK)

#define DMA_DCHPRI9_ECP_MASK                     (0x80U)
#define DMA_DCHPRI9_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI9_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI9_ECP_SHIFT)) & DMA_DCHPRI9_ECP_MASK)
/*! @} */

/*! @name DCHPRI8 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI8_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI8_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI8_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI8_CHPRI_SHIFT)) & DMA_DCHPRI8_CHPRI_MASK)

#define DMA_DCHPRI8_GRPPRI_MASK                  (0x30U)
#define DMA_DCHPRI8_GRPPRI_SHIFT                 (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI8_GRPPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI8_GRPPRI_SHIFT)) & DMA_DCHPRI8_GRPPRI_MASK)

#define DMA_DCHPRI8_DPA_MASK                     (0x40U)
#define DMA_DCHPRI8_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI8_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI8_DPA_SHIFT)) & DMA_DCHPRI8_DPA_MASK)

#define DMA_DCHPRI8_ECP_MASK                     (0x80U)
#define DMA_DCHPRI8_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI8_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI8_ECP_SHIFT)) & DMA_DCHPRI8_ECP_MASK)
/*! @} */

/*! @name DCHPRI15 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI15_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI15_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI15_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI15_CHPRI_SHIFT)) & DMA_DCHPRI15_CHPRI_MASK)

#define DMA_DCHPRI15_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI15_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI15_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI15_GRPPRI_SHIFT)) & DMA_DCHPRI15_GRPPRI_MASK)

#define DMA_DCHPRI15_DPA_MASK                    (0x40U)
#define DMA_DCHPRI15_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI15_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI15_DPA_SHIFT)) & DMA_DCHPRI15_DPA_MASK)

#define DMA_DCHPRI15_ECP_MASK                    (0x80U)
#define DMA_DCHPRI15_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI15_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI15_ECP_SHIFT)) & DMA_DCHPRI15_ECP_MASK)
/*! @} */

/*! @name DCHPRI14 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI14_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI14_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI14_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI14_CHPRI_SHIFT)) & DMA_DCHPRI14_CHPRI_MASK)

#define DMA_DCHPRI14_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI14_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI14_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI14_GRPPRI_SHIFT)) & DMA_DCHPRI14_GRPPRI_MASK)

#define DMA_DCHPRI14_DPA_MASK                    (0x40U)
#define DMA_DCHPRI14_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI14_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI14_DPA_SHIFT)) & DMA_DCHPRI14_DPA_MASK)

#define DMA_DCHPRI14_ECP_MASK                    (0x80U)
#define DMA_DCHPRI14_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI14_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI14_ECP_SHIFT)) & DMA_DCHPRI14_ECP_MASK)
/*! @} */

/*! @name DCHPRI13 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI13_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI13_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI13_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI13_CHPRI_SHIFT)) & DMA_DCHPRI13_CHPRI_MASK)

#define DMA_DCHPRI13_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI13_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI13_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI13_GRPPRI_SHIFT)) & DMA_DCHPRI13_GRPPRI_MASK)

#define DMA_DCHPRI13_DPA_MASK                    (0x40U)
#define DMA_DCHPRI13_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI13_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI13_DPA_SHIFT)) & DMA_DCHPRI13_DPA_MASK)

#define DMA_DCHPRI13_ECP_MASK                    (0x80U)
#define DMA_DCHPRI13_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI13_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI13_ECP_SHIFT)) & DMA_DCHPRI13_ECP_MASK)
/*! @} */

/*! @name DCHPRI12 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI12_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI12_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI12_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI12_CHPRI_SHIFT)) & DMA_DCHPRI12_CHPRI_MASK)

#define DMA_DCHPRI12_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI12_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI12_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI12_GRPPRI_SHIFT)) & DMA_DCHPRI12_GRPPRI_MASK)

#define DMA_DCHPRI12_DPA_MASK                    (0x40U)
#define DMA_DCHPRI12_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI12_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI12_DPA_SHIFT)) & DMA_DCHPRI12_DPA_MASK)

#define DMA_DCHPRI12_ECP_MASK                    (0x80U)
#define DMA_DCHPRI12_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI12_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI12_ECP_SHIFT)) & DMA_DCHPRI12_ECP_MASK)
/*! @} */

/*! @name DCHPRI19 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI19_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI19_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI19_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI19_CHPRI_SHIFT)) & DMA_DCHPRI19_CHPRI_MASK)

#define DMA_DCHPRI19_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI19_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI19_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI19_GRPPRI_SHIFT)) & DMA_DCHPRI19_GRPPRI_MASK)

#define DMA_DCHPRI19_DPA_MASK                    (0x40U)
#define DMA_DCHPRI19_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI19_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI19_DPA_SHIFT)) & DMA_DCHPRI19_DPA_MASK)

#define DMA_DCHPRI19_ECP_MASK                    (0x80U)
#define DMA_DCHPRI19_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI19_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI19_ECP_SHIFT)) & DMA_DCHPRI19_ECP_MASK)
/*! @} */

/*! @name DCHPRI18 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI18_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI18_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI18_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI18_CHPRI_SHIFT)) & DMA_DCHPRI18_CHPRI_MASK)

#define DMA_DCHPRI18_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI18_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI18_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI18_GRPPRI_SHIFT)) & DMA_DCHPRI18_GRPPRI_MASK)

#define DMA_DCHPRI18_DPA_MASK                    (0x40U)
#define DMA_DCHPRI18_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI18_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI18_DPA_SHIFT)) & DMA_DCHPRI18_DPA_MASK)

#define DMA_DCHPRI18_ECP_MASK                    (0x80U)
#define DMA_DCHPRI18_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI18_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI18_ECP_SHIFT)) & DMA_DCHPRI18_ECP_MASK)
/*! @} */

/*! @name DCHPRI17 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI17_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI17_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI17_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI17_CHPRI_SHIFT)) & DMA_DCHPRI17_CHPRI_MASK)

#define DMA_DCHPRI17_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI17_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI17_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI17_GRPPRI_SHIFT)) & DMA_DCHPRI17_GRPPRI_MASK)

#define DMA_DCHPRI17_DPA_MASK                    (0x40U)
#define DMA_DCHPRI17_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI17_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI17_DPA_SHIFT)) & DMA_DCHPRI17_DPA_MASK)

#define DMA_DCHPRI17_ECP_MASK                    (0x80U)
#define DMA_DCHPRI17_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI17_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI17_ECP_SHIFT)) & DMA_DCHPRI17_ECP_MASK)
/*! @} */

/*! @name DCHPRI16 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI16_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI16_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI16_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI16_CHPRI_SHIFT)) & DMA_DCHPRI16_CHPRI_MASK)

#define DMA_DCHPRI16_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI16_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI16_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI16_GRPPRI_SHIFT)) & DMA_DCHPRI16_GRPPRI_MASK)

#define DMA_DCHPRI16_DPA_MASK                    (0x40U)
#define DMA_DCHPRI16_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI16_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI16_DPA_SHIFT)) & DMA_DCHPRI16_DPA_MASK)

#define DMA_DCHPRI16_ECP_MASK                    (0x80U)
#define DMA_DCHPRI16_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI16_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI16_ECP_SHIFT)) & DMA_DCHPRI16_ECP_MASK)
/*! @} */

/*! @name DCHPRI23 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI23_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI23_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI23_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI23_CHPRI_SHIFT)) & DMA_DCHPRI23_CHPRI_MASK)

#define DMA_DCHPRI23_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI23_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI23_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI23_GRPPRI_SHIFT)) & DMA_DCHPRI23_GRPPRI_MASK)

#define DMA_DCHPRI23_DPA_MASK                    (0x40U)
#define DMA_DCHPRI23_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI23_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI23_DPA_SHIFT)) & DMA_DCHPRI23_DPA_MASK)

#define DMA_DCHPRI23_ECP_MASK                    (0x80U)
#define DMA_DCHPRI23_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI23_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI23_ECP_SHIFT)) & DMA_DCHPRI23_ECP_MASK)
/*! @} */

/*! @name DCHPRI22 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI22_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI22_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI22_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI22_CHPRI_SHIFT)) & DMA_DCHPRI22_CHPRI_MASK)

#define DMA_DCHPRI22_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI22_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI22_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI22_GRPPRI_SHIFT)) & DMA_DCHPRI22_GRPPRI_MASK)

#define DMA_DCHPRI22_DPA_MASK                    (0x40U)
#define DMA_DCHPRI22_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI22_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI22_DPA_SHIFT)) & DMA_DCHPRI22_DPA_MASK)

#define DMA_DCHPRI22_ECP_MASK                    (0x80U)
#define DMA_DCHPRI22_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI22_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI22_ECP_SHIFT)) & DMA_DCHPRI22_ECP_MASK)
/*! @} */

/*! @name DCHPRI21 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI21_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI21_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI21_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI21_CHPRI_SHIFT)) & DMA_DCHPRI21_CHPRI_MASK)

#define DMA_DCHPRI21_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI21_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI21_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI21_GRPPRI_SHIFT)) & DMA_DCHPRI21_GRPPRI_MASK)

#define DMA_DCHPRI21_DPA_MASK                    (0x40U)
#define DMA_DCHPRI21_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI21_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI21_DPA_SHIFT)) & DMA_DCHPRI21_DPA_MASK)

#define DMA_DCHPRI21_ECP_MASK                    (0x80U)
#define DMA_DCHPRI21_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI21_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI21_ECP_SHIFT)) & DMA_DCHPRI21_ECP_MASK)
/*! @} */

/*! @name DCHPRI20 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI20_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI20_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI20_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI20_CHPRI_SHIFT)) & DMA_DCHPRI20_CHPRI_MASK)

#define DMA_DCHPRI20_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI20_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI20_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI20_GRPPRI_SHIFT)) & DMA_DCHPRI20_GRPPRI_MASK)

#define DMA_DCHPRI20_DPA_MASK                    (0x40U)
#define DMA_DCHPRI20_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI20_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI20_DPA_SHIFT)) & DMA_DCHPRI20_DPA_MASK)

#define DMA_DCHPRI20_ECP_MASK                    (0x80U)
#define DMA_DCHPRI20_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI20_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI20_ECP_SHIFT)) & DMA_DCHPRI20_ECP_MASK)
/*! @} */

/*! @name DCHPRI27 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI27_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI27_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI27_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI27_CHPRI_SHIFT)) & DMA_DCHPRI27_CHPRI_MASK)

#define DMA_DCHPRI27_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI27_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI27_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI27_GRPPRI_SHIFT)) & DMA_DCHPRI27_GRPPRI_MASK)

#define DMA_DCHPRI27_DPA_MASK                    (0x40U)
#define DMA_DCHPRI27_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI27_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI27_DPA_SHIFT)) & DMA_DCHPRI27_DPA_MASK)

#define DMA_DCHPRI27_ECP_MASK                    (0x80U)
#define DMA_DCHPRI27_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI27_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI27_ECP_SHIFT)) & DMA_DCHPRI27_ECP_MASK)
/*! @} */

/*! @name DCHPRI26 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI26_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI26_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI26_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI26_CHPRI_SHIFT)) & DMA_DCHPRI26_CHPRI_MASK)

#define DMA_DCHPRI26_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI26_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI26_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI26_GRPPRI_SHIFT)) & DMA_DCHPRI26_GRPPRI_MASK)

#define DMA_DCHPRI26_DPA_MASK                    (0x40U)
#define DMA_DCHPRI26_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI26_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI26_DPA_SHIFT)) & DMA_DCHPRI26_DPA_MASK)

#define DMA_DCHPRI26_ECP_MASK                    (0x80U)
#define DMA_DCHPRI26_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI26_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI26_ECP_SHIFT)) & DMA_DCHPRI26_ECP_MASK)
/*! @} */

/*! @name DCHPRI25 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI25_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI25_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI25_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI25_CHPRI_SHIFT)) & DMA_DCHPRI25_CHPRI_MASK)

#define DMA_DCHPRI25_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI25_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI25_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI25_GRPPRI_SHIFT)) & DMA_DCHPRI25_GRPPRI_MASK)

#define DMA_DCHPRI25_DPA_MASK                    (0x40U)
#define DMA_DCHPRI25_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI25_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI25_DPA_SHIFT)) & DMA_DCHPRI25_DPA_MASK)

#define DMA_DCHPRI25_ECP_MASK                    (0x80U)
#define DMA_DCHPRI25_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI25_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI25_ECP_SHIFT)) & DMA_DCHPRI25_ECP_MASK)
/*! @} */

/*! @name DCHPRI24 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI24_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI24_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI24_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI24_CHPRI_SHIFT)) & DMA_DCHPRI24_CHPRI_MASK)

#define DMA_DCHPRI24_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI24_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI24_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI24_GRPPRI_SHIFT)) & DMA_DCHPRI24_GRPPRI_MASK)

#define DMA_DCHPRI24_DPA_MASK                    (0x40U)
#define DMA_DCHPRI24_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI24_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI24_DPA_SHIFT)) & DMA_DCHPRI24_DPA_MASK)

#define DMA_DCHPRI24_ECP_MASK                    (0x80U)
#define DMA_DCHPRI24_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI24_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI24_ECP_SHIFT)) & DMA_DCHPRI24_ECP_MASK)
/*! @} */

/*! @name DCHPRI31 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI31_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI31_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI31_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI31_CHPRI_SHIFT)) & DMA_DCHPRI31_CHPRI_MASK)

#define DMA_DCHPRI31_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI31_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI31_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI31_GRPPRI_SHIFT)) & DMA_DCHPRI31_GRPPRI_MASK)

#define DMA_DCHPRI31_DPA_MASK                    (0x40U)
#define DMA_DCHPRI31_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI31_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI31_DPA_SHIFT)) & DMA_DCHPRI31_DPA_MASK)

#define DMA_DCHPRI31_ECP_MASK                    (0x80U)
#define DMA_DCHPRI31_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI31_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI31_ECP_SHIFT)) & DMA_DCHPRI31_ECP_MASK)
/*! @} */

/*! @name DCHPRI30 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI30_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI30_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI30_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI30_CHPRI_SHIFT)) & DMA_DCHPRI30_CHPRI_MASK)

#define DMA_DCHPRI30_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI30_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI30_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI30_GRPPRI_SHIFT)) & DMA_DCHPRI30_GRPPRI_MASK)

#define DMA_DCHPRI30_DPA_MASK                    (0x40U)
#define DMA_DCHPRI30_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI30_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI30_DPA_SHIFT)) & DMA_DCHPRI30_DPA_MASK)

#define DMA_DCHPRI30_ECP_MASK                    (0x80U)
#define DMA_DCHPRI30_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI30_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI30_ECP_SHIFT)) & DMA_DCHPRI30_ECP_MASK)
/*! @} */

/*! @name DCHPRI29 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI29_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI29_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI29_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI29_CHPRI_SHIFT)) & DMA_DCHPRI29_CHPRI_MASK)

#define DMA_DCHPRI29_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI29_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI29_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI29_GRPPRI_SHIFT)) & DMA_DCHPRI29_GRPPRI_MASK)

#define DMA_DCHPRI29_DPA_MASK                    (0x40U)
#define DMA_DCHPRI29_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI29_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI29_DPA_SHIFT)) & DMA_DCHPRI29_DPA_MASK)

#define DMA_DCHPRI29_ECP_MASK                    (0x80U)
#define DMA_DCHPRI29_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI29_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI29_ECP_SHIFT)) & DMA_DCHPRI29_ECP_MASK)
/*! @} */

/*! @name DCHPRI28 - Channel n Priority Register */
/*! @{ */

#define DMA_DCHPRI28_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI28_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority
 */
#define DMA_DCHPRI28_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI28_CHPRI_SHIFT)) & DMA_DCHPRI28_CHPRI_MASK)

#define DMA_DCHPRI28_GRPPRI_MASK                 (0x30U)
#define DMA_DCHPRI28_GRPPRI_SHIFT                (4U)
/*! GRPPRI - Channel n Current Group Priority
 */
#define DMA_DCHPRI28_GRPPRI(x)                   (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI28_GRPPRI_SHIFT)) & DMA_DCHPRI28_GRPPRI_MASK)

#define DMA_DCHPRI28_DPA_MASK                    (0x40U)
#define DMA_DCHPRI28_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI28_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI28_DPA_SHIFT)) & DMA_DCHPRI28_DPA_MASK)

#define DMA_DCHPRI28_ECP_MASK                    (0x80U)
#define DMA_DCHPRI28_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI28_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI28_ECP_SHIFT)) & DMA_DCHPRI28_ECP_MASK)
/*! @} */

/*! @name SADDR - TCD Source Address */
/*! @{ */

#define DMA_SADDR_SADDR_MASK                     (0xFFFFFFFFU)
#define DMA_SADDR_SADDR_SHIFT                    (0U)
/*! SADDR - Source Address
 */
#define DMA_SADDR_SADDR(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_SADDR_SADDR_SHIFT)) & DMA_SADDR_SADDR_MASK)
/*! @} */

/* The count of DMA_SADDR */
#define DMA_SADDR_COUNT                          (32U)

/*! @name SOFF - TCD Signed Source Address Offset */
/*! @{ */

#define DMA_SOFF_SOFF_MASK                       (0xFFFFU)
#define DMA_SOFF_SOFF_SHIFT                      (0U)
/*! SOFF - Source address signed offset
 */
#define DMA_SOFF_SOFF(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_SOFF_SOFF_SHIFT)) & DMA_SOFF_SOFF_MASK)
/*! @} */

/* The count of DMA_SOFF */
#define DMA_SOFF_COUNT                           (32U)

/*! @name ATTR - TCD Transfer Attributes */
/*! @{ */

#define DMA_ATTR_DSIZE_MASK                      (0x7U)
#define DMA_ATTR_DSIZE_SHIFT                     (0U)
/*! DSIZE - Destination data transfer size
 */
#define DMA_ATTR_DSIZE(x)                        (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_DSIZE_SHIFT)) & DMA_ATTR_DSIZE_MASK)

#define DMA_ATTR_DMOD_MASK                       (0xF8U)
#define DMA_ATTR_DMOD_SHIFT                      (3U)
/*! DMOD - Destination Address Modulo
 */
#define DMA_ATTR_DMOD(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_DMOD_SHIFT)) & DMA_ATTR_DMOD_MASK)

#define DMA_ATTR_SSIZE_MASK                      (0x700U)
#define DMA_ATTR_SSIZE_SHIFT                     (8U)
/*! SSIZE - Source data transfer size
 *  0b000..8-bit
 *  0b001..16-bit
 *  0b010..32-bit
 *  0b011..64-bit
 *  0b100..Reserved
 *  0b101..32-byte burst (4 beats of 64 bits)
 *  0b110..Reserved
 *  0b111..Reserved
 */
#define DMA_ATTR_SSIZE(x)                        (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_SSIZE_SHIFT)) & DMA_ATTR_SSIZE_MASK)

#define DMA_ATTR_SMOD_MASK                       (0xF800U)
#define DMA_ATTR_SMOD_SHIFT                      (11U)
/*! SMOD - Source Address Modulo
 *  0b00000..Source address modulo feature is disabled
 *  0b00001-0b11111..This value defines a specific address range specified to be the value after SADDR + SOFF
 *                   calculation is performed on the original register value. Setting this field provides the ability
 *                   to implement a circular data queue easily. For data queues requiring power-of-2 size bytes, the
 *                   queue should start at a 0-modulo-size address and the SMOD field should be set to the
 *                   appropriate value for the queue, freezing the desired number of upper address bits. The value
 *                   programmed into this field specifies the number of lower address bits allowed to change. For a
 *                   circular queue application, the SOFF is typically set to the transfer size to implement
 *                   post-increment addressing with the SMOD function constraining the addresses to a 0-modulo-size range.
 */
#define DMA_ATTR_SMOD(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_SMOD_SHIFT)) & DMA_ATTR_SMOD_MASK)
/*! @} */

/* The count of DMA_ATTR */
#define DMA_ATTR_COUNT                           (32U)

/*! @name NBYTES_MLNO - TCD Minor Byte Count (Minor Loop Mapping Disabled) */
/*! @{ */

#define DMA_NBYTES_MLNO_NBYTES_MASK              (0xFFFFFFFFU)
#define DMA_NBYTES_MLNO_NBYTES_SHIFT             (0U)
/*! NBYTES - Minor Byte Transfer Count
 */
#define DMA_NBYTES_MLNO_NBYTES(x)                (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLNO_NBYTES_SHIFT)) & DMA_NBYTES_MLNO_NBYTES_MASK)
/*! @} */

/* The count of DMA_NBYTES_MLNO */
#define DMA_NBYTES_MLNO_COUNT                    (32U)

/*! @name NBYTES_MLOFFNO - TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled) */
/*! @{ */

#define DMA_NBYTES_MLOFFNO_NBYTES_MASK           (0x3FFFFFFFU)
#define DMA_NBYTES_MLOFFNO_NBYTES_SHIFT          (0U)
/*! NBYTES - Minor Byte Transfer Count
 */
#define DMA_NBYTES_MLOFFNO_NBYTES(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFNO_NBYTES_SHIFT)) & DMA_NBYTES_MLOFFNO_NBYTES_MASK)

#define DMA_NBYTES_MLOFFNO_DMLOE_MASK            (0x40000000U)
#define DMA_NBYTES_MLOFFNO_DMLOE_SHIFT           (30U)
/*! DMLOE - Destination Minor Loop Offset enable
 *  0b0..The minor loop offset is not applied to the DADDR
 *  0b1..The minor loop offset is applied to the DADDR
 */
#define DMA_NBYTES_MLOFFNO_DMLOE(x)              (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFNO_DMLOE_SHIFT)) & DMA_NBYTES_MLOFFNO_DMLOE_MASK)

#define DMA_NBYTES_MLOFFNO_SMLOE_MASK            (0x80000000U)
#define DMA_NBYTES_MLOFFNO_SMLOE_SHIFT           (31U)
/*! SMLOE - Source Minor Loop Offset Enable
 *  0b0..The minor loop offset is not applied to the SADDR
 *  0b1..The minor loop offset is applied to the SADDR
 */
#define DMA_NBYTES_MLOFFNO_SMLOE(x)              (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFNO_SMLOE_SHIFT)) & DMA_NBYTES_MLOFFNO_SMLOE_MASK)
/*! @} */

/* The count of DMA_NBYTES_MLOFFNO */
#define DMA_NBYTES_MLOFFNO_COUNT                 (32U)

/*! @name NBYTES_MLOFFYES - TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled) */
/*! @{ */

#define DMA_NBYTES_MLOFFYES_NBYTES_MASK          (0x3FFU)
#define DMA_NBYTES_MLOFFYES_NBYTES_SHIFT         (0U)
/*! NBYTES - Minor Byte Transfer Count
 */
#define DMA_NBYTES_MLOFFYES_NBYTES(x)            (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_NBYTES_SHIFT)) & DMA_NBYTES_MLOFFYES_NBYTES_MASK)

#define DMA_NBYTES_MLOFFYES_MLOFF_MASK           (0x3FFFFC00U)
#define DMA_NBYTES_MLOFFYES_MLOFF_SHIFT          (10U)
/*! MLOFF - If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the
 *    source or destination address to form the next-state value after the minor loop completes.
 */
#define DMA_NBYTES_MLOFFYES_MLOFF(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_MLOFF_SHIFT)) & DMA_NBYTES_MLOFFYES_MLOFF_MASK)

#define DMA_NBYTES_MLOFFYES_DMLOE_MASK           (0x40000000U)
#define DMA_NBYTES_MLOFFYES_DMLOE_SHIFT          (30U)
/*! DMLOE - Destination Minor Loop Offset enable
 *  0b0..The minor loop offset is not applied to the DADDR
 *  0b1..The minor loop offset is applied to the DADDR
 */
#define DMA_NBYTES_MLOFFYES_DMLOE(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_DMLOE_SHIFT)) & DMA_NBYTES_MLOFFYES_DMLOE_MASK)

#define DMA_NBYTES_MLOFFYES_SMLOE_MASK           (0x80000000U)
#define DMA_NBYTES_MLOFFYES_SMLOE_SHIFT          (31U)
/*! SMLOE - Source Minor Loop Offset Enable
 *  0b0..The minor loop offset is not applied to the SADDR
 *  0b1..The minor loop offset is applied to the SADDR
 */
#define DMA_NBYTES_MLOFFYES_SMLOE(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_SMLOE_SHIFT)) & DMA_NBYTES_MLOFFYES_SMLOE_MASK)
/*! @} */

/* The count of DMA_NBYTES_MLOFFYES */
#define DMA_NBYTES_MLOFFYES_COUNT                (32U)

/*! @name SLAST - TCD Last Source Address Adjustment */
/*! @{ */

#define DMA_SLAST_SLAST_MASK                     (0xFFFFFFFFU)
#define DMA_SLAST_SLAST_SHIFT                    (0U)
/*! SLAST - Last Source Address Adjustment
 */
#define DMA_SLAST_SLAST(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_SLAST_SLAST_SHIFT)) & DMA_SLAST_SLAST_MASK)
/*! @} */

/* The count of DMA_SLAST */
#define DMA_SLAST_COUNT                          (32U)

/*! @name DADDR - TCD Destination Address */
/*! @{ */

#define DMA_DADDR_DADDR_MASK                     (0xFFFFFFFFU)
#define DMA_DADDR_DADDR_SHIFT                    (0U)
/*! DADDR - Destination Address
 */
#define DMA_DADDR_DADDR(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_DADDR_DADDR_SHIFT)) & DMA_DADDR_DADDR_MASK)
/*! @} */

/* The count of DMA_DADDR */
#define DMA_DADDR_COUNT                          (32U)

/*! @name DOFF - TCD Signed Destination Address Offset */
/*! @{ */

#define DMA_DOFF_DOFF_MASK                       (0xFFFFU)
#define DMA_DOFF_DOFF_SHIFT                      (0U)
/*! DOFF - Destination Address Signed Offset
 */
#define DMA_DOFF_DOFF(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_DOFF_DOFF_SHIFT)) & DMA_DOFF_DOFF_MASK)
/*! @} */

/* The count of DMA_DOFF */
#define DMA_DOFF_COUNT                           (32U)

/*! @name CITER_ELINKNO - TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
/*! @{ */

#define DMA_CITER_ELINKNO_CITER_MASK             (0x7FFFU)
#define DMA_CITER_ELINKNO_CITER_SHIFT            (0U)
/*! CITER - Current Major Iteration Count
 */
#define DMA_CITER_ELINKNO_CITER(x)               (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKNO_CITER_SHIFT)) & DMA_CITER_ELINKNO_CITER_MASK)

#define DMA_CITER_ELINKNO_ELINK_MASK             (0x8000U)
#define DMA_CITER_ELINKNO_ELINK_SHIFT            (15U)
/*! ELINK - Enable channel-to-channel linking on minor-loop complete
 *  0b0..The channel-to-channel linking is disabled
 *  0b1..The channel-to-channel linking is enabled
 */
#define DMA_CITER_ELINKNO_ELINK(x)               (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKNO_ELINK_SHIFT)) & DMA_CITER_ELINKNO_ELINK_MASK)
/*! @} */

/* The count of DMA_CITER_ELINKNO */
#define DMA_CITER_ELINKNO_COUNT                  (32U)

/*! @name CITER_ELINKYES - TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
/*! @{ */

#define DMA_CITER_ELINKYES_CITER_MASK            (0x1FFU)
#define DMA_CITER_ELINKYES_CITER_SHIFT           (0U)
/*! CITER - Current Major Iteration Count
 */
#define DMA_CITER_ELINKYES_CITER(x)              (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKYES_CITER_SHIFT)) & DMA_CITER_ELINKYES_CITER_MASK)

#define DMA_CITER_ELINKYES_LINKCH_MASK           (0x3E00U)
#define DMA_CITER_ELINKYES_LINKCH_SHIFT          (9U)
/*! LINKCH - Minor Loop Link Channel Number
 */
#define DMA_CITER_ELINKYES_LINKCH(x)             (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKYES_LINKCH_SHIFT)) & DMA_CITER_ELINKYES_LINKCH_MASK)

#define DMA_CITER_ELINKYES_ELINK_MASK            (0x8000U)
#define DMA_CITER_ELINKYES_ELINK_SHIFT           (15U)
/*! ELINK - Enable channel-to-channel linking on minor-loop complete
 *  0b0..The channel-to-channel linking is disabled
 *  0b1..The channel-to-channel linking is enabled
 */
#define DMA_CITER_ELINKYES_ELINK(x)              (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKYES_ELINK_SHIFT)) & DMA_CITER_ELINKYES_ELINK_MASK)
/*! @} */

/* The count of DMA_CITER_ELINKYES */
#define DMA_CITER_ELINKYES_COUNT                 (32U)

/*! @name DLAST_SGA - TCD Last Destination Address Adjustment/Scatter Gather Address */
/*! @{ */

#define DMA_DLAST_SGA_DLASTSGA_MASK              (0xFFFFFFFFU)
#define DMA_DLAST_SGA_DLASTSGA_SHIFT             (0U)
/*! DLASTSGA - DLASTSGA
 */
#define DMA_DLAST_SGA_DLASTSGA(x)                (((uint32_t)(((uint32_t)(x)) << DMA_DLAST_SGA_DLASTSGA_SHIFT)) & DMA_DLAST_SGA_DLASTSGA_MASK)
/*! @} */

/* The count of DMA_DLAST_SGA */
#define DMA_DLAST_SGA_COUNT                      (32U)

/*! @name CSR - TCD Control and Status */
/*! @{ */

#define DMA_CSR_START_MASK                       (0x1U)
#define DMA_CSR_START_SHIFT                      (0U)
/*! START - Channel Start
 *  0b0..The channel is not explicitly started.
 *  0b1..The channel is explicitly started via a software initiated service request.
 */
#define DMA_CSR_START(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_CSR_START_SHIFT)) & DMA_CSR_START_MASK)

#define DMA_CSR_INTMAJOR_MASK                    (0x2U)
#define DMA_CSR_INTMAJOR_SHIFT                   (1U)
/*! INTMAJOR - Enable an interrupt when major iteration count completes.
 *  0b0..The end-of-major loop interrupt is disabled.
 *  0b1..The end-of-major loop interrupt is enabled.
 */
#define DMA_CSR_INTMAJOR(x)                      (((uint16_t)(((uint16_t)(x)) << DMA_CSR_INTMAJOR_SHIFT)) & DMA_CSR_INTMAJOR_MASK)

#define DMA_CSR_INTHALF_MASK                     (0x4U)
#define DMA_CSR_INTHALF_SHIFT                    (2U)
/*! INTHALF - Enable an interrupt when major counter is half complete.
 *  0b0..The half-point interrupt is disabled.
 *  0b1..The half-point interrupt is enabled.
 */
#define DMA_CSR_INTHALF(x)                       (((uint16_t)(((uint16_t)(x)) << DMA_CSR_INTHALF_SHIFT)) & DMA_CSR_INTHALF_MASK)

#define DMA_CSR_DREQ_MASK                        (0x8U)
#define DMA_CSR_DREQ_SHIFT                       (3U)
/*! DREQ - Disable Request
 *  0b0..The channel's ERQ bit is not affected.
 *  0b1..The channel's ERQ bit is cleared when the major loop is complete.
 */
#define DMA_CSR_DREQ(x)                          (((uint16_t)(((uint16_t)(x)) << DMA_CSR_DREQ_SHIFT)) & DMA_CSR_DREQ_MASK)

#define DMA_CSR_ESG_MASK                         (0x10U)
#define DMA_CSR_ESG_SHIFT                        (4U)
/*! ESG - Enable Scatter/Gather Processing
 *  0b0..The current channel's TCD is normal format.
 *  0b1..The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer
 *       to the next TCD to be loaded into this channel after the major loop completes its execution.
 */
#define DMA_CSR_ESG(x)                           (((uint16_t)(((uint16_t)(x)) << DMA_CSR_ESG_SHIFT)) & DMA_CSR_ESG_MASK)

#define DMA_CSR_MAJORELINK_MASK                  (0x20U)
#define DMA_CSR_MAJORELINK_SHIFT                 (5U)
/*! MAJORELINK - Enable channel-to-channel linking on major loop complete
 *  0b0..The channel-to-channel linking is disabled.
 *  0b1..The channel-to-channel linking is enabled.
 */
#define DMA_CSR_MAJORELINK(x)                    (((uint16_t)(((uint16_t)(x)) << DMA_CSR_MAJORELINK_SHIFT)) & DMA_CSR_MAJORELINK_MASK)

#define DMA_CSR_ACTIVE_MASK                      (0x40U)
#define DMA_CSR_ACTIVE_SHIFT                     (6U)
/*! ACTIVE - Channel Active
 */
#define DMA_CSR_ACTIVE(x)                        (((uint16_t)(((uint16_t)(x)) << DMA_CSR_ACTIVE_SHIFT)) & DMA_CSR_ACTIVE_MASK)

#define DMA_CSR_DONE_MASK                        (0x80U)
#define DMA_CSR_DONE_SHIFT                       (7U)
/*! DONE - Channel Done
 */
#define DMA_CSR_DONE(x)                          (((uint16_t)(((uint16_t)(x)) << DMA_CSR_DONE_SHIFT)) & DMA_CSR_DONE_MASK)

#define DMA_CSR_MAJORLINKCH_MASK                 (0x1F00U)
#define DMA_CSR_MAJORLINKCH_SHIFT                (8U)
/*! MAJORLINKCH - Major Loop Link Channel Number
 */
#define DMA_CSR_MAJORLINKCH(x)                   (((uint16_t)(((uint16_t)(x)) << DMA_CSR_MAJORLINKCH_SHIFT)) & DMA_CSR_MAJORLINKCH_MASK)

#define DMA_CSR_BWC_MASK                         (0xC000U)
#define DMA_CSR_BWC_SHIFT                        (14U)
/*! BWC - Bandwidth Control
 *  0b00..No eDMA engine stalls.
 *  0b01..Reserved
 *  0b10..eDMA engine stalls for 4 cycles after each R/W.
 *  0b11..eDMA engine stalls for 8 cycles after each R/W.
 */
#define DMA_CSR_BWC(x)                           (((uint16_t)(((uint16_t)(x)) << DMA_CSR_BWC_SHIFT)) & DMA_CSR_BWC_MASK)
/*! @} */

/* The count of DMA_CSR */
#define DMA_CSR_COUNT                            (32U)

/*! @name BITER_ELINKNO - TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
/*! @{ */

#define DMA_BITER_ELINKNO_BITER_MASK             (0x7FFFU)
#define DMA_BITER_ELINKNO_BITER_SHIFT            (0U)
/*! BITER - Starting Major Iteration Count
 */
#define DMA_BITER_ELINKNO_BITER(x)               (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKNO_BITER_SHIFT)) & DMA_BITER_ELINKNO_BITER_MASK)

#define DMA_BITER_ELINKNO_ELINK_MASK             (0x8000U)
#define DMA_BITER_ELINKNO_ELINK_SHIFT            (15U)
/*! ELINK - Enables channel-to-channel linking on minor loop complete
 *  0b0..The channel-to-channel linking is disabled
 *  0b1..The channel-to-channel linking is enabled
 */
#define DMA_BITER_ELINKNO_ELINK(x)               (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKNO_ELINK_SHIFT)) & DMA_BITER_ELINKNO_ELINK_MASK)
/*! @} */

/* The count of DMA_BITER_ELINKNO */
#define DMA_BITER_ELINKNO_COUNT                  (32U)

/*! @name BITER_ELINKYES - TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
/*! @{ */

#define DMA_BITER_ELINKYES_BITER_MASK            (0x1FFU)
#define DMA_BITER_ELINKYES_BITER_SHIFT           (0U)
/*! BITER - Starting major iteration count
 */
#define DMA_BITER_ELINKYES_BITER(x)              (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKYES_BITER_SHIFT)) & DMA_BITER_ELINKYES_BITER_MASK)

#define DMA_BITER_ELINKYES_LINKCH_MASK           (0x3E00U)
#define DMA_BITER_ELINKYES_LINKCH_SHIFT          (9U)
/*! LINKCH - Link Channel Number
 */
#define DMA_BITER_ELINKYES_LINKCH(x)             (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKYES_LINKCH_SHIFT)) & DMA_BITER_ELINKYES_LINKCH_MASK)

#define DMA_BITER_ELINKYES_ELINK_MASK            (0x8000U)
#define DMA_BITER_ELINKYES_ELINK_SHIFT           (15U)
/*! ELINK - Enables channel-to-channel linking on minor loop complete
 *  0b0..The channel-to-channel linking is disabled
 *  0b1..The channel-to-channel linking is enabled
 */
#define DMA_BITER_ELINKYES_ELINK(x)              (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKYES_ELINK_SHIFT)) & DMA_BITER_ELINKYES_ELINK_MASK)
/*! @} */

/* The count of DMA_BITER_ELINKYES */
#define DMA_BITER_ELINKYES_COUNT                 (32U)


/*!
 * @}
 */ /* end of group DMA_Register_Masks */


/* DMA - Peripheral instance base addresses */
/** Peripheral DMA0 base address */
#define DMA0_BASE                                (0x400E8000u)
/** Peripheral DMA0 base pointer */
#define DMA0                                     ((DMA_Type *)DMA0_BASE)
/** Array initializer of DMA peripheral base addresses */
#define DMA_BASE_ADDRS                           { DMA0_BASE }
/** Array initializer of DMA peripheral base pointers */
#define DMA_BASE_PTRS                            { DMA0 }
/** Interrupt vectors for the DMA peripheral type */
#define DMA_CHN_IRQS                             { { DMA0_DMA16_IRQn, DMA1_DMA17_IRQn, DMA2_DMA18_IRQn, DMA3_DMA19_IRQn, DMA4_DMA20_IRQn, DMA5_DMA21_IRQn, DMA6_DMA22_IRQn, DMA7_DMA23_IRQn, DMA8_DMA24_IRQn, DMA9_DMA25_IRQn, DMA10_DMA26_IRQn, DMA11_DMA27_IRQn, DMA12_DMA28_IRQn, DMA13_DMA29_IRQn, DMA14_DMA30_IRQn, DMA15_DMA31_IRQn, DMA0_DMA16_IRQn, DMA1_DMA17_IRQn, DMA2_DMA18_IRQn, DMA3_DMA19_IRQn, DMA4_DMA20_IRQn, DMA5_DMA21_IRQn, DMA6_DMA22_IRQn, DMA7_DMA23_IRQn, DMA8_DMA24_IRQn, DMA9_DMA25_IRQn, DMA10_DMA26_IRQn, DMA11_DMA27_IRQn, DMA12_DMA28_IRQn, DMA13_DMA29_IRQn, DMA14_DMA30_IRQn, DMA15_DMA31_IRQn } }
#define DMA_ERROR_IRQS                           { DMA_ERROR_IRQn }

/*!
 * @}
 */ /* end of group DMA_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- CCM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCM_Peripheral_Access_Layer CCM Peripheral Access Layer
 * @{
 */

/** CCM - Register Layout Typedef */
typedef struct {
  __IO uint32_t CCR;                               /**< CCM Control Register, offset: 0x0 */
       uint8_t RESERVED_0[4];
  __I  uint32_t CSR;                               /**< CCM Status Register, offset: 0x8 */
  __IO uint32_t CCSR;                              /**< CCM Clock Switcher Register, offset: 0xC */
  __IO uint32_t CACRR;                             /**< CCM Arm Clock Root Register, offset: 0x10 */
  __IO uint32_t CBCDR;                             /**< CCM Bus Clock Divider Register, offset: 0x14 */
  __IO uint32_t CBCMR;                             /**< CCM Bus Clock Multiplexer Register, offset: 0x18 */
  __IO uint32_t CSCMR1;                            /**< CCM Serial Clock Multiplexer Register 1, offset: 0x1C */
  __IO uint32_t CSCMR2;                            /**< CCM Serial Clock Multiplexer Register 2, offset: 0x20 */
  __IO uint32_t CSCDR1;                            /**< CCM Serial Clock Divider Register 1, offset: 0x24 */
  __IO uint32_t CS1CDR;                            /**< CCM Clock Divider Register, offset: 0x28 */
  __IO uint32_t CS2CDR;                            /**< CCM Clock Divider Register, offset: 0x2C */
  __IO uint32_t CDCDR;                             /**< CCM D1 Clock Divider Register, offset: 0x30 */
       uint8_t RESERVED_1[4];
  __IO uint32_t CSCDR2;                            /**< CCM Serial Clock Divider Register 2, offset: 0x38 */
  __IO uint32_t CSCDR3;                            /**< CCM Serial Clock Divider Register 3, offset: 0x3C */
       uint8_t RESERVED_2[8];
  __I  uint32_t CDHIPR;                            /**< CCM Divider Handshake In-Process Register, offset: 0x48 */
       uint8_t RESERVED_3[8];
  __IO uint32_t CLPCR;                             /**< CCM Low Power Control Register, offset: 0x54 */
  __IO uint32_t CISR;                              /**< CCM Interrupt Status Register, offset: 0x58 */
  __IO uint32_t CIMR;                              /**< CCM Interrupt Mask Register, offset: 0x5C */
  __IO uint32_t CCOSR;                             /**< CCM Clock Output Source Register, offset: 0x60 */
  __IO uint32_t CGPR;                              /**< CCM General Purpose Register, offset: 0x64 */
  __IO uint32_t CCGR0;                             /**< CCM Clock Gating Register 0, offset: 0x68 */
  __IO uint32_t CCGR1;                             /**< CCM Clock Gating Register 1, offset: 0x6C */
  __IO uint32_t CCGR2;                             /**< CCM Clock Gating Register 2, offset: 0x70 */
  __IO uint32_t CCGR3;                             /**< CCM Clock Gating Register 3, offset: 0x74 */
  __IO uint32_t CCGR4;                             /**< CCM Clock Gating Register 4, offset: 0x78 */
  __IO uint32_t CCGR5;                             /**< CCM Clock Gating Register 5, offset: 0x7C */
  __IO uint32_t CCGR6;                             /**< CCM Clock Gating Register 6, offset: 0x80 */
  __IO uint32_t CCGR7;                             /**< CCM Clock Gating Register 7, offset: 0x84 */
  __IO uint32_t CMEOR;                             /**< CCM Module Enable Overide Register, offset: 0x88 */
} CCM_Type;

/* ----------------------------------------------------------------------------
   -- CCM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCM_Register_Masks CCM Register Masks
 * @{
 */

/*! @name CCR - CCM Control Register */
/*! @{ */

#define CCM_CCR_OSCNT_MASK                       (0xFFU)
#define CCM_CCR_OSCNT_SHIFT                      (0U)
/*! OSCNT - Oscillator ready counter value. These bits define value of 32KHz counter, that serve as
 *    counter for oscillator lock time (count to n+1 ckil's). This is used for oscillator lock time.
 *    Current estimation is ~5ms. This counter will be used in ignition sequence and in wake from
 *    stop sequence if sbyos bit was defined, to notify that on chip oscillator output is ready for
 *    the dpll_ip to use and only then the gate in dpll_ip can be opened.
 */
#define CCM_CCR_OSCNT(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCR_OSCNT_SHIFT)) & CCM_CCR_OSCNT_MASK)

#define CCM_CCR_COSC_EN_MASK                     (0x1000U)
#define CCM_CCR_COSC_EN_SHIFT                    (12U)
/*! COSC_EN
 *  0b0..disable on chip oscillator
 *  0b1..enable on chip oscillator
 */
#define CCM_CCR_COSC_EN(x)                       (((uint32_t)(((uint32_t)(x)) << CCM_CCR_COSC_EN_SHIFT)) & CCM_CCR_COSC_EN_MASK)

#define CCM_CCR_REG_BYPASS_COUNT_MASK            (0x7E00000U)
#define CCM_CCR_REG_BYPASS_COUNT_SHIFT           (21U)
/*! REG_BYPASS_COUNT
 *  0b000000..no delay
 *  0b000001..1 CKIL clock period delay
 *  0b111111..63 CKIL clock periods delay
 */
#define CCM_CCR_REG_BYPASS_COUNT(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CCR_REG_BYPASS_COUNT_SHIFT)) & CCM_CCR_REG_BYPASS_COUNT_MASK)

#define CCM_CCR_RBC_EN_MASK                      (0x8000000U)
#define CCM_CCR_RBC_EN_SHIFT                     (27U)
/*! RBC_EN
 *  0b1..REG_BYPASS_COUNTER enabled.
 *  0b0..REG_BYPASS_COUNTER disabled
 */
#define CCM_CCR_RBC_EN(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCR_RBC_EN_SHIFT)) & CCM_CCR_RBC_EN_MASK)
/*! @} */

/*! @name CSR - CCM Status Register */
/*! @{ */

#define CCM_CSR_REF_EN_B_MASK                    (0x1U)
#define CCM_CSR_REF_EN_B_SHIFT                   (0U)
/*! REF_EN_B
 *  0b0..value of CCM_REF_EN_B is '0'
 *  0b1..value of CCM_REF_EN_B is '1'
 */
#define CCM_CSR_REF_EN_B(x)                      (((uint32_t)(((uint32_t)(x)) << CCM_CSR_REF_EN_B_SHIFT)) & CCM_CSR_REF_EN_B_MASK)

#define CCM_CSR_CAMP2_READY_MASK                 (0x8U)
#define CCM_CSR_CAMP2_READY_SHIFT                (3U)
/*! CAMP2_READY
 *  0b0..CAMP2 is not ready.
 *  0b1..CAMP2 is ready.
 */
#define CCM_CSR_CAMP2_READY(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CSR_CAMP2_READY_SHIFT)) & CCM_CSR_CAMP2_READY_MASK)

#define CCM_CSR_COSC_READY_MASK                  (0x20U)
#define CCM_CSR_COSC_READY_SHIFT                 (5U)
/*! COSC_READY
 *  0b0..on board oscillator is not ready.
 *  0b1..on board oscillator is ready.
 */
#define CCM_CSR_COSC_READY(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CSR_COSC_READY_SHIFT)) & CCM_CSR_COSC_READY_MASK)
/*! @} */

/*! @name CCSR - CCM Clock Switcher Register */
/*! @{ */

#define CCM_CCSR_PLL3_SW_CLK_SEL_MASK            (0x1U)
#define CCM_CCSR_PLL3_SW_CLK_SEL_SHIFT           (0U)
/*! PLL3_SW_CLK_SEL
 *  0b0..pll3_main_clk
 *  0b1..pll3 bypass clock
 */
#define CCM_CCSR_PLL3_SW_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CCSR_PLL3_SW_CLK_SEL_SHIFT)) & CCM_CCSR_PLL3_SW_CLK_SEL_MASK)
/*! @} */

/*! @name CACRR - CCM Arm Clock Root Register */
/*! @{ */

#define CCM_CACRR_ARM_PODF_MASK                  (0x7U)
#define CCM_CACRR_ARM_PODF_SHIFT                 (0U)
/*! ARM_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CACRR_ARM_PODF(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CACRR_ARM_PODF_SHIFT)) & CCM_CACRR_ARM_PODF_MASK)
/*! @} */

/*! @name CBCDR - CCM Bus Clock Divider Register */
/*! @{ */

#define CCM_CBCDR_SEMC_CLK_SEL_MASK              (0x40U)
#define CCM_CBCDR_SEMC_CLK_SEL_SHIFT             (6U)
/*! SEMC_CLK_SEL
 *  0b0..Periph_clk output will be used as SEMC clock root
 *  0b1..SEMC alternative clock will be used as SEMC clock root
 */
#define CCM_CBCDR_SEMC_CLK_SEL(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_SEMC_CLK_SEL_SHIFT)) & CCM_CBCDR_SEMC_CLK_SEL_MASK)

#define CCM_CBCDR_SEMC_ALT_CLK_SEL_MASK          (0x80U)
#define CCM_CBCDR_SEMC_ALT_CLK_SEL_SHIFT         (7U)
/*! SEMC_ALT_CLK_SEL
 *  0b0..PLL2 PFD2 will be selected as alternative clock for SEMC root clock
 *  0b1..PLL3 PFD1 will be selected as alternative clock for SEMC root clock
 */
#define CCM_CBCDR_SEMC_ALT_CLK_SEL(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_SEMC_ALT_CLK_SEL_SHIFT)) & CCM_CBCDR_SEMC_ALT_CLK_SEL_MASK)

#define CCM_CBCDR_IPG_PODF_MASK                  (0x300U)
#define CCM_CBCDR_IPG_PODF_SHIFT                 (8U)
/*! IPG_PODF
 *  0b00..divide by 1
 *  0b01..divide by 2
 *  0b10..divide by 3
 *  0b11..divide by 4
 */
#define CCM_CBCDR_IPG_PODF(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_IPG_PODF_SHIFT)) & CCM_CBCDR_IPG_PODF_MASK)

#define CCM_CBCDR_AHB_PODF_MASK                  (0x1C00U)
#define CCM_CBCDR_AHB_PODF_SHIFT                 (10U)
/*! AHB_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CBCDR_AHB_PODF(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_AHB_PODF_SHIFT)) & CCM_CBCDR_AHB_PODF_MASK)

#define CCM_CBCDR_SEMC_PODF_MASK                 (0x70000U)
#define CCM_CBCDR_SEMC_PODF_SHIFT                (16U)
/*! SEMC_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CBCDR_SEMC_PODF(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_SEMC_PODF_SHIFT)) & CCM_CBCDR_SEMC_PODF_MASK)

#define CCM_CBCDR_PERIPH_CLK_SEL_MASK            (0x2000000U)
#define CCM_CBCDR_PERIPH_CLK_SEL_SHIFT           (25U)
/*! PERIPH_CLK_SEL
 *  0b0..derive clock from pre_periph_clk_sel
 *  0b1..derive clock from periph_clk2_clk_divided
 */
#define CCM_CBCDR_PERIPH_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_PERIPH_CLK_SEL_SHIFT)) & CCM_CBCDR_PERIPH_CLK_SEL_MASK)

#define CCM_CBCDR_PERIPH_CLK2_PODF_MASK          (0x38000000U)
#define CCM_CBCDR_PERIPH_CLK2_PODF_SHIFT         (27U)
/*! PERIPH_CLK2_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CBCDR_PERIPH_CLK2_PODF(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_PERIPH_CLK2_PODF_SHIFT)) & CCM_CBCDR_PERIPH_CLK2_PODF_MASK)
/*! @} */

/*! @name CBCMR - CCM Bus Clock Multiplexer Register */
/*! @{ */

#define CCM_CBCMR_LPSPI_CLK_SEL_MASK             (0x30U)
#define CCM_CBCMR_LPSPI_CLK_SEL_SHIFT            (4U)
/*! LPSPI_CLK_SEL
 *  0b00..derive clock from PLL3 PFD1 clk
 *  0b01..derive clock from PLL3 PFD0
 *  0b10..derive clock from PLL2
 *  0b11..derive clock from PLL2 PFD2
 */
#define CCM_CBCMR_LPSPI_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_LPSPI_CLK_SEL_SHIFT)) & CCM_CBCMR_LPSPI_CLK_SEL_MASK)

#define CCM_CBCMR_FLEXSPI2_CLK_SEL_MASK          (0x300U)
#define CCM_CBCMR_FLEXSPI2_CLK_SEL_SHIFT         (8U)
/*! FLEXSPI2_CLK_SEL
 *  0b00..derive clock from PLL2 PFD2
 *  0b01..derive clock from PLL3 PFD0
 *  0b10..derive clock from PLL3 PFD1
 *  0b11..derive clock from PLL2 (pll2_main_clk)
 */
#define CCM_CBCMR_FLEXSPI2_CLK_SEL(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_FLEXSPI2_CLK_SEL_SHIFT)) & CCM_CBCMR_FLEXSPI2_CLK_SEL_MASK)

#define CCM_CBCMR_PERIPH_CLK2_SEL_MASK           (0x3000U)
#define CCM_CBCMR_PERIPH_CLK2_SEL_SHIFT          (12U)
/*! PERIPH_CLK2_SEL
 *  0b00..derive clock from pll3_sw_clk
 *  0b01..derive clock from osc_clk (pll1_ref_clk)
 *  0b10..derive clock from pll2_bypass_clk
 *  0b11..reserved
 */
#define CCM_CBCMR_PERIPH_CLK2_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_PERIPH_CLK2_SEL_SHIFT)) & CCM_CBCMR_PERIPH_CLK2_SEL_MASK)

#define CCM_CBCMR_TRACE_CLK_SEL_MASK             (0xC000U)
#define CCM_CBCMR_TRACE_CLK_SEL_SHIFT            (14U)
/*! TRACE_CLK_SEL
 *  0b00..derive clock from PLL2
 *  0b01..derive clock from PLL2 PFD2
 *  0b10..derive clock from PLL2 PFD0
 *  0b11..derive clock from PLL2 PFD1
 */
#define CCM_CBCMR_TRACE_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_TRACE_CLK_SEL_SHIFT)) & CCM_CBCMR_TRACE_CLK_SEL_MASK)

#define CCM_CBCMR_PRE_PERIPH_CLK_SEL_MASK        (0xC0000U)
#define CCM_CBCMR_PRE_PERIPH_CLK_SEL_SHIFT       (18U)
/*! PRE_PERIPH_CLK_SEL
 *  0b00..derive clock from PLL2
 *  0b01..derive clock from PLL2 PFD2
 *  0b10..derive clock from PLL2 PFD0
 *  0b11..derive clock from divided PLL1
 */
#define CCM_CBCMR_PRE_PERIPH_CLK_SEL(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_PRE_PERIPH_CLK_SEL_SHIFT)) & CCM_CBCMR_PRE_PERIPH_CLK_SEL_MASK)

#define CCM_CBCMR_LCDIF_PODF_MASK                (0x3800000U)
#define CCM_CBCMR_LCDIF_PODF_SHIFT               (23U)
/*! LCDIF_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CBCMR_LCDIF_PODF(x)                  (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_LCDIF_PODF_SHIFT)) & CCM_CBCMR_LCDIF_PODF_MASK)

#define CCM_CBCMR_LPSPI_PODF_MASK                (0x1C000000U)
#define CCM_CBCMR_LPSPI_PODF_SHIFT               (26U)
/*! LPSPI_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CBCMR_LPSPI_PODF(x)                  (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_LPSPI_PODF_SHIFT)) & CCM_CBCMR_LPSPI_PODF_MASK)

#define CCM_CBCMR_FLEXSPI2_PODF_MASK             (0xE0000000U)
#define CCM_CBCMR_FLEXSPI2_PODF_SHIFT            (29U)
/*! FLEXSPI2_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CBCMR_FLEXSPI2_PODF(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_FLEXSPI2_PODF_SHIFT)) & CCM_CBCMR_FLEXSPI2_PODF_MASK)
/*! @} */

/*! @name CSCMR1 - CCM Serial Clock Multiplexer Register 1 */
/*! @{ */

#define CCM_CSCMR1_PERCLK_PODF_MASK              (0x3FU)
#define CCM_CSCMR1_PERCLK_PODF_SHIFT             (0U)
/*! PERCLK_PODF - Divider for perclk podf.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CSCMR1_PERCLK_PODF(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_PERCLK_PODF_SHIFT)) & CCM_CSCMR1_PERCLK_PODF_MASK)

#define CCM_CSCMR1_PERCLK_CLK_SEL_MASK           (0x40U)
#define CCM_CSCMR1_PERCLK_CLK_SEL_SHIFT          (6U)
/*! PERCLK_CLK_SEL
 *  0b0..derive clock from ipg clk root
 *  0b1..derive clock from osc_clk
 */
#define CCM_CSCMR1_PERCLK_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_PERCLK_CLK_SEL_SHIFT)) & CCM_CSCMR1_PERCLK_CLK_SEL_MASK)

#define CCM_CSCMR1_SAI1_CLK_SEL_MASK             (0xC00U)
#define CCM_CSCMR1_SAI1_CLK_SEL_SHIFT            (10U)
/*! SAI1_CLK_SEL
 *  0b00..derive clock from PLL3 PFD2
 *  0b01..derive clock from PLL5
 *  0b10..derive clock from PLL4
 *  0b11..Reserved
 */
#define CCM_CSCMR1_SAI1_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_SAI1_CLK_SEL_SHIFT)) & CCM_CSCMR1_SAI1_CLK_SEL_MASK)

#define CCM_CSCMR1_SAI2_CLK_SEL_MASK             (0x3000U)
#define CCM_CSCMR1_SAI2_CLK_SEL_SHIFT            (12U)
/*! SAI2_CLK_SEL
 *  0b00..derive clock from PLL3 PFD2
 *  0b01..derive clock from PLL5
 *  0b10..derive clock from PLL4
 *  0b11..Reserved
 */
#define CCM_CSCMR1_SAI2_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_SAI2_CLK_SEL_SHIFT)) & CCM_CSCMR1_SAI2_CLK_SEL_MASK)

#define CCM_CSCMR1_SAI3_CLK_SEL_MASK             (0xC000U)
#define CCM_CSCMR1_SAI3_CLK_SEL_SHIFT            (14U)
/*! SAI3_CLK_SEL
 *  0b00..derive clock from PLL3 PFD2
 *  0b01..derive clock from PLL5
 *  0b10..derive clock from PLL4
 *  0b11..Reserved
 */
#define CCM_CSCMR1_SAI3_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_SAI3_CLK_SEL_SHIFT)) & CCM_CSCMR1_SAI3_CLK_SEL_MASK)

#define CCM_CSCMR1_USDHC1_CLK_SEL_MASK           (0x10000U)
#define CCM_CSCMR1_USDHC1_CLK_SEL_SHIFT          (16U)
/*! USDHC1_CLK_SEL
 *  0b0..derive clock from PLL2 PFD2
 *  0b1..derive clock from PLL2 PFD0
 */
#define CCM_CSCMR1_USDHC1_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_USDHC1_CLK_SEL_SHIFT)) & CCM_CSCMR1_USDHC1_CLK_SEL_MASK)

#define CCM_CSCMR1_USDHC2_CLK_SEL_MASK           (0x20000U)
#define CCM_CSCMR1_USDHC2_CLK_SEL_SHIFT          (17U)
/*! USDHC2_CLK_SEL
 *  0b0..derive clock from PLL2 PFD2
 *  0b1..derive clock from PLL2 PFD0
 */
#define CCM_CSCMR1_USDHC2_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_USDHC2_CLK_SEL_SHIFT)) & CCM_CSCMR1_USDHC2_CLK_SEL_MASK)

#define CCM_CSCMR1_FLEXSPI_PODF_MASK             (0x3800000U)
#define CCM_CSCMR1_FLEXSPI_PODF_SHIFT            (23U)
/*! FLEXSPI_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CSCMR1_FLEXSPI_PODF(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_FLEXSPI_PODF_SHIFT)) & CCM_CSCMR1_FLEXSPI_PODF_MASK)

#define CCM_CSCMR1_FLEXSPI_CLK_SEL_MASK          (0x60000000U)
#define CCM_CSCMR1_FLEXSPI_CLK_SEL_SHIFT         (29U)
/*! FLEXSPI_CLK_SEL
 *  0b00..derive clock from semc_clk_root_pre
 *  0b01..derive clock from pll3_sw_clk
 *  0b10..derive clock from PLL2 PFD2
 *  0b11..derive clock from PLL3 PFD0
 */
#define CCM_CSCMR1_FLEXSPI_CLK_SEL(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_FLEXSPI_CLK_SEL_SHIFT)) & CCM_CSCMR1_FLEXSPI_CLK_SEL_MASK)
/*! @} */

/*! @name CSCMR2 - CCM Serial Clock Multiplexer Register 2 */
/*! @{ */

#define CCM_CSCMR2_CAN_CLK_PODF_MASK             (0xFCU)
#define CCM_CSCMR2_CAN_CLK_PODF_SHIFT            (2U)
/*! CAN_CLK_PODF - Divider for CAN/CANFD clock podf.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CSCMR2_CAN_CLK_PODF(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_CAN_CLK_PODF_SHIFT)) & CCM_CSCMR2_CAN_CLK_PODF_MASK)

#define CCM_CSCMR2_CAN_CLK_SEL_MASK              (0x300U)
#define CCM_CSCMR2_CAN_CLK_SEL_SHIFT             (8U)
/*! CAN_CLK_SEL
 *  0b00..derive clock from pll3_sw_clk divided clock (60M)
 *  0b01..derive clock from osc_clk (24M)
 *  0b10..derive clock from pll3_sw_clk divided clock (80M)
 *  0b11..Disable FlexCAN clock
 */
#define CCM_CSCMR2_CAN_CLK_SEL(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_CAN_CLK_SEL_SHIFT)) & CCM_CSCMR2_CAN_CLK_SEL_MASK)

#define CCM_CSCMR2_FLEXIO2_CLK_SEL_MASK          (0x180000U)
#define CCM_CSCMR2_FLEXIO2_CLK_SEL_SHIFT         (19U)
/*! FLEXIO2_CLK_SEL
 *  0b00..derive clock from PLL4 divided clock
 *  0b01..derive clock from PLL3 PFD2 clock
 *  0b10..derive clock from PLL5 clock
 *  0b11..derive clock from pll3_sw_clk
 */
#define CCM_CSCMR2_FLEXIO2_CLK_SEL(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_FLEXIO2_CLK_SEL_SHIFT)) & CCM_CSCMR2_FLEXIO2_CLK_SEL_MASK)
/*! @} */

/*! @name CSCDR1 - CCM Serial Clock Divider Register 1 */
/*! @{ */

#define CCM_CSCDR1_UART_CLK_PODF_MASK            (0x3FU)
#define CCM_CSCDR1_UART_CLK_PODF_SHIFT           (0U)
/*! UART_CLK_PODF - Divider for uart clock podf.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CSCDR1_UART_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_UART_CLK_PODF_SHIFT)) & CCM_CSCDR1_UART_CLK_PODF_MASK)

#define CCM_CSCDR1_UART_CLK_SEL_MASK             (0x40U)
#define CCM_CSCDR1_UART_CLK_SEL_SHIFT            (6U)
/*! UART_CLK_SEL
 *  0b0..derive clock from pll3_80m
 *  0b1..derive clock from osc_clk
 */
#define CCM_CSCDR1_UART_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_UART_CLK_SEL_SHIFT)) & CCM_CSCDR1_UART_CLK_SEL_MASK)

#define CCM_CSCDR1_USDHC1_PODF_MASK              (0x3800U)
#define CCM_CSCDR1_USDHC1_PODF_SHIFT             (11U)
/*! USDHC1_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CSCDR1_USDHC1_PODF(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_USDHC1_PODF_SHIFT)) & CCM_CSCDR1_USDHC1_PODF_MASK)

#define CCM_CSCDR1_USDHC2_PODF_MASK              (0x70000U)
#define CCM_CSCDR1_USDHC2_PODF_SHIFT             (16U)
/*! USDHC2_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CSCDR1_USDHC2_PODF(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_USDHC2_PODF_SHIFT)) & CCM_CSCDR1_USDHC2_PODF_MASK)

#define CCM_CSCDR1_TRACE_PODF_MASK               (0x6000000U)
#define CCM_CSCDR1_TRACE_PODF_SHIFT              (25U)
/*! TRACE_PODF
 *  0b00..divide by 1
 *  0b01..divide by 2
 *  0b10..divide by 3
 *  0b11..divide by 4
 */
#define CCM_CSCDR1_TRACE_PODF(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_TRACE_PODF_SHIFT)) & CCM_CSCDR1_TRACE_PODF_MASK)
/*! @} */

/*! @name CS1CDR - CCM Clock Divider Register */
/*! @{ */

#define CCM_CS1CDR_SAI1_CLK_PODF_MASK            (0x3FU)
#define CCM_CS1CDR_SAI1_CLK_PODF_SHIFT           (0U)
/*! SAI1_CLK_PODF - Divider for sai1 clock podf. The input clock to this divider should be lower
 *    than 300Mhz, the predivider can be used to achieve this.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CS1CDR_SAI1_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI1_CLK_PODF_SHIFT)) & CCM_CS1CDR_SAI1_CLK_PODF_MASK)

#define CCM_CS1CDR_SAI1_CLK_PRED_MASK            (0x1C0U)
#define CCM_CS1CDR_SAI1_CLK_PRED_SHIFT           (6U)
/*! SAI1_CLK_PRED
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CS1CDR_SAI1_CLK_PRED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI1_CLK_PRED_SHIFT)) & CCM_CS1CDR_SAI1_CLK_PRED_MASK)

#define CCM_CS1CDR_FLEXIO2_CLK_PRED_MASK         (0xE00U)
#define CCM_CS1CDR_FLEXIO2_CLK_PRED_SHIFT        (9U)
/*! FLEXIO2_CLK_PRED
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CS1CDR_FLEXIO2_CLK_PRED(x)           (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_FLEXIO2_CLK_PRED_SHIFT)) & CCM_CS1CDR_FLEXIO2_CLK_PRED_MASK)

#define CCM_CS1CDR_SAI3_CLK_PODF_MASK            (0x3F0000U)
#define CCM_CS1CDR_SAI3_CLK_PODF_SHIFT           (16U)
/*! SAI3_CLK_PODF - Divider for sai3 clock podf. The input clock to this divider should be lower
 *    than 300Mhz, the predivider can be used to achieve this.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CS1CDR_SAI3_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI3_CLK_PODF_SHIFT)) & CCM_CS1CDR_SAI3_CLK_PODF_MASK)

#define CCM_CS1CDR_SAI3_CLK_PRED_MASK            (0x1C00000U)
#define CCM_CS1CDR_SAI3_CLK_PRED_SHIFT           (22U)
/*! SAI3_CLK_PRED
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CS1CDR_SAI3_CLK_PRED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI3_CLK_PRED_SHIFT)) & CCM_CS1CDR_SAI3_CLK_PRED_MASK)

#define CCM_CS1CDR_FLEXIO2_CLK_PODF_MASK         (0xE000000U)
#define CCM_CS1CDR_FLEXIO2_CLK_PODF_SHIFT        (25U)
/*! FLEXIO2_CLK_PODF - Divider for flexio2/flexio3 clock. Divider should be updated when output clock is gated.
 *  0b000..Divide by 1
 *  0b001..Divide by 2
 *  0b010..Divide by 3
 *  0b011..Divide by 4
 *  0b100..Divide by 5
 *  0b101..Divide by 6
 *  0b110..Divide by 7
 *  0b111..Divide by 8
 */
#define CCM_CS1CDR_FLEXIO2_CLK_PODF(x)           (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_FLEXIO2_CLK_PODF_SHIFT)) & CCM_CS1CDR_FLEXIO2_CLK_PODF_MASK)
/*! @} */

/*! @name CS2CDR - CCM Clock Divider Register */
/*! @{ */

#define CCM_CS2CDR_SAI2_CLK_PODF_MASK            (0x3FU)
#define CCM_CS2CDR_SAI2_CLK_PODF_SHIFT           (0U)
/*! SAI2_CLK_PODF - Divider for sai2 clock podf. The input clock to this divider should be lower
 *    than 300Mhz, the predivider can be used to achieve this.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CS2CDR_SAI2_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS2CDR_SAI2_CLK_PODF_SHIFT)) & CCM_CS2CDR_SAI2_CLK_PODF_MASK)

#define CCM_CS2CDR_SAI2_CLK_PRED_MASK            (0x1C0U)
#define CCM_CS2CDR_SAI2_CLK_PRED_SHIFT           (6U)
/*! SAI2_CLK_PRED
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CS2CDR_SAI2_CLK_PRED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS2CDR_SAI2_CLK_PRED_SHIFT)) & CCM_CS2CDR_SAI2_CLK_PRED_MASK)
/*! @} */

/*! @name CDCDR - CCM D1 Clock Divider Register */
/*! @{ */

#define CCM_CDCDR_FLEXIO1_CLK_SEL_MASK           (0x180U)
#define CCM_CDCDR_FLEXIO1_CLK_SEL_SHIFT          (7U)
/*! FLEXIO1_CLK_SEL
 *  0b00..derive clock from PLL4
 *  0b01..derive clock from PLL3 PFD2
 *  0b10..derive clock from PLL5
 *  0b11..derive clock from pll3_sw_clk
 */
#define CCM_CDCDR_FLEXIO1_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_FLEXIO1_CLK_SEL_SHIFT)) & CCM_CDCDR_FLEXIO1_CLK_SEL_MASK)

#define CCM_CDCDR_FLEXIO1_CLK_PODF_MASK          (0xE00U)
#define CCM_CDCDR_FLEXIO1_CLK_PODF_SHIFT         (9U)
/*! FLEXIO1_CLK_PODF - Divider for flexio1 clock podf. Divider should be updated when output clock is gated.
 *  0b000..Divide by 1
 *  0b001..Divide by 2
 *  0b010..Divide by 3
 *  0b011..Divide by 4
 *  0b100..Divide by 5
 *  0b101..Divide by 6
 *  0b110..Divide by 7
 *  0b111..Divide by 8
 */
#define CCM_CDCDR_FLEXIO1_CLK_PODF(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_FLEXIO1_CLK_PODF_SHIFT)) & CCM_CDCDR_FLEXIO1_CLK_PODF_MASK)

#define CCM_CDCDR_FLEXIO1_CLK_PRED_MASK          (0x7000U)
#define CCM_CDCDR_FLEXIO1_CLK_PRED_SHIFT         (12U)
/*! FLEXIO1_CLK_PRED - Divider for flexio1 clock pred. Divider should be updated when output clock is gated.
 *  0b000..Divide by 1
 *  0b001..Divide by 2
 *  0b010..Divide by 3
 *  0b011..Divide by 4
 *  0b100..Divide by 5
 *  0b101..Divide by 6
 *  0b110..Divide by 7
 *  0b111..Divide by 8
 */
#define CCM_CDCDR_FLEXIO1_CLK_PRED(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_FLEXIO1_CLK_PRED_SHIFT)) & CCM_CDCDR_FLEXIO1_CLK_PRED_MASK)

#define CCM_CDCDR_SPDIF0_CLK_SEL_MASK            (0x300000U)
#define CCM_CDCDR_SPDIF0_CLK_SEL_SHIFT           (20U)
/*! SPDIF0_CLK_SEL
 *  0b00..derive clock from PLL4
 *  0b01..derive clock from PLL3 PFD2
 *  0b10..derive clock from PLL5
 *  0b11..derive clock from pll3_sw_clk
 */
#define CCM_CDCDR_SPDIF0_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_SPDIF0_CLK_SEL_SHIFT)) & CCM_CDCDR_SPDIF0_CLK_SEL_MASK)

#define CCM_CDCDR_SPDIF0_CLK_PODF_MASK           (0x1C00000U)
#define CCM_CDCDR_SPDIF0_CLK_PODF_SHIFT          (22U)
/*! SPDIF0_CLK_PODF - Divider for spdif0 clock podf. Divider should be updated when output clock is gated.
 *  0b000..Divide by 1
 *  0b001..Divide by 2
 *  0b010..Divide by 3
 *  0b011..Divide by 4
 *  0b100..Divide by 5
 *  0b101..Divide by 6
 *  0b110..Divide by 7
 *  0b111..Divide by 8
 */
#define CCM_CDCDR_SPDIF0_CLK_PODF(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_SPDIF0_CLK_PODF_SHIFT)) & CCM_CDCDR_SPDIF0_CLK_PODF_MASK)

#define CCM_CDCDR_SPDIF0_CLK_PRED_MASK           (0xE000000U)
#define CCM_CDCDR_SPDIF0_CLK_PRED_SHIFT          (25U)
/*! SPDIF0_CLK_PRED - Divider for spdif0 clock pred. Divider should be updated when output clock is gated.
 *  0b000..Divide by 1
 *  0b001..Divide by 2
 *  0b010..Divide by 3
 *  0b011..Divide by 4
 *  0b100..Divide by 5
 *  0b101..Divide by 6
 *  0b110..Divide by 7
 *  0b111..Divide by 8
 */
#define CCM_CDCDR_SPDIF0_CLK_PRED(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_SPDIF0_CLK_PRED_SHIFT)) & CCM_CDCDR_SPDIF0_CLK_PRED_MASK)
/*! @} */

/*! @name CSCDR2 - CCM Serial Clock Divider Register 2 */
/*! @{ */

#define CCM_CSCDR2_LCDIF_PRED_MASK               (0x7000U)
#define CCM_CSCDR2_LCDIF_PRED_SHIFT              (12U)
/*! LCDIF_PRED
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CSCDR2_LCDIF_PRED(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_LCDIF_PRED_SHIFT)) & CCM_CSCDR2_LCDIF_PRED_MASK)

#define CCM_CSCDR2_LCDIF_PRE_CLK_SEL_MASK        (0x38000U)
#define CCM_CSCDR2_LCDIF_PRE_CLK_SEL_SHIFT       (15U)
/*! LCDIF_PRE_CLK_SEL
 *  0b000..derive clock from PLL2
 *  0b001..derive clock from PLL3 PFD3
 *  0b010..derive clock from PLL5
 *  0b011..derive clock from PLL2 PFD0
 *  0b100..derive clock from PLL2 PFD1
 *  0b101..derive clock from PLL3 PFD1
 */
#define CCM_CSCDR2_LCDIF_PRE_CLK_SEL(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_LCDIF_PRE_CLK_SEL_SHIFT)) & CCM_CSCDR2_LCDIF_PRE_CLK_SEL_MASK)

#define CCM_CSCDR2_LPI2C_CLK_SEL_MASK            (0x40000U)
#define CCM_CSCDR2_LPI2C_CLK_SEL_SHIFT           (18U)
/*! LPI2C_CLK_SEL
 *  0b0..derive clock from pll3_60m
 *  0b1..derive clock from osc_clk
 */
#define CCM_CSCDR2_LPI2C_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_LPI2C_CLK_SEL_SHIFT)) & CCM_CSCDR2_LPI2C_CLK_SEL_MASK)

#define CCM_CSCDR2_LPI2C_CLK_PODF_MASK           (0x1F80000U)
#define CCM_CSCDR2_LPI2C_CLK_PODF_SHIFT          (19U)
/*! LPI2C_CLK_PODF - Divider for lpi2c clock podf. Divider should be updated when output clock is
 *    gated. The input clock to this divider should be lower than 300Mhz, the predivider can be used
 *    to achieve this.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CSCDR2_LPI2C_CLK_PODF(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_LPI2C_CLK_PODF_SHIFT)) & CCM_CSCDR2_LPI2C_CLK_PODF_MASK)
/*! @} */

/*! @name CSCDR3 - CCM Serial Clock Divider Register 3 */
/*! @{ */

#define CCM_CSCDR3_CSI_CLK_SEL_MASK              (0x600U)
#define CCM_CSCDR3_CSI_CLK_SEL_SHIFT             (9U)
/*! CSI_CLK_SEL
 *  0b00..derive clock from osc_clk (24M)
 *  0b01..derive clock from PLL2 PFD2
 *  0b10..derive clock from pll3_120M
 *  0b11..derive clock from PLL3 PFD1
 */
#define CCM_CSCDR3_CSI_CLK_SEL(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR3_CSI_CLK_SEL_SHIFT)) & CCM_CSCDR3_CSI_CLK_SEL_MASK)

#define CCM_CSCDR3_CSI_PODF_MASK                 (0x3800U)
#define CCM_CSCDR3_CSI_PODF_SHIFT                (11U)
/*! CSI_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CSCDR3_CSI_PODF(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR3_CSI_PODF_SHIFT)) & CCM_CSCDR3_CSI_PODF_MASK)
/*! @} */

/*! @name CDHIPR - CCM Divider Handshake In-Process Register */
/*! @{ */

#define CCM_CDHIPR_SEMC_PODF_BUSY_MASK           (0x1U)
#define CCM_CDHIPR_SEMC_PODF_BUSY_SHIFT          (0U)
/*! SEMC_PODF_BUSY
 *  0b0..divider is not busy and its value represents the actual division.
 *  0b1..divider is busy with handshake process with module. The value read in the divider represents the previous
 *       value of the division factor, and after the handshake the written value of the semc_podf will be applied.
 */
#define CCM_CDHIPR_SEMC_PODF_BUSY(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_SEMC_PODF_BUSY_SHIFT)) & CCM_CDHIPR_SEMC_PODF_BUSY_MASK)

#define CCM_CDHIPR_AHB_PODF_BUSY_MASK            (0x2U)
#define CCM_CDHIPR_AHB_PODF_BUSY_SHIFT           (1U)
/*! AHB_PODF_BUSY
 *  0b0..divider is not busy and its value represents the actual division.
 *  0b1..divider is busy with handshake process with module. The value read in the divider represents the previous
 *       value of the division factor, and after the handshake the written value of the ahb_podf will be applied.
 */
#define CCM_CDHIPR_AHB_PODF_BUSY(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_AHB_PODF_BUSY_SHIFT)) & CCM_CDHIPR_AHB_PODF_BUSY_MASK)

#define CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY_MASK     (0x8U)
#define CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY_SHIFT    (3U)
/*! PERIPH2_CLK_SEL_BUSY
 *  0b0..mux is not busy and its value represents the actual division.
 *  0b1..mux is busy with handshake process with module. The value read in the periph2_clk_sel represents the
 *       previous value of select, and after the handshake periph2_clk_sel value will be applied.
 */
#define CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY(x)       (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY_SHIFT)) & CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY_MASK)

#define CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_MASK      (0x20U)
#define CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_SHIFT     (5U)
/*! PERIPH_CLK_SEL_BUSY
 *  0b0..mux is not busy and its value represents the actual division.
 *  0b1..mux is busy with handshake process with module. The value read in the periph_clk_sel represents the
 *       previous value of select, and after the handshake periph_clk_sel value will be applied.
 */
#define CCM_CDHIPR_PERIPH_CLK_SEL_BUSY(x)        (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_SHIFT)) & CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_MASK)

#define CCM_CDHIPR_ARM_PODF_BUSY_MASK            (0x10000U)
#define CCM_CDHIPR_ARM_PODF_BUSY_SHIFT           (16U)
/*! ARM_PODF_BUSY
 *  0b0..divider is not busy and its value represents the actual division.
 *  0b1..divider is busy with handshake process with module. The value read in the divider represents the previous
 *       value of the division factor, and after the handshake the written value of the arm_podf will be applied.
 */
#define CCM_CDHIPR_ARM_PODF_BUSY(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_ARM_PODF_BUSY_SHIFT)) & CCM_CDHIPR_ARM_PODF_BUSY_MASK)
/*! @} */

/*! @name CLPCR - CCM Low Power Control Register */
/*! @{ */

#define CCM_CLPCR_LPM_MASK                       (0x3U)
#define CCM_CLPCR_LPM_SHIFT                      (0U)
/*! LPM
 *  0b00..Remain in run mode
 *  0b01..Transfer to wait mode
 *  0b10..Transfer to stop mode
 *  0b11..Reserved
 */
#define CCM_CLPCR_LPM(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_LPM_SHIFT)) & CCM_CLPCR_LPM_MASK)

#define CCM_CLPCR_ARM_CLK_DIS_ON_LPM_MASK        (0x20U)
#define CCM_CLPCR_ARM_CLK_DIS_ON_LPM_SHIFT       (5U)
/*! ARM_CLK_DIS_ON_LPM
 *  0b0..ARM clock enabled on wait mode.
 *  0b1..ARM clock disabled on wait mode. .
 */
#define CCM_CLPCR_ARM_CLK_DIS_ON_LPM(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_ARM_CLK_DIS_ON_LPM_SHIFT)) & CCM_CLPCR_ARM_CLK_DIS_ON_LPM_MASK)

#define CCM_CLPCR_SBYOS_MASK                     (0x40U)
#define CCM_CLPCR_SBYOS_SHIFT                    (6U)
/*! SBYOS
 *  0b0..On-chip oscillator will not be powered down, after next entrance to STOP mode. (CCM_REF_EN_B will remain
 *       asserted - '0' and cosc_pwrdown will remain de asserted - '0')
 *  0b1..On-chip oscillator will be powered down, after next entrance to STOP mode. (CCM_REF_EN_B will be
 *       deasserted - '1' and cosc_pwrdown will be asserted - '1'). When returning from STOP mode, external oscillator will
 *       be enabled again, on-chip oscillator will return to oscillator mode, and after oscnt count, CCM will
 *       continue with the exit from the STOP mode process.
 */
#define CCM_CLPCR_SBYOS(x)                       (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_SBYOS_SHIFT)) & CCM_CLPCR_SBYOS_MASK)

#define CCM_CLPCR_DIS_REF_OSC_MASK               (0x80U)
#define CCM_CLPCR_DIS_REF_OSC_SHIFT              (7U)
/*! DIS_REF_OSC
 *  0b0..external high frequency oscillator will be enabled, i.e. CCM_REF_EN_B = '0'.
 *  0b1..external high frequency oscillator will be disabled, i.e. CCM_REF_EN_B = '1'
 */
#define CCM_CLPCR_DIS_REF_OSC(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_DIS_REF_OSC_SHIFT)) & CCM_CLPCR_DIS_REF_OSC_MASK)

#define CCM_CLPCR_VSTBY_MASK                     (0x100U)
#define CCM_CLPCR_VSTBY_SHIFT                    (8U)
/*! VSTBY
 *  0b0..Voltage will not be changed to standby voltage after next entrance to STOP mode. ( PMIC_STBY_REQ will remain negated - '0')
 *  0b1..Voltage will be requested to change to standby voltage after next entrance to stop mode. ( PMIC_STBY_REQ will be asserted - '1').
 */
#define CCM_CLPCR_VSTBY(x)                       (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_VSTBY_SHIFT)) & CCM_CLPCR_VSTBY_MASK)

#define CCM_CLPCR_STBY_COUNT_MASK                (0x600U)
#define CCM_CLPCR_STBY_COUNT_SHIFT               (9U)
/*! STBY_COUNT
 *  0b00..CCM will wait (1*pmic_delay_scaler)+1 ckil clock cycles
 *  0b01..CCM will wait (3*pmic_delay_scaler)+1 ckil clock cycles
 *  0b10..CCM will wait (7*pmic_delay_scaler)+1 ckil clock cycles
 *  0b11..CCM will wait (15*pmic_delay_scaler)+1 ckil clock cycles
 */
#define CCM_CLPCR_STBY_COUNT(x)                  (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_STBY_COUNT_SHIFT)) & CCM_CLPCR_STBY_COUNT_MASK)

#define CCM_CLPCR_COSC_PWRDOWN_MASK              (0x800U)
#define CCM_CLPCR_COSC_PWRDOWN_SHIFT             (11U)
/*! COSC_PWRDOWN
 *  0b0..On chip oscillator will not be powered down, i.e. cosc_pwrdown = '0'.
 *  0b1..On chip oscillator will be powered down, i.e. cosc_pwrdown = '1'.
 */
#define CCM_CLPCR_COSC_PWRDOWN(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_COSC_PWRDOWN_SHIFT)) & CCM_CLPCR_COSC_PWRDOWN_MASK)

#define CCM_CLPCR_BYPASS_LPM_HS1_MASK            (0x80000U)
#define CCM_CLPCR_BYPASS_LPM_HS1_SHIFT           (19U)
#define CCM_CLPCR_BYPASS_LPM_HS1(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_BYPASS_LPM_HS1_SHIFT)) & CCM_CLPCR_BYPASS_LPM_HS1_MASK)

#define CCM_CLPCR_BYPASS_LPM_HS0_MASK            (0x200000U)
#define CCM_CLPCR_BYPASS_LPM_HS0_SHIFT           (21U)
#define CCM_CLPCR_BYPASS_LPM_HS0(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_BYPASS_LPM_HS0_SHIFT)) & CCM_CLPCR_BYPASS_LPM_HS0_MASK)

#define CCM_CLPCR_MASK_CORE0_WFI_MASK            (0x400000U)
#define CCM_CLPCR_MASK_CORE0_WFI_SHIFT           (22U)
/*! MASK_CORE0_WFI
 *  0b0..WFI of core0 is not masked
 *  0b1..WFI of core0 is masked
 */
#define CCM_CLPCR_MASK_CORE0_WFI(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_MASK_CORE0_WFI_SHIFT)) & CCM_CLPCR_MASK_CORE0_WFI_MASK)

#define CCM_CLPCR_MASK_SCU_IDLE_MASK             (0x4000000U)
#define CCM_CLPCR_MASK_SCU_IDLE_SHIFT            (26U)
/*! MASK_SCU_IDLE
 *  0b1..SCU IDLE is masked
 *  0b0..SCU IDLE is not masked
 */
#define CCM_CLPCR_MASK_SCU_IDLE(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_MASK_SCU_IDLE_SHIFT)) & CCM_CLPCR_MASK_SCU_IDLE_MASK)

#define CCM_CLPCR_MASK_L2CC_IDLE_MASK            (0x8000000U)
#define CCM_CLPCR_MASK_L2CC_IDLE_SHIFT           (27U)
/*! MASK_L2CC_IDLE
 *  0b1..L2CC IDLE is masked
 *  0b0..L2CC IDLE is not masked
 */
#define CCM_CLPCR_MASK_L2CC_IDLE(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_MASK_L2CC_IDLE_SHIFT)) & CCM_CLPCR_MASK_L2CC_IDLE_MASK)
/*! @} */

/*! @name CISR - CCM Interrupt Status Register */
/*! @{ */

#define CCM_CISR_LRF_PLL_MASK                    (0x1U)
#define CCM_CISR_LRF_PLL_SHIFT                   (0U)
/*! LRF_PLL
 *  0b0..interrupt is not generated due to lock ready of all enabled and not bypaseed PLLs
 *  0b1..interrupt generated due to lock ready of all enabled and not bypaseed PLLs
 */
#define CCM_CISR_LRF_PLL(x)                      (((uint32_t)(((uint32_t)(x)) << CCM_CISR_LRF_PLL_SHIFT)) & CCM_CISR_LRF_PLL_MASK)

#define CCM_CISR_COSC_READY_MASK                 (0x40U)
#define CCM_CISR_COSC_READY_SHIFT                (6U)
/*! COSC_READY
 *  0b0..interrupt is not generated due to on board oscillator ready
 *  0b1..interrupt generated due to on board oscillator ready
 */
#define CCM_CISR_COSC_READY(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CISR_COSC_READY_SHIFT)) & CCM_CISR_COSC_READY_MASK)

#define CCM_CISR_SEMC_PODF_LOADED_MASK           (0x20000U)
#define CCM_CISR_SEMC_PODF_LOADED_SHIFT          (17U)
/*! SEMC_PODF_LOADED
 *  0b0..interrupt is not generated due to frequency change of semc_podf
 *  0b1..interrupt generated due to frequency change of semc_podf
 */
#define CCM_CISR_SEMC_PODF_LOADED(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CISR_SEMC_PODF_LOADED_SHIFT)) & CCM_CISR_SEMC_PODF_LOADED_MASK)

#define CCM_CISR_PERIPH2_CLK_SEL_LOADED_MASK     (0x80000U)
#define CCM_CISR_PERIPH2_CLK_SEL_LOADED_SHIFT    (19U)
/*! PERIPH2_CLK_SEL_LOADED
 *  0b0..interrupt is not generated due to frequency change of periph2_clk_sel
 *  0b1..interrupt generated due to frequency change of periph2_clk_sel
 */
#define CCM_CISR_PERIPH2_CLK_SEL_LOADED(x)       (((uint32_t)(((uint32_t)(x)) << CCM_CISR_PERIPH2_CLK_SEL_LOADED_SHIFT)) & CCM_CISR_PERIPH2_CLK_SEL_LOADED_MASK)

#define CCM_CISR_AHB_PODF_LOADED_MASK            (0x100000U)
#define CCM_CISR_AHB_PODF_LOADED_SHIFT           (20U)
/*! AHB_PODF_LOADED
 *  0b0..interrupt is not generated due to frequency change of ahb_podf
 *  0b1..interrupt generated due to frequency change of ahb_podf
 */
#define CCM_CISR_AHB_PODF_LOADED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CISR_AHB_PODF_LOADED_SHIFT)) & CCM_CISR_AHB_PODF_LOADED_MASK)

#define CCM_CISR_PERIPH_CLK_SEL_LOADED_MASK      (0x400000U)
#define CCM_CISR_PERIPH_CLK_SEL_LOADED_SHIFT     (22U)
/*! PERIPH_CLK_SEL_LOADED
 *  0b0..interrupt is not generated due to update of periph_clk_sel.
 *  0b1..interrupt generated due to update of periph_clk_sel.
 */
#define CCM_CISR_PERIPH_CLK_SEL_LOADED(x)        (((uint32_t)(((uint32_t)(x)) << CCM_CISR_PERIPH_CLK_SEL_LOADED_SHIFT)) & CCM_CISR_PERIPH_CLK_SEL_LOADED_MASK)

#define CCM_CISR_ARM_PODF_LOADED_MASK            (0x4000000U)
#define CCM_CISR_ARM_PODF_LOADED_SHIFT           (26U)
/*! ARM_PODF_LOADED
 *  0b0..interrupt is not generated due to frequency change of arm_podf
 *  0b1..interrupt generated due to frequency change of arm_podf
 */
#define CCM_CISR_ARM_PODF_LOADED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CISR_ARM_PODF_LOADED_SHIFT)) & CCM_CISR_ARM_PODF_LOADED_MASK)
/*! @} */

/*! @name CIMR - CCM Interrupt Mask Register */
/*! @{ */

#define CCM_CIMR_MASK_LRF_PLL_MASK               (0x1U)
#define CCM_CIMR_MASK_LRF_PLL_SHIFT              (0U)
/*! MASK_LRF_PLL
 *  0b0..don't mask interrupt due to lrf of PLLs - interrupt will be created
 *  0b1..mask interrupt due to lrf of PLLs
 */
#define CCM_CIMR_MASK_LRF_PLL(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_LRF_PLL_SHIFT)) & CCM_CIMR_MASK_LRF_PLL_MASK)

#define CCM_CIMR_MASK_COSC_READY_MASK            (0x40U)
#define CCM_CIMR_MASK_COSC_READY_SHIFT           (6U)
/*! MASK_COSC_READY
 *  0b0..don't mask interrupt due to on board oscillator ready - interrupt will be created
 *  0b1..mask interrupt due to on board oscillator ready
 */
#define CCM_CIMR_MASK_COSC_READY(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_COSC_READY_SHIFT)) & CCM_CIMR_MASK_COSC_READY_MASK)

#define CCM_CIMR_MASK_SEMC_PODF_LOADED_MASK      (0x20000U)
#define CCM_CIMR_MASK_SEMC_PODF_LOADED_SHIFT     (17U)
/*! MASK_SEMC_PODF_LOADED
 *  0b0..don't mask interrupt due to frequency change of semc_podf - interrupt will be created
 *  0b1..mask interrupt due to frequency change of semc_podf
 */
#define CCM_CIMR_MASK_SEMC_PODF_LOADED(x)        (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_SEMC_PODF_LOADED_SHIFT)) & CCM_CIMR_MASK_SEMC_PODF_LOADED_MASK)

#define CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED_MASK (0x80000U)
#define CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED_SHIFT (19U)
/*! MASK_PERIPH2_CLK_SEL_LOADED
 *  0b0..don't mask interrupt due to update of periph2_clk_sel - interrupt will be created
 *  0b1..mask interrupt due to update of periph2_clk_sel
 */
#define CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED(x)  (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED_SHIFT)) & CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED_MASK)

#define CCM_CIMR_MASK_AHB_PODF_LOADED_MASK       (0x100000U)
#define CCM_CIMR_MASK_AHB_PODF_LOADED_SHIFT      (20U)
/*! MASK_AHB_PODF_LOADED
 *  0b0..don't mask interrupt due to frequency change of ahb_podf - interrupt will be created
 *  0b1..mask interrupt due to frequency change of ahb_podf
 */
#define CCM_CIMR_MASK_AHB_PODF_LOADED(x)         (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_AHB_PODF_LOADED_SHIFT)) & CCM_CIMR_MASK_AHB_PODF_LOADED_MASK)

#define CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_MASK (0x400000U)
#define CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_SHIFT (22U)
/*! MASK_PERIPH_CLK_SEL_LOADED
 *  0b0..don't mask interrupt due to update of periph_clk_sel - interrupt will be created
 *  0b1..mask interrupt due to update of periph_clk_sel
 */
#define CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED(x)   (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_SHIFT)) & CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_MASK)

#define CCM_CIMR_ARM_PODF_LOADED_MASK            (0x4000000U)
#define CCM_CIMR_ARM_PODF_LOADED_SHIFT           (26U)
/*! ARM_PODF_LOADED
 *  0b0..don't mask interrupt due to frequency change of arm_podf - interrupt will be created
 *  0b1..mask interrupt due to frequency change of arm_podf
 */
#define CCM_CIMR_ARM_PODF_LOADED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_ARM_PODF_LOADED_SHIFT)) & CCM_CIMR_ARM_PODF_LOADED_MASK)
/*! @} */

/*! @name CCOSR - CCM Clock Output Source Register */
/*! @{ */

#define CCM_CCOSR_CLKO1_SEL_MASK                 (0xFU)
#define CCM_CCOSR_CLKO1_SEL_SHIFT                (0U)
/*! CLKO1_SEL
 *  0b0000..USB1 PLL clock (divided by 2)
 *  0b0001..SYS PLL clock (divided by 2)
 *  0b0011..VIDEO PLL clock (divided by 2)
 *  0b0101..semc_clk_root
 *  0b0110..Reserved
 *  0b1010..lcdif_pix_clk_root
 *  0b1011..ahb_clk_root
 *  0b1100..ipg_clk_root
 *  0b1101..perclk_root
 *  0b1110..ckil_sync_clk_root
 *  0b1111..pll4_main_clk
 */
#define CCM_CCOSR_CLKO1_SEL(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO1_SEL_SHIFT)) & CCM_CCOSR_CLKO1_SEL_MASK)

#define CCM_CCOSR_CLKO1_DIV_MASK                 (0x70U)
#define CCM_CCOSR_CLKO1_DIV_SHIFT                (4U)
/*! CLKO1_DIV
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CCOSR_CLKO1_DIV(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO1_DIV_SHIFT)) & CCM_CCOSR_CLKO1_DIV_MASK)

#define CCM_CCOSR_CLKO1_EN_MASK                  (0x80U)
#define CCM_CCOSR_CLKO1_EN_SHIFT                 (7U)
/*! CLKO1_EN
 *  0b0..CCM_CLKO1 disabled.
 *  0b1..CCM_CLKO1 enabled.
 */
#define CCM_CCOSR_CLKO1_EN(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO1_EN_SHIFT)) & CCM_CCOSR_CLKO1_EN_MASK)

#define CCM_CCOSR_CLK_OUT_SEL_MASK               (0x100U)
#define CCM_CCOSR_CLK_OUT_SEL_SHIFT              (8U)
/*! CLK_OUT_SEL
 *  0b0..CCM_CLKO1 output drives CCM_CLKO1 clock
 *  0b1..CCM_CLKO1 output drives CCM_CLKO2 clock
 */
#define CCM_CCOSR_CLK_OUT_SEL(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLK_OUT_SEL_SHIFT)) & CCM_CCOSR_CLK_OUT_SEL_MASK)

#define CCM_CCOSR_CLKO2_SEL_MASK                 (0x1F0000U)
#define CCM_CCOSR_CLKO2_SEL_SHIFT                (16U)
/*! CLKO2_SEL
 *  0b00011..usdhc1_clk_root
 *  0b00110..lpi2c_clk_root
 *  0b01011..csi_clk_root
 *  0b01110..osc_clk
 *  0b10001..usdhc2_clk_root
 *  0b10010..sai1_clk_root
 *  0b10011..sai2_clk_root
 *  0b10100..sai3_clk_root (shared with ADC1 and ADC2 alt_clk root)
 *  0b10111..can_clk_root (FlexCAN, shared with CANFD)
 *  0b11011..flexspi_clk_root
 *  0b11100..uart_clk_root
 *  0b11101..spdif0_clk_root
 *  0b11111..Reserved
 */
#define CCM_CCOSR_CLKO2_SEL(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO2_SEL_SHIFT)) & CCM_CCOSR_CLKO2_SEL_MASK)

#define CCM_CCOSR_CLKO2_DIV_MASK                 (0xE00000U)
#define CCM_CCOSR_CLKO2_DIV_SHIFT                (21U)
/*! CLKO2_DIV
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CCOSR_CLKO2_DIV(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO2_DIV_SHIFT)) & CCM_CCOSR_CLKO2_DIV_MASK)

#define CCM_CCOSR_CLKO2_EN_MASK                  (0x1000000U)
#define CCM_CCOSR_CLKO2_EN_SHIFT                 (24U)
/*! CLKO2_EN
 *  0b0..CCM_CLKO2 disabled.
 *  0b1..CCM_CLKO2 enabled.
 */
#define CCM_CCOSR_CLKO2_EN(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO2_EN_SHIFT)) & CCM_CCOSR_CLKO2_EN_MASK)
/*! @} */

/*! @name CGPR - CCM General Purpose Register */
/*! @{ */

#define CCM_CGPR_PMIC_DELAY_SCALER_MASK          (0x1U)
#define CCM_CGPR_PMIC_DELAY_SCALER_SHIFT         (0U)
/*! PMIC_DELAY_SCALER
 *  0b0..clock is not divided
 *  0b1..clock is divided /8
 */
#define CCM_CGPR_PMIC_DELAY_SCALER(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_PMIC_DELAY_SCALER_SHIFT)) & CCM_CGPR_PMIC_DELAY_SCALER_MASK)

#define CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_MASK     (0x10U)
#define CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_SHIFT    (4U)
/*! EFUSE_PROG_SUPPLY_GATE
 *  0b0..fuse programing supply voltage is gated off to the efuse module
 *  0b1..allow fuse programing.
 */
#define CCM_CGPR_EFUSE_PROG_SUPPLY_GATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_SHIFT)) & CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_MASK)

#define CCM_CGPR_SYS_MEM_DS_CTRL_MASK            (0xC000U)
#define CCM_CGPR_SYS_MEM_DS_CTRL_SHIFT           (14U)
/*! SYS_MEM_DS_CTRL
 *  0b00..Disable memory DS mode always
 *  0b01..Enable memory (outside ARM platform) DS mode when system STOP and PLL are disabled
 *  0b1x..enable memory (outside ARM platform) DS mode when system is in STOP mode
 */
#define CCM_CGPR_SYS_MEM_DS_CTRL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_SYS_MEM_DS_CTRL_SHIFT)) & CCM_CGPR_SYS_MEM_DS_CTRL_MASK)

#define CCM_CGPR_FPL_MASK                        (0x10000U)
#define CCM_CGPR_FPL_SHIFT                       (16U)
/*! FPL - Fast PLL enable.
 *  0b0..Engage PLL enable default way.
 *  0b1..Engage PLL enable 3 CKIL clocks earlier at exiting low power mode (STOP). Should be used only if 24MHz OSC was active in low power mode.
 */
#define CCM_CGPR_FPL(x)                          (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_FPL_SHIFT)) & CCM_CGPR_FPL_MASK)

#define CCM_CGPR_INT_MEM_CLK_LPM_MASK            (0x20000U)
#define CCM_CGPR_INT_MEM_CLK_LPM_SHIFT           (17U)
/*! INT_MEM_CLK_LPM
 *  0b0..Disable the clock to the ARM platform memories when entering Low Power Mode
 *  0b1..Keep the clocks to the ARM platform memories enabled only if an interrupt is pending when entering Low
 *       Power Modes (WAIT and STOP without power gating)
 */
#define CCM_CGPR_INT_MEM_CLK_LPM(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_INT_MEM_CLK_LPM_SHIFT)) & CCM_CGPR_INT_MEM_CLK_LPM_MASK)
/*! @} */

/*! @name CCGR0 - CCM Clock Gating Register 0 */
/*! @{ */

#define CCM_CCGR0_CG0_MASK                       (0x3U)
#define CCM_CCGR0_CG0_SHIFT                      (0U)
#define CCM_CCGR0_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG0_SHIFT)) & CCM_CCGR0_CG0_MASK)

#define CCM_CCGR0_CG1_MASK                       (0xCU)
#define CCM_CCGR0_CG1_SHIFT                      (2U)
#define CCM_CCGR0_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG1_SHIFT)) & CCM_CCGR0_CG1_MASK)

#define CCM_CCGR0_CG2_MASK                       (0x30U)
#define CCM_CCGR0_CG2_SHIFT                      (4U)
#define CCM_CCGR0_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG2_SHIFT)) & CCM_CCGR0_CG2_MASK)

#define CCM_CCGR0_CG3_MASK                       (0xC0U)
#define CCM_CCGR0_CG3_SHIFT                      (6U)
#define CCM_CCGR0_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG3_SHIFT)) & CCM_CCGR0_CG3_MASK)

#define CCM_CCGR0_CG4_MASK                       (0x300U)
#define CCM_CCGR0_CG4_SHIFT                      (8U)
#define CCM_CCGR0_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG4_SHIFT)) & CCM_CCGR0_CG4_MASK)

#define CCM_CCGR0_CG5_MASK                       (0xC00U)
#define CCM_CCGR0_CG5_SHIFT                      (10U)
#define CCM_CCGR0_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG5_SHIFT)) & CCM_CCGR0_CG5_MASK)

#define CCM_CCGR0_CG6_MASK                       (0x3000U)
#define CCM_CCGR0_CG6_SHIFT                      (12U)
#define CCM_CCGR0_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG6_SHIFT)) & CCM_CCGR0_CG6_MASK)

#define CCM_CCGR0_CG7_MASK                       (0xC000U)
#define CCM_CCGR0_CG7_SHIFT                      (14U)
#define CCM_CCGR0_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG7_SHIFT)) & CCM_CCGR0_CG7_MASK)

#define CCM_CCGR0_CG8_MASK                       (0x30000U)
#define CCM_CCGR0_CG8_SHIFT                      (16U)
#define CCM_CCGR0_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG8_SHIFT)) & CCM_CCGR0_CG8_MASK)

#define CCM_CCGR0_CG9_MASK                       (0xC0000U)
#define CCM_CCGR0_CG9_SHIFT                      (18U)
#define CCM_CCGR0_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG9_SHIFT)) & CCM_CCGR0_CG9_MASK)

#define CCM_CCGR0_CG10_MASK                      (0x300000U)
#define CCM_CCGR0_CG10_SHIFT                     (20U)
#define CCM_CCGR0_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG10_SHIFT)) & CCM_CCGR0_CG10_MASK)

#define CCM_CCGR0_CG11_MASK                      (0xC00000U)
#define CCM_CCGR0_CG11_SHIFT                     (22U)
#define CCM_CCGR0_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG11_SHIFT)) & CCM_CCGR0_CG11_MASK)

#define CCM_CCGR0_CG12_MASK                      (0x3000000U)
#define CCM_CCGR0_CG12_SHIFT                     (24U)
#define CCM_CCGR0_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG12_SHIFT)) & CCM_CCGR0_CG12_MASK)

#define CCM_CCGR0_CG13_MASK                      (0xC000000U)
#define CCM_CCGR0_CG13_SHIFT                     (26U)
#define CCM_CCGR0_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG13_SHIFT)) & CCM_CCGR0_CG13_MASK)

#define CCM_CCGR0_CG14_MASK                      (0x30000000U)
#define CCM_CCGR0_CG14_SHIFT                     (28U)
#define CCM_CCGR0_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG14_SHIFT)) & CCM_CCGR0_CG14_MASK)

#define CCM_CCGR0_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR0_CG15_SHIFT                     (30U)
#define CCM_CCGR0_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG15_SHIFT)) & CCM_CCGR0_CG15_MASK)
/*! @} */

/*! @name CCGR1 - CCM Clock Gating Register 1 */
/*! @{ */

#define CCM_CCGR1_CG0_MASK                       (0x3U)
#define CCM_CCGR1_CG0_SHIFT                      (0U)
#define CCM_CCGR1_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG0_SHIFT)) & CCM_CCGR1_CG0_MASK)

#define CCM_CCGR1_CG1_MASK                       (0xCU)
#define CCM_CCGR1_CG1_SHIFT                      (2U)
#define CCM_CCGR1_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG1_SHIFT)) & CCM_CCGR1_CG1_MASK)

#define CCM_CCGR1_CG2_MASK                       (0x30U)
#define CCM_CCGR1_CG2_SHIFT                      (4U)
#define CCM_CCGR1_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG2_SHIFT)) & CCM_CCGR1_CG2_MASK)

#define CCM_CCGR1_CG3_MASK                       (0xC0U)
#define CCM_CCGR1_CG3_SHIFT                      (6U)
#define CCM_CCGR1_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG3_SHIFT)) & CCM_CCGR1_CG3_MASK)

#define CCM_CCGR1_CG4_MASK                       (0x300U)
#define CCM_CCGR1_CG4_SHIFT                      (8U)
#define CCM_CCGR1_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG4_SHIFT)) & CCM_CCGR1_CG4_MASK)

#define CCM_CCGR1_CG5_MASK                       (0xC00U)
#define CCM_CCGR1_CG5_SHIFT                      (10U)
#define CCM_CCGR1_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG5_SHIFT)) & CCM_CCGR1_CG5_MASK)

#define CCM_CCGR1_CG6_MASK                       (0x3000U)
#define CCM_CCGR1_CG6_SHIFT                      (12U)
#define CCM_CCGR1_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG6_SHIFT)) & CCM_CCGR1_CG6_MASK)

#define CCM_CCGR1_CG7_MASK                       (0xC000U)
#define CCM_CCGR1_CG7_SHIFT                      (14U)
#define CCM_CCGR1_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG7_SHIFT)) & CCM_CCGR1_CG7_MASK)

#define CCM_CCGR1_CG8_MASK                       (0x30000U)
#define CCM_CCGR1_CG8_SHIFT                      (16U)
#define CCM_CCGR1_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG8_SHIFT)) & CCM_CCGR1_CG8_MASK)

#define CCM_CCGR1_CG9_MASK                       (0xC0000U)
#define CCM_CCGR1_CG9_SHIFT                      (18U)
#define CCM_CCGR1_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG9_SHIFT)) & CCM_CCGR1_CG9_MASK)

#define CCM_CCGR1_CG10_MASK                      (0x300000U)
#define CCM_CCGR1_CG10_SHIFT                     (20U)
#define CCM_CCGR1_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG10_SHIFT)) & CCM_CCGR1_CG10_MASK)

#define CCM_CCGR1_CG11_MASK                      (0xC00000U)
#define CCM_CCGR1_CG11_SHIFT                     (22U)
#define CCM_CCGR1_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG11_SHIFT)) & CCM_CCGR1_CG11_MASK)

#define CCM_CCGR1_CG12_MASK                      (0x3000000U)
#define CCM_CCGR1_CG12_SHIFT                     (24U)
#define CCM_CCGR1_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG12_SHIFT)) & CCM_CCGR1_CG12_MASK)

#define CCM_CCGR1_CG13_MASK                      (0xC000000U)
#define CCM_CCGR1_CG13_SHIFT                     (26U)
#define CCM_CCGR1_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG13_SHIFT)) & CCM_CCGR1_CG13_MASK)

#define CCM_CCGR1_CG14_MASK                      (0x30000000U)
#define CCM_CCGR1_CG14_SHIFT                     (28U)
#define CCM_CCGR1_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG14_SHIFT)) & CCM_CCGR1_CG14_MASK)

#define CCM_CCGR1_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR1_CG15_SHIFT                     (30U)
#define CCM_CCGR1_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG15_SHIFT)) & CCM_CCGR1_CG15_MASK)
/*! @} */

/*! @name CCGR2 - CCM Clock Gating Register 2 */
/*! @{ */

#define CCM_CCGR2_CG0_MASK                       (0x3U)
#define CCM_CCGR2_CG0_SHIFT                      (0U)
#define CCM_CCGR2_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG0_SHIFT)) & CCM_CCGR2_CG0_MASK)

#define CCM_CCGR2_CG1_MASK                       (0xCU)
#define CCM_CCGR2_CG1_SHIFT                      (2U)
#define CCM_CCGR2_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG1_SHIFT)) & CCM_CCGR2_CG1_MASK)

#define CCM_CCGR2_CG2_MASK                       (0x30U)
#define CCM_CCGR2_CG2_SHIFT                      (4U)
#define CCM_CCGR2_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG2_SHIFT)) & CCM_CCGR2_CG2_MASK)

#define CCM_CCGR2_CG3_MASK                       (0xC0U)
#define CCM_CCGR2_CG3_SHIFT                      (6U)
#define CCM_CCGR2_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG3_SHIFT)) & CCM_CCGR2_CG3_MASK)

#define CCM_CCGR2_CG4_MASK                       (0x300U)
#define CCM_CCGR2_CG4_SHIFT                      (8U)
#define CCM_CCGR2_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG4_SHIFT)) & CCM_CCGR2_CG4_MASK)

#define CCM_CCGR2_CG5_MASK                       (0xC00U)
#define CCM_CCGR2_CG5_SHIFT                      (10U)
#define CCM_CCGR2_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG5_SHIFT)) & CCM_CCGR2_CG5_MASK)

#define CCM_CCGR2_CG6_MASK                       (0x3000U)
#define CCM_CCGR2_CG6_SHIFT                      (12U)
#define CCM_CCGR2_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG6_SHIFT)) & CCM_CCGR2_CG6_MASK)

#define CCM_CCGR2_CG7_MASK                       (0xC000U)
#define CCM_CCGR2_CG7_SHIFT                      (14U)
#define CCM_CCGR2_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG7_SHIFT)) & CCM_CCGR2_CG7_MASK)

#define CCM_CCGR2_CG8_MASK                       (0x30000U)
#define CCM_CCGR2_CG8_SHIFT                      (16U)
#define CCM_CCGR2_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG8_SHIFT)) & CCM_CCGR2_CG8_MASK)

#define CCM_CCGR2_CG9_MASK                       (0xC0000U)
#define CCM_CCGR2_CG9_SHIFT                      (18U)
#define CCM_CCGR2_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG9_SHIFT)) & CCM_CCGR2_CG9_MASK)

#define CCM_CCGR2_CG10_MASK                      (0x300000U)
#define CCM_CCGR2_CG10_SHIFT                     (20U)
#define CCM_CCGR2_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG10_SHIFT)) & CCM_CCGR2_CG10_MASK)

#define CCM_CCGR2_CG11_MASK                      (0xC00000U)
#define CCM_CCGR2_CG11_SHIFT                     (22U)
#define CCM_CCGR2_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG11_SHIFT)) & CCM_CCGR2_CG11_MASK)

#define CCM_CCGR2_CG12_MASK                      (0x3000000U)
#define CCM_CCGR2_CG12_SHIFT                     (24U)
#define CCM_CCGR2_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG12_SHIFT)) & CCM_CCGR2_CG12_MASK)

#define CCM_CCGR2_CG13_MASK                      (0xC000000U)
#define CCM_CCGR2_CG13_SHIFT                     (26U)
#define CCM_CCGR2_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG13_SHIFT)) & CCM_CCGR2_CG13_MASK)

#define CCM_CCGR2_CG14_MASK                      (0x30000000U)
#define CCM_CCGR2_CG14_SHIFT                     (28U)
#define CCM_CCGR2_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG14_SHIFT)) & CCM_CCGR2_CG14_MASK)

#define CCM_CCGR2_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR2_CG15_SHIFT                     (30U)
#define CCM_CCGR2_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG15_SHIFT)) & CCM_CCGR2_CG15_MASK)
/*! @} */

/*! @name CCGR3 - CCM Clock Gating Register 3 */
/*! @{ */

#define CCM_CCGR3_CG0_MASK                       (0x3U)
#define CCM_CCGR3_CG0_SHIFT                      (0U)
#define CCM_CCGR3_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG0_SHIFT)) & CCM_CCGR3_CG0_MASK)

#define CCM_CCGR3_CG1_MASK                       (0xCU)
#define CCM_CCGR3_CG1_SHIFT                      (2U)
#define CCM_CCGR3_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG1_SHIFT)) & CCM_CCGR3_CG1_MASK)

#define CCM_CCGR3_CG2_MASK                       (0x30U)
#define CCM_CCGR3_CG2_SHIFT                      (4U)
#define CCM_CCGR3_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG2_SHIFT)) & CCM_CCGR3_CG2_MASK)

#define CCM_CCGR3_CG3_MASK                       (0xC0U)
#define CCM_CCGR3_CG3_SHIFT                      (6U)
#define CCM_CCGR3_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG3_SHIFT)) & CCM_CCGR3_CG3_MASK)

#define CCM_CCGR3_CG4_MASK                       (0x300U)
#define CCM_CCGR3_CG4_SHIFT                      (8U)
#define CCM_CCGR3_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG4_SHIFT)) & CCM_CCGR3_CG4_MASK)

#define CCM_CCGR3_CG5_MASK                       (0xC00U)
#define CCM_CCGR3_CG5_SHIFT                      (10U)
#define CCM_CCGR3_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG5_SHIFT)) & CCM_CCGR3_CG5_MASK)

#define CCM_CCGR3_CG6_MASK                       (0x3000U)
#define CCM_CCGR3_CG6_SHIFT                      (12U)
#define CCM_CCGR3_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG6_SHIFT)) & CCM_CCGR3_CG6_MASK)

#define CCM_CCGR3_CG7_MASK                       (0xC000U)
#define CCM_CCGR3_CG7_SHIFT                      (14U)
#define CCM_CCGR3_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG7_SHIFT)) & CCM_CCGR3_CG7_MASK)

#define CCM_CCGR3_CG8_MASK                       (0x30000U)
#define CCM_CCGR3_CG8_SHIFT                      (16U)
#define CCM_CCGR3_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG8_SHIFT)) & CCM_CCGR3_CG8_MASK)

#define CCM_CCGR3_CG9_MASK                       (0xC0000U)
#define CCM_CCGR3_CG9_SHIFT                      (18U)
#define CCM_CCGR3_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG9_SHIFT)) & CCM_CCGR3_CG9_MASK)

#define CCM_CCGR3_CG10_MASK                      (0x300000U)
#define CCM_CCGR3_CG10_SHIFT                     (20U)
#define CCM_CCGR3_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG10_SHIFT)) & CCM_CCGR3_CG10_MASK)

#define CCM_CCGR3_CG11_MASK                      (0xC00000U)
#define CCM_CCGR3_CG11_SHIFT                     (22U)
#define CCM_CCGR3_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG11_SHIFT)) & CCM_CCGR3_CG11_MASK)

#define CCM_CCGR3_CG12_MASK                      (0x3000000U)
#define CCM_CCGR3_CG12_SHIFT                     (24U)
#define CCM_CCGR3_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG12_SHIFT)) & CCM_CCGR3_CG12_MASK)

#define CCM_CCGR3_CG13_MASK                      (0xC000000U)
#define CCM_CCGR3_CG13_SHIFT                     (26U)
#define CCM_CCGR3_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG13_SHIFT)) & CCM_CCGR3_CG13_MASK)

#define CCM_CCGR3_CG14_MASK                      (0x30000000U)
#define CCM_CCGR3_CG14_SHIFT                     (28U)
/*! CG14 - The OCRAM clock cannot be turned off when the CM cache is running on this device.
 */
#define CCM_CCGR3_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG14_SHIFT)) & CCM_CCGR3_CG14_MASK)

#define CCM_CCGR3_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR3_CG15_SHIFT                     (30U)
#define CCM_CCGR3_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG15_SHIFT)) & CCM_CCGR3_CG15_MASK)
/*! @} */

/*! @name CCGR4 - CCM Clock Gating Register 4 */
/*! @{ */

#define CCM_CCGR4_CG0_MASK                       (0x3U)
#define CCM_CCGR4_CG0_SHIFT                      (0U)
#define CCM_CCGR4_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG0_SHIFT)) & CCM_CCGR4_CG0_MASK)

#define CCM_CCGR4_CG1_MASK                       (0xCU)
#define CCM_CCGR4_CG1_SHIFT                      (2U)
#define CCM_CCGR4_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG1_SHIFT)) & CCM_CCGR4_CG1_MASK)

#define CCM_CCGR4_CG2_MASK                       (0x30U)
#define CCM_CCGR4_CG2_SHIFT                      (4U)
#define CCM_CCGR4_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG2_SHIFT)) & CCM_CCGR4_CG2_MASK)

#define CCM_CCGR4_CG3_MASK                       (0xC0U)
#define CCM_CCGR4_CG3_SHIFT                      (6U)
#define CCM_CCGR4_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG3_SHIFT)) & CCM_CCGR4_CG3_MASK)

#define CCM_CCGR4_CG4_MASK                       (0x300U)
#define CCM_CCGR4_CG4_SHIFT                      (8U)
#define CCM_CCGR4_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG4_SHIFT)) & CCM_CCGR4_CG4_MASK)

#define CCM_CCGR4_CG5_MASK                       (0xC00U)
#define CCM_CCGR4_CG5_SHIFT                      (10U)
#define CCM_CCGR4_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG5_SHIFT)) & CCM_CCGR4_CG5_MASK)

#define CCM_CCGR4_CG6_MASK                       (0x3000U)
#define CCM_CCGR4_CG6_SHIFT                      (12U)
#define CCM_CCGR4_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG6_SHIFT)) & CCM_CCGR4_CG6_MASK)

#define CCM_CCGR4_CG7_MASK                       (0xC000U)
#define CCM_CCGR4_CG7_SHIFT                      (14U)
#define CCM_CCGR4_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG7_SHIFT)) & CCM_CCGR4_CG7_MASK)

#define CCM_CCGR4_CG8_MASK                       (0x30000U)
#define CCM_CCGR4_CG8_SHIFT                      (16U)
#define CCM_CCGR4_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG8_SHIFT)) & CCM_CCGR4_CG8_MASK)

#define CCM_CCGR4_CG9_MASK                       (0xC0000U)
#define CCM_CCGR4_CG9_SHIFT                      (18U)
#define CCM_CCGR4_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG9_SHIFT)) & CCM_CCGR4_CG9_MASK)

#define CCM_CCGR4_CG10_MASK                      (0x300000U)
#define CCM_CCGR4_CG10_SHIFT                     (20U)
#define CCM_CCGR4_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG10_SHIFT)) & CCM_CCGR4_CG10_MASK)

#define CCM_CCGR4_CG11_MASK                      (0xC00000U)
#define CCM_CCGR4_CG11_SHIFT                     (22U)
#define CCM_CCGR4_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG11_SHIFT)) & CCM_CCGR4_CG11_MASK)

#define CCM_CCGR4_CG12_MASK                      (0x3000000U)
#define CCM_CCGR4_CG12_SHIFT                     (24U)
#define CCM_CCGR4_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG12_SHIFT)) & CCM_CCGR4_CG12_MASK)

#define CCM_CCGR4_CG13_MASK                      (0xC000000U)
#define CCM_CCGR4_CG13_SHIFT                     (26U)
#define CCM_CCGR4_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG13_SHIFT)) & CCM_CCGR4_CG13_MASK)

#define CCM_CCGR4_CG14_MASK                      (0x30000000U)
#define CCM_CCGR4_CG14_SHIFT                     (28U)
#define CCM_CCGR4_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG14_SHIFT)) & CCM_CCGR4_CG14_MASK)

#define CCM_CCGR4_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR4_CG15_SHIFT                     (30U)
#define CCM_CCGR4_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG15_SHIFT)) & CCM_CCGR4_CG15_MASK)
/*! @} */

/*! @name CCGR5 - CCM Clock Gating Register 5 */
/*! @{ */

#define CCM_CCGR5_CG0_MASK                       (0x3U)
#define CCM_CCGR5_CG0_SHIFT                      (0U)
#define CCM_CCGR5_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG0_SHIFT)) & CCM_CCGR5_CG0_MASK)

#define CCM_CCGR5_CG1_MASK                       (0xCU)
#define CCM_CCGR5_CG1_SHIFT                      (2U)
#define CCM_CCGR5_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG1_SHIFT)) & CCM_CCGR5_CG1_MASK)

#define CCM_CCGR5_CG2_MASK                       (0x30U)
#define CCM_CCGR5_CG2_SHIFT                      (4U)
#define CCM_CCGR5_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG2_SHIFT)) & CCM_CCGR5_CG2_MASK)

#define CCM_CCGR5_CG3_MASK                       (0xC0U)
#define CCM_CCGR5_CG3_SHIFT                      (6U)
#define CCM_CCGR5_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG3_SHIFT)) & CCM_CCGR5_CG3_MASK)

#define CCM_CCGR5_CG4_MASK                       (0x300U)
#define CCM_CCGR5_CG4_SHIFT                      (8U)
#define CCM_CCGR5_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG4_SHIFT)) & CCM_CCGR5_CG4_MASK)

#define CCM_CCGR5_CG5_MASK                       (0xC00U)
#define CCM_CCGR5_CG5_SHIFT                      (10U)
#define CCM_CCGR5_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG5_SHIFT)) & CCM_CCGR5_CG5_MASK)

#define CCM_CCGR5_CG6_MASK                       (0x3000U)
#define CCM_CCGR5_CG6_SHIFT                      (12U)
#define CCM_CCGR5_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG6_SHIFT)) & CCM_CCGR5_CG6_MASK)

#define CCM_CCGR5_CG7_MASK                       (0xC000U)
#define CCM_CCGR5_CG7_SHIFT                      (14U)
#define CCM_CCGR5_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG7_SHIFT)) & CCM_CCGR5_CG7_MASK)

#define CCM_CCGR5_CG8_MASK                       (0x30000U)
#define CCM_CCGR5_CG8_SHIFT                      (16U)
#define CCM_CCGR5_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG8_SHIFT)) & CCM_CCGR5_CG8_MASK)

#define CCM_CCGR5_CG9_MASK                       (0xC0000U)
#define CCM_CCGR5_CG9_SHIFT                      (18U)
#define CCM_CCGR5_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG9_SHIFT)) & CCM_CCGR5_CG9_MASK)

#define CCM_CCGR5_CG10_MASK                      (0x300000U)
#define CCM_CCGR5_CG10_SHIFT                     (20U)
#define CCM_CCGR5_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG10_SHIFT)) & CCM_CCGR5_CG10_MASK)

#define CCM_CCGR5_CG11_MASK                      (0xC00000U)
#define CCM_CCGR5_CG11_SHIFT                     (22U)
#define CCM_CCGR5_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG11_SHIFT)) & CCM_CCGR5_CG11_MASK)

#define CCM_CCGR5_CG12_MASK                      (0x3000000U)
#define CCM_CCGR5_CG12_SHIFT                     (24U)
#define CCM_CCGR5_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG12_SHIFT)) & CCM_CCGR5_CG12_MASK)

#define CCM_CCGR5_CG13_MASK                      (0xC000000U)
#define CCM_CCGR5_CG13_SHIFT                     (26U)
#define CCM_CCGR5_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG13_SHIFT)) & CCM_CCGR5_CG13_MASK)

#define CCM_CCGR5_CG14_MASK                      (0x30000000U)
#define CCM_CCGR5_CG14_SHIFT                     (28U)
#define CCM_CCGR5_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG14_SHIFT)) & CCM_CCGR5_CG14_MASK)

#define CCM_CCGR5_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR5_CG15_SHIFT                     (30U)
#define CCM_CCGR5_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG15_SHIFT)) & CCM_CCGR5_CG15_MASK)
/*! @} */

/*! @name CCGR6 - CCM Clock Gating Register 6 */
/*! @{ */

#define CCM_CCGR6_CG0_MASK                       (0x3U)
#define CCM_CCGR6_CG0_SHIFT                      (0U)
#define CCM_CCGR6_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG0_SHIFT)) & CCM_CCGR6_CG0_MASK)

#define CCM_CCGR6_CG1_MASK                       (0xCU)
#define CCM_CCGR6_CG1_SHIFT                      (2U)
#define CCM_CCGR6_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG1_SHIFT)) & CCM_CCGR6_CG1_MASK)

#define CCM_CCGR6_CG2_MASK                       (0x30U)
#define CCM_CCGR6_CG2_SHIFT                      (4U)
#define CCM_CCGR6_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG2_SHIFT)) & CCM_CCGR6_CG2_MASK)

#define CCM_CCGR6_CG3_MASK                       (0xC0U)
#define CCM_CCGR6_CG3_SHIFT                      (6U)
#define CCM_CCGR6_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG3_SHIFT)) & CCM_CCGR6_CG3_MASK)

#define CCM_CCGR6_CG4_MASK                       (0x300U)
#define CCM_CCGR6_CG4_SHIFT                      (8U)
#define CCM_CCGR6_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG4_SHIFT)) & CCM_CCGR6_CG4_MASK)

#define CCM_CCGR6_CG5_MASK                       (0xC00U)
#define CCM_CCGR6_CG5_SHIFT                      (10U)
#define CCM_CCGR6_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG5_SHIFT)) & CCM_CCGR6_CG5_MASK)

#define CCM_CCGR6_CG6_MASK                       (0x3000U)
#define CCM_CCGR6_CG6_SHIFT                      (12U)
#define CCM_CCGR6_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG6_SHIFT)) & CCM_CCGR6_CG6_MASK)

#define CCM_CCGR6_CG7_MASK                       (0xC000U)
#define CCM_CCGR6_CG7_SHIFT                      (14U)
#define CCM_CCGR6_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG7_SHIFT)) & CCM_CCGR6_CG7_MASK)

#define CCM_CCGR6_CG8_MASK                       (0x30000U)
#define CCM_CCGR6_CG8_SHIFT                      (16U)
#define CCM_CCGR6_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG8_SHIFT)) & CCM_CCGR6_CG8_MASK)

#define CCM_CCGR6_CG9_MASK                       (0xC0000U)
#define CCM_CCGR6_CG9_SHIFT                      (18U)
#define CCM_CCGR6_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG9_SHIFT)) & CCM_CCGR6_CG9_MASK)

#define CCM_CCGR6_CG10_MASK                      (0x300000U)
#define CCM_CCGR6_CG10_SHIFT                     (20U)
#define CCM_CCGR6_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG10_SHIFT)) & CCM_CCGR6_CG10_MASK)

#define CCM_CCGR6_CG11_MASK                      (0xC00000U)
#define CCM_CCGR6_CG11_SHIFT                     (22U)
#define CCM_CCGR6_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG11_SHIFT)) & CCM_CCGR6_CG11_MASK)

#define CCM_CCGR6_CG12_MASK                      (0x3000000U)
#define CCM_CCGR6_CG12_SHIFT                     (24U)
#define CCM_CCGR6_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG12_SHIFT)) & CCM_CCGR6_CG12_MASK)

#define CCM_CCGR6_CG13_MASK                      (0xC000000U)
#define CCM_CCGR6_CG13_SHIFT                     (26U)
#define CCM_CCGR6_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG13_SHIFT)) & CCM_CCGR6_CG13_MASK)

#define CCM_CCGR6_CG14_MASK                      (0x30000000U)
#define CCM_CCGR6_CG14_SHIFT                     (28U)
#define CCM_CCGR6_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG14_SHIFT)) & CCM_CCGR6_CG14_MASK)

#define CCM_CCGR6_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR6_CG15_SHIFT                     (30U)
#define CCM_CCGR6_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG15_SHIFT)) & CCM_CCGR6_CG15_MASK)
/*! @} */

/*! @name CCGR7 - CCM Clock Gating Register 7 */
/*! @{ */

#define CCM_CCGR7_CG0_MASK                       (0x3U)
#define CCM_CCGR7_CG0_SHIFT                      (0U)
#define CCM_CCGR7_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR7_CG0_SHIFT)) & CCM_CCGR7_CG0_MASK)

#define CCM_CCGR7_CG1_MASK                       (0xCU)
#define CCM_CCGR7_CG1_SHIFT                      (2U)
#define CCM_CCGR7_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR7_CG1_SHIFT)) & CCM_CCGR7_CG1_MASK)

#define CCM_CCGR7_CG2_MASK                       (0x30U)
#define CCM_CCGR7_CG2_SHIFT                      (4U)
#define CCM_CCGR7_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR7_CG2_SHIFT)) & CCM_CCGR7_CG2_MASK)

#define CCM_CCGR7_CG3_MASK                       (0xC0U)
#define CCM_CCGR7_CG3_SHIFT                      (6U)
#define CCM_CCGR7_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR7_CG3_SHIFT)) & CCM_CCGR7_CG3_MASK)

#define CCM_CCGR7_CG4_MASK                       (0x300U)
#define CCM_CCGR7_CG4_SHIFT                      (8U)
#define CCM_CCGR7_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR7_CG4_SHIFT)) & CCM_CCGR7_CG4_MASK)

#define CCM_CCGR7_CG5_MASK                       (0xC00U)
#define CCM_CCGR7_CG5_SHIFT                      (10U)
#define CCM_CCGR7_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR7_CG5_SHIFT)) & CCM_CCGR7_CG5_MASK)

#define CCM_CCGR7_CG6_MASK                       (0x3000U)
#define CCM_CCGR7_CG6_SHIFT                      (12U)
#define CCM_CCGR7_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR7_CG6_SHIFT)) & CCM_CCGR7_CG6_MASK)
/*! @} */

/*! @name CMEOR - CCM Module Enable Overide Register */
/*! @{ */

#define CCM_CMEOR_MOD_EN_OV_GPT_MASK             (0x20U)
#define CCM_CMEOR_MOD_EN_OV_GPT_SHIFT            (5U)
/*! MOD_EN_OV_GPT
 *  0b0..don't override module enable signal
 *  0b1..override module enable signal
 */
#define CCM_CMEOR_MOD_EN_OV_GPT(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_GPT_SHIFT)) & CCM_CMEOR_MOD_EN_OV_GPT_MASK)

#define CCM_CMEOR_MOD_EN_OV_PIT_MASK             (0x40U)
#define CCM_CMEOR_MOD_EN_OV_PIT_SHIFT            (6U)
/*! MOD_EN_OV_PIT
 *  0b0..don't override module enable signal
 *  0b1..override module enable signal
 */
#define CCM_CMEOR_MOD_EN_OV_PIT(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_PIT_SHIFT)) & CCM_CMEOR_MOD_EN_OV_PIT_MASK)

#define CCM_CMEOR_MOD_EN_USDHC_MASK              (0x80U)
#define CCM_CMEOR_MOD_EN_USDHC_SHIFT             (7U)
/*! MOD_EN_USDHC
 *  0b0..don't override module enable signal
 *  0b1..override module enable signal
 */
#define CCM_CMEOR_MOD_EN_USDHC(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_USDHC_SHIFT)) & CCM_CMEOR_MOD_EN_USDHC_MASK)

#define CCM_CMEOR_MOD_EN_OV_TRNG_MASK            (0x200U)
#define CCM_CMEOR_MOD_EN_OV_TRNG_SHIFT           (9U)
/*! MOD_EN_OV_TRNG
 *  0b0..don't override module enable signal
 *  0b1..override module enable signal
 */
#define CCM_CMEOR_MOD_EN_OV_TRNG(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_TRNG_SHIFT)) & CCM_CMEOR_MOD_EN_OV_TRNG_MASK)

#define CCM_CMEOR_MOD_EN_OV_CANFD_CPI_MASK       (0x400U)
#define CCM_CMEOR_MOD_EN_OV_CANFD_CPI_SHIFT      (10U)
/*! MOD_EN_OV_CANFD_CPI
 *  0b0..don't override module enable signal
 *  0b1..override module enable signal
 */
#define CCM_CMEOR_MOD_EN_OV_CANFD_CPI(x)         (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_CANFD_CPI_SHIFT)) & CCM_CMEOR_MOD_EN_OV_CANFD_CPI_MASK)

#define CCM_CMEOR_MOD_EN_OV_CAN2_CPI_MASK        (0x10000000U)
#define CCM_CMEOR_MOD_EN_OV_CAN2_CPI_SHIFT       (28U)
/*! MOD_EN_OV_CAN2_CPI
 *  0b0..don't override module enable signal
 *  0b1..override module enable signal
 */
#define CCM_CMEOR_MOD_EN_OV_CAN2_CPI(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_CAN2_CPI_SHIFT)) & CCM_CMEOR_MOD_EN_OV_CAN2_CPI_MASK)

#define CCM_CMEOR_MOD_EN_OV_CAN1_CPI_MASK        (0x40000000U)
#define CCM_CMEOR_MOD_EN_OV_CAN1_CPI_SHIFT       (30U)
/*! MOD_EN_OV_CAN1_CPI
 *  0b0..don't overide module enable signal
 *  0b1..overide module enable signal
 */
#define CCM_CMEOR_MOD_EN_OV_CAN1_CPI(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_CAN1_CPI_SHIFT)) & CCM_CMEOR_MOD_EN_OV_CAN1_CPI_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CCM_Register_Masks */


/* CCM - Peripheral instance base addresses */
/** Peripheral CCM base address */
#define CCM_BASE                                 (0x400FC000u)
/** Peripheral CCM base pointer */
#define CCM                                      ((CCM_Type *)CCM_BASE)
/** Array initializer of CCM peripheral base addresses */
#define CCM_BASE_ADDRS                           { CCM_BASE }
/** Array initializer of CCM peripheral base pointers */
#define CCM_BASE_PTRS                            { CCM }
/** Interrupt vectors for the CCM peripheral type */
#define CCM_IRQS                                 { CCM_1_IRQn, CCM_2_IRQn }

/*!
 * @}
 */ /* end of group CCM_Peripheral_Access_Layer */


#define FLUSH_TX_FIFO_SHIFT (8)
#define FLUSH_RX_FIFO_SHIFT (9)
#define LPSPI_CR_MEN_MASK                        (0x1U)
#define LPSPI_DER_RDDE_MASK                      (0x2U)
#define LPSPI_DER_TDDE_MASK                      (0x1U)
#define LPSPI_CFGR1_NOSTALL_MASK                 (0x8U)
#define LPSPI_TCR_CONT_MASK                      (0x200000U)
#define LPSPI_TCR_CONTC_MASK                     (0x100000U)
#define LPSPI_TCR_BYSW_MASK                      (0x400000U)
#define LPSPI_TCR_PCS_MASK                       (0x3000000U)
#define LPSPI_TCR_BYSW_MASK                      (0x400000U)


/* ----------------------------------------------------------------------------
   -- IOMUXC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_Peripheral_Access_Layer IOMUXC Peripheral Access Layer
 * @{
 */

/** IOMUXC - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[20];
  __IO uint32_t SW_MUX_CTL_PAD[124];               /**< SW_MUX_CTL_PAD_GPIO_EMC_00 SW MUX Control Register..SW_MUX_CTL_PAD_GPIO_SD_B1_11 SW MUX Control Register, array offset: 0x14, array step: 0x4 */
  __IO uint32_t SW_PAD_CTL_PAD[124];               /**< SW_PAD_CTL_PAD_GPIO_EMC_00 SW PAD Control Register..SW_PAD_CTL_PAD_GPIO_SD_B1_11 SW PAD Control Register, array offset: 0x204, array step: 0x4 */
  __IO uint32_t SELECT_INPUT[154];                 /**< ANATOP_USB_OTG1_ID_SELECT_INPUT DAISY Register..XBAR1_IN23_SELECT_INPUT DAISY Register, array offset: 0x3F4, array step: 0x4 */
  __IO uint32_t SW_MUX_CTL_PAD_1[22];              /**< SW_MUX_CTL_PAD_GPIO_SPI_B0_00 SW MUX Control Register..SW_MUX_CTL_PAD_GPIO_SPI_B1_07 SW MUX Control Register, array offset: 0x65C, array step: 0x4 */
  __IO uint32_t SW_PAD_CTL_PAD_1[22];              /**< SW_PAD_CTL_PAD_GPIO_SPI_B0_00 SW PAD Control Register..SW_PAD_CTL_PAD_GPIO_SPI_B1_07 SW PAD Control Register, array offset: 0x6B4, array step: 0x4 */
  __IO uint32_t SELECT_INPUT_1[33];                /**< ENET2_IPG_CLK_RMII_SELECT_INPUT DAISY Register..CANFD_IPP_IND_CANRX_SELECT_INPUT DAISY Register, array offset: 0x70C, array step: 0x4 */
} IOMUXC_Type;

/* ----------------------------------------------------------------------------
   -- IOMUXC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_Register_Masks IOMUXC Register Masks
 * @{
 */

/*! @name SW_MUX_CTL_PAD - SW_MUX_CTL_PAD_GPIO_EMC_00 SW MUX Control Register..SW_MUX_CTL_PAD_GPIO_SD_B1_11 SW MUX Control Register */
/*! @{ */

#define IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK      (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_SHIFT     (0U)
/*! MUX_MODE - MUX Mode Select Field.
 *  0b000..Select mux mode: ALT0 mux port: SEMC_DATA00 of instance: semc
 *  0b001..Select mux mode: ALT1 mux port: FLEXPWM4_PWMA00 of instance: flexpwm4
 *  0b010..Select mux mode: ALT2 mux port: LPSPI2_SCK of instance: lpspi2
 *  0b011..Select mux mode: ALT3 mux port: XBAR1_XBAR_IN02 of instance: xbar1
 *  0b100..Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO00 of instance: flexio1
 *  0b101..Select mux mode: ALT5 mux port: GPIO4_IO00 of instance: gpio4
 */
#define IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_SHIFT)) & IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define IOMUXC_SW_MUX_CTL_PAD_SION_MASK          (0x10U)
#define IOMUXC_SW_MUX_CTL_PAD_SION_SHIFT         (4U)
/*! SION - Software Input On Field.
 *  0b1..Force input path of pad GPIO_EMC_00
 *  0b0..Input Path is determined by functionality
 */
#define IOMUXC_SW_MUX_CTL_PAD_SION(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_MUX_CTL_PAD_SION_SHIFT)) & IOMUXC_SW_MUX_CTL_PAD_SION_MASK)
/*! @} */

/* The count of IOMUXC_SW_MUX_CTL_PAD */
#define IOMUXC_SW_MUX_CTL_PAD_COUNT              (124U)

/*! @name SW_PAD_CTL_PAD - SW_PAD_CTL_PAD_GPIO_EMC_00 SW PAD Control Register..SW_PAD_CTL_PAD_GPIO_SD_B1_11 SW PAD Control Register */
/*! @{ */

#define IOMUXC_SW_PAD_CTL_PAD_SRE_MASK           (0x1U)
#define IOMUXC_SW_PAD_CTL_PAD_SRE_SHIFT          (0U)
/*! SRE - Slew Rate Field
 *  0b0..Slow Slew Rate
 *  0b1..Fast Slew Rate
 */
#define IOMUXC_SW_PAD_CTL_PAD_SRE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_SRE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_SRE_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_DSE_MASK           (0x38U)
#define IOMUXC_SW_PAD_CTL_PAD_DSE_SHIFT          (3U)
/*! DSE - Drive Strength Field
 *  0b000..output driver disabled;
 *  0b001..R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
 *  0b010..R0/2
 *  0b011..R0/3
 *  0b100..R0/4
 *  0b101..R0/5
 *  0b110..R0/6
 *  0b111..R0/7
 */
#define IOMUXC_SW_PAD_CTL_PAD_DSE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DSE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DSE_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_SPEED_MASK         (0xC0U)
#define IOMUXC_SW_PAD_CTL_PAD_SPEED_SHIFT        (6U)
/*! SPEED - Speed Field
 *  0b00..low(50MHz)
 *  0b01..medium(100MHz)
 *  0b10..medium(100MHz)
 *  0b11..max(200MHz)
 */
#define IOMUXC_SW_PAD_CTL_PAD_SPEED(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_SPEED_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_SPEED_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_ODE_MASK           (0x800U)
#define IOMUXC_SW_PAD_CTL_PAD_ODE_SHIFT          (11U)
/*! ODE - Open Drain Enable Field
 *  0b0..Open Drain Disabled
 *  0b1..Open Drain Enabled
 */
#define IOMUXC_SW_PAD_CTL_PAD_ODE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_ODE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_ODE_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_PKE_MASK           (0x1000U)
#define IOMUXC_SW_PAD_CTL_PAD_PKE_SHIFT          (12U)
/*! PKE - Pull / Keep Enable Field
 *  0b0..Pull/Keeper Disabled
 *  0b1..Pull/Keeper Enabled
 */
#define IOMUXC_SW_PAD_CTL_PAD_PKE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_PKE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_PKE_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_PUE_MASK           (0x2000U)
#define IOMUXC_SW_PAD_CTL_PAD_PUE_SHIFT          (13U)
/*! PUE - Pull / Keep Select Field
 *  0b0..Keeper
 *  0b1..Pull
 */
#define IOMUXC_SW_PAD_CTL_PAD_PUE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_PUE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_PUE_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_PUS_MASK           (0xC000U)
#define IOMUXC_SW_PAD_CTL_PAD_PUS_SHIFT          (14U)
/*! PUS - Pull Up / Down Config. Field
 *  0b00..100K Ohm Pull Down
 *  0b01..47K Ohm Pull Up
 *  0b10..100K Ohm Pull Up
 *  0b11..22K Ohm Pull Up
 */
#define IOMUXC_SW_PAD_CTL_PAD_PUS(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_PUS_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_PUS_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_HYS_MASK           (0x10000U)
#define IOMUXC_SW_PAD_CTL_PAD_HYS_SHIFT          (16U)
/*! HYS - Hyst. Enable Field
 *  0b0..Hysteresis Disabled
 *  0b1..Hysteresis Enabled
 */
#define IOMUXC_SW_PAD_CTL_PAD_HYS(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_HYS_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_HYS_MASK)
/*! @} */

/* The count of IOMUXC_SW_PAD_CTL_PAD */
#define IOMUXC_SW_PAD_CTL_PAD_COUNT              (124U)

/*! @name SELECT_INPUT - ANATOP_USB_OTG1_ID_SELECT_INPUT DAISY Register..XBAR1_IN23_SELECT_INPUT DAISY Register */
/*! @{ */

#define IOMUXC_SELECT_INPUT_DAISY_MASK           (0x7U)  /* Merged from fields with different position or width, of widths (1, 2, 3), largest definition used */
#define IOMUXC_SELECT_INPUT_DAISY_SHIFT          (0U)
/*! DAISY - Selecting Pads Involved in Daisy Chain.
 *  0b0..Selecting Pad: GPIO_AD_B0_01 for Mode: ALT3
 *  0b1..Selecting Pad: GPIO_AD_B1_02 for Mode: ALT0
 */
#define IOMUXC_SELECT_INPUT_DAISY(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SELECT_INPUT_DAISY_SHIFT)) & IOMUXC_SELECT_INPUT_DAISY_MASK)  /* Merged from fields with different position or width, of widths (1, 2, 3), largest definition used */
/*! @} */

/* The count of IOMUXC_SELECT_INPUT */
#define IOMUXC_SELECT_INPUT_COUNT                (154U)

/*! @name SW_MUX_CTL_PAD_1 - SW_MUX_CTL_PAD_GPIO_SPI_B0_00 SW MUX Control Register..SW_MUX_CTL_PAD_GPIO_SPI_B1_07 SW MUX Control Register */
/*! @{ */

#define IOMUXC_SW_MUX_CTL_PAD_1_MUX_MODE_MASK    (0x7U)
#define IOMUXC_SW_MUX_CTL_PAD_1_MUX_MODE_SHIFT   (0U)
/*! MUX_MODE - MUX Mode Select Field.
 *  0b000..Select mux mode: ALT0 mux port: FLEXSPI2_B_SCLK of instance: flexspi2
 */
#define IOMUXC_SW_MUX_CTL_PAD_1_MUX_MODE(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_MUX_CTL_PAD_1_MUX_MODE_SHIFT)) & IOMUXC_SW_MUX_CTL_PAD_1_MUX_MODE_MASK)

#define IOMUXC_SW_MUX_CTL_PAD_1_SION_MASK        (0x10U)
#define IOMUXC_SW_MUX_CTL_PAD_1_SION_SHIFT       (4U)
/*! SION - Software Input On Field.
 *  0b1..Force input path of pad GPIO_SPI_B0_00
 *  0b0..Input Path is determined by functionality
 */
#define IOMUXC_SW_MUX_CTL_PAD_1_SION(x)          (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_MUX_CTL_PAD_1_SION_SHIFT)) & IOMUXC_SW_MUX_CTL_PAD_1_SION_MASK)
/*! @} */

/* The count of IOMUXC_SW_MUX_CTL_PAD_1 */
#define IOMUXC_SW_MUX_CTL_PAD_1_COUNT            (22U)

/*! @name SW_PAD_CTL_PAD_1 - SW_PAD_CTL_PAD_GPIO_SPI_B0_00 SW PAD Control Register..SW_PAD_CTL_PAD_GPIO_SPI_B1_07 SW PAD Control Register */
/*! @{ */

#define IOMUXC_SW_PAD_CTL_PAD_1_SRE_MASK         (0x1U)
#define IOMUXC_SW_PAD_CTL_PAD_1_SRE_SHIFT        (0U)
/*! SRE - Slew Rate Field
 *  0b0..Slow Slew Rate
 *  0b1..Fast Slew Rate
 */
#define IOMUXC_SW_PAD_CTL_PAD_1_SRE(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_1_SRE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_1_SRE_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_1_DSE_MASK         (0x38U)
#define IOMUXC_SW_PAD_CTL_PAD_1_DSE_SHIFT        (3U)
/*! DSE - Drive Strength Field
 *  0b000..output driver disabled;
 *  0b001..R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
 *  0b010..R0/2
 *  0b011..R0/3
 *  0b100..R0/4
 *  0b101..R0/5
 *  0b110..R0/6
 *  0b111..R0/7
 */
#define IOMUXC_SW_PAD_CTL_PAD_1_DSE(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_1_DSE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_1_DSE_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_1_SPEED_MASK       (0xC0U)
#define IOMUXC_SW_PAD_CTL_PAD_1_SPEED_SHIFT      (6U)
/*! SPEED - Speed Field
 *  0b00..low(50MHz)
 *  0b01..medium(100MHz)
 *  0b10..medium(100MHz)
 *  0b11..max(200MHz)
 */
#define IOMUXC_SW_PAD_CTL_PAD_1_SPEED(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_1_SPEED_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_1_SPEED_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_1_ODE_MASK         (0x800U)
#define IOMUXC_SW_PAD_CTL_PAD_1_ODE_SHIFT        (11U)
/*! ODE - Open Drain Enable Field
 *  0b0..Open Drain Disabled
 *  0b1..Open Drain Enabled
 */
#define IOMUXC_SW_PAD_CTL_PAD_1_ODE(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_1_ODE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_1_ODE_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_1_PKE_MASK         (0x1000U)
#define IOMUXC_SW_PAD_CTL_PAD_1_PKE_SHIFT        (12U)
/*! PKE - Pull / Keep Enable Field
 *  0b0..Pull/Keeper Disabled
 *  0b1..Pull/Keeper Enabled
 */
#define IOMUXC_SW_PAD_CTL_PAD_1_PKE(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_1_PKE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_1_PKE_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_1_PUE_MASK         (0x2000U)
#define IOMUXC_SW_PAD_CTL_PAD_1_PUE_SHIFT        (13U)
/*! PUE - Pull / Keep Select Field
 *  0b0..Keeper
 *  0b1..Pull
 */
#define IOMUXC_SW_PAD_CTL_PAD_1_PUE(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_1_PUE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_1_PUE_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_1_PUS_MASK         (0xC000U)
#define IOMUXC_SW_PAD_CTL_PAD_1_PUS_SHIFT        (14U)
/*! PUS - Pull Up / Down Config. Field
 *  0b00..100K Ohm Pull Down
 *  0b01..47K Ohm Pull Up
 *  0b10..100K Ohm Pull Up
 *  0b11..22K Ohm Pull Up
 */
#define IOMUXC_SW_PAD_CTL_PAD_1_PUS(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_1_PUS_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_1_PUS_MASK)

#define IOMUXC_SW_PAD_CTL_PAD_1_HYS_MASK         (0x10000U)
#define IOMUXC_SW_PAD_CTL_PAD_1_HYS_SHIFT        (16U)
/*! HYS - Hyst. Enable Field
 *  0b0..Hysteresis Disabled
 *  0b1..Hysteresis Enabled
 */
#define IOMUXC_SW_PAD_CTL_PAD_1_HYS(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_1_HYS_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_1_HYS_MASK)
/*! @} */

/* The count of IOMUXC_SW_PAD_CTL_PAD_1 */
#define IOMUXC_SW_PAD_CTL_PAD_1_COUNT            (22U)

/*! @name SELECT_INPUT_1 - ENET2_IPG_CLK_RMII_SELECT_INPUT DAISY Register..CANFD_IPP_IND_CANRX_SELECT_INPUT DAISY Register */
/*! @{ */

#define IOMUXC_SELECT_INPUT_1_DAISY_MASK         (0x3U)  /* Merged from fields with different position or width, of widths (1, 2), largest definition used */
#define IOMUXC_SELECT_INPUT_1_DAISY_SHIFT        (0U)
/*! DAISY - Selecting Pads Involved in Daisy Chain.
 *  0b00..Selecting Pad: GPIO_EMC_33 for Mode: ALT9
 *  0b01..Selecting Pad: GPIO_SD_B0_01 for Mode: ALT9
 *  0b10..Selecting Pad: GPIO_B0_15 for Mode: ALT9
 */
#define IOMUXC_SELECT_INPUT_1_DAISY(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_SELECT_INPUT_1_DAISY_SHIFT)) & IOMUXC_SELECT_INPUT_1_DAISY_MASK)  /* Merged from fields with different position or width, of widths (1, 2), largest definition used */
/*! @} */

/* The count of IOMUXC_SELECT_INPUT_1 */
#define IOMUXC_SELECT_INPUT_1_COUNT              (33U)


/*!
 * @}
 */ /* end of group IOMUXC_Register_Masks */


/* IOMUXC - Peripheral instance base addresses */
/** Peripheral IOMUXC base address */
#define IOMUXC_BASE                              (0x401F8000u)
/** Peripheral IOMUXC base pointer */
#define IOMUXC                                   ((IOMUXC_Type *)IOMUXC_BASE)
/** Array initializer of IOMUXC peripheral base addresses */
#define IOMUXC_BASE_ADDRS                        { IOMUXC_BASE }
/** Array initializer of IOMUXC peripheral base pointers */
#define IOMUXC_BASE_PTRS                         { IOMUXC }

/*!
 * @}
 */ /* end of group IOMUXC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- IOMUXC_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_GPR_Peripheral_Access_Layer IOMUXC_GPR Peripheral Access Layer
 * @{
 */

/** IOMUXC_GPR - Register Layout Typedef */
typedef struct {
       uint32_t GPR0;                              /**< GPR0 General Purpose Register, offset: 0x0 */
  __IO uint32_t GPR1;                              /**< GPR1 General Purpose Register, offset: 0x4 */
  __IO uint32_t GPR2;                              /**< GPR2 General Purpose Register, offset: 0x8 */
  __IO uint32_t GPR3;                              /**< GPR3 General Purpose Register, offset: 0xC */
  __IO uint32_t GPR4;                              /**< GPR4 General Purpose Register, offset: 0x10 */
  __IO uint32_t GPR5;                              /**< GPR5 General Purpose Register, offset: 0x14 */
  __IO uint32_t GPR6;                              /**< GPR6 General Purpose Register, offset: 0x18 */
  __IO uint32_t GPR7;                              /**< GPR7 General Purpose Register, offset: 0x1C */
  __IO uint32_t GPR8;                              /**< GPR8 General Purpose Register, offset: 0x20 */
       uint32_t GPR9;                              /**< GPR9 General Purpose Register, offset: 0x24 */
  __IO uint32_t GPR10;                             /**< GPR10 General Purpose Register, offset: 0x28 */
  __IO uint32_t GPR11;                             /**< GPR11 General Purpose Register, offset: 0x2C */
  __IO uint32_t GPR12;                             /**< GPR12 General Purpose Register, offset: 0x30 */
  __IO uint32_t GPR13;                             /**< GPR13 General Purpose Register, offset: 0x34 */
  __IO uint32_t GPR14;                             /**< GPR14 General Purpose Register, offset: 0x38 */
       uint32_t GPR15;                             /**< GPR15 General Purpose Register, offset: 0x3C */
  __IO uint32_t GPR16;                             /**< GPR16 General Purpose Register, offset: 0x40 */
  __IO uint32_t GPR17;                             /**< GPR17 General Purpose Register, offset: 0x44 */
  __IO uint32_t GPR18;                             /**< GPR18 General Purpose Register, offset: 0x48 */
  __IO uint32_t GPR19;                             /**< GPR19 General Purpose Register, offset: 0x4C */
  __IO uint32_t GPR20;                             /**< GPR20 General Purpose Register, offset: 0x50 */
  __IO uint32_t GPR21;                             /**< GPR21 General Purpose Register, offset: 0x54 */
  __IO uint32_t GPR22;                             /**< GPR22 General Purpose Register, offset: 0x58 */
  __IO uint32_t GPR23;                             /**< GPR23 General Purpose Register, offset: 0x5C */
  __IO uint32_t GPR24;                             /**< GPR24 General Purpose Register, offset: 0x60 */
  __IO uint32_t GPR25;                             /**< GPR25 General Purpose Register, offset: 0x64 */
  __IO uint32_t GPR26;                             /**< GPR26 General Purpose Register, offset: 0x68 */
  __IO uint32_t GPR27;                             /**< GPR27 General Purpose Register, offset: 0x6C */
  __IO uint32_t GPR28;                             /**< GPR28 General Purpose Register, offset: 0x70 */
  __IO uint32_t GPR29;                             /**< GPR29 General Purpose Register, offset: 0x74 */
  __IO uint32_t GPR30;                             /**< GPR30 General Purpose Register, offset: 0x78 */
  __IO uint32_t GPR31;                             /**< GPR31 General Purpose Register, offset: 0x7C */
  __IO uint32_t GPR32;                             /**< GPR32 General Purpose Register, offset: 0x80 */
  __IO uint32_t GPR33;                             /**< GPR33 General Purpose Register, offset: 0x84 */
  __IO uint32_t GPR34;                             /**< GPR34 General Purpose Register, offset: 0x88 */
} IOMUXC_GPR_Type;

/* ----------------------------------------------------------------------------
   -- IOMUXC_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_GPR_Register_Masks IOMUXC_GPR Register Masks
 * @{
 */

/*! @name GPR1 - GPR1 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR1_SAI1_MCLK1_SEL_MASK      (0x7U)
#define IOMUXC_GPR_GPR1_SAI1_MCLK1_SEL_SHIFT     (0U)
/*! SAI1_MCLK1_SEL
 *  0b000..ccm.ssi1_clk_root
 *  0b001..ccm.ssi2_clk_root
 *  0b010..ccm.ssi3_clk_root
 *  0b011..iomux.sai1_ipg_clk_sai_mclk
 *  0b100..iomux.sai2_ipg_clk_sai_mclk
 *  0b101..iomux.sai3_ipg_clk_sai_mclk
 *  0b110..Reserved
 *  0b111..Reserved
 */
#define IOMUXC_GPR_GPR1_SAI1_MCLK1_SEL(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI1_MCLK1_SEL_SHIFT)) & IOMUXC_GPR_GPR1_SAI1_MCLK1_SEL_MASK)

#define IOMUXC_GPR_GPR1_SAI1_MCLK2_SEL_MASK      (0x38U)
#define IOMUXC_GPR_GPR1_SAI1_MCLK2_SEL_SHIFT     (3U)
/*! SAI1_MCLK2_SEL
 *  0b000..ccm.ssi1_clk_root
 *  0b001..ccm.ssi2_clk_root
 *  0b010..ccm.ssi3_clk_root
 *  0b011..iomux.sai1_ipg_clk_sai_mclk
 *  0b100..iomux.sai2_ipg_clk_sai_mclk
 *  0b101..iomux.sai3_ipg_clk_sai_mclk
 *  0b110..Reserved
 *  0b111..Reserved
 */
#define IOMUXC_GPR_GPR1_SAI1_MCLK2_SEL(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI1_MCLK2_SEL_SHIFT)) & IOMUXC_GPR_GPR1_SAI1_MCLK2_SEL_MASK)

#define IOMUXC_GPR_GPR1_SAI1_MCLK3_SEL_MASK      (0xC0U)
#define IOMUXC_GPR_GPR1_SAI1_MCLK3_SEL_SHIFT     (6U)
/*! SAI1_MCLK3_SEL
 *  0b00..ccm.spdif0_clk_root
 *  0b01..iomux.spdif_tx_clk2
 *  0b10..spdif.spdif_srclk
 *  0b11..spdif.spdif_outclock
 */
#define IOMUXC_GPR_GPR1_SAI1_MCLK3_SEL(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI1_MCLK3_SEL_SHIFT)) & IOMUXC_GPR_GPR1_SAI1_MCLK3_SEL_MASK)

#define IOMUXC_GPR_GPR1_SAI2_MCLK3_SEL_MASK      (0x300U)
#define IOMUXC_GPR_GPR1_SAI2_MCLK3_SEL_SHIFT     (8U)
/*! SAI2_MCLK3_SEL
 *  0b00..ccm.spdif0_clk_root
 *  0b01..iomux.spdif_tx_clk2
 *  0b10..spdif.spdif_srclk
 *  0b11..spdif.spdif_outclock
 */
#define IOMUXC_GPR_GPR1_SAI2_MCLK3_SEL(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI2_MCLK3_SEL_SHIFT)) & IOMUXC_GPR_GPR1_SAI2_MCLK3_SEL_MASK)

#define IOMUXC_GPR_GPR1_SAI3_MCLK3_SEL_MASK      (0xC00U)
#define IOMUXC_GPR_GPR1_SAI3_MCLK3_SEL_SHIFT     (10U)
/*! SAI3_MCLK3_SEL
 *  0b00..ccm.spdif0_clk_root
 *  0b01..iomux.spdif_tx_clk2
 *  0b10..spdif.spdif_srclk
 *  0b11..spdif.spdif_outclock
 */
#define IOMUXC_GPR_GPR1_SAI3_MCLK3_SEL(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI3_MCLK3_SEL_SHIFT)) & IOMUXC_GPR_GPR1_SAI3_MCLK3_SEL_MASK)

#define IOMUXC_GPR_GPR1_GINT_MASK                (0x1000U)
#define IOMUXC_GPR_GPR1_GINT_SHIFT               (12U)
/*! GINT
 *  0b0..Global interrupt request is not asserted.
 *  0b1..Global interrupt request is asserted.
 */
#define IOMUXC_GPR_GPR1_GINT(x)                  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_GINT_SHIFT)) & IOMUXC_GPR_GPR1_GINT_MASK)

#define IOMUXC_GPR_GPR1_ENET1_CLK_SEL_MASK       (0x2000U)
#define IOMUXC_GPR_GPR1_ENET1_CLK_SEL_SHIFT      (13U)
/*! ENET1_CLK_SEL
 *  0b0..ENET1 TX reference clock driven by ref_enetpll. This clock is also output to pins via the IOMUX. ENET_REF_CLK1 function.
 *  0b1..Gets ENET1 TX reference clock from the ENET1_TX_CLK pin. In this use case, an external OSC provides the
 *       clock for both the external PHY and the internal controller.
 */
#define IOMUXC_GPR_GPR1_ENET1_CLK_SEL(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ENET1_CLK_SEL_SHIFT)) & IOMUXC_GPR_GPR1_ENET1_CLK_SEL_MASK)

#define IOMUXC_GPR_GPR1_ENET2_CLK_SEL_MASK       (0x4000U)
#define IOMUXC_GPR_GPR1_ENET2_CLK_SEL_SHIFT      (14U)
/*! ENET2_CLK_SEL
 *  0b0..ENET2 TX reference clock driven by ref_enetpll. This clock is also output to pins via the IOMUX. ENET2_REF_CLK function.
 *  0b1..Gets ENET2 TX reference clock from the ENET2_TX_CLK pin. In this use case, an external OSC provides the
 *       clock for both the external PHY and the internal controller.
 */
#define IOMUXC_GPR_GPR1_ENET2_CLK_SEL(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ENET2_CLK_SEL_SHIFT)) & IOMUXC_GPR_GPR1_ENET2_CLK_SEL_MASK)

#define IOMUXC_GPR_GPR1_USB_EXP_MODE_MASK        (0x8000U)
#define IOMUXC_GPR_GPR1_USB_EXP_MODE_SHIFT       (15U)
/*! USB_EXP_MODE
 *  0b0..Exposure mode is disabled.
 *  0b1..Exposure mode is enabled.
 */
#define IOMUXC_GPR_GPR1_USB_EXP_MODE(x)          (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_USB_EXP_MODE_SHIFT)) & IOMUXC_GPR_GPR1_USB_EXP_MODE_MASK)

#define IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR_MASK    (0x20000U)
#define IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR_SHIFT   (17U)
/*! ENET1_TX_CLK_DIR
 *  0b0..ENET1_TX_CLK output driver is disabled
 *  0b1..ENET1_TX_CLK output driver is enabled
 */
#define IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR_SHIFT)) & IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR_MASK)

#define IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR_MASK    (0x40000U)
#define IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR_SHIFT   (18U)
/*! ENET2_TX_CLK_DIR
 *  0b0..ENET2_TX_CLK output driver is disabled
 *  0b1..ENET2_TX_CLK output driver is enabled
 */
#define IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR_SHIFT)) & IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR_MASK)

#define IOMUXC_GPR_GPR1_SAI1_MCLK_DIR_MASK       (0x80000U)
#define IOMUXC_GPR_GPR1_SAI1_MCLK_DIR_SHIFT      (19U)
/*! SAI1_MCLK_DIR
 *  0b0..sai1.MCLK is input signal
 *  0b1..sai1.MCLK is output signal
 */
#define IOMUXC_GPR_GPR1_SAI1_MCLK_DIR(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI1_MCLK_DIR_SHIFT)) & IOMUXC_GPR_GPR1_SAI1_MCLK_DIR_MASK)

#define IOMUXC_GPR_GPR1_SAI2_MCLK_DIR_MASK       (0x100000U)
#define IOMUXC_GPR_GPR1_SAI2_MCLK_DIR_SHIFT      (20U)
/*! SAI2_MCLK_DIR
 *  0b0..sai2.MCLK is input signal
 *  0b1..sai2.MCLK is output signal
 */
#define IOMUXC_GPR_GPR1_SAI2_MCLK_DIR(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI2_MCLK_DIR_SHIFT)) & IOMUXC_GPR_GPR1_SAI2_MCLK_DIR_MASK)

#define IOMUXC_GPR_GPR1_SAI3_MCLK_DIR_MASK       (0x200000U)
#define IOMUXC_GPR_GPR1_SAI3_MCLK_DIR_SHIFT      (21U)
/*! SAI3_MCLK_DIR
 *  0b0..sai3.MCLK is input signal
 *  0b1..sai3.MCLK is output signal
 */
#define IOMUXC_GPR_GPR1_SAI3_MCLK_DIR(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI3_MCLK_DIR_SHIFT)) & IOMUXC_GPR_GPR1_SAI3_MCLK_DIR_MASK)

#define IOMUXC_GPR_GPR1_EXC_MON_MASK             (0x400000U)
#define IOMUXC_GPR_GPR1_EXC_MON_SHIFT            (22U)
/*! EXC_MON
 *  0b0..OKAY response
 *  0b1..SLVError response (default)
 */
#define IOMUXC_GPR_GPR1_EXC_MON(x)               (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_EXC_MON_SHIFT)) & IOMUXC_GPR_GPR1_EXC_MON_MASK)

#define IOMUXC_GPR_GPR1_ENET_IPG_CLK_S_EN_MASK   (0x800000U)
#define IOMUXC_GPR_GPR1_ENET_IPG_CLK_S_EN_SHIFT  (23U)
/*! ENET_IPG_CLK_S_EN
 *  0b0..ipg_clk_s is gated when there is no IPS access
 *  0b1..ipg_clk_s is always on
 */
#define IOMUXC_GPR_GPR1_ENET_IPG_CLK_S_EN(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ENET_IPG_CLK_S_EN_SHIFT)) & IOMUXC_GPR_GPR1_ENET_IPG_CLK_S_EN_MASK)

#define IOMUXC_GPR_GPR1_CM7_FORCE_HCLK_EN_MASK   (0x80000000U)
#define IOMUXC_GPR_GPR1_CM7_FORCE_HCLK_EN_SHIFT  (31U)
/*! CM7_FORCE_HCLK_EN
 *  0b0..AHB clock is not running (gated)
 *  0b1..AHB clock is running (enabled)
 */
#define IOMUXC_GPR_GPR1_CM7_FORCE_HCLK_EN(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_CM7_FORCE_HCLK_EN_SHIFT)) & IOMUXC_GPR_GPR1_CM7_FORCE_HCLK_EN_MASK)
/*! @} */

/*! @name GPR2 - GPR2 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR2_AXBS_L_AHBXL_HIGH_PRIORITY_MASK (0x1U)
#define IOMUXC_GPR_GPR2_AXBS_L_AHBXL_HIGH_PRIORITY_SHIFT (0U)
/*! AXBS_L_AHBXL_HIGH_PRIORITY
 *  0b0..AXBS_L AHBXL master does not have high priority
 *  0b1..AXBS_P AHBXL master has high priority
 */
#define IOMUXC_GPR_GPR2_AXBS_L_AHBXL_HIGH_PRIORITY(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_AXBS_L_AHBXL_HIGH_PRIORITY_SHIFT)) & IOMUXC_GPR_GPR2_AXBS_L_AHBXL_HIGH_PRIORITY_MASK)

#define IOMUXC_GPR_GPR2_AXBS_L_DMA_HIGH_PRIORITY_MASK (0x2U)
#define IOMUXC_GPR_GPR2_AXBS_L_DMA_HIGH_PRIORITY_SHIFT (1U)
/*! AXBS_L_DMA_HIGH_PRIORITY
 *  0b0..AXBS_L DMA master does not have high priority
 *  0b1..AXBS_L DMA master has high priority
 */
#define IOMUXC_GPR_GPR2_AXBS_L_DMA_HIGH_PRIORITY(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_AXBS_L_DMA_HIGH_PRIORITY_SHIFT)) & IOMUXC_GPR_GPR2_AXBS_L_DMA_HIGH_PRIORITY_MASK)

#define IOMUXC_GPR_GPR2_AXBS_L_FORCE_ROUND_ROBIN_MASK (0x4U)
#define IOMUXC_GPR_GPR2_AXBS_L_FORCE_ROUND_ROBIN_SHIFT (2U)
/*! AXBS_L_FORCE_ROUND_ROBIN
 *  0b0..AXBS_L masters are not arbitored in round robin, depending on DMA and AHBXL master priority settings.
 *  0b1..AXBS_L masters are arbitored in round robin
 */
#define IOMUXC_GPR_GPR2_AXBS_L_FORCE_ROUND_ROBIN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_AXBS_L_FORCE_ROUND_ROBIN_SHIFT)) & IOMUXC_GPR_GPR2_AXBS_L_FORCE_ROUND_ROBIN_MASK)

#define IOMUXC_GPR_GPR2_AXBS_P_M0_HIGH_PRIORITY_MASK (0x8U)
#define IOMUXC_GPR_GPR2_AXBS_P_M0_HIGH_PRIORITY_SHIFT (3U)
/*! AXBS_P_M0_HIGH_PRIORITY
 *  0b0..AXBS_P M0 master doesn't have high priority
 *  0b1..AXBS_P M0 master has high priority
 */
#define IOMUXC_GPR_GPR2_AXBS_P_M0_HIGH_PRIORITY(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_AXBS_P_M0_HIGH_PRIORITY_SHIFT)) & IOMUXC_GPR_GPR2_AXBS_P_M0_HIGH_PRIORITY_MASK)

#define IOMUXC_GPR_GPR2_AXBS_P_M1_HIGH_PRIORITY_MASK (0x10U)
#define IOMUXC_GPR_GPR2_AXBS_P_M1_HIGH_PRIORITY_SHIFT (4U)
/*! AXBS_P_M1_HIGH_PRIORITY
 *  0b0..AXBS_P M1 master does not have high priority
 *  0b1..AXBS_P M1 master has high priority
 */
#define IOMUXC_GPR_GPR2_AXBS_P_M1_HIGH_PRIORITY(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_AXBS_P_M1_HIGH_PRIORITY_SHIFT)) & IOMUXC_GPR_GPR2_AXBS_P_M1_HIGH_PRIORITY_MASK)

#define IOMUXC_GPR_GPR2_AXBS_P_FORCE_ROUND_ROBIN_MASK (0x20U)
#define IOMUXC_GPR_GPR2_AXBS_P_FORCE_ROUND_ROBIN_SHIFT (5U)
/*! AXBS_P_FORCE_ROUND_ROBIN
 *  0b0..AXBS_P masters are not arbitored in round robin, depending on M0/M1 master priority settings.
 *  0b1..AXBS_P masters are arbitored in round robin
 */
#define IOMUXC_GPR_GPR2_AXBS_P_FORCE_ROUND_ROBIN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_AXBS_P_FORCE_ROUND_ROBIN_SHIFT)) & IOMUXC_GPR_GPR2_AXBS_P_FORCE_ROUND_ROBIN_MASK)

#define IOMUXC_GPR_GPR2_CANFD_FILTER_BYPASS_MASK (0x40U)
#define IOMUXC_GPR_GPR2_CANFD_FILTER_BYPASS_SHIFT (6U)
/*! CANFD_FILTER_BYPASS
 *  0b0..enable CANFD filter
 *  0b1..disable CANFD filter
 */
#define IOMUXC_GPR_GPR2_CANFD_FILTER_BYPASS(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_CANFD_FILTER_BYPASS_SHIFT)) & IOMUXC_GPR_GPR2_CANFD_FILTER_BYPASS_MASK)

#define IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING_MASK (0x1000U)
#define IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING_SHIFT (12U)
/*! L2_MEM_EN_POWERSAVING
 *  0b0..none memory power saving features enabled, SHUTDOWN/DEEPSLEEP/LIGHTSLEEP will have no effect
 *  0b1..memory power saving features enabled, set SHUTDOWN/DEEPSLEEP/LIGHTSLEEP (priority high to low) to enable power saving levels
 */
#define IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING_SHIFT)) & IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING_MASK)

#define IOMUXC_GPR_GPR2_RAM_AUTO_CLK_GATING_EN_MASK (0x2000U)
#define IOMUXC_GPR_GPR2_RAM_AUTO_CLK_GATING_EN_SHIFT (13U)
/*! RAM_AUTO_CLK_GATING_EN
 *  0b0..disable automatically gate off RAM clock
 *  0b1..enable automatically gate off RAM clock
 */
#define IOMUXC_GPR_GPR2_RAM_AUTO_CLK_GATING_EN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_RAM_AUTO_CLK_GATING_EN_SHIFT)) & IOMUXC_GPR_GPR2_RAM_AUTO_CLK_GATING_EN_MASK)

#define IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP_MASK    (0x4000U)
#define IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP_SHIFT   (14U)
/*! L2_MEM_DEEPSLEEP
 *  0b0..no force sleep control supported, memory deep sleep mode only entered when whole system in stop mode
 *  0b1..force memory into deep sleep mode
 */
#define IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP_SHIFT)) & IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP_MASK)

#define IOMUXC_GPR_GPR2_MQS_CLK_DIV_MASK         (0xFF0000U)
#define IOMUXC_GPR_GPR2_MQS_CLK_DIV_SHIFT        (16U)
/*! MQS_CLK_DIV - Divider ratio control for mclk from hmclk. mclk frequency = 1/(n+1) * hmclk frequency.
 *  0b00000000..mclk frequency = 1/1 * hmclk frequency
 *  0b00000001..mclk frequency = 1/2 * hmclk frequency
 *  0b00000010..mclk frequency = 1/3 * hmclk frequency
 *  0b00000011..mclk frequency = 1/4 * hmclk frequency
 *  0b00000100..mclk frequency = 1/5 * hmclk frequency
 *  0b00000101..mclk frequency = 1/6 * hmclk frequency
 *  0b00000110..mclk frequency = 1/7 * hmclk frequency
 *  0b00000111..mclk frequency = 1/8 * hmclk frequency
 *  0b00001000..mclk frequency = 1/9 * hmclk frequency
 *  0b00001001..mclk frequency = 1/10 * hmclk frequency
 *  0b00001010..mclk frequency = 1/11 * hmclk frequency
 *  0b00001011..mclk frequency = 1/12 * hmclk frequency
 *  0b00001100..mclk frequency = 1/13 * hmclk frequency
 *  0b00001101..mclk frequency = 1/14 * hmclk frequency
 *  0b00001110..mclk frequency = 1/15 * hmclk frequency
 *  0b00001111..mclk frequency = 1/16 * hmclk frequency
 *  0b00010000..mclk frequency = 1/17 * hmclk frequency
 *  0b00010001..mclk frequency = 1/18 * hmclk frequency
 *  0b00010010..mclk frequency = 1/19 * hmclk frequency
 *  0b00010011..mclk frequency = 1/20 * hmclk frequency
 *  0b00010100..mclk frequency = 1/21 * hmclk frequency
 *  0b00010101..mclk frequency = 1/22 * hmclk frequency
 *  0b00010110..mclk frequency = 1/23 * hmclk frequency
 *  0b00010111..mclk frequency = 1/24 * hmclk frequency
 *  0b00011000..mclk frequency = 1/25 * hmclk frequency
 *  0b00011001..mclk frequency = 1/26 * hmclk frequency
 *  0b00011010..mclk frequency = 1/27 * hmclk frequency
 *  0b00011011..mclk frequency = 1/28 * hmclk frequency
 *  0b00011100..mclk frequency = 1/29 * hmclk frequency
 *  0b00011101..mclk frequency = 1/30 * hmclk frequency
 *  0b00011110..mclk frequency = 1/31 * hmclk frequency
 *  0b00011111..mclk frequency = 1/32 * hmclk frequency
 *  0b00100000..mclk frequency = 1/33 * hmclk frequency
 *  0b00100001..mclk frequency = 1/34 * hmclk frequency
 *  0b00100010..mclk frequency = 1/35 * hmclk frequency
 *  0b00100011..mclk frequency = 1/36 * hmclk frequency
 *  0b00100100..mclk frequency = 1/37 * hmclk frequency
 *  0b00100101..mclk frequency = 1/38 * hmclk frequency
 *  0b00100110..mclk frequency = 1/39 * hmclk frequency
 *  0b00100111..mclk frequency = 1/40 * hmclk frequency
 *  0b00101000..mclk frequency = 1/41 * hmclk frequency
 *  0b00101001..mclk frequency = 1/42 * hmclk frequency
 *  0b00101010..mclk frequency = 1/43 * hmclk frequency
 *  0b00101011..mclk frequency = 1/44 * hmclk frequency
 *  0b00101100..mclk frequency = 1/45 * hmclk frequency
 *  0b00101101..mclk frequency = 1/46 * hmclk frequency
 *  0b00101110..mclk frequency = 1/47 * hmclk frequency
 *  0b00101111..mclk frequency = 1/48 * hmclk frequency
 *  0b00110000..mclk frequency = 1/49 * hmclk frequency
 *  0b00110001..mclk frequency = 1/50 * hmclk frequency
 *  0b00110010..mclk frequency = 1/51 * hmclk frequency
 *  0b00110011..mclk frequency = 1/52 * hmclk frequency
 *  0b00110100..mclk frequency = 1/53 * hmclk frequency
 *  0b00110101..mclk frequency = 1/54 * hmclk frequency
 *  0b00110110..mclk frequency = 1/55 * hmclk frequency
 *  0b00110111..mclk frequency = 1/56 * hmclk frequency
 *  0b00111000..mclk frequency = 1/57 * hmclk frequency
 *  0b00111001..mclk frequency = 1/58 * hmclk frequency
 *  0b00111010..mclk frequency = 1/59 * hmclk frequency
 *  0b00111011..mclk frequency = 1/60 * hmclk frequency
 *  0b00111100..mclk frequency = 1/61 * hmclk frequency
 *  0b00111101..mclk frequency = 1/62 * hmclk frequency
 *  0b00111110..mclk frequency = 1/63 * hmclk frequency
 *  0b00111111..mclk frequency = 1/64 * hmclk frequency
 *  0b01000000..mclk frequency = 1/65 * hmclk frequency
 *  0b01000001..mclk frequency = 1/66 * hmclk frequency
 *  0b01000010..mclk frequency = 1/67 * hmclk frequency
 *  0b01000011..mclk frequency = 1/68 * hmclk frequency
 *  0b01000100..mclk frequency = 1/69 * hmclk frequency
 *  0b01000101..mclk frequency = 1/70 * hmclk frequency
 *  0b01000110..mclk frequency = 1/71 * hmclk frequency
 *  0b01000111..mclk frequency = 1/72 * hmclk frequency
 *  0b01001000..mclk frequency = 1/73 * hmclk frequency
 *  0b01001001..mclk frequency = 1/74 * hmclk frequency
 *  0b01001010..mclk frequency = 1/75 * hmclk frequency
 *  0b01001011..mclk frequency = 1/76 * hmclk frequency
 *  0b01001100..mclk frequency = 1/77 * hmclk frequency
 *  0b01001101..mclk frequency = 1/78 * hmclk frequency
 *  0b01001110..mclk frequency = 1/79 * hmclk frequency
 *  0b01001111..mclk frequency = 1/80 * hmclk frequency
 *  0b01010000..mclk frequency = 1/81 * hmclk frequency
 *  0b01010001..mclk frequency = 1/82 * hmclk frequency
 *  0b01010010..mclk frequency = 1/83 * hmclk frequency
 *  0b01010011..mclk frequency = 1/84 * hmclk frequency
 *  0b01010100..mclk frequency = 1/85 * hmclk frequency
 *  0b01010101..mclk frequency = 1/86 * hmclk frequency
 *  0b01010110..mclk frequency = 1/87 * hmclk frequency
 *  0b01010111..mclk frequency = 1/88 * hmclk frequency
 *  0b01011000..mclk frequency = 1/89 * hmclk frequency
 *  0b01011001..mclk frequency = 1/90 * hmclk frequency
 *  0b01011010..mclk frequency = 1/91 * hmclk frequency
 *  0b01011011..mclk frequency = 1/92 * hmclk frequency
 *  0b01011100..mclk frequency = 1/93 * hmclk frequency
 *  0b01011101..mclk frequency = 1/94 * hmclk frequency
 *  0b01011110..mclk frequency = 1/95 * hmclk frequency
 *  0b01011111..mclk frequency = 1/96 * hmclk frequency
 *  0b01100000..mclk frequency = 1/97 * hmclk frequency
 *  0b01100001..mclk frequency = 1/98 * hmclk frequency
 *  0b01100010..mclk frequency = 1/99 * hmclk frequency
 *  0b01100011..mclk frequency = 1/100 * hmclk frequency
 *  0b01100100..mclk frequency = 1/101 * hmclk frequency
 *  0b01100101..mclk frequency = 1/102 * hmclk frequency
 *  0b01100110..mclk frequency = 1/103 * hmclk frequency
 *  0b01100111..mclk frequency = 1/104 * hmclk frequency
 *  0b01101000..mclk frequency = 1/105 * hmclk frequency
 *  0b01101001..mclk frequency = 1/106 * hmclk frequency
 *  0b01101010..mclk frequency = 1/107 * hmclk frequency
 *  0b01101011..mclk frequency = 1/108 * hmclk frequency
 *  0b01101100..mclk frequency = 1/109 * hmclk frequency
 *  0b01101101..mclk frequency = 1/110 * hmclk frequency
 *  0b01101110..mclk frequency = 1/111 * hmclk frequency
 *  0b01101111..mclk frequency = 1/112 * hmclk frequency
 *  0b01110000..mclk frequency = 1/113 * hmclk frequency
 *  0b01110001..mclk frequency = 1/114 * hmclk frequency
 *  0b01110010..mclk frequency = 1/115 * hmclk frequency
 *  0b01110011..mclk frequency = 1/116 * hmclk frequency
 *  0b01110100..mclk frequency = 1/117 * hmclk frequency
 *  0b01110101..mclk frequency = 1/118 * hmclk frequency
 *  0b01110110..mclk frequency = 1/119 * hmclk frequency
 *  0b01110111..mclk frequency = 1/120 * hmclk frequency
 *  0b01111000..mclk frequency = 1/121 * hmclk frequency
 *  0b01111001..mclk frequency = 1/122 * hmclk frequency
 *  0b01111010..mclk frequency = 1/123 * hmclk frequency
 *  0b01111011..mclk frequency = 1/124 * hmclk frequency
 *  0b01111100..mclk frequency = 1/125 * hmclk frequency
 *  0b01111101..mclk frequency = 1/126 * hmclk frequency
 *  0b01111110..mclk frequency = 1/127 * hmclk frequency
 *  0b01111111..mclk frequency = 1/128 * hmclk frequency
 *  0b10000000..mclk frequency = 1/129 * hmclk frequency
 *  0b10000001..mclk frequency = 1/130 * hmclk frequency
 *  0b10000010..mclk frequency = 1/131 * hmclk frequency
 *  0b10000011..mclk frequency = 1/132 * hmclk frequency
 *  0b10000100..mclk frequency = 1/133 * hmclk frequency
 *  0b10000101..mclk frequency = 1/134 * hmclk frequency
 *  0b10000110..mclk frequency = 1/135 * hmclk frequency
 *  0b10000111..mclk frequency = 1/136 * hmclk frequency
 *  0b10001000..mclk frequency = 1/137 * hmclk frequency
 *  0b10001001..mclk frequency = 1/138 * hmclk frequency
 *  0b10001010..mclk frequency = 1/139 * hmclk frequency
 *  0b10001011..mclk frequency = 1/140 * hmclk frequency
 *  0b10001100..mclk frequency = 1/141 * hmclk frequency
 *  0b10001101..mclk frequency = 1/142 * hmclk frequency
 *  0b10001110..mclk frequency = 1/143 * hmclk frequency
 *  0b10001111..mclk frequency = 1/144 * hmclk frequency
 *  0b10010000..mclk frequency = 1/145 * hmclk frequency
 *  0b10010001..mclk frequency = 1/146 * hmclk frequency
 *  0b10010010..mclk frequency = 1/147 * hmclk frequency
 *  0b10010011..mclk frequency = 1/148 * hmclk frequency
 *  0b10010100..mclk frequency = 1/149 * hmclk frequency
 *  0b10010101..mclk frequency = 1/150 * hmclk frequency
 *  0b10010110..mclk frequency = 1/151 * hmclk frequency
 *  0b10010111..mclk frequency = 1/152 * hmclk frequency
 *  0b10011000..mclk frequency = 1/153 * hmclk frequency
 *  0b10011001..mclk frequency = 1/154 * hmclk frequency
 *  0b10011010..mclk frequency = 1/155 * hmclk frequency
 *  0b10011011..mclk frequency = 1/156 * hmclk frequency
 *  0b10011100..mclk frequency = 1/157 * hmclk frequency
 *  0b10011101..mclk frequency = 1/158 * hmclk frequency
 *  0b10011110..mclk frequency = 1/159 * hmclk frequency
 *  0b10011111..mclk frequency = 1/160 * hmclk frequency
 *  0b10100000..mclk frequency = 1/161 * hmclk frequency
 *  0b10100001..mclk frequency = 1/162 * hmclk frequency
 *  0b10100010..mclk frequency = 1/163 * hmclk frequency
 *  0b10100011..mclk frequency = 1/164 * hmclk frequency
 *  0b10100100..mclk frequency = 1/165 * hmclk frequency
 *  0b10100101..mclk frequency = 1/166 * hmclk frequency
 *  0b10100110..mclk frequency = 1/167 * hmclk frequency
 *  0b10100111..mclk frequency = 1/168 * hmclk frequency
 *  0b10101000..mclk frequency = 1/169 * hmclk frequency
 *  0b10101001..mclk frequency = 1/170 * hmclk frequency
 *  0b10101010..mclk frequency = 1/171 * hmclk frequency
 *  0b10101011..mclk frequency = 1/172 * hmclk frequency
 *  0b10101100..mclk frequency = 1/173 * hmclk frequency
 *  0b10101101..mclk frequency = 1/174 * hmclk frequency
 *  0b10101110..mclk frequency = 1/175 * hmclk frequency
 *  0b10101111..mclk frequency = 1/176 * hmclk frequency
 *  0b10110000..mclk frequency = 1/177 * hmclk frequency
 *  0b10110001..mclk frequency = 1/178 * hmclk frequency
 *  0b10110010..mclk frequency = 1/179 * hmclk frequency
 *  0b10110011..mclk frequency = 1/180 * hmclk frequency
 *  0b10110100..mclk frequency = 1/181 * hmclk frequency
 *  0b10110101..mclk frequency = 1/182 * hmclk frequency
 *  0b10110110..mclk frequency = 1/183 * hmclk frequency
 *  0b10110111..mclk frequency = 1/184 * hmclk frequency
 *  0b10111000..mclk frequency = 1/185 * hmclk frequency
 *  0b10111001..mclk frequency = 1/186 * hmclk frequency
 *  0b10111010..mclk frequency = 1/187 * hmclk frequency
 *  0b10111011..mclk frequency = 1/188 * hmclk frequency
 *  0b10111100..mclk frequency = 1/189 * hmclk frequency
 *  0b10111101..mclk frequency = 1/190 * hmclk frequency
 *  0b10111110..mclk frequency = 1/191 * hmclk frequency
 *  0b10111111..mclk frequency = 1/192 * hmclk frequency
 *  0b11000000..mclk frequency = 1/193 * hmclk frequency
 *  0b11000001..mclk frequency = 1/194 * hmclk frequency
 *  0b11000010..mclk frequency = 1/195 * hmclk frequency
 *  0b11000011..mclk frequency = 1/196 * hmclk frequency
 *  0b11000100..mclk frequency = 1/197 * hmclk frequency
 *  0b11000101..mclk frequency = 1/198 * hmclk frequency
 *  0b11000110..mclk frequency = 1/199 * hmclk frequency
 *  0b11000111..mclk frequency = 1/200 * hmclk frequency
 *  0b11001000..mclk frequency = 1/201 * hmclk frequency
 *  0b11001001..mclk frequency = 1/202 * hmclk frequency
 *  0b11001010..mclk frequency = 1/203 * hmclk frequency
 *  0b11001011..mclk frequency = 1/204 * hmclk frequency
 *  0b11001100..mclk frequency = 1/205 * hmclk frequency
 *  0b11001101..mclk frequency = 1/206 * hmclk frequency
 *  0b11001110..mclk frequency = 1/207 * hmclk frequency
 *  0b11001111..mclk frequency = 1/208 * hmclk frequency
 *  0b11010000..mclk frequency = 1/209 * hmclk frequency
 *  0b11010001..mclk frequency = 1/210 * hmclk frequency
 *  0b11010010..mclk frequency = 1/211 * hmclk frequency
 *  0b11010011..mclk frequency = 1/212 * hmclk frequency
 *  0b11010100..mclk frequency = 1/213 * hmclk frequency
 *  0b11010101..mclk frequency = 1/214 * hmclk frequency
 *  0b11010110..mclk frequency = 1/215 * hmclk frequency
 *  0b11010111..mclk frequency = 1/216 * hmclk frequency
 *  0b11011000..mclk frequency = 1/217 * hmclk frequency
 *  0b11011001..mclk frequency = 1/218 * hmclk frequency
 *  0b11011010..mclk frequency = 1/219 * hmclk frequency
 *  0b11011011..mclk frequency = 1/220 * hmclk frequency
 *  0b11011100..mclk frequency = 1/221 * hmclk frequency
 *  0b11011101..mclk frequency = 1/222 * hmclk frequency
 *  0b11011110..mclk frequency = 1/223 * hmclk frequency
 *  0b11011111..mclk frequency = 1/224 * hmclk frequency
 *  0b11100000..mclk frequency = 1/225 * hmclk frequency
 *  0b11100001..mclk frequency = 1/226 * hmclk frequency
 *  0b11100010..mclk frequency = 1/227 * hmclk frequency
 *  0b11100011..mclk frequency = 1/228 * hmclk frequency
 *  0b11100100..mclk frequency = 1/229 * hmclk frequency
 *  0b11100101..mclk frequency = 1/230 * hmclk frequency
 *  0b11100110..mclk frequency = 1/231 * hmclk frequency
 *  0b11100111..mclk frequency = 1/232 * hmclk frequency
 *  0b11101000..mclk frequency = 1/233 * hmclk frequency
 *  0b11101001..mclk frequency = 1/234 * hmclk frequency
 *  0b11101010..mclk frequency = 1/235 * hmclk frequency
 *  0b11101011..mclk frequency = 1/236 * hmclk frequency
 *  0b11101100..mclk frequency = 1/237 * hmclk frequency
 *  0b11101101..mclk frequency = 1/238 * hmclk frequency
 *  0b11101110..mclk frequency = 1/239 * hmclk frequency
 *  0b11101111..mclk frequency = 1/240 * hmclk frequency
 *  0b11110000..mclk frequency = 1/241 * hmclk frequency
 *  0b11110001..mclk frequency = 1/242 * hmclk frequency
 *  0b11110010..mclk frequency = 1/243 * hmclk frequency
 *  0b11110011..mclk frequency = 1/244 * hmclk frequency
 *  0b11110100..mclk frequency = 1/245 * hmclk frequency
 *  0b11110101..mclk frequency = 1/246 * hmclk frequency
 *  0b11110110..mclk frequency = 1/247 * hmclk frequency
 *  0b11110111..mclk frequency = 1/248 * hmclk frequency
 *  0b11111000..mclk frequency = 1/249 * hmclk frequency
 *  0b11111001..mclk frequency = 1/250 * hmclk frequency
 *  0b11111010..mclk frequency = 1/251 * hmclk frequency
 *  0b11111011..mclk frequency = 1/252 * hmclk frequency
 *  0b11111100..mclk frequency = 1/253 * hmclk frequency
 *  0b11111101..mclk frequency = 1/254 * hmclk frequency
 *  0b11111110..mclk frequency = 1/255 * hmclk frequency
 *  0b11111111..mclk frequency = 1/256 * hmclk frequency
 */
#define IOMUXC_GPR_GPR2_MQS_CLK_DIV(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_MQS_CLK_DIV_SHIFT)) & IOMUXC_GPR_GPR2_MQS_CLK_DIV_MASK)

#define IOMUXC_GPR_GPR2_MQS_SW_RST_MASK          (0x1000000U)
#define IOMUXC_GPR_GPR2_MQS_SW_RST_SHIFT         (24U)
/*! MQS_SW_RST
 *  0b0..Exit software reset for MQS
 *  0b1..Enable software reset for MQS
 */
#define IOMUXC_GPR_GPR2_MQS_SW_RST(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_MQS_SW_RST_SHIFT)) & IOMUXC_GPR_GPR2_MQS_SW_RST_MASK)

#define IOMUXC_GPR_GPR2_MQS_EN_MASK              (0x2000000U)
#define IOMUXC_GPR_GPR2_MQS_EN_SHIFT             (25U)
/*! MQS_EN
 *  0b0..Disable MQS
 *  0b1..Enable MQS
 */
#define IOMUXC_GPR_GPR2_MQS_EN(x)                (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_MQS_EN_SHIFT)) & IOMUXC_GPR_GPR2_MQS_EN_MASK)

#define IOMUXC_GPR_GPR2_MQS_OVERSAMPLE_MASK      (0x4000000U)
#define IOMUXC_GPR_GPR2_MQS_OVERSAMPLE_SHIFT     (26U)
/*! MQS_OVERSAMPLE
 *  0b0..32
 *  0b1..64
 */
#define IOMUXC_GPR_GPR2_MQS_OVERSAMPLE(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_MQS_OVERSAMPLE_SHIFT)) & IOMUXC_GPR_GPR2_MQS_OVERSAMPLE_MASK)

#define IOMUXC_GPR_GPR2_QTIMER1_TMR_CNTS_FREEZE_MASK (0x10000000U)
#define IOMUXC_GPR_GPR2_QTIMER1_TMR_CNTS_FREEZE_SHIFT (28U)
/*! QTIMER1_TMR_CNTS_FREEZE
 *  0b0..timer counter work normally
 *  0b1..reset counter and ouput flags
 */
#define IOMUXC_GPR_GPR2_QTIMER1_TMR_CNTS_FREEZE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_QTIMER1_TMR_CNTS_FREEZE_SHIFT)) & IOMUXC_GPR_GPR2_QTIMER1_TMR_CNTS_FREEZE_MASK)

#define IOMUXC_GPR_GPR2_QTIMER2_TMR_CNTS_FREEZE_MASK (0x20000000U)
#define IOMUXC_GPR_GPR2_QTIMER2_TMR_CNTS_FREEZE_SHIFT (29U)
/*! QTIMER2_TMR_CNTS_FREEZE
 *  0b0..timer counter work normally
 *  0b1..reset counter and ouput flags
 */
#define IOMUXC_GPR_GPR2_QTIMER2_TMR_CNTS_FREEZE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_QTIMER2_TMR_CNTS_FREEZE_SHIFT)) & IOMUXC_GPR_GPR2_QTIMER2_TMR_CNTS_FREEZE_MASK)

#define IOMUXC_GPR_GPR2_QTIMER3_TMR_CNTS_FREEZE_MASK (0x40000000U)
#define IOMUXC_GPR_GPR2_QTIMER3_TMR_CNTS_FREEZE_SHIFT (30U)
/*! QTIMER3_TMR_CNTS_FREEZE
 *  0b0..timer counter work normally
 *  0b1..reset counter and ouput flags
 */
#define IOMUXC_GPR_GPR2_QTIMER3_TMR_CNTS_FREEZE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_QTIMER3_TMR_CNTS_FREEZE_SHIFT)) & IOMUXC_GPR_GPR2_QTIMER3_TMR_CNTS_FREEZE_MASK)

#define IOMUXC_GPR_GPR2_QTIMER4_TMR_CNTS_FREEZE_MASK (0x80000000U)
#define IOMUXC_GPR_GPR2_QTIMER4_TMR_CNTS_FREEZE_SHIFT (31U)
/*! QTIMER4_TMR_CNTS_FREEZE
 *  0b0..timer counter work normally
 *  0b1..reset counter and ouput flags
 */
#define IOMUXC_GPR_GPR2_QTIMER4_TMR_CNTS_FREEZE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_QTIMER4_TMR_CNTS_FREEZE_SHIFT)) & IOMUXC_GPR_GPR2_QTIMER4_TMR_CNTS_FREEZE_MASK)
/*! @} */

/*! @name GPR3 - GPR3 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR3_OCRAM_CTL_MASK           (0xFU)
#define IOMUXC_GPR_GPR3_OCRAM_CTL_SHIFT          (0U)
#define IOMUXC_GPR_GPR3_OCRAM_CTL(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR3_OCRAM_CTL_SHIFT)) & IOMUXC_GPR_GPR3_OCRAM_CTL_MASK)

#define IOMUXC_GPR_GPR3_DCP_KEY_SEL_MASK         (0x10U)
#define IOMUXC_GPR_GPR3_DCP_KEY_SEL_SHIFT        (4U)
/*! DCP_KEY_SEL
 *  0b0..Select [127:0] from snvs/ocotp key as dcp key
 *  0b1..Select [255:128] from snvs/ocotp key as dcp key
 */
#define IOMUXC_GPR_GPR3_DCP_KEY_SEL(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR3_DCP_KEY_SEL_SHIFT)) & IOMUXC_GPR_GPR3_DCP_KEY_SEL_MASK)

#define IOMUXC_GPR_GPR3_OCRAM2_CTL_MASK          (0xF00U)
#define IOMUXC_GPR_GPR3_OCRAM2_CTL_SHIFT         (8U)
#define IOMUXC_GPR_GPR3_OCRAM2_CTL(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR3_OCRAM2_CTL_SHIFT)) & IOMUXC_GPR_GPR3_OCRAM2_CTL_MASK)

#define IOMUXC_GPR_GPR3_AXBS_L_HALT_REQ_MASK     (0x8000U)
#define IOMUXC_GPR_GPR3_AXBS_L_HALT_REQ_SHIFT    (15U)
/*! AXBS_L_HALT_REQ
 *  0b0..axbs_l normal run
 *  0b1..request to halt axbs_l
 */
#define IOMUXC_GPR_GPR3_AXBS_L_HALT_REQ(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR3_AXBS_L_HALT_REQ_SHIFT)) & IOMUXC_GPR_GPR3_AXBS_L_HALT_REQ_MASK)

#define IOMUXC_GPR_GPR3_OCRAM_STATUS_MASK        (0xF0000U)
#define IOMUXC_GPR_GPR3_OCRAM_STATUS_SHIFT       (16U)
#define IOMUXC_GPR_GPR3_OCRAM_STATUS(x)          (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR3_OCRAM_STATUS_SHIFT)) & IOMUXC_GPR_GPR3_OCRAM_STATUS_MASK)

#define IOMUXC_GPR_GPR3_OCRAM2_STATUS_MASK       (0xF000000U)
#define IOMUXC_GPR_GPR3_OCRAM2_STATUS_SHIFT      (24U)
#define IOMUXC_GPR_GPR3_OCRAM2_STATUS(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR3_OCRAM2_STATUS_SHIFT)) & IOMUXC_GPR_GPR3_OCRAM2_STATUS_MASK)

#define IOMUXC_GPR_GPR3_AXBS_L_HALTED_MASK       (0x80000000U)
#define IOMUXC_GPR_GPR3_AXBS_L_HALTED_SHIFT      (31U)
/*! AXBS_L_HALTED
 *  0b0..axbs_l is not halted
 *  0b1..axbs_l is in halted status
 */
#define IOMUXC_GPR_GPR3_AXBS_L_HALTED(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR3_AXBS_L_HALTED_SHIFT)) & IOMUXC_GPR_GPR3_AXBS_L_HALTED_MASK)
/*! @} */

/*! @name GPR4 - GPR4 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR4_EDMA_STOP_REQ_MASK       (0x1U)
#define IOMUXC_GPR_GPR4_EDMA_STOP_REQ_SHIFT      (0U)
/*! EDMA_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_EDMA_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_EDMA_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_EDMA_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_CAN1_STOP_REQ_MASK       (0x2U)
#define IOMUXC_GPR_GPR4_CAN1_STOP_REQ_SHIFT      (1U)
/*! CAN1_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_CAN1_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_CAN1_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_CAN1_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_CAN2_STOP_REQ_MASK       (0x4U)
#define IOMUXC_GPR_GPR4_CAN2_STOP_REQ_SHIFT      (2U)
/*! CAN2_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_CAN2_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_CAN2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_CAN2_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_TRNG_STOP_REQ_MASK       (0x8U)
#define IOMUXC_GPR_GPR4_TRNG_STOP_REQ_SHIFT      (3U)
/*! TRNG_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_TRNG_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_TRNG_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_TRNG_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_ENET_STOP_REQ_MASK       (0x10U)
#define IOMUXC_GPR_GPR4_ENET_STOP_REQ_SHIFT      (4U)
/*! ENET_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_ENET_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ENET_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_ENET_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_SAI1_STOP_REQ_MASK       (0x20U)
#define IOMUXC_GPR_GPR4_SAI1_STOP_REQ_SHIFT      (5U)
/*! SAI1_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_SAI1_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI1_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_SAI1_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_SAI2_STOP_REQ_MASK       (0x40U)
#define IOMUXC_GPR_GPR4_SAI2_STOP_REQ_SHIFT      (6U)
/*! SAI2_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_SAI2_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_SAI2_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_SAI3_STOP_REQ_MASK       (0x80U)
#define IOMUXC_GPR_GPR4_SAI3_STOP_REQ_SHIFT      (7U)
/*! SAI3_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_SAI3_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI3_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_SAI3_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_ENET2_STOP_REQ_MASK      (0x100U)
#define IOMUXC_GPR_GPR4_ENET2_STOP_REQ_SHIFT     (8U)
/*! ENET2_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_ENET2_STOP_REQ(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ENET2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_ENET2_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_SEMC_STOP_REQ_MASK       (0x200U)
#define IOMUXC_GPR_GPR4_SEMC_STOP_REQ_SHIFT      (9U)
/*! SEMC_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_SEMC_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SEMC_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_SEMC_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_PIT_STOP_REQ_MASK        (0x400U)
#define IOMUXC_GPR_GPR4_PIT_STOP_REQ_SHIFT       (10U)
/*! PIT_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_PIT_STOP_REQ(x)          (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_PIT_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_PIT_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_FLEXSPI_STOP_REQ_MASK    (0x800U)
#define IOMUXC_GPR_GPR4_FLEXSPI_STOP_REQ_SHIFT   (11U)
/*! FLEXSPI_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_FLEXSPI_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_FLEXSPI_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_FLEXSPI_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_FLEXIO1_STOP_REQ_MASK    (0x1000U)
#define IOMUXC_GPR_GPR4_FLEXIO1_STOP_REQ_SHIFT   (12U)
/*! FLEXIO1_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_FLEXIO1_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_FLEXIO1_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_FLEXIO1_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_FLEXIO2_STOP_REQ_MASK    (0x2000U)
#define IOMUXC_GPR_GPR4_FLEXIO2_STOP_REQ_SHIFT   (13U)
/*! FLEXIO2_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_FLEXIO2_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_FLEXIO2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_FLEXIO2_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_FLEXIO3_STOP_REQ_MASK    (0x4000U)
#define IOMUXC_GPR_GPR4_FLEXIO3_STOP_REQ_SHIFT   (14U)
/*! FLEXIO3_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_FLEXIO3_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_FLEXIO3_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_FLEXIO3_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_FLEXSPI2_STOP_REQ_MASK   (0x8000U)
#define IOMUXC_GPR_GPR4_FLEXSPI2_STOP_REQ_SHIFT  (15U)
/*! FLEXSPI2_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR4_FLEXSPI2_STOP_REQ(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_FLEXSPI2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_FLEXSPI2_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR4_EDMA_STOP_ACK_MASK       (0x10000U)
#define IOMUXC_GPR_GPR4_EDMA_STOP_ACK_SHIFT      (16U)
/*! EDMA_STOP_ACK
 *  0b0..EDMA stop acknowledge is not asserted
 *  0b1..EDMA stop acknowledge is asserted (EDMA is in STOP mode).
 */
#define IOMUXC_GPR_GPR4_EDMA_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_EDMA_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_EDMA_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_CAN1_STOP_ACK_MASK       (0x20000U)
#define IOMUXC_GPR_GPR4_CAN1_STOP_ACK_SHIFT      (17U)
/*! CAN1_STOP_ACK
 *  0b0..CAN1 stop acknowledge is not asserted
 *  0b1..CAN1 stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_CAN1_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_CAN1_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_CAN1_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_CAN2_STOP_ACK_MASK       (0x40000U)
#define IOMUXC_GPR_GPR4_CAN2_STOP_ACK_SHIFT      (18U)
/*! CAN2_STOP_ACK
 *  0b0..CAN2 stop acknowledge is not asserted
 *  0b1..CAN2 stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_CAN2_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_CAN2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_CAN2_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_TRNG_STOP_ACK_MASK       (0x80000U)
#define IOMUXC_GPR_GPR4_TRNG_STOP_ACK_SHIFT      (19U)
/*! TRNG_STOP_ACK
 *  0b0..TRNG stop acknowledge is not asserted
 *  0b1..TRNG stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_TRNG_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_TRNG_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_TRNG_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_ENET_STOP_ACK_MASK       (0x100000U)
#define IOMUXC_GPR_GPR4_ENET_STOP_ACK_SHIFT      (20U)
/*! ENET_STOP_ACK
 *  0b0..ENET1 stop acknowledge is not asserted
 *  0b1..ENET1 stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_ENET_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ENET_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_ENET_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_SAI1_STOP_ACK_MASK       (0x200000U)
#define IOMUXC_GPR_GPR4_SAI1_STOP_ACK_SHIFT      (21U)
/*! SAI1_STOP_ACK
 *  0b0..SAI1 stop acknowledge is not asserted
 *  0b1..SAI1 stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_SAI1_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI1_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_SAI1_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_SAI2_STOP_ACK_MASK       (0x400000U)
#define IOMUXC_GPR_GPR4_SAI2_STOP_ACK_SHIFT      (22U)
/*! SAI2_STOP_ACK
 *  0b0..SAI2 stop acknowledge is not asserted
 *  0b1..SAI2 stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_SAI2_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_SAI2_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_SAI3_STOP_ACK_MASK       (0x800000U)
#define IOMUXC_GPR_GPR4_SAI3_STOP_ACK_SHIFT      (23U)
/*! SAI3_STOP_ACK
 *  0b0..SAI3 stop acknowledge is not asserted
 *  0b1..SAI3 stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_SAI3_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI3_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_SAI3_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_ENET2_STOP_ACK_MASK      (0x1000000U)
#define IOMUXC_GPR_GPR4_ENET2_STOP_ACK_SHIFT     (24U)
/*! ENET2_STOP_ACK
 *  0b0..ENET2 stop acknowledge is not asserted
 *  0b1..ENET2 stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_ENET2_STOP_ACK(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ENET2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_ENET2_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_SEMC_STOP_ACK_MASK       (0x2000000U)
#define IOMUXC_GPR_GPR4_SEMC_STOP_ACK_SHIFT      (25U)
/*! SEMC_STOP_ACK
 *  0b0..SEMC stop acknowledge is not asserted
 *  0b1..SEMC stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_SEMC_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SEMC_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_SEMC_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_PIT_STOP_ACK_MASK        (0x4000000U)
#define IOMUXC_GPR_GPR4_PIT_STOP_ACK_SHIFT       (26U)
/*! PIT_STOP_ACK
 *  0b0..PIT stop acknowledge is not asserted
 *  0b1..PIT stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_PIT_STOP_ACK(x)          (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_PIT_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_PIT_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_FLEXSPI_STOP_ACK_MASK    (0x8000000U)
#define IOMUXC_GPR_GPR4_FLEXSPI_STOP_ACK_SHIFT   (27U)
/*! FLEXSPI_STOP_ACK
 *  0b0..FLEXSPI stop acknowledge is not asserted
 *  0b1..FLEXSPI stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_FLEXSPI_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_FLEXSPI_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_FLEXSPI_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_FLEXIO1_STOP_ACK_MASK    (0x10000000U)
#define IOMUXC_GPR_GPR4_FLEXIO1_STOP_ACK_SHIFT   (28U)
/*! FLEXIO1_STOP_ACK
 *  0b0..FLEXIO1 stop acknowledge is not asserted
 *  0b1..FLEXIO1 stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_FLEXIO1_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_FLEXIO1_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_FLEXIO1_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_FLEXIO2_STOP_ACK_MASK    (0x20000000U)
#define IOMUXC_GPR_GPR4_FLEXIO2_STOP_ACK_SHIFT   (29U)
/*! FLEXIO2_STOP_ACK
 *  0b0..FLEXIO2 stop acknowledge is not asserted
 *  0b1..FLEXIO2 stop acknowledge is asserted (FLEXIO2 is in STOP mode)
 */
#define IOMUXC_GPR_GPR4_FLEXIO2_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_FLEXIO2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_FLEXIO2_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_FLEXIO3_STOP_ACK_MASK    (0x40000000U)
#define IOMUXC_GPR_GPR4_FLEXIO3_STOP_ACK_SHIFT   (30U)
/*! FLEXIO3_STOP_ACK
 *  0b0..FLEXIO3 stop acknowledge is not asserted
 *  0b1..FLEXIO3 stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_FLEXIO3_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_FLEXIO3_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_FLEXIO3_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR4_FLEXSPI2_STOP_ACK_MASK   (0x80000000U)
#define IOMUXC_GPR_GPR4_FLEXSPI2_STOP_ACK_SHIFT  (31U)
/*! FLEXSPI2_STOP_ACK
 *  0b0..FLEXSPI2 stop acknowledge is not asserted
 *  0b1..FLEXSPI2 stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR4_FLEXSPI2_STOP_ACK(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_FLEXSPI2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_FLEXSPI2_STOP_ACK_MASK)
/*! @} */

/*! @name GPR5 - GPR5 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR5_WDOG1_MASK_MASK          (0x40U)
#define IOMUXC_GPR_GPR5_WDOG1_MASK_SHIFT         (6U)
/*! WDOG1_MASK
 *  0b0..WDOG1 Timeout behaves normally
 *  0b1..WDOG1 Timeout is masked
 */
#define IOMUXC_GPR_GPR5_WDOG1_MASK(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_WDOG1_MASK_SHIFT)) & IOMUXC_GPR_GPR5_WDOG1_MASK_MASK)

#define IOMUXC_GPR_GPR5_WDOG2_MASK_MASK          (0x80U)
#define IOMUXC_GPR_GPR5_WDOG2_MASK_SHIFT         (7U)
/*! WDOG2_MASK
 *  0b0..WDOG2 Timeout behaves normally
 *  0b1..WDOG2 Timeout is masked
 */
#define IOMUXC_GPR_GPR5_WDOG2_MASK(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_WDOG2_MASK_SHIFT)) & IOMUXC_GPR_GPR5_WDOG2_MASK_MASK)

#define IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL_MASK     (0x800000U)
#define IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL_SHIFT    (23U)
/*! GPT2_CAPIN1_SEL
 *  0b0..source from GPT2_CAPTURE1
 *  0b1..source from ENET_1588_EVENT3_OUT (chnnal 3 of IEEE 1588 timer)
 */
#define IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL_SHIFT)) & IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL_MASK)

#define IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL_MASK     (0x1000000U)
#define IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL_SHIFT    (24U)
/*! GPT2_CAPIN2_SEL
 *  0b0..source from GPT2_CAPTURE2
 *  0b1..source from ENET2_1588_EVENT3_OUT (chnnal 3 of IEEE 1588 timer)
 */
#define IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL_SHIFT)) & IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL_MASK)

#define IOMUXC_GPR_GPR5_ENET_EVENT3IN_SEL_MASK   (0x2000000U)
#define IOMUXC_GPR_GPR5_ENET_EVENT3IN_SEL_SHIFT  (25U)
/*! ENET_EVENT3IN_SEL
 *  0b0..event3 source input from ENET_1588_EVENT3_IN
 *  0b1..event3 source input from GPT2.GPT_COMPARE1
 */
#define IOMUXC_GPR_GPR5_ENET_EVENT3IN_SEL(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_ENET_EVENT3IN_SEL_SHIFT)) & IOMUXC_GPR_GPR5_ENET_EVENT3IN_SEL_MASK)

#define IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL_MASK  (0x4000000U)
#define IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL_SHIFT (26U)
/*! ENET2_EVENT3IN_SEL
 *  0b0..event3 source input from ENET2_1588_EVENT3_IN
 *  0b1..event3 source input from GPT2.GPT_COMPARE2
 */
#define IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL_SHIFT)) & IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL_MASK)

#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1_MASK    (0x10000000U)
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1_SHIFT   (28U)
/*! VREF_1M_CLK_GPT1
 *  0b0..GPT1 ipg_clk_highfreq driven by IPG_PERCLK
 *  0b1..GPT1 ipg_clk_highfreq driven by anatop 1 MHz clock
 */
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1_SHIFT)) & IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1_MASK)

#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2_MASK    (0x20000000U)
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2_SHIFT   (29U)
/*! VREF_1M_CLK_GPT2
 *  0b0..GPT2 ipg_clk_highfreq driven by IPG_PERCLK
 *  0b1..GPT2 ipg_clk_highfreq driven by anatop 1 MHz clock
 */
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2_SHIFT)) & IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2_MASK)
/*! @} */

/*! @name GPR6 - GPR6 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR6_QTIMER1_TRM0_INPUT_SEL_MASK (0x1U)
#define IOMUXC_GPR_GPR6_QTIMER1_TRM0_INPUT_SEL_SHIFT (0U)
/*! QTIMER1_TRM0_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER1_TRM0_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER1_TRM0_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER1_TRM0_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER1_TRM1_INPUT_SEL_MASK (0x2U)
#define IOMUXC_GPR_GPR6_QTIMER1_TRM1_INPUT_SEL_SHIFT (1U)
/*! QTIMER1_TRM1_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER1_TRM1_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER1_TRM1_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER1_TRM1_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER1_TRM2_INPUT_SEL_MASK (0x4U)
#define IOMUXC_GPR_GPR6_QTIMER1_TRM2_INPUT_SEL_SHIFT (2U)
/*! QTIMER1_TRM2_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER1_TRM2_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER1_TRM2_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER1_TRM2_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER1_TRM3_INPUT_SEL_MASK (0x8U)
#define IOMUXC_GPR_GPR6_QTIMER1_TRM3_INPUT_SEL_SHIFT (3U)
/*! QTIMER1_TRM3_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER1_TRM3_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER1_TRM3_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER1_TRM3_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER2_TRM0_INPUT_SEL_MASK (0x10U)
#define IOMUXC_GPR_GPR6_QTIMER2_TRM0_INPUT_SEL_SHIFT (4U)
/*! QTIMER2_TRM0_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER2_TRM0_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER2_TRM0_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER2_TRM0_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER2_TRM1_INPUT_SEL_MASK (0x20U)
#define IOMUXC_GPR_GPR6_QTIMER2_TRM1_INPUT_SEL_SHIFT (5U)
/*! QTIMER2_TRM1_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER2_TRM1_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER2_TRM1_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER2_TRM1_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER2_TRM2_INPUT_SEL_MASK (0x40U)
#define IOMUXC_GPR_GPR6_QTIMER2_TRM2_INPUT_SEL_SHIFT (6U)
/*! QTIMER2_TRM2_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER2_TRM2_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER2_TRM2_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER2_TRM2_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER2_TRM3_INPUT_SEL_MASK (0x80U)
#define IOMUXC_GPR_GPR6_QTIMER2_TRM3_INPUT_SEL_SHIFT (7U)
/*! QTIMER2_TRM3_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER2_TRM3_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER2_TRM3_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER2_TRM3_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER3_TRM0_INPUT_SEL_MASK (0x100U)
#define IOMUXC_GPR_GPR6_QTIMER3_TRM0_INPUT_SEL_SHIFT (8U)
/*! QTIMER3_TRM0_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER3_TRM0_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER3_TRM0_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER3_TRM0_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER3_TRM1_INPUT_SEL_MASK (0x200U)
#define IOMUXC_GPR_GPR6_QTIMER3_TRM1_INPUT_SEL_SHIFT (9U)
/*! QTIMER3_TRM1_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER3_TRM1_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER3_TRM1_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER3_TRM1_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER3_TRM2_INPUT_SEL_MASK (0x400U)
#define IOMUXC_GPR_GPR6_QTIMER3_TRM2_INPUT_SEL_SHIFT (10U)
/*! QTIMER3_TRM2_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER3_TRM2_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER3_TRM2_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER3_TRM2_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER3_TRM3_INPUT_SEL_MASK (0x800U)
#define IOMUXC_GPR_GPR6_QTIMER3_TRM3_INPUT_SEL_SHIFT (11U)
/*! QTIMER3_TRM3_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER3_TRM3_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER3_TRM3_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER3_TRM3_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER4_TRM0_INPUT_SEL_MASK (0x1000U)
#define IOMUXC_GPR_GPR6_QTIMER4_TRM0_INPUT_SEL_SHIFT (12U)
/*! QTIMER4_TRM0_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER4_TRM0_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER4_TRM0_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER4_TRM0_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER4_TRM1_INPUT_SEL_MASK (0x2000U)
#define IOMUXC_GPR_GPR6_QTIMER4_TRM1_INPUT_SEL_SHIFT (13U)
/*! QTIMER4_TRM1_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER4_TRM1_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER4_TRM1_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER4_TRM1_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER4_TRM2_INPUT_SEL_MASK (0x4000U)
#define IOMUXC_GPR_GPR6_QTIMER4_TRM2_INPUT_SEL_SHIFT (14U)
/*! QTIMER4_TRM2_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER4_TRM2_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER4_TRM2_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER4_TRM2_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_QTIMER4_TRM3_INPUT_SEL_MASK (0x8000U)
#define IOMUXC_GPR_GPR6_QTIMER4_TRM3_INPUT_SEL_SHIFT (15U)
/*! QTIMER4_TRM3_INPUT_SEL
 *  0b0..input from IOMUX
 *  0b1..input from XBAR
 */
#define IOMUXC_GPR_GPR6_QTIMER4_TRM3_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_QTIMER4_TRM3_INPUT_SEL_SHIFT)) & IOMUXC_GPR_GPR6_QTIMER4_TRM3_INPUT_SEL_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_4_MASK (0x10000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_4_SHIFT (16U)
/*! IOMUXC_XBAR_DIR_SEL_4
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_4(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_4_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_4_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_5_MASK (0x20000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_5_SHIFT (17U)
/*! IOMUXC_XBAR_DIR_SEL_5
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_5(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_5_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_5_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_6_MASK (0x40000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_6_SHIFT (18U)
/*! IOMUXC_XBAR_DIR_SEL_6
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_6(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_6_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_6_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_7_MASK (0x80000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_7_SHIFT (19U)
/*! IOMUXC_XBAR_DIR_SEL_7
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_7(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_7_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_7_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_8_MASK (0x100000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_8_SHIFT (20U)
/*! IOMUXC_XBAR_DIR_SEL_8
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_8(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_8_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_8_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_9_MASK (0x200000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_9_SHIFT (21U)
/*! IOMUXC_XBAR_DIR_SEL_9
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_9(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_9_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_9_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_10_MASK (0x400000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_10_SHIFT (22U)
/*! IOMUXC_XBAR_DIR_SEL_10
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_10(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_10_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_10_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_11_MASK (0x800000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_11_SHIFT (23U)
/*! IOMUXC_XBAR_DIR_SEL_11
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_11(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_11_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_11_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_12_MASK (0x1000000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_12_SHIFT (24U)
/*! IOMUXC_XBAR_DIR_SEL_12
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_12(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_12_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_12_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_13_MASK (0x2000000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_13_SHIFT (25U)
/*! IOMUXC_XBAR_DIR_SEL_13
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_13(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_13_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_13_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_14_MASK (0x4000000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_14_SHIFT (26U)
/*! IOMUXC_XBAR_DIR_SEL_14
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_14(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_14_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_14_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_15_MASK (0x8000000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_15_SHIFT (27U)
/*! IOMUXC_XBAR_DIR_SEL_15
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_15(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_15_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_15_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_16_MASK (0x10000000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_16_SHIFT (28U)
/*! IOMUXC_XBAR_DIR_SEL_16
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_16(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_16_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_16_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_17_MASK (0x20000000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_17_SHIFT (29U)
/*! IOMUXC_XBAR_DIR_SEL_17
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_17(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_17_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_17_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_18_MASK (0x40000000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_18_SHIFT (30U)
/*! IOMUXC_XBAR_DIR_SEL_18
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_18(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_18_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_18_MASK)

#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_19_MASK (0x80000000U)
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_19_SHIFT (31U)
/*! IOMUXC_XBAR_DIR_SEL_19
 *  0b0..XBAR_INOUT as input
 *  0b1..XBAR_INOUT as output
 */
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_19(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_19_SHIFT)) & IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_19_MASK)
/*! @} */

/*! @name GPR7 - GPR7 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR7_LPI2C1_STOP_REQ_MASK     (0x1U)
#define IOMUXC_GPR_GPR7_LPI2C1_STOP_REQ_SHIFT    (0U)
/*! LPI2C1_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPI2C1_STOP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPI2C1_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPI2C1_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPI2C2_STOP_REQ_MASK     (0x2U)
#define IOMUXC_GPR_GPR7_LPI2C2_STOP_REQ_SHIFT    (1U)
/*! LPI2C2_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPI2C2_STOP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPI2C2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPI2C2_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPI2C3_STOP_REQ_MASK     (0x4U)
#define IOMUXC_GPR_GPR7_LPI2C3_STOP_REQ_SHIFT    (2U)
/*! LPI2C3_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPI2C3_STOP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPI2C3_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPI2C3_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPI2C4_STOP_REQ_MASK     (0x8U)
#define IOMUXC_GPR_GPR7_LPI2C4_STOP_REQ_SHIFT    (3U)
/*! LPI2C4_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPI2C4_STOP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPI2C4_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPI2C4_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPSPI1_STOP_REQ_MASK     (0x10U)
#define IOMUXC_GPR_GPR7_LPSPI1_STOP_REQ_SHIFT    (4U)
/*! LPSPI1_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPSPI1_STOP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPSPI1_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPSPI1_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPSPI2_STOP_REQ_MASK     (0x20U)
#define IOMUXC_GPR_GPR7_LPSPI2_STOP_REQ_SHIFT    (5U)
/*! LPSPI2_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPSPI2_STOP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPSPI2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPSPI2_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPSPI3_STOP_REQ_MASK     (0x40U)
#define IOMUXC_GPR_GPR7_LPSPI3_STOP_REQ_SHIFT    (6U)
/*! LPSPI3_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPSPI3_STOP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPSPI3_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPSPI3_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPSPI4_STOP_REQ_MASK     (0x80U)
#define IOMUXC_GPR_GPR7_LPSPI4_STOP_REQ_SHIFT    (7U)
/*! LPSPI4_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPSPI4_STOP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPSPI4_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPSPI4_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPUART1_STOP_REQ_MASK    (0x100U)
#define IOMUXC_GPR_GPR7_LPUART1_STOP_REQ_SHIFT   (8U)
/*! LPUART1_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPUART1_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART1_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPUART1_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPUART2_STOP_REQ_MASK    (0x200U)
#define IOMUXC_GPR_GPR7_LPUART2_STOP_REQ_SHIFT   (9U)
/*! LPUART2_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPUART2_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPUART2_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPUART3_STOP_REQ_MASK    (0x400U)
#define IOMUXC_GPR_GPR7_LPUART3_STOP_REQ_SHIFT   (10U)
/*! LPUART3_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPUART3_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART3_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPUART3_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPUART4_STOP_REQ_MASK    (0x800U)
#define IOMUXC_GPR_GPR7_LPUART4_STOP_REQ_SHIFT   (11U)
/*! LPUART4_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPUART4_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART4_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPUART4_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPUART5_STOP_REQ_MASK    (0x1000U)
#define IOMUXC_GPR_GPR7_LPUART5_STOP_REQ_SHIFT   (12U)
/*! LPUART5_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPUART5_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART5_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPUART5_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPUART6_STOP_REQ_MASK    (0x2000U)
#define IOMUXC_GPR_GPR7_LPUART6_STOP_REQ_SHIFT   (13U)
/*! LPUART6_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPUART6_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART6_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPUART6_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPUART7_STOP_REQ_MASK    (0x4000U)
#define IOMUXC_GPR_GPR7_LPUART7_STOP_REQ_SHIFT   (14U)
/*! LPUART7_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPUART7_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART7_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPUART7_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPUART8_STOP_REQ_MASK    (0x8000U)
#define IOMUXC_GPR_GPR7_LPUART8_STOP_REQ_SHIFT   (15U)
/*! LPUART8_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR7_LPUART8_STOP_REQ(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART8_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR7_LPUART8_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR7_LPI2C1_STOP_ACK_MASK     (0x10000U)
#define IOMUXC_GPR_GPR7_LPI2C1_STOP_ACK_SHIFT    (16U)
/*! LPI2C1_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted (the module is in Stop mode)
 */
#define IOMUXC_GPR_GPR7_LPI2C1_STOP_ACK(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPI2C1_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPI2C1_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPI2C2_STOP_ACK_MASK     (0x20000U)
#define IOMUXC_GPR_GPR7_LPI2C2_STOP_ACK_SHIFT    (17U)
/*! LPI2C2_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPI2C2_STOP_ACK(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPI2C2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPI2C2_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPI2C3_STOP_ACK_MASK     (0x40000U)
#define IOMUXC_GPR_GPR7_LPI2C3_STOP_ACK_SHIFT    (18U)
/*! LPI2C3_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPI2C3_STOP_ACK(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPI2C3_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPI2C3_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPI2C4_STOP_ACK_MASK     (0x80000U)
#define IOMUXC_GPR_GPR7_LPI2C4_STOP_ACK_SHIFT    (19U)
/*! LPI2C4_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPI2C4_STOP_ACK(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPI2C4_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPI2C4_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPSPI1_STOP_ACK_MASK     (0x100000U)
#define IOMUXC_GPR_GPR7_LPSPI1_STOP_ACK_SHIFT    (20U)
/*! LPSPI1_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPSPI1_STOP_ACK(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPSPI1_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPSPI1_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPSPI2_STOP_ACK_MASK     (0x200000U)
#define IOMUXC_GPR_GPR7_LPSPI2_STOP_ACK_SHIFT    (21U)
/*! LPSPI2_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPSPI2_STOP_ACK(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPSPI2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPSPI2_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPSPI3_STOP_ACK_MASK     (0x400000U)
#define IOMUXC_GPR_GPR7_LPSPI3_STOP_ACK_SHIFT    (22U)
/*! LPSPI3_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPSPI3_STOP_ACK(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPSPI3_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPSPI3_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPSPI4_STOP_ACK_MASK     (0x800000U)
#define IOMUXC_GPR_GPR7_LPSPI4_STOP_ACK_SHIFT    (23U)
/*! LPSPI4_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPSPI4_STOP_ACK(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPSPI4_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPSPI4_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPUART1_STOP_ACK_MASK    (0x1000000U)
#define IOMUXC_GPR_GPR7_LPUART1_STOP_ACK_SHIFT   (24U)
/*! LPUART1_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPUART1_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART1_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPUART1_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPUART2_STOP_ACK_MASK    (0x2000000U)
#define IOMUXC_GPR_GPR7_LPUART2_STOP_ACK_SHIFT   (25U)
/*! LPUART2_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPUART2_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPUART2_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPUART3_STOP_ACK_MASK    (0x4000000U)
#define IOMUXC_GPR_GPR7_LPUART3_STOP_ACK_SHIFT   (26U)
/*! LPUART3_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPUART3_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART3_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPUART3_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPUART4_STOP_ACK_MASK    (0x8000000U)
#define IOMUXC_GPR_GPR7_LPUART4_STOP_ACK_SHIFT   (27U)
/*! LPUART4_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPUART4_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART4_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPUART4_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPUART5_STOP_ACK_MASK    (0x10000000U)
#define IOMUXC_GPR_GPR7_LPUART5_STOP_ACK_SHIFT   (28U)
/*! LPUART5_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPUART5_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART5_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPUART5_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPUART6_STOP_ACK_MASK    (0x20000000U)
#define IOMUXC_GPR_GPR7_LPUART6_STOP_ACK_SHIFT   (29U)
/*! LPUART6_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPUART6_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART6_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPUART6_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPUART7_STOP_ACK_MASK    (0x40000000U)
#define IOMUXC_GPR_GPR7_LPUART7_STOP_ACK_SHIFT   (30U)
/*! LPUART7_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR7_LPUART7_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART7_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPUART7_STOP_ACK_MASK)

#define IOMUXC_GPR_GPR7_LPUART8_STOP_ACK_MASK    (0x80000000U)
#define IOMUXC_GPR_GPR7_LPUART8_STOP_ACK_SHIFT   (31U)
/*! LPUART8_STOP_ACK
 *  0b0..stop acknowledge is not asserted
 *  0b1..stop acknowledge is asserted (the module is in Stop mode)
 */
#define IOMUXC_GPR_GPR7_LPUART8_STOP_ACK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR7_LPUART8_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR7_LPUART8_STOP_ACK_MASK)
/*! @} */

/*! @name GPR8 - GPR8 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR8_LPI2C1_IPG_STOP_MODE_MASK (0x1U)
#define IOMUXC_GPR_GPR8_LPI2C1_IPG_STOP_MODE_SHIFT (0U)
/*! LPI2C1_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPI2C1_IPG_STOP_MODE(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPI2C1_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPI2C1_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPI2C1_IPG_DOZE_MASK     (0x2U)
#define IOMUXC_GPR_GPR8_LPI2C1_IPG_DOZE_SHIFT    (1U)
/*! LPI2C1_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPI2C1_IPG_DOZE(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPI2C1_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPI2C1_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPI2C2_IPG_STOP_MODE_MASK (0x4U)
#define IOMUXC_GPR_GPR8_LPI2C2_IPG_STOP_MODE_SHIFT (2U)
/*! LPI2C2_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPI2C2_IPG_STOP_MODE(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPI2C2_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPI2C2_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPI2C2_IPG_DOZE_MASK     (0x8U)
#define IOMUXC_GPR_GPR8_LPI2C2_IPG_DOZE_SHIFT    (3U)
/*! LPI2C2_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPI2C2_IPG_DOZE(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPI2C2_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPI2C2_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPI2C3_IPG_STOP_MODE_MASK (0x10U)
#define IOMUXC_GPR_GPR8_LPI2C3_IPG_STOP_MODE_SHIFT (4U)
/*! LPI2C3_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPI2C3_IPG_STOP_MODE(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPI2C3_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPI2C3_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPI2C3_IPG_DOZE_MASK     (0x20U)
#define IOMUXC_GPR_GPR8_LPI2C3_IPG_DOZE_SHIFT    (5U)
/*! LPI2C3_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPI2C3_IPG_DOZE(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPI2C3_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPI2C3_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPI2C4_IPG_STOP_MODE_MASK (0x40U)
#define IOMUXC_GPR_GPR8_LPI2C4_IPG_STOP_MODE_SHIFT (6U)
/*! LPI2C4_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPI2C4_IPG_STOP_MODE(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPI2C4_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPI2C4_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPI2C4_IPG_DOZE_MASK     (0x80U)
#define IOMUXC_GPR_GPR8_LPI2C4_IPG_DOZE_SHIFT    (7U)
/*! LPI2C4_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPI2C4_IPG_DOZE(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPI2C4_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPI2C4_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPSPI1_IPG_STOP_MODE_MASK (0x100U)
#define IOMUXC_GPR_GPR8_LPSPI1_IPG_STOP_MODE_SHIFT (8U)
/*! LPSPI1_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPSPI1_IPG_STOP_MODE(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPSPI1_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPSPI1_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPSPI1_IPG_DOZE_MASK     (0x200U)
#define IOMUXC_GPR_GPR8_LPSPI1_IPG_DOZE_SHIFT    (9U)
/*! LPSPI1_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPSPI1_IPG_DOZE(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPSPI1_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPSPI1_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPSPI2_IPG_STOP_MODE_MASK (0x400U)
#define IOMUXC_GPR_GPR8_LPSPI2_IPG_STOP_MODE_SHIFT (10U)
/*! LPSPI2_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPSPI2_IPG_STOP_MODE(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPSPI2_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPSPI2_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPSPI2_IPG_DOZE_MASK     (0x800U)
#define IOMUXC_GPR_GPR8_LPSPI2_IPG_DOZE_SHIFT    (11U)
/*! LPSPI2_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPSPI2_IPG_DOZE(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPSPI2_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPSPI2_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPSPI3_IPG_STOP_MODE_MASK (0x1000U)
#define IOMUXC_GPR_GPR8_LPSPI3_IPG_STOP_MODE_SHIFT (12U)
/*! LPSPI3_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPSPI3_IPG_STOP_MODE(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPSPI3_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPSPI3_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPSPI3_IPG_DOZE_MASK     (0x2000U)
#define IOMUXC_GPR_GPR8_LPSPI3_IPG_DOZE_SHIFT    (13U)
/*! LPSPI3_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPSPI3_IPG_DOZE(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPSPI3_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPSPI3_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPSPI4_IPG_STOP_MODE_MASK (0x4000U)
#define IOMUXC_GPR_GPR8_LPSPI4_IPG_STOP_MODE_SHIFT (14U)
/*! LPSPI4_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPSPI4_IPG_STOP_MODE(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPSPI4_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPSPI4_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPSPI4_IPG_DOZE_MASK     (0x8000U)
#define IOMUXC_GPR_GPR8_LPSPI4_IPG_DOZE_SHIFT    (15U)
/*! LPSPI4_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPSPI4_IPG_DOZE(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPSPI4_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPSPI4_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPUART1_IPG_STOP_MODE_MASK (0x10000U)
#define IOMUXC_GPR_GPR8_LPUART1_IPG_STOP_MODE_SHIFT (16U)
/*! LPUART1_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPUART1_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART1_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART1_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPUART1_IPG_DOZE_MASK    (0x20000U)
#define IOMUXC_GPR_GPR8_LPUART1_IPG_DOZE_SHIFT   (17U)
/*! LPUART1_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPUART1_IPG_DOZE(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART1_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART1_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPUART2_IPG_STOP_MODE_MASK (0x40000U)
#define IOMUXC_GPR_GPR8_LPUART2_IPG_STOP_MODE_SHIFT (18U)
/*! LPUART2_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPUART2_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART2_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART2_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPUART2_IPG_DOZE_MASK    (0x80000U)
#define IOMUXC_GPR_GPR8_LPUART2_IPG_DOZE_SHIFT   (19U)
/*! LPUART2_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPUART2_IPG_DOZE(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART2_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART2_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPUART3_IPG_STOP_MODE_MASK (0x100000U)
#define IOMUXC_GPR_GPR8_LPUART3_IPG_STOP_MODE_SHIFT (20U)
/*! LPUART3_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPUART3_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART3_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART3_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPUART3_IPG_DOZE_MASK    (0x200000U)
#define IOMUXC_GPR_GPR8_LPUART3_IPG_DOZE_SHIFT   (21U)
/*! LPUART3_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPUART3_IPG_DOZE(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART3_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART3_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPUART4_IPG_STOP_MODE_MASK (0x400000U)
#define IOMUXC_GPR_GPR8_LPUART4_IPG_STOP_MODE_SHIFT (22U)
/*! LPUART4_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPUART4_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART4_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART4_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPUART4_IPG_DOZE_MASK    (0x800000U)
#define IOMUXC_GPR_GPR8_LPUART4_IPG_DOZE_SHIFT   (23U)
/*! LPUART4_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPUART4_IPG_DOZE(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART4_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART4_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPUART5_IPG_STOP_MODE_MASK (0x1000000U)
#define IOMUXC_GPR_GPR8_LPUART5_IPG_STOP_MODE_SHIFT (24U)
/*! LPUART5_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPUART5_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART5_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART5_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPUART5_IPG_DOZE_MASK    (0x2000000U)
#define IOMUXC_GPR_GPR8_LPUART5_IPG_DOZE_SHIFT   (25U)
/*! LPUART5_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPUART5_IPG_DOZE(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART5_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART5_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPUART6_IPG_STOP_MODE_MASK (0x4000000U)
#define IOMUXC_GPR_GPR8_LPUART6_IPG_STOP_MODE_SHIFT (26U)
/*! LPUART6_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPUART6_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART6_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART6_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPUART6_IPG_DOZE_MASK    (0x8000000U)
#define IOMUXC_GPR_GPR8_LPUART6_IPG_DOZE_SHIFT   (27U)
/*! LPUART6_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPUART6_IPG_DOZE(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART6_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART6_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPUART7_IPG_STOP_MODE_MASK (0x10000000U)
#define IOMUXC_GPR_GPR8_LPUART7_IPG_STOP_MODE_SHIFT (28U)
/*! LPUART7_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPUART7_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART7_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART7_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPUART7_IPG_DOZE_MASK    (0x20000000U)
#define IOMUXC_GPR_GPR8_LPUART7_IPG_DOZE_SHIFT   (29U)
/*! LPUART7_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPUART7_IPG_DOZE(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART7_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART7_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR8_LPUART8_IPG_STOP_MODE_MASK (0x40000000U)
#define IOMUXC_GPR_GPR8_LPUART8_IPG_STOP_MODE_SHIFT (30U)
/*! LPUART8_IPG_STOP_MODE
 *  0b0..the module is functional in Stop mode
 *  0b1..the module is NOT functional in Stop mode, when this bit is equal to 1 and ipg_stop is asserted
 */
#define IOMUXC_GPR_GPR8_LPUART8_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART8_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART8_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR8_LPUART8_IPG_DOZE_MASK    (0x80000000U)
#define IOMUXC_GPR_GPR8_LPUART8_IPG_DOZE_SHIFT   (31U)
/*! LPUART8_IPG_DOZE
 *  0b0..not in doze mode
 *  0b1..in doze mode
 */
#define IOMUXC_GPR_GPR8_LPUART8_IPG_DOZE(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR8_LPUART8_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR8_LPUART8_IPG_DOZE_MASK)
/*! @} */

/*! @name GPR10 - GPR10 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR10_NIDEN_MASK              (0x1U)
#define IOMUXC_GPR_GPR10_NIDEN_SHIFT             (0U)
/*! NIDEN
 *  0b0..Debug turned off.
 *  0b1..Debug enabled (default).
 */
#define IOMUXC_GPR_GPR10_NIDEN(x)                (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_NIDEN_SHIFT)) & IOMUXC_GPR_GPR10_NIDEN_MASK)

#define IOMUXC_GPR_GPR10_DBG_EN_MASK             (0x2U)
#define IOMUXC_GPR_GPR10_DBG_EN_SHIFT            (1U)
/*! DBG_EN
 *  0b0..Debug turned off.
 *  0b1..Debug enabled (default).
 */
#define IOMUXC_GPR_GPR10_DBG_EN(x)               (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_DBG_EN_SHIFT)) & IOMUXC_GPR_GPR10_DBG_EN_MASK)

#define IOMUXC_GPR_GPR10_SEC_ERR_RESP_MASK       (0x4U)
#define IOMUXC_GPR_GPR10_SEC_ERR_RESP_SHIFT      (2U)
/*! SEC_ERR_RESP
 *  0b0..OKEY response
 *  0b1..SLVError (default)
 */
#define IOMUXC_GPR_GPR10_SEC_ERR_RESP(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_SEC_ERR_RESP_SHIFT)) & IOMUXC_GPR_GPR10_SEC_ERR_RESP_MASK)

#define IOMUXC_GPR_GPR10_DCPKEY_OCOTP_OR_KEYMUX_MASK (0x10U)
#define IOMUXC_GPR_GPR10_DCPKEY_OCOTP_OR_KEYMUX_SHIFT (4U)
/*! DCPKEY_OCOTP_OR_KEYMUX
 *  0b0..Select key from Key MUX (SNVS/OTPMK).
 *  0b1..Select key from OCOTP (SW_GP2).
 */
#define IOMUXC_GPR_GPR10_DCPKEY_OCOTP_OR_KEYMUX(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_DCPKEY_OCOTP_OR_KEYMUX_SHIFT)) & IOMUXC_GPR_GPR10_DCPKEY_OCOTP_OR_KEYMUX_MASK)

#define IOMUXC_GPR_GPR10_OCRAM_TZ_EN_MASK        (0x100U)
#define IOMUXC_GPR_GPR10_OCRAM_TZ_EN_SHIFT       (8U)
/*! OCRAM_TZ_EN
 *  0b0..The TrustZone feature is disabled. Entire OCRAM space is available for all access types (secure/non-secure/user/supervisor).
 *  0b1..The TrustZone feature is enabled. Access to address in the range specified by [ENDADDR:STARTADDR] follows
 *       the execution mode access policy described in CSU chapter.
 */
#define IOMUXC_GPR_GPR10_OCRAM_TZ_EN(x)          (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_OCRAM_TZ_EN_SHIFT)) & IOMUXC_GPR_GPR10_OCRAM_TZ_EN_MASK)

#define IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR_MASK      (0xFE00U)
#define IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR_SHIFT     (9U)
#define IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR_SHIFT)) & IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR_MASK)

#define IOMUXC_GPR_GPR10_LOCK_NIDEN_MASK         (0x10000U)
#define IOMUXC_GPR_GPR10_LOCK_NIDEN_SHIFT        (16U)
/*! LOCK_NIDEN
 *  0b0..Field is not locked
 *  0b1..Field is locked (read access only)
 */
#define IOMUXC_GPR_GPR10_LOCK_NIDEN(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_LOCK_NIDEN_SHIFT)) & IOMUXC_GPR_GPR10_LOCK_NIDEN_MASK)

#define IOMUXC_GPR_GPR10_LOCK_DBG_EN_MASK        (0x20000U)
#define IOMUXC_GPR_GPR10_LOCK_DBG_EN_SHIFT       (17U)
/*! LOCK_DBG_EN
 *  0b0..Field is not locked
 *  0b1..Field is locked (read access only)
 */
#define IOMUXC_GPR_GPR10_LOCK_DBG_EN(x)          (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_LOCK_DBG_EN_SHIFT)) & IOMUXC_GPR_GPR10_LOCK_DBG_EN_MASK)

#define IOMUXC_GPR_GPR10_LOCK_SEC_ERR_RESP_MASK  (0x40000U)
#define IOMUXC_GPR_GPR10_LOCK_SEC_ERR_RESP_SHIFT (18U)
/*! LOCK_SEC_ERR_RESP
 *  0b0..Field is not locked
 *  0b1..Field is locked (read access only)
 */
#define IOMUXC_GPR_GPR10_LOCK_SEC_ERR_RESP(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_LOCK_SEC_ERR_RESP_SHIFT)) & IOMUXC_GPR_GPR10_LOCK_SEC_ERR_RESP_MASK)

#define IOMUXC_GPR_GPR10_LOCK_DCPKEY_OCOTP_OR_KEYMUX_MASK (0x100000U)
#define IOMUXC_GPR_GPR10_LOCK_DCPKEY_OCOTP_OR_KEYMUX_SHIFT (20U)
/*! LOCK_DCPKEY_OCOTP_OR_KEYMUX
 *  0b0..Field is not locked
 *  0b1..Field is locked (read access only)
 */
#define IOMUXC_GPR_GPR10_LOCK_DCPKEY_OCOTP_OR_KEYMUX(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_LOCK_DCPKEY_OCOTP_OR_KEYMUX_SHIFT)) & IOMUXC_GPR_GPR10_LOCK_DCPKEY_OCOTP_OR_KEYMUX_MASK)

#define IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_EN_MASK   (0x1000000U)
#define IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_EN_SHIFT  (24U)
/*! LOCK_OCRAM_TZ_EN
 *  0b0..Field is not locked
 *  0b1..Field is locked (read access only)
 */
#define IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_EN(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_EN_SHIFT)) & IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_EN_MASK)

#define IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_ADDR_MASK (0xFE000000U)
#define IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_ADDR_SHIFT (25U)
/*! LOCK_OCRAM_TZ_ADDR
 *  0b0000000..Field is not locked
 *  0b0000001..Field is locked (read access only)
 */
#define IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_ADDR(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_ADDR_SHIFT)) & IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_ADDR_MASK)
/*! @} */

/*! @name GPR11 - GPR11 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR11_M7_APC_AC_R0_CTRL_MASK  (0x3U)
#define IOMUXC_GPR_GPR11_M7_APC_AC_R0_CTRL_SHIFT (0U)
/*! M7_APC_AC_R0_CTRL
 *  0b00..No access protection
 *  0b01..M7 debug protection enabled
 *  0b10..FlexSPI access protection
 *  0b11..Both M7 debug and FlexSPI access are protected
 */
#define IOMUXC_GPR_GPR11_M7_APC_AC_R0_CTRL(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR11_M7_APC_AC_R0_CTRL_SHIFT)) & IOMUXC_GPR_GPR11_M7_APC_AC_R0_CTRL_MASK)

#define IOMUXC_GPR_GPR11_M7_APC_AC_R1_CTRL_MASK  (0xCU)
#define IOMUXC_GPR_GPR11_M7_APC_AC_R1_CTRL_SHIFT (2U)
/*! M7_APC_AC_R1_CTRL
 *  0b00..No access protection
 *  0b01..M7 debug protection enabled
 *  0b10..FlexSPI access protection
 *  0b11..Both M7 debug and FlexSPI access are protected
 */
#define IOMUXC_GPR_GPR11_M7_APC_AC_R1_CTRL(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR11_M7_APC_AC_R1_CTRL_SHIFT)) & IOMUXC_GPR_GPR11_M7_APC_AC_R1_CTRL_MASK)

#define IOMUXC_GPR_GPR11_M7_APC_AC_R2_CTRL_MASK  (0x30U)
#define IOMUXC_GPR_GPR11_M7_APC_AC_R2_CTRL_SHIFT (4U)
/*! M7_APC_AC_R2_CTRL
 *  0b00..No access protection
 *  0b01..M7 debug protection enabled
 *  0b10..FlexSPI access protection
 *  0b11..Both M7 debug and FlexSPI access are protected
 */
#define IOMUXC_GPR_GPR11_M7_APC_AC_R2_CTRL(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR11_M7_APC_AC_R2_CTRL_SHIFT)) & IOMUXC_GPR_GPR11_M7_APC_AC_R2_CTRL_MASK)

#define IOMUXC_GPR_GPR11_M7_APC_AC_R3_CTRL_MASK  (0xC0U)
#define IOMUXC_GPR_GPR11_M7_APC_AC_R3_CTRL_SHIFT (6U)
/*! M7_APC_AC_R3_CTRL
 *  0b00..No access protection
 *  0b01..M7 debug protection enabled
 *  0b10..FlexSPI access protection
 *  0b11..Both M7 debug and FlexSPI access are protected
 */
#define IOMUXC_GPR_GPR11_M7_APC_AC_R3_CTRL(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR11_M7_APC_AC_R3_CTRL_SHIFT)) & IOMUXC_GPR_GPR11_M7_APC_AC_R3_CTRL_MASK)

#define IOMUXC_GPR_GPR11_BEE_DE_RX_EN_MASK       (0xF00U)
#define IOMUXC_GPR_GPR11_BEE_DE_RX_EN_SHIFT      (8U)
#define IOMUXC_GPR_GPR11_BEE_DE_RX_EN(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR11_BEE_DE_RX_EN_SHIFT)) & IOMUXC_GPR_GPR11_BEE_DE_RX_EN_MASK)
/*! @} */

/*! @name GPR12 - GPR12 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR12_FLEXIO1_IPG_STOP_MODE_MASK (0x1U)
#define IOMUXC_GPR_GPR12_FLEXIO1_IPG_STOP_MODE_SHIFT (0U)
/*! FLEXIO1_IPG_STOP_MODE
 *  0b0..FlexIO1 is functional in Stop mode.
 *  0b1..When this bit is equal to 1'b1 and ipg_stop is asserted, FlexIO1 is not functional in Stop mode.
 */
#define IOMUXC_GPR_GPR12_FLEXIO1_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR12_FLEXIO1_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR12_FLEXIO1_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR12_FLEXIO1_IPG_DOZE_MASK   (0x2U)
#define IOMUXC_GPR_GPR12_FLEXIO1_IPG_DOZE_SHIFT  (1U)
/*! FLEXIO1_IPG_DOZE
 *  0b0..FLEXIO1 is not in doze mode
 *  0b1..FLEXIO1 is in doze mode
 */
#define IOMUXC_GPR_GPR12_FLEXIO1_IPG_DOZE(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR12_FLEXIO1_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR12_FLEXIO1_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR12_FLEXIO2_IPG_STOP_MODE_MASK (0x4U)
#define IOMUXC_GPR_GPR12_FLEXIO2_IPG_STOP_MODE_SHIFT (2U)
/*! FLEXIO2_IPG_STOP_MODE
 *  0b0..FlexIO2 is functional in Stop mode.
 *  0b1..When this bit is equal to 1'b1 and ipg_stop is asserted, FlexIO2 is not functional in Stop mode.
 */
#define IOMUXC_GPR_GPR12_FLEXIO2_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR12_FLEXIO2_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR12_FLEXIO2_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR12_FLEXIO2_IPG_DOZE_MASK   (0x8U)
#define IOMUXC_GPR_GPR12_FLEXIO2_IPG_DOZE_SHIFT  (3U)
/*! FLEXIO2_IPG_DOZE
 *  0b0..FLEXIO2 is not in doze mode
 *  0b1..FLEXIO2 is in doze mode
 */
#define IOMUXC_GPR_GPR12_FLEXIO2_IPG_DOZE(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR12_FLEXIO2_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR12_FLEXIO2_IPG_DOZE_MASK)

#define IOMUXC_GPR_GPR12_ACMP_IPG_STOP_MODE_MASK (0x10U)
#define IOMUXC_GPR_GPR12_ACMP_IPG_STOP_MODE_SHIFT (4U)
/*! ACMP_IPG_STOP_MODE
 *  0b0..ACMP is functional in Stop mode.
 *  0b1..When this bit is equal to 1'b1 and ipg_stop is asserted, ACMP is not functional in Stop mode.
 */
#define IOMUXC_GPR_GPR12_ACMP_IPG_STOP_MODE(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR12_ACMP_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR12_ACMP_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR12_FLEXIO3_IPG_STOP_MODE_MASK (0x20U)
#define IOMUXC_GPR_GPR12_FLEXIO3_IPG_STOP_MODE_SHIFT (5U)
/*! FLEXIO3_IPG_STOP_MODE
 *  0b0..FlexIO3 is functional in Stop mode.
 *  0b1..When this bit is equal to 1'b1 and ipg_stop is asserted, FlexIO3 is not functional in Stop mode.
 */
#define IOMUXC_GPR_GPR12_FLEXIO3_IPG_STOP_MODE(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR12_FLEXIO3_IPG_STOP_MODE_SHIFT)) & IOMUXC_GPR_GPR12_FLEXIO3_IPG_STOP_MODE_MASK)

#define IOMUXC_GPR_GPR12_FLEXIO3_IPG_DOZE_MASK   (0x40U)
#define IOMUXC_GPR_GPR12_FLEXIO3_IPG_DOZE_SHIFT  (6U)
/*! FLEXIO3_IPG_DOZE
 *  0b0..FLEXIO3 is not in doze mode
 *  0b1..FLEXIO3 is in doze mode
 */
#define IOMUXC_GPR_GPR12_FLEXIO3_IPG_DOZE(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR12_FLEXIO3_IPG_DOZE_SHIFT)) & IOMUXC_GPR_GPR12_FLEXIO3_IPG_DOZE_MASK)
/*! @} */

/*! @name GPR13 - GPR13 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR13_ARCACHE_USDHC_MASK      (0x1U)
#define IOMUXC_GPR_GPR13_ARCACHE_USDHC_SHIFT     (0U)
/*! ARCACHE_USDHC
 *  0b0..Cacheable attribute is off for read transactions.
 *  0b1..Cacheable attribute is on for read transactions.
 */
#define IOMUXC_GPR_GPR13_ARCACHE_USDHC(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR13_ARCACHE_USDHC_SHIFT)) & IOMUXC_GPR_GPR13_ARCACHE_USDHC_MASK)

#define IOMUXC_GPR_GPR13_AWCACHE_USDHC_MASK      (0x2U)
#define IOMUXC_GPR_GPR13_AWCACHE_USDHC_SHIFT     (1U)
/*! AWCACHE_USDHC
 *  0b0..Cacheable attribute is off for write transactions.
 *  0b1..Cacheable attribute is on for write transactions.
 */
#define IOMUXC_GPR_GPR13_AWCACHE_USDHC(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR13_AWCACHE_USDHC_SHIFT)) & IOMUXC_GPR_GPR13_AWCACHE_USDHC_MASK)

#define IOMUXC_GPR_GPR13_CANFD_STOP_REQ_MASK     (0x10U)
#define IOMUXC_GPR_GPR13_CANFD_STOP_REQ_SHIFT    (4U)
/*! CANFD_STOP_REQ
 *  0b0..stop request off
 *  0b1..stop request on
 */
#define IOMUXC_GPR_GPR13_CANFD_STOP_REQ(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR13_CANFD_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR13_CANFD_STOP_REQ_MASK)

#define IOMUXC_GPR_GPR13_CACHE_ENET_MASK         (0x80U)
#define IOMUXC_GPR_GPR13_CACHE_ENET_SHIFT        (7U)
/*! CACHE_ENET
 *  0b0..Cacheable attribute is off for read/write transactions.
 *  0b1..Cacheable attribute is on for read/write transactions.
 */
#define IOMUXC_GPR_GPR13_CACHE_ENET(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR13_CACHE_ENET_SHIFT)) & IOMUXC_GPR_GPR13_CACHE_ENET_MASK)

#define IOMUXC_GPR_GPR13_CACHE_USB_MASK          (0x2000U)
#define IOMUXC_GPR_GPR13_CACHE_USB_SHIFT         (13U)
/*! CACHE_USB
 *  0b0..Cacheable attribute is off for read/write transactions.
 *  0b1..Cacheable attribute is on for read/write transactions.
 */
#define IOMUXC_GPR_GPR13_CACHE_USB(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR13_CACHE_USB_SHIFT)) & IOMUXC_GPR_GPR13_CACHE_USB_MASK)

#define IOMUXC_GPR_GPR13_CANFD_STOP_ACK_MASK     (0x100000U)
#define IOMUXC_GPR_GPR13_CANFD_STOP_ACK_SHIFT    (20U)
/*! CANFD_STOP_ACK
 *  0b0..CANFD stop acknowledge is not asserted
 *  0b1..CANFD stop acknowledge is asserted
 */
#define IOMUXC_GPR_GPR13_CANFD_STOP_ACK(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR13_CANFD_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR13_CANFD_STOP_ACK_MASK)
/*! @} */

/*! @name GPR14 - GPR14 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_DN_MASK (0x1U)
#define IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_DN_SHIFT (0U)
/*! ACMP1_CMP_IGEN_TRIM_DN
 *  0b0..no reduce
 *  0b1..reduces
 */
#define IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_DN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_DN_SHIFT)) & IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_DN_MASK)

#define IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_DN_MASK (0x2U)
#define IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_DN_SHIFT (1U)
/*! ACMP2_CMP_IGEN_TRIM_DN
 *  0b0..no reduce
 *  0b1..reduces
 */
#define IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_DN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_DN_SHIFT)) & IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_DN_MASK)

#define IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_DN_MASK (0x4U)
#define IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_DN_SHIFT (2U)
/*! ACMP3_CMP_IGEN_TRIM_DN
 *  0b0..no reduce
 *  0b1..reduces
 */
#define IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_DN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_DN_SHIFT)) & IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_DN_MASK)

#define IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_DN_MASK (0x8U)
#define IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_DN_SHIFT (3U)
/*! ACMP4_CMP_IGEN_TRIM_DN
 *  0b0..no reduce
 *  0b1..reduces
 */
#define IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_DN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_DN_SHIFT)) & IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_DN_MASK)

#define IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_UP_MASK (0x10U)
#define IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_UP_SHIFT (4U)
/*! ACMP1_CMP_IGEN_TRIM_UP
 *  0b0..no increase
 *  0b1..increases
 */
#define IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_UP(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_UP_SHIFT)) & IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_UP_MASK)

#define IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_UP_MASK (0x20U)
#define IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_UP_SHIFT (5U)
/*! ACMP2_CMP_IGEN_TRIM_UP
 *  0b0..no increase
 *  0b1..increases
 */
#define IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_UP(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_UP_SHIFT)) & IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_UP_MASK)

#define IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_UP_MASK (0x40U)
#define IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_UP_SHIFT (6U)
/*! ACMP3_CMP_IGEN_TRIM_UP
 *  0b0..no increase
 *  0b1..increases
 */
#define IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_UP(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_UP_SHIFT)) & IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_UP_MASK)

#define IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_UP_MASK (0x80U)
#define IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_UP_SHIFT (7U)
/*! ACMP4_CMP_IGEN_TRIM_UP
 *  0b0..no increase
 *  0b1..increases
 */
#define IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_UP(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_UP_SHIFT)) & IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_UP_MASK)

#define IOMUXC_GPR_GPR14_ACMP1_SAMPLE_SYNC_EN_MASK (0x100U)
#define IOMUXC_GPR_GPR14_ACMP1_SAMPLE_SYNC_EN_SHIFT (8U)
/*! ACMP1_SAMPLE_SYNC_EN
 *  0b0..select XBAR output
 *  0b1..select synced sample_lv
 */
#define IOMUXC_GPR_GPR14_ACMP1_SAMPLE_SYNC_EN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP1_SAMPLE_SYNC_EN_SHIFT)) & IOMUXC_GPR_GPR14_ACMP1_SAMPLE_SYNC_EN_MASK)

#define IOMUXC_GPR_GPR14_ACMP2_SAMPLE_SYNC_EN_MASK (0x200U)
#define IOMUXC_GPR_GPR14_ACMP2_SAMPLE_SYNC_EN_SHIFT (9U)
/*! ACMP2_SAMPLE_SYNC_EN
 *  0b0..select XBAR output
 *  0b1..select synced sample_lv
 */
#define IOMUXC_GPR_GPR14_ACMP2_SAMPLE_SYNC_EN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP2_SAMPLE_SYNC_EN_SHIFT)) & IOMUXC_GPR_GPR14_ACMP2_SAMPLE_SYNC_EN_MASK)

#define IOMUXC_GPR_GPR14_ACMP3_SAMPLE_SYNC_EN_MASK (0x400U)
#define IOMUXC_GPR_GPR14_ACMP3_SAMPLE_SYNC_EN_SHIFT (10U)
/*! ACMP3_SAMPLE_SYNC_EN
 *  0b0..select XBAR output
 *  0b1..select synced sample_lv
 */
#define IOMUXC_GPR_GPR14_ACMP3_SAMPLE_SYNC_EN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP3_SAMPLE_SYNC_EN_SHIFT)) & IOMUXC_GPR_GPR14_ACMP3_SAMPLE_SYNC_EN_MASK)

#define IOMUXC_GPR_GPR14_ACMP4_SAMPLE_SYNC_EN_MASK (0x800U)
#define IOMUXC_GPR_GPR14_ACMP4_SAMPLE_SYNC_EN_SHIFT (11U)
/*! ACMP4_SAMPLE_SYNC_EN
 *  0b0..select XBAR output
 *  0b1..select synced sample_lv
 */
#define IOMUXC_GPR_GPR14_ACMP4_SAMPLE_SYNC_EN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_ACMP4_SAMPLE_SYNC_EN_SHIFT)) & IOMUXC_GPR_GPR14_ACMP4_SAMPLE_SYNC_EN_MASK)

#define IOMUXC_GPR_GPR14_CM7_CFGITCMSZ_MASK      (0xF0000U)
#define IOMUXC_GPR_GPR14_CM7_CFGITCMSZ_SHIFT     (16U)
/*! CM7_CFGITCMSZ
 *  0b0000..0 KB (No ITCM)
 *  0b0011..4 KB
 *  0b0100..8 KB
 *  0b0101..16 KB
 *  0b0110..32 KB
 *  0b0111..64 KB
 *  0b1000..128 KB
 *  0b1001..256 KB
 *  0b1010..512 KB
 */
#define IOMUXC_GPR_GPR14_CM7_CFGITCMSZ(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_CM7_CFGITCMSZ_SHIFT)) & IOMUXC_GPR_GPR14_CM7_CFGITCMSZ_MASK)

#define IOMUXC_GPR_GPR14_CM7_CFGDTCMSZ_MASK      (0xF00000U)
#define IOMUXC_GPR_GPR14_CM7_CFGDTCMSZ_SHIFT     (20U)
/*! CM7_CFGDTCMSZ
 *  0b0000..0 KB (No DTCM)
 *  0b0011..4 KB
 *  0b0100..8 KB
 *  0b0101..16 KB
 *  0b0110..32 KB
 *  0b0111..64 KB
 *  0b1000..128 KB
 *  0b1001..256 KB
 *  0b1010..512 KB
 */
#define IOMUXC_GPR_GPR14_CM7_CFGDTCMSZ(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_CM7_CFGDTCMSZ_SHIFT)) & IOMUXC_GPR_GPR14_CM7_CFGDTCMSZ_MASK)
/*! @} */

/*! @name GPR16 - GPR16 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR16_INIT_ITCM_EN_MASK       (0x1U)
#define IOMUXC_GPR_GPR16_INIT_ITCM_EN_SHIFT      (0U)
/*! INIT_ITCM_EN
 *  0b0..ITCM is disabled
 *  0b1..ITCM is enabled
 */
#define IOMUXC_GPR_GPR16_INIT_ITCM_EN(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR16_INIT_ITCM_EN_SHIFT)) & IOMUXC_GPR_GPR16_INIT_ITCM_EN_MASK)

#define IOMUXC_GPR_GPR16_INIT_DTCM_EN_MASK       (0x2U)
#define IOMUXC_GPR_GPR16_INIT_DTCM_EN_SHIFT      (1U)
/*! INIT_DTCM_EN
 *  0b0..DTCM is disabled
 *  0b1..DTCM is enabled
 */
#define IOMUXC_GPR_GPR16_INIT_DTCM_EN(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR16_INIT_DTCM_EN_SHIFT)) & IOMUXC_GPR_GPR16_INIT_DTCM_EN_MASK)

#define IOMUXC_GPR_GPR16_FLEXRAM_BANK_CFG_SEL_MASK (0x4U)
#define IOMUXC_GPR_GPR16_FLEXRAM_BANK_CFG_SEL_SHIFT (2U)
/*! FLEXRAM_BANK_CFG_SEL
 *  0b0..use fuse value to config
 *  0b1..use FLEXRAM_BANK_CFG to config
 */
#define IOMUXC_GPR_GPR16_FLEXRAM_BANK_CFG_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR16_FLEXRAM_BANK_CFG_SEL_SHIFT)) & IOMUXC_GPR_GPR16_FLEXRAM_BANK_CFG_SEL_MASK)
/*! @} */

/*! @name GPR17 - GPR17 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR17_FLEXRAM_BANK_CFG_MASK   (0xFFFFFFFFU)
#define IOMUXC_GPR_GPR17_FLEXRAM_BANK_CFG_SHIFT  (0U)
/*! FLEXRAM_BANK_CFG - FlexRAM bank config value
 */
#define IOMUXC_GPR_GPR17_FLEXRAM_BANK_CFG(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR17_FLEXRAM_BANK_CFG_SHIFT)) & IOMUXC_GPR_GPR17_FLEXRAM_BANK_CFG_MASK)
/*! @} */

/*! @name GPR18 - GPR18 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR18_LOCK_M7_APC_AC_R0_BOT_MASK (0x1U)
#define IOMUXC_GPR_GPR18_LOCK_M7_APC_AC_R0_BOT_SHIFT (0U)
/*! LOCK_M7_APC_AC_R0_BOT
 *  0b0..Register field [31:1] is not locked
 *  0b1..Register field [31:1] is locked (read access only)
 */
#define IOMUXC_GPR_GPR18_LOCK_M7_APC_AC_R0_BOT(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR18_LOCK_M7_APC_AC_R0_BOT_SHIFT)) & IOMUXC_GPR_GPR18_LOCK_M7_APC_AC_R0_BOT_MASK)

#define IOMUXC_GPR_GPR18_M7_APC_AC_R0_BOT_MASK   (0xFFFFFFF8U)
#define IOMUXC_GPR_GPR18_M7_APC_AC_R0_BOT_SHIFT  (3U)
#define IOMUXC_GPR_GPR18_M7_APC_AC_R0_BOT(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR18_M7_APC_AC_R0_BOT_SHIFT)) & IOMUXC_GPR_GPR18_M7_APC_AC_R0_BOT_MASK)
/*! @} */

/*! @name GPR19 - GPR19 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR19_LOCK_M7_APC_AC_R0_TOP_MASK (0x1U)
#define IOMUXC_GPR_GPR19_LOCK_M7_APC_AC_R0_TOP_SHIFT (0U)
/*! LOCK_M7_APC_AC_R0_TOP
 *  0b0..Register field [31:1] is not locked
 *  0b1..Register field [31:1] is locked (read access only)
 */
#define IOMUXC_GPR_GPR19_LOCK_M7_APC_AC_R0_TOP(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR19_LOCK_M7_APC_AC_R0_TOP_SHIFT)) & IOMUXC_GPR_GPR19_LOCK_M7_APC_AC_R0_TOP_MASK)

#define IOMUXC_GPR_GPR19_M7_APC_AC_R0_TOP_MASK   (0xFFFFFFF8U)
#define IOMUXC_GPR_GPR19_M7_APC_AC_R0_TOP_SHIFT  (3U)
#define IOMUXC_GPR_GPR19_M7_APC_AC_R0_TOP(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR19_M7_APC_AC_R0_TOP_SHIFT)) & IOMUXC_GPR_GPR19_M7_APC_AC_R0_TOP_MASK)
/*! @} */

/*! @name GPR20 - GPR20 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR20_LOCK_M7_APC_AC_R1_BOT_MASK (0x1U)
#define IOMUXC_GPR_GPR20_LOCK_M7_APC_AC_R1_BOT_SHIFT (0U)
/*! LOCK_M7_APC_AC_R1_BOT
 *  0b0..Register field [31:1] is not locked
 *  0b1..Register field [31:1] is locked (read access only)
 */
#define IOMUXC_GPR_GPR20_LOCK_M7_APC_AC_R1_BOT(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR20_LOCK_M7_APC_AC_R1_BOT_SHIFT)) & IOMUXC_GPR_GPR20_LOCK_M7_APC_AC_R1_BOT_MASK)

#define IOMUXC_GPR_GPR20_M7_APC_AC_R1_BOT_MASK   (0xFFFFFFF8U)
#define IOMUXC_GPR_GPR20_M7_APC_AC_R1_BOT_SHIFT  (3U)
#define IOMUXC_GPR_GPR20_M7_APC_AC_R1_BOT(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR20_M7_APC_AC_R1_BOT_SHIFT)) & IOMUXC_GPR_GPR20_M7_APC_AC_R1_BOT_MASK)
/*! @} */

/*! @name GPR21 - GPR21 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR21_LOCK_M7_APC_AC_R1_TOP_MASK (0x1U)
#define IOMUXC_GPR_GPR21_LOCK_M7_APC_AC_R1_TOP_SHIFT (0U)
/*! LOCK_M7_APC_AC_R1_TOP
 *  0b0..Register field [31:1] is not locked
 *  0b1..Register field [31:1] is locked (read access only)
 */
#define IOMUXC_GPR_GPR21_LOCK_M7_APC_AC_R1_TOP(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR21_LOCK_M7_APC_AC_R1_TOP_SHIFT)) & IOMUXC_GPR_GPR21_LOCK_M7_APC_AC_R1_TOP_MASK)

#define IOMUXC_GPR_GPR21_M7_APC_AC_R1_TOP_MASK   (0xFFFFFFF8U)
#define IOMUXC_GPR_GPR21_M7_APC_AC_R1_TOP_SHIFT  (3U)
#define IOMUXC_GPR_GPR21_M7_APC_AC_R1_TOP(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR21_M7_APC_AC_R1_TOP_SHIFT)) & IOMUXC_GPR_GPR21_M7_APC_AC_R1_TOP_MASK)
/*! @} */

/*! @name GPR22 - GPR22 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR22_LOCK_M7_APC_AC_R2_BOT_MASK (0x1U)
#define IOMUXC_GPR_GPR22_LOCK_M7_APC_AC_R2_BOT_SHIFT (0U)
/*! LOCK_M7_APC_AC_R2_BOT
 *  0b0..Register field [31:1] is not locked
 *  0b1..Register field [31:1] is locked (read access only)
 */
#define IOMUXC_GPR_GPR22_LOCK_M7_APC_AC_R2_BOT(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR22_LOCK_M7_APC_AC_R2_BOT_SHIFT)) & IOMUXC_GPR_GPR22_LOCK_M7_APC_AC_R2_BOT_MASK)

#define IOMUXC_GPR_GPR22_M7_APC_AC_R2_BOT_MASK   (0xFFFFFFF8U)
#define IOMUXC_GPR_GPR22_M7_APC_AC_R2_BOT_SHIFT  (3U)
#define IOMUXC_GPR_GPR22_M7_APC_AC_R2_BOT(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR22_M7_APC_AC_R2_BOT_SHIFT)) & IOMUXC_GPR_GPR22_M7_APC_AC_R2_BOT_MASK)
/*! @} */

/*! @name GPR23 - GPR23 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR23_LOCK_M7_APC_AC_R2_TOP_MASK (0x1U)
#define IOMUXC_GPR_GPR23_LOCK_M7_APC_AC_R2_TOP_SHIFT (0U)
/*! LOCK_M7_APC_AC_R2_TOP
 *  0b0..Register field [31:1] is not locked
 *  0b1..Register field [31:1] is locked (read access only)
 */
#define IOMUXC_GPR_GPR23_LOCK_M7_APC_AC_R2_TOP(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR23_LOCK_M7_APC_AC_R2_TOP_SHIFT)) & IOMUXC_GPR_GPR23_LOCK_M7_APC_AC_R2_TOP_MASK)

#define IOMUXC_GPR_GPR23_M7_APC_AC_R2_TOP_MASK   (0xFFFFFFF8U)
#define IOMUXC_GPR_GPR23_M7_APC_AC_R2_TOP_SHIFT  (3U)
#define IOMUXC_GPR_GPR23_M7_APC_AC_R2_TOP(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR23_M7_APC_AC_R2_TOP_SHIFT)) & IOMUXC_GPR_GPR23_M7_APC_AC_R2_TOP_MASK)
/*! @} */

/*! @name GPR24 - GPR24 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR24_LOCK_M7_APC_AC_R3_BOT_MASK (0x1U)
#define IOMUXC_GPR_GPR24_LOCK_M7_APC_AC_R3_BOT_SHIFT (0U)
/*! LOCK_M7_APC_AC_R3_BOT
 *  0b0..Register field [31:1] is not locked
 *  0b1..Register field [31:1] is locked (read access only)
 */
#define IOMUXC_GPR_GPR24_LOCK_M7_APC_AC_R3_BOT(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR24_LOCK_M7_APC_AC_R3_BOT_SHIFT)) & IOMUXC_GPR_GPR24_LOCK_M7_APC_AC_R3_BOT_MASK)

#define IOMUXC_GPR_GPR24_M7_APC_AC_R3_BOT_MASK   (0xFFFFFFF8U)
#define IOMUXC_GPR_GPR24_M7_APC_AC_R3_BOT_SHIFT  (3U)
#define IOMUXC_GPR_GPR24_M7_APC_AC_R3_BOT(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR24_M7_APC_AC_R3_BOT_SHIFT)) & IOMUXC_GPR_GPR24_M7_APC_AC_R3_BOT_MASK)
/*! @} */

/*! @name GPR25 - GPR25 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR25_LOCK_M7_APC_AC_R3_TOP_MASK (0x1U)
#define IOMUXC_GPR_GPR25_LOCK_M7_APC_AC_R3_TOP_SHIFT (0U)
/*! LOCK_M7_APC_AC_R3_TOP
 *  0b0..Register field [31:1] is not locked
 *  0b1..Register field [31:1] is locked (read access only)
 */
#define IOMUXC_GPR_GPR25_LOCK_M7_APC_AC_R3_TOP(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR25_LOCK_M7_APC_AC_R3_TOP_SHIFT)) & IOMUXC_GPR_GPR25_LOCK_M7_APC_AC_R3_TOP_MASK)

#define IOMUXC_GPR_GPR25_M7_APC_AC_R3_TOP_MASK   (0xFFFFFFF8U)
#define IOMUXC_GPR_GPR25_M7_APC_AC_R3_TOP_SHIFT  (3U)
#define IOMUXC_GPR_GPR25_M7_APC_AC_R3_TOP(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR25_M7_APC_AC_R3_TOP_SHIFT)) & IOMUXC_GPR_GPR25_M7_APC_AC_R3_TOP_MASK)
/*! @} */

/*! @name GPR26 - GPR26 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR26_GPIO_MUX1_GPIO_SEL_MASK (0xFFFFFFFFU)
#define IOMUXC_GPR_GPR26_GPIO_MUX1_GPIO_SEL_SHIFT (0U)
/*! GPIO_MUX1_GPIO_SEL - GPIO1 and GPIO6 share same IO MUX function, GPIO_MUX1 selects one GPIO function.
 */
#define IOMUXC_GPR_GPR26_GPIO_MUX1_GPIO_SEL(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR26_GPIO_MUX1_GPIO_SEL_SHIFT)) & IOMUXC_GPR_GPR26_GPIO_MUX1_GPIO_SEL_MASK)
/*! @} */

/*! @name GPR27 - GPR27 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR27_GPIO_MUX2_GPIO_SEL_MASK (0xFFFFFFFFU)
#define IOMUXC_GPR_GPR27_GPIO_MUX2_GPIO_SEL_SHIFT (0U)
/*! GPIO_MUX2_GPIO_SEL - GPIO2 and GPIO7 share same IO MUX function, GPIO_MUX2 selects one GPIO function.
 */
#define IOMUXC_GPR_GPR27_GPIO_MUX2_GPIO_SEL(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR27_GPIO_MUX2_GPIO_SEL_SHIFT)) & IOMUXC_GPR_GPR27_GPIO_MUX2_GPIO_SEL_MASK)
/*! @} */

/*! @name GPR28 - GPR28 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR28_GPIO_MUX3_GPIO_SEL_MASK (0xFFFFFFFFU)
#define IOMUXC_GPR_GPR28_GPIO_MUX3_GPIO_SEL_SHIFT (0U)
/*! GPIO_MUX3_GPIO_SEL - GPIO3 and GPIO8 share same IO MUX function, GPIO_MUX3 selects one GPIO function.
 */
#define IOMUXC_GPR_GPR28_GPIO_MUX3_GPIO_SEL(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR28_GPIO_MUX3_GPIO_SEL_SHIFT)) & IOMUXC_GPR_GPR28_GPIO_MUX3_GPIO_SEL_MASK)
/*! @} */

/*! @name GPR29 - GPR29 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR29_GPIO_MUX4_GPIO_SEL_MASK (0xFFFFFFFFU)
#define IOMUXC_GPR_GPR29_GPIO_MUX4_GPIO_SEL_SHIFT (0U)
/*! GPIO_MUX4_GPIO_SEL - GPIO4 and GPIO9 share same IO MUX function, GPIO_MUX4 selects one GPIO function.
 */
#define IOMUXC_GPR_GPR29_GPIO_MUX4_GPIO_SEL(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR29_GPIO_MUX4_GPIO_SEL_SHIFT)) & IOMUXC_GPR_GPR29_GPIO_MUX4_GPIO_SEL_MASK)
/*! @} */

/*! @name GPR30 - GPR30 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR30_FLEXSPI_REMAP_ADDR_START_MASK (0xFFFFF000U)
#define IOMUXC_GPR_GPR30_FLEXSPI_REMAP_ADDR_START_SHIFT (12U)
#define IOMUXC_GPR_GPR30_FLEXSPI_REMAP_ADDR_START(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR30_FLEXSPI_REMAP_ADDR_START_SHIFT)) & IOMUXC_GPR_GPR30_FLEXSPI_REMAP_ADDR_START_MASK)
/*! @} */

/*! @name GPR31 - GPR31 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR31_FLEXSPI_REMAP_ADDR_END_MASK (0xFFFFF000U)
#define IOMUXC_GPR_GPR31_FLEXSPI_REMAP_ADDR_END_SHIFT (12U)
#define IOMUXC_GPR_GPR31_FLEXSPI_REMAP_ADDR_END(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR31_FLEXSPI_REMAP_ADDR_END_SHIFT)) & IOMUXC_GPR_GPR31_FLEXSPI_REMAP_ADDR_END_MASK)
/*! @} */

/*! @name GPR32 - GPR32 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR32_FLEXSPI_REMAP_ADDR_OFFSET_MASK (0xFFFFF000U)
#define IOMUXC_GPR_GPR32_FLEXSPI_REMAP_ADDR_OFFSET_SHIFT (12U)
#define IOMUXC_GPR_GPR32_FLEXSPI_REMAP_ADDR_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR32_FLEXSPI_REMAP_ADDR_OFFSET_SHIFT)) & IOMUXC_GPR_GPR32_FLEXSPI_REMAP_ADDR_OFFSET_MASK)
/*! @} */

/*! @name GPR33 - GPR33 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR33_OCRAM2_TZ_EN_MASK       (0x1U)
#define IOMUXC_GPR_GPR33_OCRAM2_TZ_EN_SHIFT      (0U)
/*! OCRAM2_TZ_EN
 *  0b0..The TrustZone feature is disabled. Entire OCRAM2 space is available for all access types (secure/non-secure/user/supervisor).
 *  0b1..The TrustZone feature is enabled. Access to address in the range specified by [ENDADDR:STARTADDR] follows
 *       the execution mode access policy described in CSU chapter.
 */
#define IOMUXC_GPR_GPR33_OCRAM2_TZ_EN(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR33_OCRAM2_TZ_EN_SHIFT)) & IOMUXC_GPR_GPR33_OCRAM2_TZ_EN_MASK)

#define IOMUXC_GPR_GPR33_OCRAM2_TZ_ADDR_MASK     (0xFEU)
#define IOMUXC_GPR_GPR33_OCRAM2_TZ_ADDR_SHIFT    (1U)
#define IOMUXC_GPR_GPR33_OCRAM2_TZ_ADDR(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR33_OCRAM2_TZ_ADDR_SHIFT)) & IOMUXC_GPR_GPR33_OCRAM2_TZ_ADDR_MASK)

#define IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_EN_MASK  (0x10000U)
#define IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_EN_SHIFT (16U)
/*! LOCK_OCRAM2_TZ_EN
 *  0b0..Field is not locked
 *  0b1..Field is locked (read access only)
 */
#define IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_EN(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_EN_SHIFT)) & IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_EN_MASK)

#define IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_ADDR_MASK (0xFE0000U)
#define IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_ADDR_SHIFT (17U)
/*! LOCK_OCRAM2_TZ_ADDR
 *  0b0000000..Field is not locked
 *  0b0000001..Field is locked (read access only)
 */
#define IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_ADDR(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_ADDR_SHIFT)) & IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_ADDR_MASK)
/*! @} */

/*! @name GPR34 - GPR34 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR34_SIP_TEST_MUX_BOOT_PIN_SEL_MASK (0xFFU)
#define IOMUXC_GPR_GPR34_SIP_TEST_MUX_BOOT_PIN_SEL_SHIFT (0U)
/*! SIP_TEST_MUX_BOOT_PIN_SEL - Boot Pin select in SIP_TEST_MUX
 */
#define IOMUXC_GPR_GPR34_SIP_TEST_MUX_BOOT_PIN_SEL(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR34_SIP_TEST_MUX_BOOT_PIN_SEL_SHIFT)) & IOMUXC_GPR_GPR34_SIP_TEST_MUX_BOOT_PIN_SEL_MASK)

#define IOMUXC_GPR_GPR34_SIP_TEST_MUX_QSPI_SIP_EN_MASK (0x100U)
#define IOMUXC_GPR_GPR34_SIP_TEST_MUX_QSPI_SIP_EN_SHIFT (8U)
/*! SIP_TEST_MUX_QSPI_SIP_EN
 *  0b0..SIP_TEST_MUX is disabled
 *  0b1..SIP_TEST_MUX is enabled
 */
#define IOMUXC_GPR_GPR34_SIP_TEST_MUX_QSPI_SIP_EN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR34_SIP_TEST_MUX_QSPI_SIP_EN_SHIFT)) & IOMUXC_GPR_GPR34_SIP_TEST_MUX_QSPI_SIP_EN_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group IOMUXC_GPR_Register_Masks */


/* IOMUXC_GPR - Peripheral instance base addresses */
/** Peripheral IOMUXC_GPR base address */
#define IOMUXC_GPR_BASE                          (0x400AC000u)
/** Peripheral IOMUXC_GPR base pointer */
#define IOMUXC_GPR                               ((IOMUXC_GPR_Type *)IOMUXC_GPR_BASE)
/** Array initializer of IOMUXC_GPR peripheral base addresses */
#define IOMUXC_GPR_BASE_ADDRS                    { IOMUXC_GPR_BASE }
/** Array initializer of IOMUXC_GPR peripheral base pointers */
#define IOMUXC_GPR_BASE_PTRS                     { IOMUXC_GPR }

/*!
 * @}
 */ /* end of group IOMUXC_GPR_Peripheral_Access_Layer */




/* ----------------------------------------------------------------------------
   -- XBARA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XBARA_Peripheral_Access_Layer XBARA Peripheral Access Layer
 * @{
 */

/** XBARA - Register Layout Typedef */
typedef struct {
  __IO uint16_t SEL0;                              /**< Crossbar A Select Register 0, offset: 0x0 */
  __IO uint16_t SEL1;                              /**< Crossbar A Select Register 1, offset: 0x2 */
  __IO uint16_t SEL2;                              /**< Crossbar A Select Register 2, offset: 0x4 */
  __IO uint16_t SEL3;                              /**< Crossbar A Select Register 3, offset: 0x6 */
  __IO uint16_t SEL4;                              /**< Crossbar A Select Register 4, offset: 0x8 */
  __IO uint16_t SEL5;                              /**< Crossbar A Select Register 5, offset: 0xA */
  __IO uint16_t SEL6;                              /**< Crossbar A Select Register 6, offset: 0xC */
  __IO uint16_t SEL7;                              /**< Crossbar A Select Register 7, offset: 0xE */
  __IO uint16_t SEL8;                              /**< Crossbar A Select Register 8, offset: 0x10 */
  __IO uint16_t SEL9;                              /**< Crossbar A Select Register 9, offset: 0x12 */
  __IO uint16_t SEL10;                             /**< Crossbar A Select Register 10, offset: 0x14 */
  __IO uint16_t SEL11;                             /**< Crossbar A Select Register 11, offset: 0x16 */
  __IO uint16_t SEL12;                             /**< Crossbar A Select Register 12, offset: 0x18 */
  __IO uint16_t SEL13;                             /**< Crossbar A Select Register 13, offset: 0x1A */
  __IO uint16_t SEL14;                             /**< Crossbar A Select Register 14, offset: 0x1C */
  __IO uint16_t SEL15;                             /**< Crossbar A Select Register 15, offset: 0x1E */
  __IO uint16_t SEL16;                             /**< Crossbar A Select Register 16, offset: 0x20 */
  __IO uint16_t SEL17;                             /**< Crossbar A Select Register 17, offset: 0x22 */
  __IO uint16_t SEL18;                             /**< Crossbar A Select Register 18, offset: 0x24 */
  __IO uint16_t SEL19;                             /**< Crossbar A Select Register 19, offset: 0x26 */
  __IO uint16_t SEL20;                             /**< Crossbar A Select Register 20, offset: 0x28 */
  __IO uint16_t SEL21;                             /**< Crossbar A Select Register 21, offset: 0x2A */
  __IO uint16_t SEL22;                             /**< Crossbar A Select Register 22, offset: 0x2C */
  __IO uint16_t SEL23;                             /**< Crossbar A Select Register 23, offset: 0x2E */
  __IO uint16_t SEL24;                             /**< Crossbar A Select Register 24, offset: 0x30 */
  __IO uint16_t SEL25;                             /**< Crossbar A Select Register 25, offset: 0x32 */
  __IO uint16_t SEL26;                             /**< Crossbar A Select Register 26, offset: 0x34 */
  __IO uint16_t SEL27;                             /**< Crossbar A Select Register 27, offset: 0x36 */
  __IO uint16_t SEL28;                             /**< Crossbar A Select Register 28, offset: 0x38 */
  __IO uint16_t SEL29;                             /**< Crossbar A Select Register 29, offset: 0x3A */
  __IO uint16_t SEL30;                             /**< Crossbar A Select Register 30, offset: 0x3C */
  __IO uint16_t SEL31;                             /**< Crossbar A Select Register 31, offset: 0x3E */
  __IO uint16_t SEL32;                             /**< Crossbar A Select Register 32, offset: 0x40 */
  __IO uint16_t SEL33;                             /**< Crossbar A Select Register 33, offset: 0x42 */
  __IO uint16_t SEL34;                             /**< Crossbar A Select Register 34, offset: 0x44 */
  __IO uint16_t SEL35;                             /**< Crossbar A Select Register 35, offset: 0x46 */
  __IO uint16_t SEL36;                             /**< Crossbar A Select Register 36, offset: 0x48 */
  __IO uint16_t SEL37;                             /**< Crossbar A Select Register 37, offset: 0x4A */
  __IO uint16_t SEL38;                             /**< Crossbar A Select Register 38, offset: 0x4C */
  __IO uint16_t SEL39;                             /**< Crossbar A Select Register 39, offset: 0x4E */
  __IO uint16_t SEL40;                             /**< Crossbar A Select Register 40, offset: 0x50 */
  __IO uint16_t SEL41;                             /**< Crossbar A Select Register 41, offset: 0x52 */
  __IO uint16_t SEL42;                             /**< Crossbar A Select Register 42, offset: 0x54 */
  __IO uint16_t SEL43;                             /**< Crossbar A Select Register 43, offset: 0x56 */
  __IO uint16_t SEL44;                             /**< Crossbar A Select Register 44, offset: 0x58 */
  __IO uint16_t SEL45;                             /**< Crossbar A Select Register 45, offset: 0x5A */
  __IO uint16_t SEL46;                             /**< Crossbar A Select Register 46, offset: 0x5C */
  __IO uint16_t SEL47;                             /**< Crossbar A Select Register 47, offset: 0x5E */
  __IO uint16_t SEL48;                             /**< Crossbar A Select Register 48, offset: 0x60 */
  __IO uint16_t SEL49;                             /**< Crossbar A Select Register 49, offset: 0x62 */
  __IO uint16_t SEL50;                             /**< Crossbar A Select Register 50, offset: 0x64 */
  __IO uint16_t SEL51;                             /**< Crossbar A Select Register 51, offset: 0x66 */
  __IO uint16_t SEL52;                             /**< Crossbar A Select Register 52, offset: 0x68 */
  __IO uint16_t SEL53;                             /**< Crossbar A Select Register 53, offset: 0x6A */
  __IO uint16_t SEL54;                             /**< Crossbar A Select Register 54, offset: 0x6C */
  __IO uint16_t SEL55;                             /**< Crossbar A Select Register 55, offset: 0x6E */
  __IO uint16_t SEL56;                             /**< Crossbar A Select Register 56, offset: 0x70 */
  __IO uint16_t SEL57;                             /**< Crossbar A Select Register 57, offset: 0x72 */
  __IO uint16_t SEL58;                             /**< Crossbar A Select Register 58, offset: 0x74 */
  __IO uint16_t SEL59;                             /**< Crossbar A Select Register 59, offset: 0x76 */
  __IO uint16_t SEL60;                             /**< Crossbar A Select Register 60, offset: 0x78 */
  __IO uint16_t SEL61;                             /**< Crossbar A Select Register 61, offset: 0x7A */
  __IO uint16_t SEL62;                             /**< Crossbar A Select Register 62, offset: 0x7C */
  __IO uint16_t SEL63;                             /**< Crossbar A Select Register 63, offset: 0x7E */
  __IO uint16_t SEL64;                             /**< Crossbar A Select Register 64, offset: 0x80 */
  __IO uint16_t SEL65;                             /**< Crossbar A Select Register 65, offset: 0x82 */
  __IO uint16_t CTRL0;                             /**< Crossbar A Control Register 0, offset: 0x84 */
  __IO uint16_t CTRL1;                             /**< Crossbar A Control Register 1, offset: 0x86 */
} XBARA_Type;

/* ----------------------------------------------------------------------------
   -- XBARA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XBARA_Register_Masks XBARA Register Masks
 * @{
 */

/*! @name SEL0 - Crossbar A Select Register 0 */
/*! @{ */

#define XBARA_SEL0_SEL0_MASK                     (0x7FU)
#define XBARA_SEL0_SEL0_SHIFT                    (0U)
#define XBARA_SEL0_SEL0(x)                       (((uint16_t)(((uint16_t)(x)) << XBARA_SEL0_SEL0_SHIFT)) & XBARA_SEL0_SEL0_MASK)

#define XBARA_SEL0_SEL1_MASK                     (0x7F00U)
#define XBARA_SEL0_SEL1_SHIFT                    (8U)
#define XBARA_SEL0_SEL1(x)                       (((uint16_t)(((uint16_t)(x)) << XBARA_SEL0_SEL1_SHIFT)) & XBARA_SEL0_SEL1_MASK)
/*! @} */

/*! @name SEL1 - Crossbar A Select Register 1 */
/*! @{ */

#define XBARA_SEL1_SEL2_MASK                     (0x7FU)
#define XBARA_SEL1_SEL2_SHIFT                    (0U)
#define XBARA_SEL1_SEL2(x)                       (((uint16_t)(((uint16_t)(x)) << XBARA_SEL1_SEL2_SHIFT)) & XBARA_SEL1_SEL2_MASK)

#define XBARA_SEL1_SEL3_MASK                     (0x7F00U)
#define XBARA_SEL1_SEL3_SHIFT                    (8U)
#define XBARA_SEL1_SEL3(x)                       (((uint16_t)(((uint16_t)(x)) << XBARA_SEL1_SEL3_SHIFT)) & XBARA_SEL1_SEL3_MASK)
/*! @} */

/*! @name SEL2 - Crossbar A Select Register 2 */
/*! @{ */

#define XBARA_SEL2_SEL4_MASK                     (0x7FU)
#define XBARA_SEL2_SEL4_SHIFT                    (0U)
#define XBARA_SEL2_SEL4(x)                       (((uint16_t)(((uint16_t)(x)) << XBARA_SEL2_SEL4_SHIFT)) & XBARA_SEL2_SEL4_MASK)

#define XBARA_SEL2_SEL5_MASK                     (0x7F00U)
#define XBARA_SEL2_SEL5_SHIFT                    (8U)
#define XBARA_SEL2_SEL5(x)                       (((uint16_t)(((uint16_t)(x)) << XBARA_SEL2_SEL5_SHIFT)) & XBARA_SEL2_SEL5_MASK)
/*! @} */

/*! @name SEL3 - Crossbar A Select Register 3 */
/*! @{ */

#define XBARA_SEL3_SEL6_MASK                     (0x7FU)
#define XBARA_SEL3_SEL6_SHIFT                    (0U)
#define XBARA_SEL3_SEL6(x)                       (((uint16_t)(((uint16_t)(x)) << XBARA_SEL3_SEL6_SHIFT)) & XBARA_SEL3_SEL6_MASK)

#define XBARA_SEL3_SEL7_MASK                     (0x7F00U)
#define XBARA_SEL3_SEL7_SHIFT                    (8U)
#define XBARA_SEL3_SEL7(x)                       (((uint16_t)(((uint16_t)(x)) << XBARA_SEL3_SEL7_SHIFT)) & XBARA_SEL3_SEL7_MASK)
/*! @} */

/*! @name SEL4 - Crossbar A Select Register 4 */
/*! @{ */

#define XBARA_SEL4_SEL8_MASK                     (0x7FU)
#define XBARA_SEL4_SEL8_SHIFT                    (0U)
#define XBARA_SEL4_SEL8(x)                       (((uint16_t)(((uint16_t)(x)) << XBARA_SEL4_SEL8_SHIFT)) & XBARA_SEL4_SEL8_MASK)

#define XBARA_SEL4_SEL9_MASK                     (0x7F00U)
#define XBARA_SEL4_SEL9_SHIFT                    (8U)
#define XBARA_SEL4_SEL9(x)                       (((uint16_t)(((uint16_t)(x)) << XBARA_SEL4_SEL9_SHIFT)) & XBARA_SEL4_SEL9_MASK)
/*! @} */

/*! @name SEL5 - Crossbar A Select Register 5 */
/*! @{ */

#define XBARA_SEL5_SEL10_MASK                    (0x7FU)
#define XBARA_SEL5_SEL10_SHIFT                   (0U)
#define XBARA_SEL5_SEL10(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_SEL5_SEL10_SHIFT)) & XBARA_SEL5_SEL10_MASK)

#define XBARA_SEL5_SEL11_MASK                    (0x7F00U)
#define XBARA_SEL5_SEL11_SHIFT                   (8U)
#define XBARA_SEL5_SEL11(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_SEL5_SEL11_SHIFT)) & XBARA_SEL5_SEL11_MASK)
/*! @} */

/*! @name SEL6 - Crossbar A Select Register 6 */
/*! @{ */

#define XBARA_SEL6_SEL12_MASK                    (0x7FU)
#define XBARA_SEL6_SEL12_SHIFT                   (0U)
#define XBARA_SEL6_SEL12(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_SEL6_SEL12_SHIFT)) & XBARA_SEL6_SEL12_MASK)

#define XBARA_SEL6_SEL13_MASK                    (0x7F00U)
#define XBARA_SEL6_SEL13_SHIFT                   (8U)
#define XBARA_SEL6_SEL13(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_SEL6_SEL13_SHIFT)) & XBARA_SEL6_SEL13_MASK)
/*! @} */

/*! @name SEL7 - Crossbar A Select Register 7 */
/*! @{ */

#define XBARA_SEL7_SEL14_MASK                    (0x7FU)
#define XBARA_SEL7_SEL14_SHIFT                   (0U)
#define XBARA_SEL7_SEL14(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_SEL7_SEL14_SHIFT)) & XBARA_SEL7_SEL14_MASK)

#define XBARA_SEL7_SEL15_MASK                    (0x7F00U)
#define XBARA_SEL7_SEL15_SHIFT                   (8U)
#define XBARA_SEL7_SEL15(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_SEL7_SEL15_SHIFT)) & XBARA_SEL7_SEL15_MASK)
/*! @} */

/*! @name SEL8 - Crossbar A Select Register 8 */
/*! @{ */

#define XBARA_SEL8_SEL16_MASK                    (0x7FU)
#define XBARA_SEL8_SEL16_SHIFT                   (0U)
#define XBARA_SEL8_SEL16(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_SEL8_SEL16_SHIFT)) & XBARA_SEL8_SEL16_MASK)

#define XBARA_SEL8_SEL17_MASK                    (0x7F00U)
#define XBARA_SEL8_SEL17_SHIFT                   (8U)
#define XBARA_SEL8_SEL17(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_SEL8_SEL17_SHIFT)) & XBARA_SEL8_SEL17_MASK)
/*! @} */

/*! @name SEL9 - Crossbar A Select Register 9 */
/*! @{ */

#define XBARA_SEL9_SEL18_MASK                    (0x7FU)
#define XBARA_SEL9_SEL18_SHIFT                   (0U)
#define XBARA_SEL9_SEL18(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_SEL9_SEL18_SHIFT)) & XBARA_SEL9_SEL18_MASK)

#define XBARA_SEL9_SEL19_MASK                    (0x7F00U)
#define XBARA_SEL9_SEL19_SHIFT                   (8U)
#define XBARA_SEL9_SEL19(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_SEL9_SEL19_SHIFT)) & XBARA_SEL9_SEL19_MASK)
/*! @} */

/*! @name SEL10 - Crossbar A Select Register 10 */
/*! @{ */

#define XBARA_SEL10_SEL20_MASK                   (0x7FU)
#define XBARA_SEL10_SEL20_SHIFT                  (0U)
#define XBARA_SEL10_SEL20(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL10_SEL20_SHIFT)) & XBARA_SEL10_SEL20_MASK)

#define XBARA_SEL10_SEL21_MASK                   (0x7F00U)
#define XBARA_SEL10_SEL21_SHIFT                  (8U)
#define XBARA_SEL10_SEL21(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL10_SEL21_SHIFT)) & XBARA_SEL10_SEL21_MASK)
/*! @} */

/*! @name SEL11 - Crossbar A Select Register 11 */
/*! @{ */

#define XBARA_SEL11_SEL22_MASK                   (0x7FU)
#define XBARA_SEL11_SEL22_SHIFT                  (0U)
#define XBARA_SEL11_SEL22(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL11_SEL22_SHIFT)) & XBARA_SEL11_SEL22_MASK)

#define XBARA_SEL11_SEL23_MASK                   (0x7F00U)
#define XBARA_SEL11_SEL23_SHIFT                  (8U)
#define XBARA_SEL11_SEL23(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL11_SEL23_SHIFT)) & XBARA_SEL11_SEL23_MASK)
/*! @} */

/*! @name SEL12 - Crossbar A Select Register 12 */
/*! @{ */

#define XBARA_SEL12_SEL24_MASK                   (0x7FU)
#define XBARA_SEL12_SEL24_SHIFT                  (0U)
#define XBARA_SEL12_SEL24(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL12_SEL24_SHIFT)) & XBARA_SEL12_SEL24_MASK)

#define XBARA_SEL12_SEL25_MASK                   (0x7F00U)
#define XBARA_SEL12_SEL25_SHIFT                  (8U)
#define XBARA_SEL12_SEL25(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL12_SEL25_SHIFT)) & XBARA_SEL12_SEL25_MASK)
/*! @} */

/*! @name SEL13 - Crossbar A Select Register 13 */
/*! @{ */

#define XBARA_SEL13_SEL26_MASK                   (0x7FU)
#define XBARA_SEL13_SEL26_SHIFT                  (0U)
#define XBARA_SEL13_SEL26(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL13_SEL26_SHIFT)) & XBARA_SEL13_SEL26_MASK)

#define XBARA_SEL13_SEL27_MASK                   (0x7F00U)
#define XBARA_SEL13_SEL27_SHIFT                  (8U)
#define XBARA_SEL13_SEL27(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL13_SEL27_SHIFT)) & XBARA_SEL13_SEL27_MASK)
/*! @} */

/*! @name SEL14 - Crossbar A Select Register 14 */
/*! @{ */

#define XBARA_SEL14_SEL28_MASK                   (0x7FU)
#define XBARA_SEL14_SEL28_SHIFT                  (0U)
#define XBARA_SEL14_SEL28(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL14_SEL28_SHIFT)) & XBARA_SEL14_SEL28_MASK)

#define XBARA_SEL14_SEL29_MASK                   (0x7F00U)
#define XBARA_SEL14_SEL29_SHIFT                  (8U)
#define XBARA_SEL14_SEL29(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL14_SEL29_SHIFT)) & XBARA_SEL14_SEL29_MASK)
/*! @} */

/*! @name SEL15 - Crossbar A Select Register 15 */
/*! @{ */

#define XBARA_SEL15_SEL30_MASK                   (0x7FU)
#define XBARA_SEL15_SEL30_SHIFT                  (0U)
#define XBARA_SEL15_SEL30(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL15_SEL30_SHIFT)) & XBARA_SEL15_SEL30_MASK)

#define XBARA_SEL15_SEL31_MASK                   (0x7F00U)
#define XBARA_SEL15_SEL31_SHIFT                  (8U)
#define XBARA_SEL15_SEL31(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL15_SEL31_SHIFT)) & XBARA_SEL15_SEL31_MASK)
/*! @} */

/*! @name SEL16 - Crossbar A Select Register 16 */
/*! @{ */

#define XBARA_SEL16_SEL32_MASK                   (0x7FU)
#define XBARA_SEL16_SEL32_SHIFT                  (0U)
#define XBARA_SEL16_SEL32(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL16_SEL32_SHIFT)) & XBARA_SEL16_SEL32_MASK)

#define XBARA_SEL16_SEL33_MASK                   (0x7F00U)
#define XBARA_SEL16_SEL33_SHIFT                  (8U)
#define XBARA_SEL16_SEL33(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL16_SEL33_SHIFT)) & XBARA_SEL16_SEL33_MASK)
/*! @} */

/*! @name SEL17 - Crossbar A Select Register 17 */
/*! @{ */

#define XBARA_SEL17_SEL34_MASK                   (0x7FU)
#define XBARA_SEL17_SEL34_SHIFT                  (0U)
#define XBARA_SEL17_SEL34(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL17_SEL34_SHIFT)) & XBARA_SEL17_SEL34_MASK)

#define XBARA_SEL17_SEL35_MASK                   (0x7F00U)
#define XBARA_SEL17_SEL35_SHIFT                  (8U)
#define XBARA_SEL17_SEL35(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL17_SEL35_SHIFT)) & XBARA_SEL17_SEL35_MASK)
/*! @} */

/*! @name SEL18 - Crossbar A Select Register 18 */
/*! @{ */

#define XBARA_SEL18_SEL36_MASK                   (0x7FU)
#define XBARA_SEL18_SEL36_SHIFT                  (0U)
#define XBARA_SEL18_SEL36(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL18_SEL36_SHIFT)) & XBARA_SEL18_SEL36_MASK)

#define XBARA_SEL18_SEL37_MASK                   (0x7F00U)
#define XBARA_SEL18_SEL37_SHIFT                  (8U)
#define XBARA_SEL18_SEL37(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL18_SEL37_SHIFT)) & XBARA_SEL18_SEL37_MASK)
/*! @} */

/*! @name SEL19 - Crossbar A Select Register 19 */
/*! @{ */

#define XBARA_SEL19_SEL38_MASK                   (0x7FU)
#define XBARA_SEL19_SEL38_SHIFT                  (0U)
#define XBARA_SEL19_SEL38(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL19_SEL38_SHIFT)) & XBARA_SEL19_SEL38_MASK)

#define XBARA_SEL19_SEL39_MASK                   (0x7F00U)
#define XBARA_SEL19_SEL39_SHIFT                  (8U)
#define XBARA_SEL19_SEL39(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL19_SEL39_SHIFT)) & XBARA_SEL19_SEL39_MASK)
/*! @} */

/*! @name SEL20 - Crossbar A Select Register 20 */
/*! @{ */

#define XBARA_SEL20_SEL40_MASK                   (0x7FU)
#define XBARA_SEL20_SEL40_SHIFT                  (0U)
#define XBARA_SEL20_SEL40(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL20_SEL40_SHIFT)) & XBARA_SEL20_SEL40_MASK)

#define XBARA_SEL20_SEL41_MASK                   (0x7F00U)
#define XBARA_SEL20_SEL41_SHIFT                  (8U)
#define XBARA_SEL20_SEL41(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL20_SEL41_SHIFT)) & XBARA_SEL20_SEL41_MASK)
/*! @} */

/*! @name SEL21 - Crossbar A Select Register 21 */
/*! @{ */

#define XBARA_SEL21_SEL42_MASK                   (0x7FU)
#define XBARA_SEL21_SEL42_SHIFT                  (0U)
#define XBARA_SEL21_SEL42(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL21_SEL42_SHIFT)) & XBARA_SEL21_SEL42_MASK)

#define XBARA_SEL21_SEL43_MASK                   (0x7F00U)
#define XBARA_SEL21_SEL43_SHIFT                  (8U)
#define XBARA_SEL21_SEL43(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL21_SEL43_SHIFT)) & XBARA_SEL21_SEL43_MASK)
/*! @} */

/*! @name SEL22 - Crossbar A Select Register 22 */
/*! @{ */

#define XBARA_SEL22_SEL44_MASK                   (0x7FU)
#define XBARA_SEL22_SEL44_SHIFT                  (0U)
#define XBARA_SEL22_SEL44(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL22_SEL44_SHIFT)) & XBARA_SEL22_SEL44_MASK)

#define XBARA_SEL22_SEL45_MASK                   (0x7F00U)
#define XBARA_SEL22_SEL45_SHIFT                  (8U)
#define XBARA_SEL22_SEL45(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL22_SEL45_SHIFT)) & XBARA_SEL22_SEL45_MASK)
/*! @} */

/*! @name SEL23 - Crossbar A Select Register 23 */
/*! @{ */

#define XBARA_SEL23_SEL46_MASK                   (0x7FU)
#define XBARA_SEL23_SEL46_SHIFT                  (0U)
#define XBARA_SEL23_SEL46(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL23_SEL46_SHIFT)) & XBARA_SEL23_SEL46_MASK)

#define XBARA_SEL23_SEL47_MASK                   (0x7F00U)
#define XBARA_SEL23_SEL47_SHIFT                  (8U)
#define XBARA_SEL23_SEL47(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL23_SEL47_SHIFT)) & XBARA_SEL23_SEL47_MASK)
/*! @} */

/*! @name SEL24 - Crossbar A Select Register 24 */
/*! @{ */

#define XBARA_SEL24_SEL48_MASK                   (0x7FU)
#define XBARA_SEL24_SEL48_SHIFT                  (0U)
#define XBARA_SEL24_SEL48(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL24_SEL48_SHIFT)) & XBARA_SEL24_SEL48_MASK)

#define XBARA_SEL24_SEL49_MASK                   (0x7F00U)
#define XBARA_SEL24_SEL49_SHIFT                  (8U)
#define XBARA_SEL24_SEL49(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL24_SEL49_SHIFT)) & XBARA_SEL24_SEL49_MASK)
/*! @} */

/*! @name SEL25 - Crossbar A Select Register 25 */
/*! @{ */

#define XBARA_SEL25_SEL50_MASK                   (0x7FU)
#define XBARA_SEL25_SEL50_SHIFT                  (0U)
#define XBARA_SEL25_SEL50(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL25_SEL50_SHIFT)) & XBARA_SEL25_SEL50_MASK)

#define XBARA_SEL25_SEL51_MASK                   (0x7F00U)
#define XBARA_SEL25_SEL51_SHIFT                  (8U)
#define XBARA_SEL25_SEL51(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL25_SEL51_SHIFT)) & XBARA_SEL25_SEL51_MASK)
/*! @} */

/*! @name SEL26 - Crossbar A Select Register 26 */
/*! @{ */

#define XBARA_SEL26_SEL52_MASK                   (0x7FU)
#define XBARA_SEL26_SEL52_SHIFT                  (0U)
#define XBARA_SEL26_SEL52(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL26_SEL52_SHIFT)) & XBARA_SEL26_SEL52_MASK)

#define XBARA_SEL26_SEL53_MASK                   (0x7F00U)
#define XBARA_SEL26_SEL53_SHIFT                  (8U)
#define XBARA_SEL26_SEL53(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL26_SEL53_SHIFT)) & XBARA_SEL26_SEL53_MASK)
/*! @} */

/*! @name SEL27 - Crossbar A Select Register 27 */
/*! @{ */

#define XBARA_SEL27_SEL54_MASK                   (0x7FU)
#define XBARA_SEL27_SEL54_SHIFT                  (0U)
#define XBARA_SEL27_SEL54(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL27_SEL54_SHIFT)) & XBARA_SEL27_SEL54_MASK)

#define XBARA_SEL27_SEL55_MASK                   (0x7F00U)
#define XBARA_SEL27_SEL55_SHIFT                  (8U)
#define XBARA_SEL27_SEL55(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL27_SEL55_SHIFT)) & XBARA_SEL27_SEL55_MASK)
/*! @} */

/*! @name SEL28 - Crossbar A Select Register 28 */
/*! @{ */

#define XBARA_SEL28_SEL56_MASK                   (0x7FU)
#define XBARA_SEL28_SEL56_SHIFT                  (0U)
#define XBARA_SEL28_SEL56(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL28_SEL56_SHIFT)) & XBARA_SEL28_SEL56_MASK)

#define XBARA_SEL28_SEL57_MASK                   (0x7F00U)
#define XBARA_SEL28_SEL57_SHIFT                  (8U)
#define XBARA_SEL28_SEL57(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL28_SEL57_SHIFT)) & XBARA_SEL28_SEL57_MASK)
/*! @} */

/*! @name SEL29 - Crossbar A Select Register 29 */
/*! @{ */

#define XBARA_SEL29_SEL58_MASK                   (0x7FU)
#define XBARA_SEL29_SEL58_SHIFT                  (0U)
#define XBARA_SEL29_SEL58(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL29_SEL58_SHIFT)) & XBARA_SEL29_SEL58_MASK)

#define XBARA_SEL29_SEL59_MASK                   (0x7F00U)
#define XBARA_SEL29_SEL59_SHIFT                  (8U)
#define XBARA_SEL29_SEL59(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL29_SEL59_SHIFT)) & XBARA_SEL29_SEL59_MASK)
/*! @} */

/*! @name SEL30 - Crossbar A Select Register 30 */
/*! @{ */

#define XBARA_SEL30_SEL60_MASK                   (0x7FU)
#define XBARA_SEL30_SEL60_SHIFT                  (0U)
#define XBARA_SEL30_SEL60(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL30_SEL60_SHIFT)) & XBARA_SEL30_SEL60_MASK)

#define XBARA_SEL30_SEL61_MASK                   (0x7F00U)
#define XBARA_SEL30_SEL61_SHIFT                  (8U)
#define XBARA_SEL30_SEL61(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL30_SEL61_SHIFT)) & XBARA_SEL30_SEL61_MASK)
/*! @} */

/*! @name SEL31 - Crossbar A Select Register 31 */
/*! @{ */

#define XBARA_SEL31_SEL62_MASK                   (0x7FU)
#define XBARA_SEL31_SEL62_SHIFT                  (0U)
#define XBARA_SEL31_SEL62(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL31_SEL62_SHIFT)) & XBARA_SEL31_SEL62_MASK)

#define XBARA_SEL31_SEL63_MASK                   (0x7F00U)
#define XBARA_SEL31_SEL63_SHIFT                  (8U)
#define XBARA_SEL31_SEL63(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL31_SEL63_SHIFT)) & XBARA_SEL31_SEL63_MASK)
/*! @} */

/*! @name SEL32 - Crossbar A Select Register 32 */
/*! @{ */

#define XBARA_SEL32_SEL64_MASK                   (0x7FU)
#define XBARA_SEL32_SEL64_SHIFT                  (0U)
#define XBARA_SEL32_SEL64(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL32_SEL64_SHIFT)) & XBARA_SEL32_SEL64_MASK)

#define XBARA_SEL32_SEL65_MASK                   (0x7F00U)
#define XBARA_SEL32_SEL65_SHIFT                  (8U)
#define XBARA_SEL32_SEL65(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL32_SEL65_SHIFT)) & XBARA_SEL32_SEL65_MASK)
/*! @} */

/*! @name SEL33 - Crossbar A Select Register 33 */
/*! @{ */

#define XBARA_SEL33_SEL66_MASK                   (0x7FU)
#define XBARA_SEL33_SEL66_SHIFT                  (0U)
#define XBARA_SEL33_SEL66(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL33_SEL66_SHIFT)) & XBARA_SEL33_SEL66_MASK)

#define XBARA_SEL33_SEL67_MASK                   (0x7F00U)
#define XBARA_SEL33_SEL67_SHIFT                  (8U)
#define XBARA_SEL33_SEL67(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL33_SEL67_SHIFT)) & XBARA_SEL33_SEL67_MASK)
/*! @} */

/*! @name SEL34 - Crossbar A Select Register 34 */
/*! @{ */

#define XBARA_SEL34_SEL68_MASK                   (0x7FU)
#define XBARA_SEL34_SEL68_SHIFT                  (0U)
#define XBARA_SEL34_SEL68(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL34_SEL68_SHIFT)) & XBARA_SEL34_SEL68_MASK)

#define XBARA_SEL34_SEL69_MASK                   (0x7F00U)
#define XBARA_SEL34_SEL69_SHIFT                  (8U)
#define XBARA_SEL34_SEL69(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL34_SEL69_SHIFT)) & XBARA_SEL34_SEL69_MASK)
/*! @} */

/*! @name SEL35 - Crossbar A Select Register 35 */
/*! @{ */

#define XBARA_SEL35_SEL70_MASK                   (0x7FU)
#define XBARA_SEL35_SEL70_SHIFT                  (0U)
#define XBARA_SEL35_SEL70(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL35_SEL70_SHIFT)) & XBARA_SEL35_SEL70_MASK)

#define XBARA_SEL35_SEL71_MASK                   (0x7F00U)
#define XBARA_SEL35_SEL71_SHIFT                  (8U)
#define XBARA_SEL35_SEL71(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL35_SEL71_SHIFT)) & XBARA_SEL35_SEL71_MASK)
/*! @} */

/*! @name SEL36 - Crossbar A Select Register 36 */
/*! @{ */

#define XBARA_SEL36_SEL72_MASK                   (0x7FU)
#define XBARA_SEL36_SEL72_SHIFT                  (0U)
#define XBARA_SEL36_SEL72(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL36_SEL72_SHIFT)) & XBARA_SEL36_SEL72_MASK)

#define XBARA_SEL36_SEL73_MASK                   (0x7F00U)
#define XBARA_SEL36_SEL73_SHIFT                  (8U)
#define XBARA_SEL36_SEL73(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL36_SEL73_SHIFT)) & XBARA_SEL36_SEL73_MASK)
/*! @} */

/*! @name SEL37 - Crossbar A Select Register 37 */
/*! @{ */

#define XBARA_SEL37_SEL74_MASK                   (0x7FU)
#define XBARA_SEL37_SEL74_SHIFT                  (0U)
#define XBARA_SEL37_SEL74(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL37_SEL74_SHIFT)) & XBARA_SEL37_SEL74_MASK)

#define XBARA_SEL37_SEL75_MASK                   (0x7F00U)
#define XBARA_SEL37_SEL75_SHIFT                  (8U)
#define XBARA_SEL37_SEL75(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL37_SEL75_SHIFT)) & XBARA_SEL37_SEL75_MASK)
/*! @} */

/*! @name SEL38 - Crossbar A Select Register 38 */
/*! @{ */

#define XBARA_SEL38_SEL76_MASK                   (0x7FU)
#define XBARA_SEL38_SEL76_SHIFT                  (0U)
#define XBARA_SEL38_SEL76(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL38_SEL76_SHIFT)) & XBARA_SEL38_SEL76_MASK)

#define XBARA_SEL38_SEL77_MASK                   (0x7F00U)
#define XBARA_SEL38_SEL77_SHIFT                  (8U)
#define XBARA_SEL38_SEL77(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL38_SEL77_SHIFT)) & XBARA_SEL38_SEL77_MASK)
/*! @} */

/*! @name SEL39 - Crossbar A Select Register 39 */
/*! @{ */

#define XBARA_SEL39_SEL78_MASK                   (0x7FU)
#define XBARA_SEL39_SEL78_SHIFT                  (0U)
#define XBARA_SEL39_SEL78(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL39_SEL78_SHIFT)) & XBARA_SEL39_SEL78_MASK)

#define XBARA_SEL39_SEL79_MASK                   (0x7F00U)
#define XBARA_SEL39_SEL79_SHIFT                  (8U)
#define XBARA_SEL39_SEL79(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL39_SEL79_SHIFT)) & XBARA_SEL39_SEL79_MASK)
/*! @} */

/*! @name SEL40 - Crossbar A Select Register 40 */
/*! @{ */

#define XBARA_SEL40_SEL80_MASK                   (0x7FU)
#define XBARA_SEL40_SEL80_SHIFT                  (0U)
#define XBARA_SEL40_SEL80(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL40_SEL80_SHIFT)) & XBARA_SEL40_SEL80_MASK)

#define XBARA_SEL40_SEL81_MASK                   (0x7F00U)
#define XBARA_SEL40_SEL81_SHIFT                  (8U)
#define XBARA_SEL40_SEL81(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL40_SEL81_SHIFT)) & XBARA_SEL40_SEL81_MASK)
/*! @} */

/*! @name SEL41 - Crossbar A Select Register 41 */
/*! @{ */

#define XBARA_SEL41_SEL82_MASK                   (0x7FU)
#define XBARA_SEL41_SEL82_SHIFT                  (0U)
#define XBARA_SEL41_SEL82(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL41_SEL82_SHIFT)) & XBARA_SEL41_SEL82_MASK)

#define XBARA_SEL41_SEL83_MASK                   (0x7F00U)
#define XBARA_SEL41_SEL83_SHIFT                  (8U)
#define XBARA_SEL41_SEL83(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL41_SEL83_SHIFT)) & XBARA_SEL41_SEL83_MASK)
/*! @} */

/*! @name SEL42 - Crossbar A Select Register 42 */
/*! @{ */

#define XBARA_SEL42_SEL84_MASK                   (0x7FU)
#define XBARA_SEL42_SEL84_SHIFT                  (0U)
#define XBARA_SEL42_SEL84(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL42_SEL84_SHIFT)) & XBARA_SEL42_SEL84_MASK)

#define XBARA_SEL42_SEL85_MASK                   (0x7F00U)
#define XBARA_SEL42_SEL85_SHIFT                  (8U)
#define XBARA_SEL42_SEL85(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL42_SEL85_SHIFT)) & XBARA_SEL42_SEL85_MASK)
/*! @} */

/*! @name SEL43 - Crossbar A Select Register 43 */
/*! @{ */

#define XBARA_SEL43_SEL86_MASK                   (0x7FU)
#define XBARA_SEL43_SEL86_SHIFT                  (0U)
#define XBARA_SEL43_SEL86(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL43_SEL86_SHIFT)) & XBARA_SEL43_SEL86_MASK)

#define XBARA_SEL43_SEL87_MASK                   (0x7F00U)
#define XBARA_SEL43_SEL87_SHIFT                  (8U)
#define XBARA_SEL43_SEL87(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL43_SEL87_SHIFT)) & XBARA_SEL43_SEL87_MASK)
/*! @} */

/*! @name SEL44 - Crossbar A Select Register 44 */
/*! @{ */

#define XBARA_SEL44_SEL88_MASK                   (0x7FU)
#define XBARA_SEL44_SEL88_SHIFT                  (0U)
#define XBARA_SEL44_SEL88(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL44_SEL88_SHIFT)) & XBARA_SEL44_SEL88_MASK)

#define XBARA_SEL44_SEL89_MASK                   (0x7F00U)
#define XBARA_SEL44_SEL89_SHIFT                  (8U)
#define XBARA_SEL44_SEL89(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL44_SEL89_SHIFT)) & XBARA_SEL44_SEL89_MASK)
/*! @} */

/*! @name SEL45 - Crossbar A Select Register 45 */
/*! @{ */

#define XBARA_SEL45_SEL90_MASK                   (0x7FU)
#define XBARA_SEL45_SEL90_SHIFT                  (0U)
#define XBARA_SEL45_SEL90(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL45_SEL90_SHIFT)) & XBARA_SEL45_SEL90_MASK)

#define XBARA_SEL45_SEL91_MASK                   (0x7F00U)
#define XBARA_SEL45_SEL91_SHIFT                  (8U)
#define XBARA_SEL45_SEL91(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL45_SEL91_SHIFT)) & XBARA_SEL45_SEL91_MASK)
/*! @} */

/*! @name SEL46 - Crossbar A Select Register 46 */
/*! @{ */

#define XBARA_SEL46_SEL92_MASK                   (0x7FU)
#define XBARA_SEL46_SEL92_SHIFT                  (0U)
#define XBARA_SEL46_SEL92(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL46_SEL92_SHIFT)) & XBARA_SEL46_SEL92_MASK)

#define XBARA_SEL46_SEL93_MASK                   (0x7F00U)
#define XBARA_SEL46_SEL93_SHIFT                  (8U)
#define XBARA_SEL46_SEL93(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL46_SEL93_SHIFT)) & XBARA_SEL46_SEL93_MASK)
/*! @} */

/*! @name SEL47 - Crossbar A Select Register 47 */
/*! @{ */

#define XBARA_SEL47_SEL94_MASK                   (0x7FU)
#define XBARA_SEL47_SEL94_SHIFT                  (0U)
#define XBARA_SEL47_SEL94(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL47_SEL94_SHIFT)) & XBARA_SEL47_SEL94_MASK)

#define XBARA_SEL47_SEL95_MASK                   (0x7F00U)
#define XBARA_SEL47_SEL95_SHIFT                  (8U)
#define XBARA_SEL47_SEL95(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL47_SEL95_SHIFT)) & XBARA_SEL47_SEL95_MASK)
/*! @} */

/*! @name SEL48 - Crossbar A Select Register 48 */
/*! @{ */

#define XBARA_SEL48_SEL96_MASK                   (0x7FU)
#define XBARA_SEL48_SEL96_SHIFT                  (0U)
#define XBARA_SEL48_SEL96(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL48_SEL96_SHIFT)) & XBARA_SEL48_SEL96_MASK)

#define XBARA_SEL48_SEL97_MASK                   (0x7F00U)
#define XBARA_SEL48_SEL97_SHIFT                  (8U)
#define XBARA_SEL48_SEL97(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL48_SEL97_SHIFT)) & XBARA_SEL48_SEL97_MASK)
/*! @} */

/*! @name SEL49 - Crossbar A Select Register 49 */
/*! @{ */

#define XBARA_SEL49_SEL98_MASK                   (0x7FU)
#define XBARA_SEL49_SEL98_SHIFT                  (0U)
#define XBARA_SEL49_SEL98(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL49_SEL98_SHIFT)) & XBARA_SEL49_SEL98_MASK)

#define XBARA_SEL49_SEL99_MASK                   (0x7F00U)
#define XBARA_SEL49_SEL99_SHIFT                  (8U)
#define XBARA_SEL49_SEL99(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_SEL49_SEL99_SHIFT)) & XBARA_SEL49_SEL99_MASK)
/*! @} */

/*! @name SEL50 - Crossbar A Select Register 50 */
/*! @{ */

#define XBARA_SEL50_SEL100_MASK                  (0x7FU)
#define XBARA_SEL50_SEL100_SHIFT                 (0U)
#define XBARA_SEL50_SEL100(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL50_SEL100_SHIFT)) & XBARA_SEL50_SEL100_MASK)

#define XBARA_SEL50_SEL101_MASK                  (0x7F00U)
#define XBARA_SEL50_SEL101_SHIFT                 (8U)
#define XBARA_SEL50_SEL101(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL50_SEL101_SHIFT)) & XBARA_SEL50_SEL101_MASK)
/*! @} */

/*! @name SEL51 - Crossbar A Select Register 51 */
/*! @{ */

#define XBARA_SEL51_SEL102_MASK                  (0x7FU)
#define XBARA_SEL51_SEL102_SHIFT                 (0U)
#define XBARA_SEL51_SEL102(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL51_SEL102_SHIFT)) & XBARA_SEL51_SEL102_MASK)

#define XBARA_SEL51_SEL103_MASK                  (0x7F00U)
#define XBARA_SEL51_SEL103_SHIFT                 (8U)
#define XBARA_SEL51_SEL103(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL51_SEL103_SHIFT)) & XBARA_SEL51_SEL103_MASK)
/*! @} */

/*! @name SEL52 - Crossbar A Select Register 52 */
/*! @{ */

#define XBARA_SEL52_SEL104_MASK                  (0x7FU)
#define XBARA_SEL52_SEL104_SHIFT                 (0U)
#define XBARA_SEL52_SEL104(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL52_SEL104_SHIFT)) & XBARA_SEL52_SEL104_MASK)

#define XBARA_SEL52_SEL105_MASK                  (0x7F00U)
#define XBARA_SEL52_SEL105_SHIFT                 (8U)
#define XBARA_SEL52_SEL105(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL52_SEL105_SHIFT)) & XBARA_SEL52_SEL105_MASK)
/*! @} */

/*! @name SEL53 - Crossbar A Select Register 53 */
/*! @{ */

#define XBARA_SEL53_SEL106_MASK                  (0x7FU)
#define XBARA_SEL53_SEL106_SHIFT                 (0U)
#define XBARA_SEL53_SEL106(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL53_SEL106_SHIFT)) & XBARA_SEL53_SEL106_MASK)

#define XBARA_SEL53_SEL107_MASK                  (0x7F00U)
#define XBARA_SEL53_SEL107_SHIFT                 (8U)
#define XBARA_SEL53_SEL107(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL53_SEL107_SHIFT)) & XBARA_SEL53_SEL107_MASK)
/*! @} */

/*! @name SEL54 - Crossbar A Select Register 54 */
/*! @{ */

#define XBARA_SEL54_SEL108_MASK                  (0x7FU)
#define XBARA_SEL54_SEL108_SHIFT                 (0U)
#define XBARA_SEL54_SEL108(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL54_SEL108_SHIFT)) & XBARA_SEL54_SEL108_MASK)

#define XBARA_SEL54_SEL109_MASK                  (0x7F00U)
#define XBARA_SEL54_SEL109_SHIFT                 (8U)
#define XBARA_SEL54_SEL109(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL54_SEL109_SHIFT)) & XBARA_SEL54_SEL109_MASK)
/*! @} */

/*! @name SEL55 - Crossbar A Select Register 55 */
/*! @{ */

#define XBARA_SEL55_SEL110_MASK                  (0x7FU)
#define XBARA_SEL55_SEL110_SHIFT                 (0U)
#define XBARA_SEL55_SEL110(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL55_SEL110_SHIFT)) & XBARA_SEL55_SEL110_MASK)

#define XBARA_SEL55_SEL111_MASK                  (0x7F00U)
#define XBARA_SEL55_SEL111_SHIFT                 (8U)
#define XBARA_SEL55_SEL111(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL55_SEL111_SHIFT)) & XBARA_SEL55_SEL111_MASK)
/*! @} */

/*! @name SEL56 - Crossbar A Select Register 56 */
/*! @{ */

#define XBARA_SEL56_SEL112_MASK                  (0x7FU)
#define XBARA_SEL56_SEL112_SHIFT                 (0U)
#define XBARA_SEL56_SEL112(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL56_SEL112_SHIFT)) & XBARA_SEL56_SEL112_MASK)

#define XBARA_SEL56_SEL113_MASK                  (0x7F00U)
#define XBARA_SEL56_SEL113_SHIFT                 (8U)
#define XBARA_SEL56_SEL113(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL56_SEL113_SHIFT)) & XBARA_SEL56_SEL113_MASK)
/*! @} */

/*! @name SEL57 - Crossbar A Select Register 57 */
/*! @{ */

#define XBARA_SEL57_SEL114_MASK                  (0x7FU)
#define XBARA_SEL57_SEL114_SHIFT                 (0U)
#define XBARA_SEL57_SEL114(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL57_SEL114_SHIFT)) & XBARA_SEL57_SEL114_MASK)

#define XBARA_SEL57_SEL115_MASK                  (0x7F00U)
#define XBARA_SEL57_SEL115_SHIFT                 (8U)
#define XBARA_SEL57_SEL115(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL57_SEL115_SHIFT)) & XBARA_SEL57_SEL115_MASK)
/*! @} */

/*! @name SEL58 - Crossbar A Select Register 58 */
/*! @{ */

#define XBARA_SEL58_SEL116_MASK                  (0x7FU)
#define XBARA_SEL58_SEL116_SHIFT                 (0U)
#define XBARA_SEL58_SEL116(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL58_SEL116_SHIFT)) & XBARA_SEL58_SEL116_MASK)

#define XBARA_SEL58_SEL117_MASK                  (0x7F00U)
#define XBARA_SEL58_SEL117_SHIFT                 (8U)
#define XBARA_SEL58_SEL117(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL58_SEL117_SHIFT)) & XBARA_SEL58_SEL117_MASK)
/*! @} */

/*! @name SEL59 - Crossbar A Select Register 59 */
/*! @{ */

#define XBARA_SEL59_SEL118_MASK                  (0x7FU)
#define XBARA_SEL59_SEL118_SHIFT                 (0U)
#define XBARA_SEL59_SEL118(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL59_SEL118_SHIFT)) & XBARA_SEL59_SEL118_MASK)

#define XBARA_SEL59_SEL119_MASK                  (0x7F00U)
#define XBARA_SEL59_SEL119_SHIFT                 (8U)
#define XBARA_SEL59_SEL119(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL59_SEL119_SHIFT)) & XBARA_SEL59_SEL119_MASK)
/*! @} */

/*! @name SEL60 - Crossbar A Select Register 60 */
/*! @{ */

#define XBARA_SEL60_SEL120_MASK                  (0x7FU)
#define XBARA_SEL60_SEL120_SHIFT                 (0U)
#define XBARA_SEL60_SEL120(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL60_SEL120_SHIFT)) & XBARA_SEL60_SEL120_MASK)

#define XBARA_SEL60_SEL121_MASK                  (0x7F00U)
#define XBARA_SEL60_SEL121_SHIFT                 (8U)
#define XBARA_SEL60_SEL121(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL60_SEL121_SHIFT)) & XBARA_SEL60_SEL121_MASK)
/*! @} */

/*! @name SEL61 - Crossbar A Select Register 61 */
/*! @{ */

#define XBARA_SEL61_SEL122_MASK                  (0x7FU)
#define XBARA_SEL61_SEL122_SHIFT                 (0U)
#define XBARA_SEL61_SEL122(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL61_SEL122_SHIFT)) & XBARA_SEL61_SEL122_MASK)

#define XBARA_SEL61_SEL123_MASK                  (0x7F00U)
#define XBARA_SEL61_SEL123_SHIFT                 (8U)
#define XBARA_SEL61_SEL123(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL61_SEL123_SHIFT)) & XBARA_SEL61_SEL123_MASK)
/*! @} */

/*! @name SEL62 - Crossbar A Select Register 62 */
/*! @{ */

#define XBARA_SEL62_SEL124_MASK                  (0x7FU)
#define XBARA_SEL62_SEL124_SHIFT                 (0U)
#define XBARA_SEL62_SEL124(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL62_SEL124_SHIFT)) & XBARA_SEL62_SEL124_MASK)

#define XBARA_SEL62_SEL125_MASK                  (0x7F00U)
#define XBARA_SEL62_SEL125_SHIFT                 (8U)
#define XBARA_SEL62_SEL125(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL62_SEL125_SHIFT)) & XBARA_SEL62_SEL125_MASK)
/*! @} */

/*! @name SEL63 - Crossbar A Select Register 63 */
/*! @{ */

#define XBARA_SEL63_SEL126_MASK                  (0x7FU)
#define XBARA_SEL63_SEL126_SHIFT                 (0U)
#define XBARA_SEL63_SEL126(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL63_SEL126_SHIFT)) & XBARA_SEL63_SEL126_MASK)

#define XBARA_SEL63_SEL127_MASK                  (0x7F00U)
#define XBARA_SEL63_SEL127_SHIFT                 (8U)
#define XBARA_SEL63_SEL127(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL63_SEL127_SHIFT)) & XBARA_SEL63_SEL127_MASK)
/*! @} */

/*! @name SEL64 - Crossbar A Select Register 64 */
/*! @{ */

#define XBARA_SEL64_SEL128_MASK                  (0x7FU)
#define XBARA_SEL64_SEL128_SHIFT                 (0U)
#define XBARA_SEL64_SEL128(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL64_SEL128_SHIFT)) & XBARA_SEL64_SEL128_MASK)

#define XBARA_SEL64_SEL129_MASK                  (0x7F00U)
#define XBARA_SEL64_SEL129_SHIFT                 (8U)
#define XBARA_SEL64_SEL129(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL64_SEL129_SHIFT)) & XBARA_SEL64_SEL129_MASK)
/*! @} */

/*! @name SEL65 - Crossbar A Select Register 65 */
/*! @{ */

#define XBARA_SEL65_SEL130_MASK                  (0x7FU)
#define XBARA_SEL65_SEL130_SHIFT                 (0U)
#define XBARA_SEL65_SEL130(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL65_SEL130_SHIFT)) & XBARA_SEL65_SEL130_MASK)

#define XBARA_SEL65_SEL131_MASK                  (0x7F00U)
#define XBARA_SEL65_SEL131_SHIFT                 (8U)
#define XBARA_SEL65_SEL131(x)                    (((uint16_t)(((uint16_t)(x)) << XBARA_SEL65_SEL131_SHIFT)) & XBARA_SEL65_SEL131_MASK)
/*! @} */

/*! @name CTRL0 - Crossbar A Control Register 0 */
/*! @{ */

#define XBARA_CTRL0_DEN0_MASK                    (0x1U)
#define XBARA_CTRL0_DEN0_SHIFT                   (0U)
/*! DEN0 - DMA Enable for XBAR_OUT0
 *  0b0..DMA disabled
 *  0b1..DMA enabled
 */
#define XBARA_CTRL0_DEN0(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL0_DEN0_SHIFT)) & XBARA_CTRL0_DEN0_MASK)

#define XBARA_CTRL0_IEN0_MASK                    (0x2U)
#define XBARA_CTRL0_IEN0_SHIFT                   (1U)
/*! IEN0 - Interrupt Enable for XBAR_OUT0
 *  0b0..Interrupt disabled
 *  0b1..Interrupt enabled
 */
#define XBARA_CTRL0_IEN0(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL0_IEN0_SHIFT)) & XBARA_CTRL0_IEN0_MASK)

#define XBARA_CTRL0_EDGE0_MASK                   (0xCU)
#define XBARA_CTRL0_EDGE0_SHIFT                  (2U)
/*! EDGE0 - Active edge for edge detection on XBAR_OUT0
 *  0b00..STS0 never asserts
 *  0b01..STS0 asserts on rising edges of XBAR_OUT0
 *  0b10..STS0 asserts on falling edges of XBAR_OUT0
 *  0b11..STS0 asserts on rising and falling edges of XBAR_OUT0
 */
#define XBARA_CTRL0_EDGE0(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL0_EDGE0_SHIFT)) & XBARA_CTRL0_EDGE0_MASK)

#define XBARA_CTRL0_STS0_MASK                    (0x10U)
#define XBARA_CTRL0_STS0_SHIFT                   (4U)
/*! STS0 - Edge detection status for XBAR_OUT0
 *  0b0..Active edge not yet detected on XBAR_OUT0
 *  0b1..Active edge detected on XBAR_OUT0
 */
#define XBARA_CTRL0_STS0(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL0_STS0_SHIFT)) & XBARA_CTRL0_STS0_MASK)

#define XBARA_CTRL0_DEN1_MASK                    (0x100U)
#define XBARA_CTRL0_DEN1_SHIFT                   (8U)
/*! DEN1 - DMA Enable for XBAR_OUT1
 *  0b0..DMA disabled
 *  0b1..DMA enabled
 */
#define XBARA_CTRL0_DEN1(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL0_DEN1_SHIFT)) & XBARA_CTRL0_DEN1_MASK)

#define XBARA_CTRL0_IEN1_MASK                    (0x200U)
#define XBARA_CTRL0_IEN1_SHIFT                   (9U)
/*! IEN1 - Interrupt Enable for XBAR_OUT1
 *  0b0..Interrupt disabled
 *  0b1..Interrupt enabled
 */
#define XBARA_CTRL0_IEN1(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL0_IEN1_SHIFT)) & XBARA_CTRL0_IEN1_MASK)

#define XBARA_CTRL0_EDGE1_MASK                   (0xC00U)
#define XBARA_CTRL0_EDGE1_SHIFT                  (10U)
/*! EDGE1 - Active edge for edge detection on XBAR_OUT1
 *  0b00..STS1 never asserts
 *  0b01..STS1 asserts on rising edges of XBAR_OUT1
 *  0b10..STS1 asserts on falling edges of XBAR_OUT1
 *  0b11..STS1 asserts on rising and falling edges of XBAR_OUT1
 */
#define XBARA_CTRL0_EDGE1(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL0_EDGE1_SHIFT)) & XBARA_CTRL0_EDGE1_MASK)

#define XBARA_CTRL0_STS1_MASK                    (0x1000U)
#define XBARA_CTRL0_STS1_SHIFT                   (12U)
/*! STS1 - Edge detection status for XBAR_OUT1
 *  0b0..Active edge not yet detected on XBAR_OUT1
 *  0b1..Active edge detected on XBAR_OUT1
 */
#define XBARA_CTRL0_STS1(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL0_STS1_SHIFT)) & XBARA_CTRL0_STS1_MASK)
/*! @} */

/*! @name CTRL1 - Crossbar A Control Register 1 */
/*! @{ */

#define XBARA_CTRL1_DEN2_MASK                    (0x1U)
#define XBARA_CTRL1_DEN2_SHIFT                   (0U)
/*! DEN2 - DMA Enable for XBAR_OUT2
 *  0b0..DMA disabled
 *  0b1..DMA enabled
 */
#define XBARA_CTRL1_DEN2(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL1_DEN2_SHIFT)) & XBARA_CTRL1_DEN2_MASK)

#define XBARA_CTRL1_IEN2_MASK                    (0x2U)
#define XBARA_CTRL1_IEN2_SHIFT                   (1U)
/*! IEN2 - Interrupt Enable for XBAR_OUT2
 *  0b0..Interrupt disabled
 *  0b1..Interrupt enabled
 */
#define XBARA_CTRL1_IEN2(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL1_IEN2_SHIFT)) & XBARA_CTRL1_IEN2_MASK)

#define XBARA_CTRL1_EDGE2_MASK                   (0xCU)
#define XBARA_CTRL1_EDGE2_SHIFT                  (2U)
/*! EDGE2 - Active edge for edge detection on XBAR_OUT2
 *  0b00..STS2 never asserts
 *  0b01..STS2 asserts on rising edges of XBAR_OUT2
 *  0b10..STS2 asserts on falling edges of XBAR_OUT2
 *  0b11..STS2 asserts on rising and falling edges of XBAR_OUT2
 */
#define XBARA_CTRL1_EDGE2(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL1_EDGE2_SHIFT)) & XBARA_CTRL1_EDGE2_MASK)

#define XBARA_CTRL1_STS2_MASK                    (0x10U)
#define XBARA_CTRL1_STS2_SHIFT                   (4U)
/*! STS2 - Edge detection status for XBAR_OUT2
 *  0b0..Active edge not yet detected on XBAR_OUT2
 *  0b1..Active edge detected on XBAR_OUT2
 */
#define XBARA_CTRL1_STS2(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL1_STS2_SHIFT)) & XBARA_CTRL1_STS2_MASK)

#define XBARA_CTRL1_DEN3_MASK                    (0x100U)
#define XBARA_CTRL1_DEN3_SHIFT                   (8U)
/*! DEN3 - DMA Enable for XBAR_OUT3
 *  0b0..DMA disabled
 *  0b1..DMA enabled
 */
#define XBARA_CTRL1_DEN3(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL1_DEN3_SHIFT)) & XBARA_CTRL1_DEN3_MASK)

#define XBARA_CTRL1_IEN3_MASK                    (0x200U)
#define XBARA_CTRL1_IEN3_SHIFT                   (9U)
/*! IEN3 - Interrupt Enable for XBAR_OUT3
 *  0b0..Interrupt disabled
 *  0b1..Interrupt enabled
 */
#define XBARA_CTRL1_IEN3(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL1_IEN3_SHIFT)) & XBARA_CTRL1_IEN3_MASK)

#define XBARA_CTRL1_EDGE3_MASK                   (0xC00U)
#define XBARA_CTRL1_EDGE3_SHIFT                  (10U)
/*! EDGE3 - Active edge for edge detection on XBAR_OUT3
 *  0b00..STS3 never asserts
 *  0b01..STS3 asserts on rising edges of XBAR_OUT3
 *  0b10..STS3 asserts on falling edges of XBAR_OUT3
 *  0b11..STS3 asserts on rising and falling edges of XBAR_OUT3
 */
#define XBARA_CTRL1_EDGE3(x)                     (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL1_EDGE3_SHIFT)) & XBARA_CTRL1_EDGE3_MASK)

#define XBARA_CTRL1_STS3_MASK                    (0x1000U)
#define XBARA_CTRL1_STS3_SHIFT                   (12U)
/*! STS3 - Edge detection status for XBAR_OUT3
 *  0b0..Active edge not yet detected on XBAR_OUT3
 *  0b1..Active edge detected on XBAR_OUT3
 */
#define XBARA_CTRL1_STS3(x)                      (((uint16_t)(((uint16_t)(x)) << XBARA_CTRL1_STS3_SHIFT)) & XBARA_CTRL1_STS3_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group XBARA_Register_Masks */


/* XBARA - Peripheral instance base addresses */
/** Peripheral XBARA1 base address */
#define XBARA1_BASE                              (0x403BC000u)
/** Peripheral XBARA1 base pointer */
#define XBARA1                                   ((XBARA_Type *)XBARA1_BASE)
/** Array initializer of XBARA peripheral base addresses */
#define XBARA_BASE_ADDRS                         { 0u, XBARA1_BASE }
/** Array initializer of XBARA peripheral base pointers */
#define XBARA_BASE_PTRS                          { (XBARA_Type *)0u, XBARA1 }

/*!
 * @}
 */ /* end of group XBARA_Peripheral_Access_Layer */



/* ----------------------------------------------------------------------------
   -- XBARB Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XBARB_Peripheral_Access_Layer XBARB Peripheral Access Layer
 * @{
 */

/** XBARB - Register Layout Typedef */
typedef struct {
  __IO uint16_t SEL0;                              /**< Crossbar B Select Register 0, offset: 0x0 */
  __IO uint16_t SEL1;                              /**< Crossbar B Select Register 1, offset: 0x2 */
  __IO uint16_t SEL2;                              /**< Crossbar B Select Register 2, offset: 0x4 */
  __IO uint16_t SEL3;                              /**< Crossbar B Select Register 3, offset: 0x6 */
  __IO uint16_t SEL4;                              /**< Crossbar B Select Register 4, offset: 0x8 */
  __IO uint16_t SEL5;                              /**< Crossbar B Select Register 5, offset: 0xA */
  __IO uint16_t SEL6;                              /**< Crossbar B Select Register 6, offset: 0xC */
  __IO uint16_t SEL7;                              /**< Crossbar B Select Register 7, offset: 0xE */
} XBARB_Type;

/* ----------------------------------------------------------------------------
   -- XBARB Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XBARB_Register_Masks XBARB Register Masks
 * @{
 */

/*! @name SEL0 - Crossbar B Select Register 0 */
/*! @{ */

#define XBARB_SEL0_SEL0_MASK                     (0x3FU)
#define XBARB_SEL0_SEL0_SHIFT                    (0U)
#define XBARB_SEL0_SEL0(x)                       (((uint16_t)(((uint16_t)(x)) << XBARB_SEL0_SEL0_SHIFT)) & XBARB_SEL0_SEL0_MASK)

#define XBARB_SEL0_SEL1_MASK                     (0x3F00U)
#define XBARB_SEL0_SEL1_SHIFT                    (8U)
#define XBARB_SEL0_SEL1(x)                       (((uint16_t)(((uint16_t)(x)) << XBARB_SEL0_SEL1_SHIFT)) & XBARB_SEL0_SEL1_MASK)
/*! @} */

/*! @name SEL1 - Crossbar B Select Register 1 */
/*! @{ */

#define XBARB_SEL1_SEL2_MASK                     (0x3FU)
#define XBARB_SEL1_SEL2_SHIFT                    (0U)
#define XBARB_SEL1_SEL2(x)                       (((uint16_t)(((uint16_t)(x)) << XBARB_SEL1_SEL2_SHIFT)) & XBARB_SEL1_SEL2_MASK)

#define XBARB_SEL1_SEL3_MASK                     (0x3F00U)
#define XBARB_SEL1_SEL3_SHIFT                    (8U)
#define XBARB_SEL1_SEL3(x)                       (((uint16_t)(((uint16_t)(x)) << XBARB_SEL1_SEL3_SHIFT)) & XBARB_SEL1_SEL3_MASK)
/*! @} */

/*! @name SEL2 - Crossbar B Select Register 2 */
/*! @{ */

#define XBARB_SEL2_SEL4_MASK                     (0x3FU)
#define XBARB_SEL2_SEL4_SHIFT                    (0U)
#define XBARB_SEL2_SEL4(x)                       (((uint16_t)(((uint16_t)(x)) << XBARB_SEL2_SEL4_SHIFT)) & XBARB_SEL2_SEL4_MASK)

#define XBARB_SEL2_SEL5_MASK                     (0x3F00U)
#define XBARB_SEL2_SEL5_SHIFT                    (8U)
#define XBARB_SEL2_SEL5(x)                       (((uint16_t)(((uint16_t)(x)) << XBARB_SEL2_SEL5_SHIFT)) & XBARB_SEL2_SEL5_MASK)
/*! @} */

/*! @name SEL3 - Crossbar B Select Register 3 */
/*! @{ */

#define XBARB_SEL3_SEL6_MASK                     (0x3FU)
#define XBARB_SEL3_SEL6_SHIFT                    (0U)
#define XBARB_SEL3_SEL6(x)                       (((uint16_t)(((uint16_t)(x)) << XBARB_SEL3_SEL6_SHIFT)) & XBARB_SEL3_SEL6_MASK)

#define XBARB_SEL3_SEL7_MASK                     (0x3F00U)
#define XBARB_SEL3_SEL7_SHIFT                    (8U)
#define XBARB_SEL3_SEL7(x)                       (((uint16_t)(((uint16_t)(x)) << XBARB_SEL3_SEL7_SHIFT)) & XBARB_SEL3_SEL7_MASK)
/*! @} */

/*! @name SEL4 - Crossbar B Select Register 4 */
/*! @{ */

#define XBARB_SEL4_SEL8_MASK                     (0x3FU)
#define XBARB_SEL4_SEL8_SHIFT                    (0U)
#define XBARB_SEL4_SEL8(x)                       (((uint16_t)(((uint16_t)(x)) << XBARB_SEL4_SEL8_SHIFT)) & XBARB_SEL4_SEL8_MASK)

#define XBARB_SEL4_SEL9_MASK                     (0x3F00U)
#define XBARB_SEL4_SEL9_SHIFT                    (8U)
#define XBARB_SEL4_SEL9(x)                       (((uint16_t)(((uint16_t)(x)) << XBARB_SEL4_SEL9_SHIFT)) & XBARB_SEL4_SEL9_MASK)
/*! @} */

/*! @name SEL5 - Crossbar B Select Register 5 */
/*! @{ */

#define XBARB_SEL5_SEL10_MASK                    (0x3FU)
#define XBARB_SEL5_SEL10_SHIFT                   (0U)
#define XBARB_SEL5_SEL10(x)                      (((uint16_t)(((uint16_t)(x)) << XBARB_SEL5_SEL10_SHIFT)) & XBARB_SEL5_SEL10_MASK)

#define XBARB_SEL5_SEL11_MASK                    (0x3F00U)
#define XBARB_SEL5_SEL11_SHIFT                   (8U)
#define XBARB_SEL5_SEL11(x)                      (((uint16_t)(((uint16_t)(x)) << XBARB_SEL5_SEL11_SHIFT)) & XBARB_SEL5_SEL11_MASK)
/*! @} */

/*! @name SEL6 - Crossbar B Select Register 6 */
/*! @{ */

#define XBARB_SEL6_SEL12_MASK                    (0x3FU)
#define XBARB_SEL6_SEL12_SHIFT                   (0U)
#define XBARB_SEL6_SEL12(x)                      (((uint16_t)(((uint16_t)(x)) << XBARB_SEL6_SEL12_SHIFT)) & XBARB_SEL6_SEL12_MASK)

#define XBARB_SEL6_SEL13_MASK                    (0x3F00U)
#define XBARB_SEL6_SEL13_SHIFT                   (8U)
#define XBARB_SEL6_SEL13(x)                      (((uint16_t)(((uint16_t)(x)) << XBARB_SEL6_SEL13_SHIFT)) & XBARB_SEL6_SEL13_MASK)
/*! @} */

/*! @name SEL7 - Crossbar B Select Register 7 */
/*! @{ */

#define XBARB_SEL7_SEL14_MASK                    (0x3FU)
#define XBARB_SEL7_SEL14_SHIFT                   (0U)
#define XBARB_SEL7_SEL14(x)                      (((uint16_t)(((uint16_t)(x)) << XBARB_SEL7_SEL14_SHIFT)) & XBARB_SEL7_SEL14_MASK)

#define XBARB_SEL7_SEL15_MASK                    (0x3F00U)
#define XBARB_SEL7_SEL15_SHIFT                   (8U)
#define XBARB_SEL7_SEL15(x)                      (((uint16_t)(((uint16_t)(x)) << XBARB_SEL7_SEL15_SHIFT)) & XBARB_SEL7_SEL15_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group XBARB_Register_Masks */


/* XBARB - Peripheral instance base addresses */
/** Peripheral XBARB2 base address */
#define XBARB2_BASE                              (0x403C0000u)
/** Peripheral XBARB2 base pointer */
#define XBARB2                                   ((XBARB_Type *)XBARB2_BASE)
/** Peripheral XBARB3 base address */
#define XBARB3_BASE                              (0x403C4000u)
/** Peripheral XBARB3 base pointer */
#define XBARB3                                   ((XBARB_Type *)XBARB3_BASE)
/** Array initializer of XBARB peripheral base addresses */
#define XBARB_BASE_ADDRS                         { 0u, 0u, XBARB2_BASE, XBARB3_BASE }
/** Array initializer of XBARB peripheral base pointers */
#define XBARB_BASE_PTRS                          { (XBARB_Type *)0u, (XBARB_Type *)0u, XBARB2, XBARB3 }

/*!
 * @}
 */ /* end of group XBARB_Peripheral_Access_Layer */


/*!
 * @addtogroup GPIO_Peripheral_Access_Layer GPIO Peripheral Access Layer
 * @{
 */

/** GPIO - Register Layout Typedef */
typedef struct {
  __IO uint32_t DR;                                /**< GPIO data register, offset: 0x0 */
  __IO uint32_t GDIR;                              /**< GPIO direction register, offset: 0x4 */
  __I  uint32_t PSR;                               /**< GPIO pad status register, offset: 0x8 */
  __IO uint32_t ICR1;                              /**< GPIO interrupt configuration register1, offset: 0xC */
  __IO uint32_t ICR2;                              /**< GPIO interrupt configuration register2, offset: 0x10 */
  __IO uint32_t IMR;                               /**< GPIO interrupt mask register, offset: 0x14 */
  __IO uint32_t ISR;                               /**< GPIO interrupt status register, offset: 0x18 */
  __IO uint32_t EDGE_SEL;                          /**< GPIO edge select register, offset: 0x1C */
       uint8_t RESERVED_0[100];
  __O  uint32_t DR_SET;                            /**< GPIO data register SET, offset: 0x84 */
  __O  uint32_t DR_CLEAR;                          /**< GPIO data register CLEAR, offset: 0x88 */
  __O  uint32_t DR_TOGGLE;                         /**< GPIO data register TOGGLE, offset: 0x8C */
} GPIO_Type;

/* ----------------------------------------------------------------------------
   -- GPIO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPIO_Register_Masks GPIO Register Masks
 * @{
 */

/*! @name DR - GPIO data register */
/*! @{ */

#define GPIO_DR_DR_MASK                          (0xFFFFFFFFU)
#define GPIO_DR_DR_SHIFT                         (0U)
/*! DR - DR
 */
#define GPIO_DR_DR(x)                            (((uint32_t)(((uint32_t)(x)) << GPIO_DR_DR_SHIFT)) & GPIO_DR_DR_MASK)
/*! @} */

/*! @name GDIR - GPIO direction register */
/*! @{ */

#define GPIO_GDIR_GDIR_MASK                      (0xFFFFFFFFU)
#define GPIO_GDIR_GDIR_SHIFT                     (0U)
/*! GDIR - GDIR
 */
#define GPIO_GDIR_GDIR(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_GDIR_GDIR_SHIFT)) & GPIO_GDIR_GDIR_MASK)
/*! @} */

/*! @name PSR - GPIO pad status register */
/*! @{ */

#define GPIO_PSR_PSR_MASK                        (0xFFFFFFFFU)
#define GPIO_PSR_PSR_SHIFT                       (0U)
/*! PSR - PSR
 */
#define GPIO_PSR_PSR(x)                          (((uint32_t)(((uint32_t)(x)) << GPIO_PSR_PSR_SHIFT)) & GPIO_PSR_PSR_MASK)
/*! @} */

/*! @name ICR1 - GPIO interrupt configuration register1 */
/*! @{ */

#define GPIO_ICR1_ICR0_MASK                      (0x3U)
#define GPIO_ICR1_ICR0_SHIFT                     (0U)
/*! ICR0 - ICR0
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR0(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR0_SHIFT)) & GPIO_ICR1_ICR0_MASK)

#define GPIO_ICR1_ICR1_MASK                      (0xCU)
#define GPIO_ICR1_ICR1_SHIFT                     (2U)
/*! ICR1 - ICR1
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR1(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR1_SHIFT)) & GPIO_ICR1_ICR1_MASK)

#define GPIO_ICR1_ICR2_MASK                      (0x30U)
#define GPIO_ICR1_ICR2_SHIFT                     (4U)
/*! ICR2 - ICR2
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR2(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR2_SHIFT)) & GPIO_ICR1_ICR2_MASK)

#define GPIO_ICR1_ICR3_MASK                      (0xC0U)
#define GPIO_ICR1_ICR3_SHIFT                     (6U)
/*! ICR3 - ICR3
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR3(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR3_SHIFT)) & GPIO_ICR1_ICR3_MASK)

#define GPIO_ICR1_ICR4_MASK                      (0x300U)
#define GPIO_ICR1_ICR4_SHIFT                     (8U)
/*! ICR4 - ICR4
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR4(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR4_SHIFT)) & GPIO_ICR1_ICR4_MASK)

#define GPIO_ICR1_ICR5_MASK                      (0xC00U)
#define GPIO_ICR1_ICR5_SHIFT                     (10U)
/*! ICR5 - ICR5
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR5(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR5_SHIFT)) & GPIO_ICR1_ICR5_MASK)

#define GPIO_ICR1_ICR6_MASK                      (0x3000U)
#define GPIO_ICR1_ICR6_SHIFT                     (12U)
/*! ICR6 - ICR6
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR6(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR6_SHIFT)) & GPIO_ICR1_ICR6_MASK)

#define GPIO_ICR1_ICR7_MASK                      (0xC000U)
#define GPIO_ICR1_ICR7_SHIFT                     (14U)
/*! ICR7 - ICR7
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR7(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR7_SHIFT)) & GPIO_ICR1_ICR7_MASK)

#define GPIO_ICR1_ICR8_MASK                      (0x30000U)
#define GPIO_ICR1_ICR8_SHIFT                     (16U)
/*! ICR8 - ICR8
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR8(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR8_SHIFT)) & GPIO_ICR1_ICR8_MASK)

#define GPIO_ICR1_ICR9_MASK                      (0xC0000U)
#define GPIO_ICR1_ICR9_SHIFT                     (18U)
/*! ICR9 - ICR9
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR9(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR9_SHIFT)) & GPIO_ICR1_ICR9_MASK)

#define GPIO_ICR1_ICR10_MASK                     (0x300000U)
#define GPIO_ICR1_ICR10_SHIFT                    (20U)
/*! ICR10 - ICR10
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR10(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR10_SHIFT)) & GPIO_ICR1_ICR10_MASK)

#define GPIO_ICR1_ICR11_MASK                     (0xC00000U)
#define GPIO_ICR1_ICR11_SHIFT                    (22U)
/*! ICR11 - ICR11
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR11(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR11_SHIFT)) & GPIO_ICR1_ICR11_MASK)

#define GPIO_ICR1_ICR12_MASK                     (0x3000000U)
#define GPIO_ICR1_ICR12_SHIFT                    (24U)
/*! ICR12 - ICR12
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR12(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR12_SHIFT)) & GPIO_ICR1_ICR12_MASK)

#define GPIO_ICR1_ICR13_MASK                     (0xC000000U)
#define GPIO_ICR1_ICR13_SHIFT                    (26U)
/*! ICR13 - ICR13
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR13(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR13_SHIFT)) & GPIO_ICR1_ICR13_MASK)

#define GPIO_ICR1_ICR14_MASK                     (0x30000000U)
#define GPIO_ICR1_ICR14_SHIFT                    (28U)
/*! ICR14 - ICR14
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR14(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR14_SHIFT)) & GPIO_ICR1_ICR14_MASK)

#define GPIO_ICR1_ICR15_MASK                     (0xC0000000U)
#define GPIO_ICR1_ICR15_SHIFT                    (30U)
/*! ICR15 - ICR15
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR1_ICR15(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR15_SHIFT)) & GPIO_ICR1_ICR15_MASK)
/*! @} */

/*! @name ICR2 - GPIO interrupt configuration register2 */
/*! @{ */

#define GPIO_ICR2_ICR16_MASK                     (0x3U)
#define GPIO_ICR2_ICR16_SHIFT                    (0U)
/*! ICR16 - ICR16
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR16(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR16_SHIFT)) & GPIO_ICR2_ICR16_MASK)

#define GPIO_ICR2_ICR17_MASK                     (0xCU)
#define GPIO_ICR2_ICR17_SHIFT                    (2U)
/*! ICR17 - ICR17
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR17(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR17_SHIFT)) & GPIO_ICR2_ICR17_MASK)

#define GPIO_ICR2_ICR18_MASK                     (0x30U)
#define GPIO_ICR2_ICR18_SHIFT                    (4U)
/*! ICR18 - ICR18
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR18(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR18_SHIFT)) & GPIO_ICR2_ICR18_MASK)

#define GPIO_ICR2_ICR19_MASK                     (0xC0U)
#define GPIO_ICR2_ICR19_SHIFT                    (6U)
/*! ICR19 - ICR19
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR19(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR19_SHIFT)) & GPIO_ICR2_ICR19_MASK)

#define GPIO_ICR2_ICR20_MASK                     (0x300U)
#define GPIO_ICR2_ICR20_SHIFT                    (8U)
/*! ICR20 - ICR20
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR20(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR20_SHIFT)) & GPIO_ICR2_ICR20_MASK)

#define GPIO_ICR2_ICR21_MASK                     (0xC00U)
#define GPIO_ICR2_ICR21_SHIFT                    (10U)
/*! ICR21 - ICR21
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR21(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR21_SHIFT)) & GPIO_ICR2_ICR21_MASK)

#define GPIO_ICR2_ICR22_MASK                     (0x3000U)
#define GPIO_ICR2_ICR22_SHIFT                    (12U)
/*! ICR22 - ICR22
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR22(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR22_SHIFT)) & GPIO_ICR2_ICR22_MASK)

#define GPIO_ICR2_ICR23_MASK                     (0xC000U)
#define GPIO_ICR2_ICR23_SHIFT                    (14U)
/*! ICR23 - ICR23
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR23(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR23_SHIFT)) & GPIO_ICR2_ICR23_MASK)

#define GPIO_ICR2_ICR24_MASK                     (0x30000U)
#define GPIO_ICR2_ICR24_SHIFT                    (16U)
/*! ICR24 - ICR24
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR24(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR24_SHIFT)) & GPIO_ICR2_ICR24_MASK)

#define GPIO_ICR2_ICR25_MASK                     (0xC0000U)
#define GPIO_ICR2_ICR25_SHIFT                    (18U)
/*! ICR25 - ICR25
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR25(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR25_SHIFT)) & GPIO_ICR2_ICR25_MASK)

#define GPIO_ICR2_ICR26_MASK                     (0x300000U)
#define GPIO_ICR2_ICR26_SHIFT                    (20U)
/*! ICR26 - ICR26
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR26(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR26_SHIFT)) & GPIO_ICR2_ICR26_MASK)

#define GPIO_ICR2_ICR27_MASK                     (0xC00000U)
#define GPIO_ICR2_ICR27_SHIFT                    (22U)
/*! ICR27 - ICR27
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR27(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR27_SHIFT)) & GPIO_ICR2_ICR27_MASK)

#define GPIO_ICR2_ICR28_MASK                     (0x3000000U)
#define GPIO_ICR2_ICR28_SHIFT                    (24U)
/*! ICR28 - ICR28
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR28(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR28_SHIFT)) & GPIO_ICR2_ICR28_MASK)

#define GPIO_ICR2_ICR29_MASK                     (0xC000000U)
#define GPIO_ICR2_ICR29_SHIFT                    (26U)
/*! ICR29 - ICR29
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR29(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR29_SHIFT)) & GPIO_ICR2_ICR29_MASK)

#define GPIO_ICR2_ICR30_MASK                     (0x30000000U)
#define GPIO_ICR2_ICR30_SHIFT                    (28U)
/*! ICR30 - ICR30
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR30(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR30_SHIFT)) & GPIO_ICR2_ICR30_MASK)

#define GPIO_ICR2_ICR31_MASK                     (0xC0000000U)
#define GPIO_ICR2_ICR31_SHIFT                    (30U)
/*! ICR31 - ICR31
 *  0b00..Interrupt n is low-level sensitive.
 *  0b01..Interrupt n is high-level sensitive.
 *  0b10..Interrupt n is rising-edge sensitive.
 *  0b11..Interrupt n is falling-edge sensitive.
 */
#define GPIO_ICR2_ICR31(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR31_SHIFT)) & GPIO_ICR2_ICR31_MASK)
/*! @} */

/*! @name IMR - GPIO interrupt mask register */
/*! @{ */

#define GPIO_IMR_IMR_MASK                        (0xFFFFFFFFU)
#define GPIO_IMR_IMR_SHIFT                       (0U)
/*! IMR - IMR
 */
#define GPIO_IMR_IMR(x)                          (((uint32_t)(((uint32_t)(x)) << GPIO_IMR_IMR_SHIFT)) & GPIO_IMR_IMR_MASK)
/*! @} */

/*! @name ISR - GPIO interrupt status register */
/*! @{ */

#define GPIO_ISR_ISR_MASK                        (0xFFFFFFFFU)
#define GPIO_ISR_ISR_SHIFT                       (0U)
/*! ISR - ISR
 */
#define GPIO_ISR_ISR(x)                          (((uint32_t)(((uint32_t)(x)) << GPIO_ISR_ISR_SHIFT)) & GPIO_ISR_ISR_MASK)
/*! @} */

/*! @name EDGE_SEL - GPIO edge select register */
/*! @{ */

#define GPIO_EDGE_SEL_GPIO_EDGE_SEL_MASK         (0xFFFFFFFFU)
#define GPIO_EDGE_SEL_GPIO_EDGE_SEL_SHIFT        (0U)
/*! GPIO_EDGE_SEL - GPIO_EDGE_SEL
 */
#define GPIO_EDGE_SEL_GPIO_EDGE_SEL(x)           (((uint32_t)(((uint32_t)(x)) << GPIO_EDGE_SEL_GPIO_EDGE_SEL_SHIFT)) & GPIO_EDGE_SEL_GPIO_EDGE_SEL_MASK)
/*! @} */

/*! @name DR_SET - GPIO data register SET */
/*! @{ */

#define GPIO_DR_SET_DR_SET_MASK                  (0xFFFFFFFFU)
#define GPIO_DR_SET_DR_SET_SHIFT                 (0U)
/*! DR_SET - DR_SET
 */
#define GPIO_DR_SET_DR_SET(x)                    (((uint32_t)(((uint32_t)(x)) << GPIO_DR_SET_DR_SET_SHIFT)) & GPIO_DR_SET_DR_SET_MASK)
/*! @} */

/*! @name DR_CLEAR - GPIO data register CLEAR */
/*! @{ */

#define GPIO_DR_CLEAR_DR_CLEAR_MASK              (0xFFFFFFFFU)
#define GPIO_DR_CLEAR_DR_CLEAR_SHIFT             (0U)
/*! DR_CLEAR - DR_CLEAR
 */
#define GPIO_DR_CLEAR_DR_CLEAR(x)                (((uint32_t)(((uint32_t)(x)) << GPIO_DR_CLEAR_DR_CLEAR_SHIFT)) & GPIO_DR_CLEAR_DR_CLEAR_MASK)
/*! @} */

/*! @name DR_TOGGLE - GPIO data register TOGGLE */
/*! @{ */

#define GPIO_DR_TOGGLE_DR_TOGGLE_MASK            (0xFFFFFFFFU)
#define GPIO_DR_TOGGLE_DR_TOGGLE_SHIFT           (0U)
/*! DR_TOGGLE - DR_TOGGLE
 */
#define GPIO_DR_TOGGLE_DR_TOGGLE(x)              (((uint32_t)(((uint32_t)(x)) << GPIO_DR_TOGGLE_DR_TOGGLE_SHIFT)) & GPIO_DR_TOGGLE_DR_TOGGLE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group GPIO_Register_Masks */


/* GPIO - Peripheral instance base addresses */
/** Peripheral GPIO1 base address */
#define GPIO1_BASE                               (0x401B8000u)
/** Peripheral GPIO1 base pointer */
#define GPIO1                                    ((GPIO_Type *)GPIO1_BASE)
/** Peripheral GPIO2 base address */
#define GPIO2_BASE                               (0x401BC000u)
/** Peripheral GPIO2 base pointer */
#define GPIO2                                    ((GPIO_Type *)GPIO2_BASE)
/** Peripheral GPIO3 base address */
#define GPIO3_BASE                               (0x401C0000u)
/** Peripheral GPIO3 base pointer */
#define GPIO3                                    ((GPIO_Type *)GPIO3_BASE)
/** Peripheral GPIO4 base address */
#define GPIO4_BASE                               (0x401C4000u)
/** Peripheral GPIO4 base pointer */
#define GPIO4                                    ((GPIO_Type *)GPIO4_BASE)
/** Peripheral GPIO5 base address */
#define GPIO5_BASE                               (0x400C0000u)
/** Peripheral GPIO5 base pointer */
#define GPIO5                                    ((GPIO_Type *)GPIO5_BASE)
/** Peripheral GPIO6 base address */
#define GPIO6_BASE                               (0x42000000u)
/** Peripheral GPIO6 base pointer */
#define GPIO6                                    ((GPIO_Type *)GPIO6_BASE)
/** Peripheral GPIO7 base address */
#define GPIO7_BASE                               (0x42004000u)
/** Peripheral GPIO7 base pointer */
#define GPIO7                                    ((GPIO_Type *)GPIO7_BASE)
/** Peripheral GPIO8 base address */
#define GPIO8_BASE                               (0x42008000u)
/** Peripheral GPIO8 base pointer */
#define GPIO8                                    ((GPIO_Type *)GPIO8_BASE)
/** Peripheral GPIO9 base address */
#define GPIO9_BASE                               (0x4200C000u)
/** Peripheral GPIO9 base pointer */
#define GPIO9                                    ((GPIO_Type *)GPIO9_BASE)
/** Array initializer of GPIO peripheral base addresses */
#define GPIO_BASE_ADDRS                          { 0u, GPIO1_BASE, GPIO2_BASE, GPIO3_BASE, GPIO4_BASE, GPIO5_BASE, GPIO6_BASE, GPIO7_BASE, GPIO8_BASE, GPIO9_BASE }
/** Array initializer of GPIO peripheral base pointers */
#define GPIO_BASE_PTRS                           { (GPIO_Type *)0u, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5, GPIO6, GPIO7, GPIO8, GPIO9 }
/** Interrupt vectors for the GPIO peripheral type */
#define GPIO_IRQS                                { NotAvail_IRQn, GPIO1_INT0_IRQn, GPIO1_INT1_IRQn, GPIO1_INT2_IRQn, GPIO1_INT3_IRQn, GPIO1_INT4_IRQn, GPIO1_INT5_IRQn, GPIO1_INT6_IRQn, GPIO1_INT7_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn }
#define GPIO_COMBINED_LOW_IRQS                   { NotAvail_IRQn, GPIO1_Combined_0_15_IRQn, GPIO2_Combined_0_15_IRQn, GPIO3_Combined_0_15_IRQn, GPIO4_Combined_0_15_IRQn, GPIO5_Combined_0_15_IRQn, GPIO6_7_8_9_IRQn, GPIO6_7_8_9_IRQn, GPIO6_7_8_9_IRQn, GPIO6_7_8_9_IRQn }
#define GPIO_COMBINED_HIGH_IRQS                  { NotAvail_IRQn, GPIO1_Combined_16_31_IRQn, GPIO2_Combined_16_31_IRQn, GPIO3_Combined_16_31_IRQn, GPIO4_Combined_16_31_IRQn, GPIO5_Combined_16_31_IRQn, GPIO6_7_8_9_IRQn, GPIO6_7_8_9_IRQn, GPIO6_7_8_9_IRQn, GPIO6_7_8_9_IRQn }

/*!
 * @}
 */ /* end of group GPIO_Peripheral_Access_Layer */



#endif /* APPLICATIONS_NGRMSENSORSOURCE_SOURCE_SPI3DMA_H_ */

