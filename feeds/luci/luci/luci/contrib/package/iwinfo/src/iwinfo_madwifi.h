/*
 * iwinfo - Wireless Information Library - Madwifi Headers
 *
 *   Copyright (C) 2009 Jo-Philipp Wich <xm@subsignal.org>
 *
 * The iwinfo library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * The iwinfo library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with the iwinfo library. If not, see http://www.gnu.org/licenses/.
 */

#ifndef __IWINFO_MADWIFI_H_
#define __IWINFO_MADWIFI_H_

#include <fcntl.h>

#include "iwinfo.h"
#include "iwinfo_utils.h"
#include "include/madwifi.h"

int madwifi_probe(const char *ifname);
int madwifi_get_mode(const char *ifname, char *buf);
int madwifi_get_ssid(const char *ifname, char *buf);
int madwifi_get_bssid(const char *ifname, char *buf);
int madwifi_get_country(const char *ifname, char *buf);
int madwifi_get_channel(const char *ifname, int *buf);
int madwifi_get_frequency(const char *ifname, int *buf);
int madwifi_get_txpower(const char *ifname, int *buf);
int madwifi_get_bitrate(const char *ifname, int *buf);
int madwifi_get_signal(const char *ifname, int *buf);
int madwifi_get_noise(const char *ifname, int *buf);
int madwifi_get_quality(const char *ifname, int *buf);
int madwifi_get_quality_max(const char *ifname, int *buf);
int madwifi_get_encryption(const char *ifname, char *buf);
int madwifi_get_assoclist(const char *ifname, char *buf, int *len);
int madwifi_get_txpwrlist(const char *ifname, char *buf, int *len);
int madwifi_get_scanlist(const char *ifname, char *buf, int *len);
int madwifi_get_freqlist(const char *ifname, char *buf, int *len);
int madwifi_get_countrylist(const char *ifname, char *buf, int *len);
int madwifi_get_hwmodelist(const char *ifname, int *buf);
int madwifi_get_mbssid_support(const char *ifname, int *buf);
void madwifi_close(void);

#endif
