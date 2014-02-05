
/* Generated data (by glib-mkenums) */

#include <ModemManager.h>
#ifndef __MM_ENUMS_TYPES_H__
#define __MM_ENUMS_TYPES_H__

#include <glib-object.h>

G_BEGIN_DECLS

/* enumerations from "../../include/ModemManager-enums.h" */
GType mm_modem_capability_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_CAPABILITY (mm_modem_capability_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_FLAGS__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_capability_get_string (MMModemCapability val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_capability_build_string_from_mask (MMModemCapability mask);
#endif

GType mm_modem_lock_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_LOCK (mm_modem_lock_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_lock_get_string (MMModemLock val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_lock_build_string_from_mask (MMModemLock mask);
#endif

GType mm_modem_state_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_STATE (mm_modem_state_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_state_get_string (MMModemState val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_state_build_string_from_mask (MMModemState mask);
#endif

GType mm_modem_state_failed_reason_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_STATE_FAILED_REASON (mm_modem_state_failed_reason_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_state_failed_reason_get_string (MMModemStateFailedReason val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_state_failed_reason_build_string_from_mask (MMModemStateFailedReason mask);
#endif

GType mm_modem_power_state_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_POWER_STATE (mm_modem_power_state_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_power_state_get_string (MMModemPowerState val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_power_state_build_string_from_mask (MMModemPowerState mask);
#endif

GType mm_modem_state_change_reason_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_STATE_CHANGE_REASON (mm_modem_state_change_reason_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_state_change_reason_get_string (MMModemStateChangeReason val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_state_change_reason_build_string_from_mask (MMModemStateChangeReason mask);
#endif

GType mm_modem_access_technology_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_ACCESS_TECHNOLOGY (mm_modem_access_technology_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_FLAGS__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_access_technology_get_string (MMModemAccessTechnology val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_access_technology_build_string_from_mask (MMModemAccessTechnology mask);
#endif

GType mm_modem_mode_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_MODE (mm_modem_mode_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_FLAGS__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_mode_get_string (MMModemMode val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_mode_build_string_from_mask (MMModemMode mask);
#endif

GType mm_modem_band_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_BAND (mm_modem_band_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_band_get_string (MMModemBand val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_band_build_string_from_mask (MMModemBand mask);
#endif

GType mm_modem_port_type_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_PORT_TYPE (mm_modem_port_type_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_port_type_get_string (MMModemPortType val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_port_type_build_string_from_mask (MMModemPortType mask);
#endif

GType mm_sms_pdu_type_get_type (void) G_GNUC_CONST;
#define MM_TYPE_SMS_PDU_TYPE (mm_sms_pdu_type_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_sms_pdu_type_get_string (MMSmsPduType val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_sms_pdu_type_build_string_from_mask (MMSmsPduType mask);
#endif

GType mm_sms_state_get_type (void) G_GNUC_CONST;
#define MM_TYPE_SMS_STATE (mm_sms_state_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_sms_state_get_string (MMSmsState val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_sms_state_build_string_from_mask (MMSmsState mask);
#endif

GType mm_sms_delivery_state_get_type (void) G_GNUC_CONST;
#define MM_TYPE_SMS_DELIVERY_STATE (mm_sms_delivery_state_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_sms_delivery_state_get_string (MMSmsDeliveryState val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_sms_delivery_state_build_string_from_mask (MMSmsDeliveryState mask);
#endif

GType mm_sms_storage_get_type (void) G_GNUC_CONST;
#define MM_TYPE_SMS_STORAGE (mm_sms_storage_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_sms_storage_get_string (MMSmsStorage val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_sms_storage_build_string_from_mask (MMSmsStorage mask);
#endif

GType mm_sms_validity_type_get_type (void) G_GNUC_CONST;
#define MM_TYPE_SMS_VALIDITY_TYPE (mm_sms_validity_type_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_sms_validity_type_get_string (MMSmsValidityType val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_sms_validity_type_build_string_from_mask (MMSmsValidityType mask);
#endif

GType mm_sms_cdma_teleservice_id_get_type (void) G_GNUC_CONST;
#define MM_TYPE_SMS_CDMA_TELESERVICE_ID (mm_sms_cdma_teleservice_id_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_sms_cdma_teleservice_id_get_string (MMSmsCdmaTeleserviceId val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_sms_cdma_teleservice_id_build_string_from_mask (MMSmsCdmaTeleserviceId mask);
#endif

GType mm_sms_cdma_service_category_get_type (void) G_GNUC_CONST;
#define MM_TYPE_SMS_CDMA_SERVICE_CATEGORY (mm_sms_cdma_service_category_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_sms_cdma_service_category_get_string (MMSmsCdmaServiceCategory val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_sms_cdma_service_category_build_string_from_mask (MMSmsCdmaServiceCategory mask);
#endif

GType mm_modem_location_source_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_LOCATION_SOURCE (mm_modem_location_source_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_FLAGS__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_location_source_get_string (MMModemLocationSource val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_location_source_build_string_from_mask (MMModemLocationSource mask);
#endif

GType mm_modem_contacts_storage_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_CONTACTS_STORAGE (mm_modem_contacts_storage_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_contacts_storage_get_string (MMModemContactsStorage val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_contacts_storage_build_string_from_mask (MMModemContactsStorage mask);
#endif

GType mm_bearer_ip_method_get_type (void) G_GNUC_CONST;
#define MM_TYPE_BEARER_IP_METHOD (mm_bearer_ip_method_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_bearer_ip_method_get_string (MMBearerIpMethod val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_bearer_ip_method_build_string_from_mask (MMBearerIpMethod mask);
#endif

GType mm_bearer_ip_family_get_type (void) G_GNUC_CONST;
#define MM_TYPE_BEARER_IP_FAMILY (mm_bearer_ip_family_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_FLAGS__

#if defined __MM_IS_ENUM__
const gchar *mm_bearer_ip_family_get_string (MMBearerIpFamily val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_bearer_ip_family_build_string_from_mask (MMBearerIpFamily mask);
#endif

GType mm_bearer_allowed_auth_get_type (void) G_GNUC_CONST;
#define MM_TYPE_BEARER_ALLOWED_AUTH (mm_bearer_allowed_auth_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_FLAGS__

#if defined __MM_IS_ENUM__
const gchar *mm_bearer_allowed_auth_get_string (MMBearerAllowedAuth val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_bearer_allowed_auth_build_string_from_mask (MMBearerAllowedAuth mask);
#endif

GType mm_modem_cdma_registration_state_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_CDMA_REGISTRATION_STATE (mm_modem_cdma_registration_state_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_cdma_registration_state_get_string (MMModemCdmaRegistrationState val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_cdma_registration_state_build_string_from_mask (MMModemCdmaRegistrationState mask);
#endif

GType mm_modem_cdma_activation_state_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_CDMA_ACTIVATION_STATE (mm_modem_cdma_activation_state_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_cdma_activation_state_get_string (MMModemCdmaActivationState val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_cdma_activation_state_build_string_from_mask (MMModemCdmaActivationState mask);
#endif

GType mm_modem_cdma_rm_protocol_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_CDMA_RM_PROTOCOL (mm_modem_cdma_rm_protocol_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_cdma_rm_protocol_get_string (MMModemCdmaRmProtocol val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_cdma_rm_protocol_build_string_from_mask (MMModemCdmaRmProtocol mask);
#endif

GType mm_modem_3gpp_registration_state_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_3GPP_REGISTRATION_STATE (mm_modem_3gpp_registration_state_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_3gpp_registration_state_get_string (MMModem3gppRegistrationState val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_3gpp_registration_state_build_string_from_mask (MMModem3gppRegistrationState mask);
#endif

GType mm_modem_3gpp_facility_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_3GPP_FACILITY (mm_modem_3gpp_facility_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_FLAGS__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_3gpp_facility_get_string (MMModem3gppFacility val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_3gpp_facility_build_string_from_mask (MMModem3gppFacility mask);
#endif

GType mm_modem_3gpp_network_availability_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_3GPP_NETWORK_AVAILABILITY (mm_modem_3gpp_network_availability_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_3gpp_network_availability_get_string (MMModem3gppNetworkAvailability val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_3gpp_network_availability_build_string_from_mask (MMModem3gppNetworkAvailability mask);
#endif

GType mm_modem_3gpp_subscription_state_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_3GPP_SUBSCRIPTION_STATE (mm_modem_3gpp_subscription_state_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_3gpp_subscription_state_get_string (MMModem3gppSubscriptionState val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_3gpp_subscription_state_build_string_from_mask (MMModem3gppSubscriptionState mask);
#endif

GType mm_modem_3gpp_ussd_session_state_get_type (void) G_GNUC_CONST;
#define MM_TYPE_MODEM_3GPP_USSD_SESSION_STATE (mm_modem_3gpp_ussd_session_state_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_modem_3gpp_ussd_session_state_get_string (MMModem3gppUssdSessionState val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_modem_3gpp_ussd_session_state_build_string_from_mask (MMModem3gppUssdSessionState mask);
#endif

GType mm_firmware_image_type_get_type (void) G_GNUC_CONST;
#define MM_TYPE_FIRMWARE_IMAGE_TYPE (mm_firmware_image_type_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_firmware_image_type_get_string (MMFirmwareImageType val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_firmware_image_type_build_string_from_mask (MMFirmwareImageType mask);
#endif

GType mm_oma_feature_get_type (void) G_GNUC_CONST;
#define MM_TYPE_OMA_FEATURE (mm_oma_feature_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_FLAGS__

#if defined __MM_IS_ENUM__
const gchar *mm_oma_feature_get_string (MMOmaFeature val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_oma_feature_build_string_from_mask (MMOmaFeature mask);
#endif

GType mm_oma_session_type_get_type (void) G_GNUC_CONST;
#define MM_TYPE_OMA_SESSION_TYPE (mm_oma_session_type_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_oma_session_type_get_string (MMOmaSessionType val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_oma_session_type_build_string_from_mask (MMOmaSessionType mask);
#endif

GType mm_oma_session_state_get_type (void) G_GNUC_CONST;
#define MM_TYPE_OMA_SESSION_STATE (mm_oma_session_state_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_oma_session_state_get_string (MMOmaSessionState val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_oma_session_state_build_string_from_mask (MMOmaSessionState mask);
#endif

GType mm_oma_session_state_failed_reason_get_type (void) G_GNUC_CONST;
#define MM_TYPE_OMA_SESSION_STATE_FAILED_REASON (mm_oma_session_state_failed_reason_get_type ())

/* Define type-specific symbols */
#undef __MM_IS_ENUM__
#undef __MM_IS_FLAGS__
#define __MM_IS_ENUM__

#if defined __MM_IS_ENUM__
const gchar *mm_oma_session_state_failed_reason_get_string (MMOmaSessionStateFailedReason val);
#endif

#if defined __MM_IS_FLAGS__
gchar *mm_oma_session_state_failed_reason_build_string_from_mask (MMOmaSessionStateFailedReason mask);
#endif

G_END_DECLS

#endif /* __MM_ENUMS_TYPES_H__ */

/* Generated data ends here */

