/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2023 Raspberry Pi (Trading) Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef BOARD_PICO_ZERO_CONFIG_H_
#define BOARD_PICO_ZERO_CONFIG_H_

#define PROBE_IO_OEN
#define PROBE_CDC_UART

// PIO config
#define PROBE_SM 0
#define PROBE_PIN_OFFSET 10
#define PROBE_PIN_SWDIOEN (PROBE_PIN_OFFSET + 0) // 10
#define PROBE_PIN_SWCLK (PROBE_PIN_OFFSET + 1) // 11
#define PROBE_PIN_SWDIO (PROBE_PIN_OFFSET + 2) // 12
#define PROBE_PIN_SWDI (PROBE_PIN_OFFSET + 3) // 13
// Target reset config
#if false
#define PROBE_PIN_RESET 1
#endif

// UART config
#define PROBE_UART_TX 4
#define PROBE_UART_RX 5
#define PROBE_UART_INTERFACE uart1
#define PROBE_UART_BAUDRATE 115200

/* LED config - some or all of these can be omitted if not used */
#define PROBE_WS2812_LED
#define SM_WS2812  2
#define WS2812_PIN 16
#define PROBE_WS2812_USB_CONNECTED put_blueLED
#define PROBE_WS2812_DAP_CONNECTED put_greenLED
#define PROBE_WS2812_DAP_RUNNING   put_redLED

#define PROBE_PRODUCT_STRING "Debugprobe on Pico (CMSIS-DAP)"

#endif
