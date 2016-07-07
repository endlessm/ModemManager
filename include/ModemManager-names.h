
/* Generated Header file do not edit */

/*
 * ModemManager Interface Specification
 * Version 0.6
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2008 - 2009 Novell, Inc.
 * Copyright (C) 2009 - 2012 Red Hat, Inc.
 * Copyright (C) 2011 - 2012 Google, Inc.
 * Copyright (C) 2015 - Riccardo Vangelisti riccardo.vangelisti@sadel.it
 * Copyright (C) 2015 - Marco Bascetta marco.bascetta@sadel.it
 */

#ifndef _MODEM_MANAGER_NAMES_H_
#define _MODEM_MANAGER_NAMES_H_

#define MM_DBUS_PATH    "/org/freedesktop/ModemManager1"
#define MM_DBUS_SERVICE "org.freedesktop.ModemManager1"

/* Prefix for object paths */
#define MM_DBUS_MODEM_PREFIX  MM_DBUS_PATH "/Modem"
#define MM_DBUS_BEARER_PREFIX MM_DBUS_PATH "/Bearer"
#define MM_DBUS_SIM_PREFIX    MM_DBUS_PATH "/SIM"
#define MM_DBUS_SMS_PREFIX    MM_DBUS_PATH "/SMS"
#define MM_DBUS_CALL_PREFIX   MM_DBUS_PATH "/Call"

/* Prefix for DBus errors */
#define MM_DBUS_ERROR_PREFIX "org.freedesktop.ModemManager1.Error"

/**************
 * Interfaces *
 **************/

#define MM_DBUS_INTERFACE "org.freedesktop.ModemManager1"
#define MM_DBUS_INTERFACE_SIM "org.freedesktop.ModemManager1.Sim"
#define MM_DBUS_INTERFACE_BEARER "org.freedesktop.ModemManager1.Bearer"
#define MM_DBUS_INTERFACE_SMS "org.freedesktop.ModemManager1.Sms"
#define MM_DBUS_INTERFACE_CALL "org.freedesktop.ModemManager1.Call"
#define MM_DBUS_INTERFACE_MODEM "org.freedesktop.ModemManager1.Modem"
#define MM_DBUS_INTERFACE_MODEM_VOICE "org.freedesktop.ModemManager1.Modem.Voice"
#define MM_DBUS_INTERFACE_MODEM_MODEM3GPP "org.freedesktop.ModemManager1.Modem.Modem3gpp"
#define MM_DBUS_INTERFACE_MODEM_MODEM3GPP_USSD "org.freedesktop.ModemManager1.Modem.Modem3gpp.Ussd"
#define MM_DBUS_INTERFACE_MODEM_MODEMCDMA "org.freedesktop.ModemManager1.Modem.ModemCdma"
#define MM_DBUS_INTERFACE_MODEM_MESSAGING "org.freedesktop.ModemManager1.Modem.Messaging"
#define MM_DBUS_INTERFACE_MODEM_LOCATION "org.freedesktop.ModemManager1.Modem.Location"
#define MM_DBUS_INTERFACE_MODEM_TIME "org.freedesktop.ModemManager1.Modem.Time"
#define MM_DBUS_INTERFACE_MODEM_FIRMWARE "org.freedesktop.ModemManager1.Modem.Firmware"
#define MM_DBUS_INTERFACE_MODEM_SIGNAL "org.freedesktop.ModemManager1.Modem.Signal"
#define MM_DBUS_INTERFACE_MODEM_OMA "org.freedesktop.ModemManager1.Modem.Oma"

/******************************
 * Methods/Signals/Properties *
 ******************************/

/*
 * Interface 'org.freedesktop.ModemManager1'
 */
 
#define MM_MANAGER_METHOD_SCANDEVICES "ScanDevices"
#define MM_MANAGER_METHOD_SETLOGGING "SetLogging"
/*
 * Interface 'org.freedesktop.ModemManager1.Sim'
 */
 
#define MM_SIM_METHOD_SENDPIN "SendPin"
#define MM_SIM_METHOD_SENDPUK "SendPuk"
#define MM_SIM_METHOD_ENABLEPIN "EnablePin"
#define MM_SIM_METHOD_CHANGEPIN "ChangePin"
#define MM_SIM_PROPERTY_SIMIDENTIFIER "SimIdentifier"
#define MM_SIM_PROPERTY_IMSI "Imsi"
#define MM_SIM_PROPERTY_OPERATORIDENTIFIER "OperatorIdentifier"
#define MM_SIM_PROPERTY_OPERATORNAME "OperatorName"
/*
 * Interface 'org.freedesktop.ModemManager1.Bearer'
 */
 
