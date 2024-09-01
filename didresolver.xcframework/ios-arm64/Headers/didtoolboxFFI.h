// This file was autogenerated by some hot garbage in the `uniffi` crate.
// Trust me, you don't want to mess with it!

#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// The following structs are used to implement the lowest level
// of the FFI, and thus useful to multiple uniffied crates.
// We ensure they are declared exactly once, with a header guard, UNIFFI_SHARED_H.
#ifdef UNIFFI_SHARED_H
    // We also try to prevent mixing versions of shared uniffi header structs.
    // If you add anything to the #else block, you must increment the version suffix in UNIFFI_SHARED_HEADER_V4
    #ifndef UNIFFI_SHARED_HEADER_V4
        #error Combining helper code from multiple versions of uniffi is not supported
    #endif // ndef UNIFFI_SHARED_HEADER_V4
#else
#define UNIFFI_SHARED_H
#define UNIFFI_SHARED_HEADER_V4
// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️

typedef struct RustBuffer
{
    int32_t capacity;
    int32_t len;
    uint8_t *_Nullable data;
} RustBuffer;

typedef int32_t (*ForeignCallback)(uint64_t, int32_t, const uint8_t *_Nonnull, int32_t, RustBuffer *_Nonnull);

typedef struct ForeignBytes
{
    int32_t len;
    const uint8_t *_Nullable data;
} ForeignBytes;

// Error definitions
typedef struct RustCallStatus {
    int8_t code;
    RustBuffer errorBuf;
} RustCallStatus;

// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️
#endif // def UNIFFI_SHARED_H

// Continuation callback for UniFFI Futures
typedef void (*UniFfiRustFutureContinuation)(void * _Nonnull, int8_t);

