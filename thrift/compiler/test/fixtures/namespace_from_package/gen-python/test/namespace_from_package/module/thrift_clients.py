#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


import typing as _typing

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
import folly.iobuf as _fbthrift_iobuf
from thrift.python.client import (
    AsyncClient as _fbthrift_python_AsyncClient,
    SyncClient as _fbthrift_python_SyncClient,
    Client as _fbthrift_python_Client,
)
from thrift.python.client.omni_client import InteractionMethodPosition as _fbthrift_InteractionMethodPosition, FunctionQualifier as _fbthrift_FunctionQualifier
from thrift.python.common import RpcOptions
import thrift.python.exceptions as _fbthrift_python_exceptions
import thrift.python.types as _fbthrift_python_types
import test.namespace_from_package.module.thrift_types
import test.namespace_from_package.module.thrift_metadata

class TestService(_fbthrift_python_Client["TestService.Async", "TestService.Sync"]):
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.TestService"
    
    @staticmethod
    def __get_thrift_uri__() -> _typing.Optional[str]:
        return "test.dev/namespace_from_package/module/TestService"
    
    @staticmethod
    def __get_thrift_unstructured_annotations_DEPRECATED__() -> _typing.Mapping[str, str]:
        return {
        }
    
    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return test.namespace_from_package.module.thrift_metadata.gen_metadata_service_TestService()
    
    class Async(_fbthrift_python_AsyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "module.TestService"
    
        @staticmethod
        def __get_thrift_uri__() -> _typing.Optional[str]:
            return "test.dev/namespace_from_package/module/TestService"
    
        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return test.namespace_from_package.module.thrift_metadata.gen_metadata_service_TestService()
    
        async def init(
            self,
            int1: int,
            *,
            rpc_options: _typing.Optional[RpcOptions] = None,
        ) -> int:
            _fbthrift_resp = await self._send_request(
                "TestService",
                "init",
                test.namespace_from_package.module.thrift_types._fbthrift_TestService_init_args(
                    int1=int1,),
                test.namespace_from_package.module.thrift_types._fbthrift_TestService_init_result,
                qualifier = _fbthrift_FunctionQualifier.Unspecified,
                uri_or_name="test.dev/namespace_from_package/module/TestService",
                rpc_options=rpc_options,
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_python_exceptions.ApplicationError(
                _fbthrift_python_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )
    
    class Sync(_fbthrift_python_SyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "module.TestService"
    
        @staticmethod
        def __get_thrift_uri__() -> _typing.Optional[str]:
            return "test.dev/namespace_from_package/module/TestService"
    
        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return test.namespace_from_package.module.thrift_metadata.gen_metadata_service_TestService()
    
        def init(
            self,
            int1: int,
            *,
            rpc_options: _typing.Optional[RpcOptions] = None,
        ) -> int:
            _fbthrift_resp = self._send_request(
                "TestService",
                "init",
                test.namespace_from_package.module.thrift_types._fbthrift_TestService_init_args(
                    int1=int1,),
                test.namespace_from_package.module.thrift_types._fbthrift_TestService_init_result,
                uri_or_name="test.dev/namespace_from_package/module/TestService",
                rpc_options=rpc_options,
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_python_exceptions.ApplicationError(
                _fbthrift_python_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )
    