#define MM_BEARER_METHOD_CONNECT "Connect"
#define MM_BEARER_METHOD_DISCONNECT "Disconnect"
#define MM_BEARER_PROPERTY_INTERFACE "Interface"
#define MM_BEARER_PROPERTY_CONNECTED "Connected"
#define MM_BEARER_PROPERTY_SUSPENDED "Suspended"
#define MM_BEARER_PROPERTY_IP4CONFIG "Ip4Config"
#define MM_BEARER_PROPERTY_IP6CONFIG "Ip6Config"
#define MM_BEARER_PROPERTY_STATS "Stats"
#define MM_BEARER_PROPERTY_IPTIMEOUT "IpTimeout"
#define MM_BEARER_PROPERTY_PROPERTIES "Properties"
/*
 * Interface 'org.freedesktop.ModemManager1.Sms'
 */
 
#define MM_SMS_METHOD_SEND "Send"
#define MM_SMS_METHOD_STORE "Store"
#define MM_SMS_PROPERTY_STATE "State"
#define MM_SMS_PROPERTY_PDUTYPE "PduType"
#define MM_SMS_PROPERTY_NUMBER "Number"
#define MM_SMS_PROPERTY_TEXT "Text"
#define MM_SMS_PROPERTY_DATA "Data"
#define MM_SMS_PROPERTY_SMSC "SMSC"
#define MM_SMS_PROPERTY_VALIDITY "Validity"
#define MM_SMS_PROPERTY_CLASS "Class"
#define MM_SMS_PROPERTY_TELESERVICEID "TeleserviceId"
#define MM_SMS_PROPERTY_SERVICECATEGORY "ServiceCategory"
#define MM_SMS_PROPERTY_DELIVERYREPORTREQUEST "DeliveryReportRequest"
#define MM_SMS_PROPERTY_MESSAGEREFERENCE "MessageReference"
#define MM_SMS_PROPERTY_TIMESTAMP "Timestamp"
#define MM_SMS_PROPERTY_DISCHARGETIMESTAMP "DischargeTimestamp"
#define MM_SMS_PROPERTY_DELIVERYSTATE "DeliveryState"
#define MM_SMS_PROPERTY_STORAGE "Storage"
/*
 * Interface 'org.freedesktop.ModemManager1.Call'
 */
 
#define MM_CALL_METHOD_START "Start"
#define MM_CALL_METHOD_ACCEPT "Accept"
#define MM_CALL_METHOD_HANGUP "Hangup"
#define MM_CALL_METHOD_SENDDTMF "SendDtmf"
#define MM_CALL_SIGNAL_DTMFRECEIVED "DtmfReceived"
#define MM_CALL_SIGNAL_STATECHANGED "StateChanged"
#define MM_CALL_PROPERTY_STATE "State"
#define MM_CALL_PROPERTY_STATEREASON "StateReason"
#define MM_CALL_PROPERTY_DIRECTION "Direction"
#define MM_CALL_PROPERTY_NUMBER "Number"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem'
 */
 
