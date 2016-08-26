#ifndef KVM__PVL_VIRTIO_H
#define KVM__PVL_VIRTIO_H

#include <linux/virtio_pci.h>
#include "kvm/kvm.h"
//struct kvm;

int virtio_pvl__init(struct kvm *kvm);
int virtio_pvl__exit(struct kvm *kvm);

#endif /* KVM__BLN_VIRTIO_H */
