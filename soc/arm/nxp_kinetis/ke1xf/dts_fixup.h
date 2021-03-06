/*
 * Copyright (c) 2019 Vestas Wind Systems A/S
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* SoC level DTS fixup file */
#define DT_RTC_0_NAME	DT_LABEL(DT_INST(0, nxp_kinetis_rtc))

#define DT_ADC_0_NAME	DT_LABEL(DT_NODELABEL(adc0))
#define DT_ADC_1_NAME	DT_LABEL(DT_NODELABEL(adc1))
#define DT_ADC_2_NAME	DT_LABEL(DT_NODELABEL(adc2))