#define MM_MODEM_METHOD_ENABLE "Enable"
#define MM_MODEM_METHOD_LISTBEARERS "ListBearers"
#define MM_MODEM_METHOD_CREATEBEARER "CreateBearer"
#define MM_MODEM_METHOD_DELETEBEARER "DeleteBearer"
#define MM_MODEM_METHOD_RESET "Reset"
#define MM_MODEM_METHOD_FACTORYRESET "FactoryReset"
#define MM_MODEM_METHOD_SETPOWERSTATE "SetPowerState"
#define MM_MODEM_METHOD_SETCURRENTCAPABILITIES "SetCurrentCapabilities"
#define MM_MODEM_METHOD_SETCURRENTMODES "SetCurrentModes"
#define MM_MODEM_METHOD_SETCURRENTBANDS "SetCurrentBands"
#define MM_MODEM_METHOD_COMMAND "Command"
#define MM_MODEM_SIGNAL_STATECHANGED "StateChanged"
#define MM_MODEM_PROPERTY_SIM "Sim"
#define MM_MODEM_PROPERTY_BEARERS "Bearers"
#define MM_MODEM_PROPERTY_SUPPORTEDCAPABILITIES "SupportedCapabilities"
#define MM_MODEM_PROPERTY_CURRENTCAPABILITIES "CurrentCapabilities"
#define MM_MODEM_PROPERTY_MAXBEARERS "MaxBearers"
#define MM_MODEM_PROPERTY_MAXACTIVEBEARERS "MaxActiveBearers"
#define MM_MODEM_PROPERTY_MANUFACTURER "Manufacturer"
#define MM_MODEM_PROPERTY_MODEL "Model"
#define MM_MODEM_PROPERTY_REVISION "Revision"
#define MM_MODEM_PROPERTY_DEVICEIDENTIFIER "DeviceIdentifier"
#define MM_MODEM_PROPERTY_DEVICE "Device"
#define MM_MODEM_PROPERTY_DRIVERS "Drivers"
#define MM_MODEM_PROPERTY_PLUGIN "Plugin"
#define MM_MODEM_PROPERTY_PRIMARYPORT "PrimaryPort"
#define MM_MODEM_PROPERTY_PORTS "Ports"
#define MM_MODEM_PROPERTY_EQUIPMENTIDENTIFIER "EquipmentIdentifier"
#define MM_MODEM_PROPERTY_UNLOCKREQUIRED "UnlockRequired"
#define MM_MODEM_PROPERTY_UNLOCKRETRIES "UnlockRetries"
#define MM_MODEM_PROPERTY_STATE "State"
#define MM_MODEM_PROPERTY_STATEFAILEDREASON "StateFailedReason"
#define MM_MODEM_PROPERTY_ACCESSTECHNOLOGIES "AccessTechnologies"
#define MM_MODEM_PROPERTY_SIGNALQUALITY "SignalQuality"
#define MM_MODEM_PROPERTY_OWNNUMBERS "OwnNumbers"
#define MM_MODEM_PROPERTY_POWERSTATE "PowerState"
#define MM_MODEM_PROPERTY_SUPPORTEDMODES "SupportedModes"
#define MM_MODEM_PROPERTY_CURRENTMODES "CurrentModes"
#define MM_MODEM_PROPERTY_SUPPORTEDBANDS "SupportedBands"
#define MM_MODEM_PROPERTY_CURRENTBANDS "CurrentBands"
#define MM_MODEM_PROPERTY_SUPPORTEDIPFAMILIES "SupportedIpFamilies"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem.Voice'
 */
 
#define MM_MODEM_VOICE_METHOD_LISTCALLS "ListCalls"
#define MM_MODEM_VOICE_METHOD_DELETECALL "DeleteCall"
#define MM_MODEM_VOICE_METHOD_CREATECALL "CreateCall"
#define MM_MODEM_VOICE_SIGNAL_CALLADDED "CallAdded"
#define MM_MODEM_VOICE_SIGNAL_CALLDELETED "CallDeleted"
#define MM_MODEM_VOICE_PROPERTY_CALLS "Calls"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem.Modem3gpp'
 */
 
#define MM_MODEM_MODEM3GPP_METHOD_REGISTER "Register"
#define MM_MODEM_MODEM3GPP_METHOD_SCAN "Scan"
#define MM_MODEM_MODEM3GPP_PROPERTY_IMEI "Imei"
#define MM_MODEM_MODEM3GPP_PROPERTY_REGISTRATIONSTATE "RegistrationState"
#define MM_MODEM_MODEM3GPP_PROPERTY_OPERATORCODE "OperatorCode"
#define MM_MODEM_MODEM3GPP_PROPERTY_OPERATORNAME "OperatorName"
#define MM_MODEM_MODEM3GPP_PROPERTY_ENABLEDFACILITYLOCKS "EnabledFacilityLocks"
#define MM_MODEM_MODEM3GPP_PROPERTY_SUBSCRIPTIONSTATE "SubscriptionState"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem.Modem3gpp.Ussd'
 */
 
#define MM_MODEM_MODEM3GPP_USSD_METHOD_INITIATE "Initiate"
#define MM_MODEM_MODEM3GPP_USSD_METHOD_RESPOND "Respond"
#define MM_MODEM_MODEM3GPP_USSD_METHOD_CANCEL "Cancel"
#define MM_MODEM_MODEM3GPP_USSD_PROPERTY_STATE "State"
#define MM_MODEM_MODEM3GPP_USSD_PROPERTY_NETWORKNOTIFICATION "NetworkNotification"
#define MM_MODEM_MODEM3GPP_USSD_PROPERTY_NETWORKREQUEST "NetworkRequest"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem.ModemCdma'
 */
 
