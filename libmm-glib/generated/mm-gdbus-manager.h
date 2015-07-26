/*
 * Generated by gdbus-codegen 2.44.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __MM_GDBUS_MANAGER_H__
#define __MM_GDBUS_MANAGER_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.ModemManager1 */

#define MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1 (mm_gdbus_org_freedesktop_modem_manager1_get_type ())
#define MM_GDBUS_ORG_FREEDESKTOP_MODEM_MANAGER1(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1, MmGdbusOrgFreedesktopModemManager1))
#define MM_GDBUS_IS_ORG_FREEDESKTOP_MODEM_MANAGER1(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1))
#define MM_GDBUS_ORG_FREEDESKTOP_MODEM_MANAGER1_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1, MmGdbusOrgFreedesktopModemManager1Iface))

struct _MmGdbusOrgFreedesktopModemManager1;
typedef struct _MmGdbusOrgFreedesktopModemManager1 MmGdbusOrgFreedesktopModemManager1;
typedef struct _MmGdbusOrgFreedesktopModemManager1Iface MmGdbusOrgFreedesktopModemManager1Iface;

struct _MmGdbusOrgFreedesktopModemManager1Iface
{
  GTypeInterface parent_iface;

  gboolean (*handle_scan_devices) (
    MmGdbusOrgFreedesktopModemManager1 *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_logging) (
    MmGdbusOrgFreedesktopModemManager1 *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_level);

};

GType mm_gdbus_org_freedesktop_modem_manager1_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *mm_gdbus_org_freedesktop_modem_manager1_interface_info (void);
guint mm_gdbus_org_freedesktop_modem_manager1_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void mm_gdbus_org_freedesktop_modem_manager1_complete_scan_devices (
    MmGdbusOrgFreedesktopModemManager1 *object,
    GDBusMethodInvocation *invocation);

void mm_gdbus_org_freedesktop_modem_manager1_complete_set_logging (
    MmGdbusOrgFreedesktopModemManager1 *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void mm_gdbus_org_freedesktop_modem_manager1_call_scan_devices (
    MmGdbusOrgFreedesktopModemManager1 *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean mm_gdbus_org_freedesktop_modem_manager1_call_scan_devices_finish (
    MmGdbusOrgFreedesktopModemManager1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean mm_gdbus_org_freedesktop_modem_manager1_call_scan_devices_sync (
    MmGdbusOrgFreedesktopModemManager1 *proxy,
    GCancellable *cancellable,
    GError **error);

void mm_gdbus_org_freedesktop_modem_manager1_call_set_logging (
    MmGdbusOrgFreedesktopModemManager1 *proxy,
    const gchar *arg_level,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean mm_gdbus_org_freedesktop_modem_manager1_call_set_logging_finish (
    MmGdbusOrgFreedesktopModemManager1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean mm_gdbus_org_freedesktop_modem_manager1_call_set_logging_sync (
    MmGdbusOrgFreedesktopModemManager1 *proxy,
    const gchar *arg_level,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY (mm_gdbus_org_freedesktop_modem_manager1_proxy_get_type ())
#define MM_GDBUS_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY, MmGdbusOrgFreedesktopModemManager1Proxy))
#define MM_GDBUS_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY, MmGdbusOrgFreedesktopModemManager1ProxyClass))
#define MM_GDBUS_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY, MmGdbusOrgFreedesktopModemManager1ProxyClass))
#define MM_GDBUS_IS_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY))
#define MM_GDBUS_IS_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_PROXY))

typedef struct _MmGdbusOrgFreedesktopModemManager1Proxy MmGdbusOrgFreedesktopModemManager1Proxy;
typedef struct _MmGdbusOrgFreedesktopModemManager1ProxyClass MmGdbusOrgFreedesktopModemManager1ProxyClass;
typedef struct _MmGdbusOrgFreedesktopModemManager1ProxyPrivate MmGdbusOrgFreedesktopModemManager1ProxyPrivate;

struct _MmGdbusOrgFreedesktopModemManager1Proxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  MmGdbusOrgFreedesktopModemManager1ProxyPrivate *priv;
};

struct _MmGdbusOrgFreedesktopModemManager1ProxyClass
{
  GDBusProxyClass parent_class;
};

GType mm_gdbus_org_freedesktop_modem_manager1_proxy_get_type (void) G_GNUC_CONST;

void mm_gdbus_org_freedesktop_modem_manager1_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
MmGdbusOrgFreedesktopModemManager1 *mm_gdbus_org_freedesktop_modem_manager1_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
MmGdbusOrgFreedesktopModemManager1 *mm_gdbus_org_freedesktop_modem_manager1_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void mm_gdbus_org_freedesktop_modem_manager1_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
MmGdbusOrgFreedesktopModemManager1 *mm_gdbus_org_freedesktop_modem_manager1_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
MmGdbusOrgFreedesktopModemManager1 *mm_gdbus_org_freedesktop_modem_manager1_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON (mm_gdbus_org_freedesktop_modem_manager1_skeleton_get_type ())
#define MM_GDBUS_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON, MmGdbusOrgFreedesktopModemManager1Skeleton))
#define MM_GDBUS_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON, MmGdbusOrgFreedesktopModemManager1SkeletonClass))
#define MM_GDBUS_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON, MmGdbusOrgFreedesktopModemManager1SkeletonClass))
#define MM_GDBUS_IS_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON))
#define MM_GDBUS_IS_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), MM_GDBUS_TYPE_ORG_FREEDESKTOP_MODEM_MANAGER1_SKELETON))

typedef struct _MmGdbusOrgFreedesktopModemManager1Skeleton MmGdbusOrgFreedesktopModemManager1Skeleton;
typedef struct _MmGdbusOrgFreedesktopModemManager1SkeletonClass MmGdbusOrgFreedesktopModemManager1SkeletonClass;
typedef struct _MmGdbusOrgFreedesktopModemManager1SkeletonPrivate MmGdbusOrgFreedesktopModemManager1SkeletonPrivate;

struct _MmGdbusOrgFreedesktopModemManager1Skeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  MmGdbusOrgFreedesktopModemManager1SkeletonPrivate *priv;
};

struct _MmGdbusOrgFreedesktopModemManager1SkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType mm_gdbus_org_freedesktop_modem_manager1_skeleton_get_type (void) G_GNUC_CONST;

MmGdbusOrgFreedesktopModemManager1 *mm_gdbus_org_freedesktop_modem_manager1_skeleton_new (void);


G_END_DECLS

#endif /* __MM_GDBUS_MANAGER_H__ */