// Scaffolding functions
void*_Nonnull uniffi_didtoolbox_fn_clone_diddoc(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_didtoolbox_fn_free_diddoc(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_diddoc_from_json(RustBuffer json_content, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_diddoc_get_assertion_method(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_diddoc_get_authentication(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_diddoc_get_capability_delegation(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_diddoc_get_capability_invocation(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_diddoc_get_context(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_diddoc_get_controller(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_didtoolbox_fn_method_diddoc_get_deactivated(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_diddoc_get_id(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_diddoc_get_verification_method(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_clone_diddocumentstate(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_didtoolbox_fn_free_diddocumentstate(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_diddocumentstate_from(RustBuffer did_log, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_method_diddocumentstate_validate(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_clone_ed25519keypair(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_didtoolbox_fn_free_ed25519keypair(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_ed25519keypair_from(RustBuffer signing_key_multibase, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_ed25519keypair_generate(RustCallStatus *_Nonnull out_status
    
);
void*_Nonnull uniffi_didtoolbox_fn_method_ed25519keypair_get_signing_key(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_method_ed25519keypair_get_verifying_key(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_method_ed25519keypair_sign(void*_Nonnull ptr, RustBuffer message, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_clone_ed25519signature(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_didtoolbox_fn_free_ed25519signature(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_ed25519signature_from_multibase(RustBuffer multibase, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_ed25519signature_to_multibase(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_clone_ed25519signingkey(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_didtoolbox_fn_free_ed25519signingkey(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_ed25519signingkey_from_multibase(RustBuffer multibase, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_ed25519signingkey_to_multibase(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_clone_ed25519verifyingkey(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_didtoolbox_fn_free_ed25519verifyingkey(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_ed25519verifyingkey_from_multibase(RustBuffer multibase, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_ed25519verifyingkey_to_multibase(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_clone_trustdidweb(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_didtoolbox_fn_free_trustdidweb(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_trustdidweb_create(RustBuffer url, void*_Nonnull key_pair, RustBuffer allow_http, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_trustdidweb_deactivate(RustBuffer did_tdw, RustBuffer did_log, void*_Nonnull key_pair, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_trustdidweb_read(RustBuffer did_tdw, RustBuffer allow_http, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_trustdidweb_update(RustBuffer did_tdw, RustBuffer did_log, RustBuffer did_doc, void*_Nonnull key_pair, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_trustdidweb_get_did(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_trustdidweb_get_did_doc(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_trustdidweb_get_did_log(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_clone_trustdidwebprocessor(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_didtoolbox_fn_free_trustdidwebprocessor(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_trustdidwebprocessor_new(RustCallStatus *_Nonnull out_status
    
);
void*_Nonnull uniffi_didtoolbox_fn_constructor_trustdidwebprocessor_new_with_api_key(RustBuffer api_key, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_trustdidwebprocessor_create(void*_Nonnull ptr, RustBuffer url, void*_Nonnull key_pair, RustBuffer allow_http, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_trustdidwebprocessor_deactivate(void*_Nonnull ptr, RustBuffer did_tdw, void*_Nonnull key_pair, RustBuffer allow_http, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_trustdidwebprocessor_read(void*_Nonnull ptr, RustBuffer did_tdw, RustBuffer allow_http, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_didtoolbox_fn_method_trustdidwebprocessor_update(void*_Nonnull ptr, RustBuffer did_tdw, RustBuffer did_doc, void*_Nonnull key_pair, RustBuffer allow_http, RustCallStatus *_Nonnull out_status
);
RustBuffer ffi_didtoolbox_rustbuffer_alloc(int32_t size, RustCallStatus *_Nonnull out_status
);
RustBuffer ffi_didtoolbox_rustbuffer_from_bytes(ForeignBytes bytes, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rustbuffer_free(RustBuffer buf, RustCallStatus *_Nonnull out_status
);
RustBuffer ffi_didtoolbox_rustbuffer_reserve(RustBuffer buf, int32_t additional, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_u8(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_u8(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_u8(void* _Nonnull handle
);
uint8_t ffi_didtoolbox_rust_future_complete_u8(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_i8(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_i8(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_i8(void* _Nonnull handle
);
int8_t ffi_didtoolbox_rust_future_complete_i8(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_u16(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_u16(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_u16(void* _Nonnull handle
);
uint16_t ffi_didtoolbox_rust_future_complete_u16(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_i16(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_i16(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_i16(void* _Nonnull handle
);
int16_t ffi_didtoolbox_rust_future_complete_i16(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_u32(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_u32(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_u32(void* _Nonnull handle
);
uint32_t ffi_didtoolbox_rust_future_complete_u32(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_i32(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_i32(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_i32(void* _Nonnull handle
);
int32_t ffi_didtoolbox_rust_future_complete_i32(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_u64(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_u64(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_u64(void* _Nonnull handle
);
uint64_t ffi_didtoolbox_rust_future_complete_u64(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_i64(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_i64(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_i64(void* _Nonnull handle
);
int64_t ffi_didtoolbox_rust_future_complete_i64(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_f32(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_f32(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_f32(void* _Nonnull handle
);
float ffi_didtoolbox_rust_future_complete_f32(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_f64(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_f64(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_f64(void* _Nonnull handle
);
double ffi_didtoolbox_rust_future_complete_f64(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_pointer(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_pointer(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_pointer(void* _Nonnull handle
);
void*_Nonnull ffi_didtoolbox_rust_future_complete_pointer(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_rust_buffer(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_rust_buffer(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_rust_buffer(void* _Nonnull handle
);
RustBuffer ffi_didtoolbox_rust_future_complete_rust_buffer(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_didtoolbox_rust_future_poll_void(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_didtoolbox_rust_future_cancel_void(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_free_void(void* _Nonnull handle
);
void ffi_didtoolbox_rust_future_complete_void(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
uint16_t uniffi_didtoolbox_checksum_method_diddoc_get_assertion_method(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_diddoc_get_authentication(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_diddoc_get_capability_delegation(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_diddoc_get_capability_invocation(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_diddoc_get_context(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_diddoc_get_controller(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_diddoc_get_deactivated(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_diddoc_get_id(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_diddoc_get_verification_method(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_diddocumentstate_validate(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_ed25519keypair_get_signing_key(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_ed25519keypair_get_verifying_key(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_ed25519keypair_sign(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_ed25519signature_to_multibase(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_ed25519signingkey_to_multibase(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_ed25519verifyingkey_to_multibase(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_trustdidweb_get_did(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_trustdidweb_get_did_doc(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_trustdidweb_get_did_log(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_trustdidwebprocessor_create(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_trustdidwebprocessor_deactivate(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_trustdidwebprocessor_read(void
    
);
uint16_t uniffi_didtoolbox_checksum_method_trustdidwebprocessor_update(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_diddoc_from_json(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_diddocumentstate_from(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_ed25519keypair_from(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_ed25519keypair_generate(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_ed25519signature_from_multibase(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_ed25519signingkey_from_multibase(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_ed25519verifyingkey_from_multibase(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_trustdidweb_create(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_trustdidweb_deactivate(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_trustdidweb_read(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_trustdidweb_update(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_trustdidwebprocessor_new(void
    
);
uint16_t uniffi_didtoolbox_checksum_constructor_trustdidwebprocessor_new_with_api_key(void
    
);
uint32_t ffi_didtoolbox_uniffi_contract_version(void
    
);