#define MM_MODEM_MODEMCDMA_METHOD_ACTIVATE "Activate"
#define MM_MODEM_MODEMCDMA_METHOD_ACTIVATEMANUAL "ActivateManual"
#define MM_MODEM_MODEMCDMA_SIGNAL_ACTIVATIONSTATECHANGED "ActivationStateChanged"
#define MM_MODEM_MODEMCDMA_PROPERTY_ACTIVATIONSTATE "ActivationState"
#define MM_MODEM_MODEMCDMA_PROPERTY_MEID "Meid"
#define MM_MODEM_MODEMCDMA_PROPERTY_ESN "Esn"
#define MM_MODEM_MODEMCDMA_PROPERTY_SID "Sid"
#define MM_MODEM_MODEMCDMA_PROPERTY_NID "Nid"
#define MM_MODEM_MODEMCDMA_PROPERTY_CDMA1XREGISTRATIONSTATE "Cdma1xRegistrationState"
#define MM_MODEM_MODEMCDMA_PROPERTY_EVDOREGISTRATIONSTATE "EvdoRegistrationState"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem.Messaging'
 */
 
#define MM_MODEM_MESSAGING_METHOD_LIST "List"
#define MM_MODEM_MESSAGING_METHOD_DELETE "Delete"
#define MM_MODEM_MESSAGING_METHOD_CREATE "Create"
#define MM_MODEM_MESSAGING_SIGNAL_ADDED "Added"
#define MM_MODEM_MESSAGING_SIGNAL_DELETED "Deleted"
#define MM_MODEM_MESSAGING_PROPERTY_MESSAGES "Messages"
#define MM_MODEM_MESSAGING_PROPERTY_SUPPORTEDSTORAGES "SupportedStorages"
#define MM_MODEM_MESSAGING_PROPERTY_DEFAULTSTORAGE "DefaultStorage"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem.Location'
 */
 
#define MM_MODEM_LOCATION_METHOD_SETUP "Setup"
#define MM_MODEM_LOCATION_METHOD_GETLOCATION "GetLocation"
#define MM_MODEM_LOCATION_METHOD_SETSUPLSERVER "SetSuplServer"
#define MM_MODEM_LOCATION_METHOD_SETGPSREFRESHRATE "SetGpsRefreshRate"
#define MM_MODEM_LOCATION_PROPERTY_CAPABILITIES "Capabilities"
#define MM_MODEM_LOCATION_PROPERTY_ENABLED "Enabled"
#define MM_MODEM_LOCATION_PROPERTY_SIGNALSLOCATION "SignalsLocation"
#define MM_MODEM_LOCATION_PROPERTY_LOCATION "Location"
#define MM_MODEM_LOCATION_PROPERTY_SUPLSERVER "SuplServer"
#define MM_MODEM_LOCATION_PROPERTY_GPSREFRESHRATE "GpsRefreshRate"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem.Time'
 */
 
#define MM_MODEM_TIME_METHOD_GETNETWORKTIME "GetNetworkTime"
#define MM_MODEM_TIME_SIGNAL_NETWORKTIMECHANGED "NetworkTimeChanged"
#define MM_MODEM_TIME_PROPERTY_NETWORKTIMEZONE "NetworkTimezone"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem.Firmware'
 */
 
#define MM_MODEM_FIRMWARE_METHOD_LIST "List"
#define MM_MODEM_FIRMWARE_METHOD_SELECT "Select"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem.Signal'
 */
 
#define MM_MODEM_SIGNAL_METHOD_SETUP "Setup"
#define MM_MODEM_SIGNAL_PROPERTY_RATE "Rate"
#define MM_MODEM_SIGNAL_PROPERTY_CDMA "Cdma"
#define MM_MODEM_SIGNAL_PROPERTY_EVDO "Evdo"
#define MM_MODEM_SIGNAL_PROPERTY_GSM "Gsm"
#define MM_MODEM_SIGNAL_PROPERTY_UMTS "Umts"
#define MM_MODEM_SIGNAL_PROPERTY_LTE "Lte"
/*
 * Interface 'org.freedesktop.ModemManager1.Modem.Oma'
 */
 
#define MM_MODEM_OMA_METHOD_SETUP "Setup"
#define MM_MODEM_OMA_METHOD_STARTCLIENTINITIATEDSESSION "StartClientInitiatedSession"
#define MM_MODEM_OMA_METHOD_ACCEPTNETWORKINITIATEDSESSION "AcceptNetworkInitiatedSession"
#define MM_MODEM_OMA_METHOD_CANCELSESSION "CancelSession"
#define MM_MODEM_OMA_SIGNAL_SESSIONSTATECHANGED "SessionStateChanged"
#define MM_MODEM_OMA_PROPERTY_FEATURES "Features"
#define MM_MODEM_OMA_PROPERTY_PENDINGNETWORKINITIATEDSESSIONS "PendingNetworkInitiatedSessions"
#define MM_MODEM_OMA_PROPERTY_SESSIONTYPE "SessionType"
#define MM_MODEM_OMA_PROPERTY_SESSIONSTATE "SessionState"

#endif /*  _MODEM_MANAGER_NAMES_H_ */


